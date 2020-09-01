//数组笔试题解析

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////一维数组
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));		   //16
//	//数组名单独放在sizeof中，代表整个数组
//	printf("%d\n", sizeof(a + 0));     //4
//	//表示首元素地址，存地址的指针变量大小是4个字节
//	printf("%d\n", sizeof(*a));        //4
//	//此处不是单独在sizeof内，a代表首元素地址，*a代表的是首元素1，求首元素字节的大小
//	printf("%d\n", sizeof(a + 1));     //4
//	//表示第2个元素的地址，还是地址
//	printf("%d\n", sizeof(a[1]));      //4
//	//a[1]表示第2个元素，整形数据4个字节
//	printf("%d\n", sizeof(&a));        //4
//	//此处&a就代表整个数组的地址，但是地址放在指针变量里面，所以还是4个字节
//	printf("%d\n", sizeof(*&a));       //16
//	//&a就代表整个数组的地址，*&a就代表整个数组
//	printf("%d\n", sizeof(&a + 1));    //4
//	//&a代表整个数组的地址，&a+1是向后移动16个字节，&a+1代表的是数组a尾元素后一位的那个元素地址
//	printf("%d\n", sizeof(&a[0]));     //4
//	//取第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1)); //4
//	//取第二个元素的地址
//}

////字符数组
//int main()
//{
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", sizeof(arr));           //6
//	////整个数组的大小
//	//printf("%d\n", sizeof(arr + 0));       //4
//	////字符'a'的地址
//	//printf("%d\n", sizeof(*arr));          //1
//	////指针解引用，得到字符'a'
//	//printf("%d\n", sizeof(arr[1]));        //1
//	////字符'b'的大小
//	//printf("%d\n", sizeof(&arr));          //4
//	////取地址，数组arr的地址
//	//printf("%d\n", sizeof(&arr + 1));      //4
//	////指针加减指针还是指针
//	//printf("%d\n", sizeof(&arr[0] + 1));   //4
//	////指针加减指针还是指针
//	//printf("%d\n", strlen(arr));           //随机值
//	////arr代表数组名，代表数组首元素的地址
//	////strlen是函数，只能以char*(字符串)做参数，而且想要得到正确结果，必须包含'\0'
//	//printf("%d\n", strlen(arr + 0));       //随机值
//	////printf("%d\n", strlen(*arr));
//	////printf("%d\n", strlen(arr[1]));
//	////printf("%d\n", strlen(&arr));
//	////printf("%d\n", strlen(&arr + 1));
//	//printf("%d\n", strlen(&arr[0] + 1));    //随机值-1
//	////指针+1，会从b开始计算，但找不到\0，所以随机值-1，否则就是数组长度-1
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));        //7
//	////sizeof计算的是分配空间的实际字节数，字符串默认有\0
//	//printf("%d\n", sizeof(arr + 0));    //4
//	////字符'a'的地址，存地址的指针变量的大小是4
//	//printf("%d\n", sizeof(*arr));       //1
//	////*arr代表'a'
//	//printf("%d\n", sizeof(arr[1]));     //1
//	////代表'b'
//	//printf("%d\n", sizeof(&arr));       //4
//	//printf("%d\n", sizeof(&arr + 1));   //4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//	//printf("%d\n", strlen(arr));        //6 
//	//printf("%d\n", strlen(arr + 0));    //6
//	////printf("%d\n", strlen(*arr));
//	////printf("%d\n", strlen(arr[1]));
//	////printf("%d\n", strlen(&arr));
//	////printf("%d\n", strlen(&arr + 1));
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	char* p = "abcdef";
//	//p存的地址是数组首元素的地址,即&a
//	printf("%d\n", sizeof(p));		//4
//	//p是指针类型的变量
//	printf("%d\n", sizeof(p + 1));	//4
//	//指针相加减还是指针
//	printf("%d\n", sizeof(*p));		//1
//	//解引用得到a,a占一个字节
//	printf("%d\n", sizeof(p[0]));	//1
//	//p[0]即取值为a,数组第0个元素
//	printf("%d\n", sizeof(&p));		//4
//	//二级指针本质上也是一级指针,占4个字节
//	printf("%d\n", sizeof(&p + 1));	//4
//	printf("%d\n", sizeof(&p[0] + 1));//4
//
//	printf("%d\n", strlen(p));		//6
//	//strlen以'\0'结尾,但并不将它计数
//	printf("%d\n", strlen(p + 1));	//5
//	//指针+1也就是从b开始计数,有5个数
//	//printf("%d\n", strlen(*p));		//
//	//printf("%d\n", strlen(p[0]));	//
//	//不能对一个字符使用strlen函数
//	printf("%d\n", strlen(&p));		//随机值
//	printf("%d\n", strlen(&p + 1));	//随机值
//	//上面两个都是取随机值,第一个是个二级指针,指向的不是这个字符数组
//	//第二个是二级指针+1指向的不是这个字符数组
//	printf("%d\n", strlen(&p[0] + 1));//5
//	//取p[0]的地址,+1得到&p[1],从这开始算字符串长度为5
//	return 0;
//}}

//二维数组
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a)); //48
	//sizeof(数组名)代表整个数组
	printf("%d\n", sizeof(a[0][0]));//4 
	//a[0][0]代表第一行第一列的元素
	printf("%d\n", sizeof(a[0])); //16
	//a[0]代表第一行的数组名
	printf("%d\n", sizeof(a[0] + 1)); //4
	//(a[0]+1)代表a[0][1]的地址
	printf("%d\n", sizeof(*(a[0] + 1))); //4
	//(*(a[0]+1))代表 a[0][1]的内容
	printf("%d\n", sizeof(a + 1)); //4
	//a+1代表的是第二行的地址
	printf("%d\n", sizeof(*(a + 1))); //16
	//*(a+1)代表第二行的内容
	printf("%d\n", sizeof(&a[0] + 1)); //4
	//&a[0]+1代表第二行首元素的地址
	printf("%d\n", sizeof(*(&a[0] + 1))); //16
	//*(&a[0]+1)代表第二行的内容
	printf("%d\n", sizeof(*a)); //16
	//*a,解引用，代表第一行的内容
	printf("%d\n", sizeof(a[3]));//16
	//*(a+3) a+3的类型是数组指针
	return 0;
}