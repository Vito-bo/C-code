
//ָ����������
#include <stdio.h>

////������1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	//&a+1��ʾ����ĩβԪ�ص���һ��λ��
//	printf("%d,%d", *(a + 1), *(ptr - 1)); //2  5
//	//*(a+1)��ʾa[1]��2
//	//*(ptr-1)��a[4]-->5
//	return 0;
//}

////������2
//struct Test
//{
//	int Num;
//	char *pName;
//	short sDate;
//	char ch[2];
//	short s[4];
//}*p;
////����p��ֵΪ0x0000 0000
//int main()
//{
//	printf("%d\n", sizeof(Test));
//	//4+4+2+2+8=20
//	printf("%p\n", p + 0x1);
//	//p+0x1���ṹ��ָ��+1����20���ֽڣ�20��ʮ��������14
//	printf("%p\n", (unsigned long)p + 0x1);
//	//ǿ��ת��Ϊ�޷��ų����Σ��ټ�1���������1��ʮ�����ƴ�ӡΪ0x00000001
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//ǿ��ת��Ϊint��ָ�룬����ռ4���ֽڣ�����4���ֽڣ�����ʮ�����ƴ�ӡ����0x00000004
//	return 0;
//}

////������3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *p1 = (int *)(&a + 1);    
//	int *p2 = (int*)((int)a + 1); //4 02000000
//	printf("%x,%x\n", p1[-1], *p2);//%x:��ʮ�����ƴ�ӡ����16������������ĵ�ַ��
//	//p1[-1]-->*(p1-1),ȡ��Ԫ��4
//	//����a�ĵ�ַΪ0x100��(int)a+1,��aǿתΪ���Σ��ټ�1 ����0x101
//	//ָ���ȡ4���ֽ�00 00 00 02��������С���ֽ������Դ�ӡ02 00 00 00
//	return 0;
//}

////������4
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	//���ű���ʽ������ֵΪ���һ������ʽ��ֵ
//	//���Զ�ά���������Ϊ��
//	//1  3
//	//5  0
//	//0  0
//	return 0;
//}

////������5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//int(*p)[4]����ָ��p������&a[4][2]-&p[4][2]���4���ֽ�
//	//-4��ԭ�룺1000 0000 0000 0000 0000 0000 0000 0100
//	//    ���룺1111 1111 1111 1111 1111 1111 1111 1100
//	//%p��ʮ�����ƴ�ӡ��ַ
//	return 0;
//}
//
////������6
//int main()
//{
//	int a[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p1 = (int *)(&a + 1);
//	//ָ������ĩβԪ�ص���һ����ַ
//	int *p2 = (int *)(*(a + 1));
//	//*(a+1)�ڶ�����Ԫ�صĵ�ַ
//	printf("%d, %d\n", *(p1 - 1), *(p2 - 1));//10  5
//	return 0;
//}
//
////������7
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char **pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	//����ָ��ָ����ָ����������++����ָ���ָ���1��ָ����"at"
//	return 0;
//}

//������8
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);        //"POINT"
	printf("%s\n", *--*++cpp + 3);  //""
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}