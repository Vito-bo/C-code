//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
//所有 #开头的  都叫做 预处理
//stdio.h      头文件    C语言的库函数
//行注释 

/*
块注释：注释：ctr+k+c     取消注释：ctr+k+u  不能嵌套

执行程序：
.c:文本文档 

运行程序：VS  
1、调试--》开始执行（不调试）
2、ctr+f5 
    解锁f1-f12 快捷键：   fn+esc
	
*/

int main()
{
	printf("helloo");
	return 0;
}


#if 0   //条件编译
int main()
{
	//char ch = 'a';
	//char ch2 = 'b';//所有的定义  全部放在最前头
	//short sh1 = 19;
	//int i = 20;
	//long L = 30;
	//long long LL =  40;
	//float f1 = 12.5f;//浮点型的精度：6位
	//printf("%f\n",f1);//12.500000

	double d = 12.25;// 12.250000  精度：11位
	printf("%lf\n",d);

	//printf("%d\n",sh1);//%d-->以10进制有符号的形式打印

	//printf("%c\n",ch);//a
	//printf("%c\n",ch2);//a
	//printf("hello world\n");
	return 0;
}
#endif


