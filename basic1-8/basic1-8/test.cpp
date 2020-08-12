/*
//basic-6-Ñî»ÔÈý½Ç
#include <iostream>
using namespace std;

int main()
{
	int arr[35][35];
	int n;
	cin>>n;
	arr[0][0]=1;
	for(int i=0; i<n; i++)
	{
		arr[i][i] = arr[i][0] = 1;
		for(int j=1;j<i;j++)
	    {
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0;j<=i;j++)
		{
		    cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//basic-5
#include <iostream>
using namespace std;

int main()
{
	int n;
	int arr[1001];
	int a;
	cin >> n;
	for (int i = 0; i<n; i++)
		cin >> arr[i];
	cin >> a;
	int ans = -1;
	for (int i = 0; i<n; i++)
	{
		if (arr[i] == a)
		{
			ans = i + 1;
			break;
		}	
	}
	cout << ans << endl;
	return 0;
}

//basic-4
#include <iostream>
using namespace std;
#define N 10001
#define M 10000
int main()
{
	int n;
	cin >> n;
	int arr[N];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int max = -M;
	int min = M;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max){
			max = arr[i];
		}
		if (arr[i] < min){
			min = arr[i];
		}
		sum += arr[i];
	}
	cout << max << endl;
	cout << min << endl;
	cout << sum << endl;
	return 0;
}


//basic-3
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	//string s = "ZYXWVUTSRQPONMLKJIHGFEDCBABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//for (int i = 0; i < n; i++)
	//{
	//	int pos = 25;
	//	cout << s.substr(pos-i, m) << endl;
	//}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cout << char('A' + abs(i - j));
		}
		cout << endl;
	}
	return 0;
}

//basic-2-01×Ö´®
#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i <= 1; i++)
		for (int j = 0; j <= 1; j++)
			for (int k = 0; k <= 1; k++)
				for (int l = 0; l <= 1; l++)
					for (int m = 0; m <= 1; m++)
						cout << i << j << k << l << m << endl;
	return 0;
}
*/

//basic-1-ÈòÄêÅÐ¶Ï
#include <iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;
	if ((year % 4 == 0 && year != 100) || year % 400 == 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}