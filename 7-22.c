#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/*
getchar() ：从键盘读取一个字符
putchar(ch);  输出字符
// 函数原型    void代表无类型  
int getchar( void );
EOF:  END OF FILE   ctr+z
ctr+c  : 中断程序
表达式1 || 表达式2     逻辑或     短路或

*/
//int strcmp( const char *string1,
//const char *string2 );

int main()
{
	char password[20] = {0};
	int count = 3;
	while(count != 0)
	{
		printf("老铁，请输入你的password：");
		scanf("%s",password);
		if(strcmp(password,"123456") == 0)//"123456"
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			count--;
			printf("你还有%d次机会!\n",count);
		}
	}
	return 0;
}

#if 0
int binsearch(int key, int arr[], int len)
{
	int left = 0;
	int right = len-1;
	
	while(left <= right)
	{
		int mid = (left+right)/2;
		if(arr[mid] > key)
		{
			right = mid-1;
		}
		else if(arr[mid] < key)
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {2,8,11,56,66,77,88,99};
	int len = sizeof(arr)/sizeof(arr[0]);
	int index = binsearch(110,arr,len);
	printf("%d\n",index);
	return 0;
}

//求n!
//求1!+2!+3!+4!+5!+n!
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int j = 1;
	int sum = 0;
	scanf("%d",&n);
	for(j = 1;j <= n;j++)//3! = 2!*1    4!=3!*4
	{
		/*ret = 1;
		for(i = 1;i <= j;i++)
		{*/
			ret = ret * j;
		//}
		sum += ret;
	}
	printf("%d\n",sum);
	return 0;
}

int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	scanf("%d",&n);
	
	for(i = 1;i <= n;i++)
	{
		ret = ret * i;
	}
	printf("%d\n",ret);
	return 0;
}


#define SIZE 10
int main()
{
	 int x=0; 
	 switch(x++)
	{
		case 0: ++x; 
		case 1: ++x; 
		case 2: ++x;
	  }

	 //int i=0;
	 //int j=0;
	 //if((i++ > 0)||(++j>0))
	 //{
		// //printf("%d,%d\n",i,j);
	 //}
	 // printf("%d,%d\n",i,j);

	/*int i = 0;
	int k = 0;
	for(i =0,k=0; k=0; i++,k++)
	{
		k++;
		printf("haha\n");
	}*/
	
	//int x, y;
	//for (x = 0, y = 0; x<2 && y<5; ++x, y++)
	//{
	//	printf("hehe\n");
	//}

	//for( ; ;)
	//{
	//	/*if(i > 10)
	//	{
	//		break;
	//	}*/
	//	printf("%d\n",6);
	//	//i++;
	//}
	/*while(1)
	{
		printf("%d\n",6);
	}*/
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		{
			continue;
		}
		putchar(ch);
	}*/
	/*int num = 0;
	int ch = 0;
	scanf("%d",&num);

	ch = getchar();
	putchar(ch);*/

	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/
	return 0;
}


int main()
{
	int i = 1;
	while(i <= 10)//[)    []
	{
		i= i+1;
		if(i == 5) 
		{
			continue;
		}
		printf("%d ",i);
	}
	/*if(i == 10)
	{
		break;//放在循环体内
	}*/
	printf("\n");
	return 0;
}
#endif