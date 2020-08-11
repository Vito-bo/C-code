
	* 13-数列排序



#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {return a<b;}
int main()
{
    int n;
    while(cin>>n)
    {
        int arr[201];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n, cmp);
        cout<<arr[0];
        for(int i=1;i<n;i++)
            cout<<' '<<arr[i];
        cout<<endl;
    }
    return 0;
}
	* 
12-十六进制转八进制



#include <iostream>
#include <string>
using namespace std;

//十六进制转八进制:先转为二进制再转为八进制
string trans(char a){
    switch(a){
        //一位十六进制对应4位二进制
        case '0': return "0000";
        case '1': return "0001";
        case '2': return "0010";
        case '3': return "0011";
        case '4': return "0100";
        case '5': return "0101";
        case '6': return "0110";
        case '7': return "0111";
        case '8': return "1000";
        case '9': return "1001";
        case 'A': return "1010";
        case 'B': return "1011";
        case 'C': return "1100";
        case 'D': return "1101";
        case 'E': return "1110";
        case 'F': return "1111";
    }
}

int main()
{
    int n,length,i,j,k=0,surplus,eig,m;
    string sixteen[10];  //0<= n <=10
    cin>>n;
    for(i=0;i<n;i++){
        cin>>sixteen[i];
    }
    
    // 十六进制转二进制
    for(i=0;i<n;i++){
        string two,eight;
        for(j=0;j<sixteen[i].length();j++){
            two+=trans(sixteen[i][j]);
        }
        
        //外层循环继续完成二进制转八进制的部分
        //3位二进制转成1位八进制，从右向左转换，不足时在前面补0
        surplus = two.length()%3;
        if(surplus==1) two.insert(0,"00");
        if(surplus==2) two.insert(0,"0");
         
        //二进制转八进制
        for(j=0;j<two.length();j+=3){
            //计算3位二进制对应的整形
            eig=(two[j]-'0')*4 + (two[j+1]-'0')*2 + (two[j+2]-'0');
            eight+=(eig+'0'); //eig是int型，转换为string类型，+'0'
        }
        
        //控制输出的八进制不能有前导0 
        m=0;
        while(eight[m]=='0')//去掉前导0
            m++;
        for(j=m;j<eight.length();j++)
            cout<<eight[j];
         cout<<endl;
    }
    return 0;
}
	* 
11-十六进制转十进制



#include <string>
using namespace std;
//十六进制转十进制，模拟字符串转十进制整数
int main()
{
    string s;
    long long result=0;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]>='A' && s[i]<='F')
            result=result*16+(s[i]-'A'+10);
        else
            result=result*16+s[i]-'0';
    }
    cout<<result<<endl;
    return 0;
}
	* 
10-十进制转十六进制



#include <iostream>
#include <string>
using namespace std;
//除模取余，反向输出
int main()
{
    int a;   //输入十进制数
    int y=0; //余数
    cin>>a;
    string s="";
    if(a==0) //等于0直接输出
        cout<<0<<endl;
    while(a>0)
    {
         y=a%16;
        if(y<10)//小于10的数
            s = char(y+'0') + s;
        else//大于等于10的数用ABCDEF表示
            s = char(y-10+'A') + s;
        a/=16;
    }
    cout<<s<<endl;    
    return 0;
}
	* 
二进制与十进制转换


1.十进制转换为二进制
方法：十进制数除2取余法，余数为权位上的数，得到的商值继续除2，依次运算直到商为0为止，从最后一个余数读到第一个余数
2.二进制转换为十进制
方法：把二进制数按权展开，相加即得十进制数

	* 
二进制与八进制之间的转换


1.二进制转八进制
方法：3位二进制按权展开相加得到1位八进制。（3位二进制转成八进制是从右向左转换，不足时补0）
2.八进制转成二进制
方法：八进制数通过除2取余法，得到二进制数，对每个八进制数为3个二进制，不足时在最左边补0

	* 
二进制与十六进制


1.二进制转十六进制
方法：4位二进制按权展开相加得到1位十六进制，（4位二进制转成十六进制是从右向左开始转换，不足时补0）
2.十六进制转二进制
方法：十六进制数通过除2取余法，得到二进制数，对于每个十六进制为4个二进制，不足时在最左边补0

	* 
十六进制与八进制之间的转换


方法1：先转换成二进制然后再相互转换
方法2：先转换成十进制然后再相互转换

	* 
9-特殊回文数



#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    for(int i=10000;i<=99999;i++)
    {
        int a=i%10;
        int b=i/10%10;
        int c=i/100%10;
        int d=i/1000%10;
        int e=i/10000%10;
        if((a+b+c+d+e)==n && a==e && b==d)
            cout<<i<<endl;
    }
    for(int i=100000;i<=999999;i++)
    {
        int a=i%10;
        int b=i/10%10;
        int c=i/100%10;
        int d=i/1000%10;
        int e=i/10000%10;
        int f=i/100000%10;
        if((a+b+c+d+e+f)==n && a==f && b==e && c==d)
            cout<<i<<endl;
    }
        
    return 0;
}