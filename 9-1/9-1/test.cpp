//������������

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////һά����
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));		   //16
//	//��������������sizeof�У�������������
//	printf("%d\n", sizeof(a + 0));     //4
//	//��ʾ��Ԫ�ص�ַ�����ַ��ָ�������С��4���ֽ�
//	printf("%d\n", sizeof(*a));        //4
//	//�˴����ǵ�����sizeof�ڣ�a������Ԫ�ص�ַ��*a���������Ԫ��1������Ԫ���ֽڵĴ�С
//	printf("%d\n", sizeof(a + 1));     //4
//	//��ʾ��2��Ԫ�صĵ�ַ�����ǵ�ַ
//	printf("%d\n", sizeof(a[1]));      //4
//	//a[1]��ʾ��2��Ԫ�أ���������4���ֽ�
//	printf("%d\n", sizeof(&a));        //4
//	//�˴�&a�ʹ�����������ĵ�ַ�����ǵ�ַ����ָ��������棬���Ի���4���ֽ�
//	printf("%d\n", sizeof(*&a));       //16
//	//&a�ʹ�����������ĵ�ַ��*&a�ʹ�����������
//	printf("%d\n", sizeof(&a + 1));    //4
//	//&a������������ĵ�ַ��&a+1������ƶ�16���ֽڣ�&a+1�����������aβԪ�غ�һλ���Ǹ�Ԫ�ص�ַ
//	printf("%d\n", sizeof(&a[0]));     //4
//	//ȡ��һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1)); //4
//	//ȡ�ڶ���Ԫ�صĵ�ַ
//}

////�ַ�����
//int main()
//{
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", sizeof(arr));           //6
//	////��������Ĵ�С
//	//printf("%d\n", sizeof(arr + 0));       //4
//	////�ַ�'a'�ĵ�ַ
//	//printf("%d\n", sizeof(*arr));          //1
//	////ָ������ã��õ��ַ�'a'
//	//printf("%d\n", sizeof(arr[1]));        //1
//	////�ַ�'b'�Ĵ�С
//	//printf("%d\n", sizeof(&arr));          //4
//	////ȡ��ַ������arr�ĵ�ַ
//	//printf("%d\n", sizeof(&arr + 1));      //4
//	////ָ��Ӽ�ָ�뻹��ָ��
//	//printf("%d\n", sizeof(&arr[0] + 1));   //4
//	////ָ��Ӽ�ָ�뻹��ָ��
//	//printf("%d\n", strlen(arr));           //���ֵ
//	////arr����������������������Ԫ�صĵ�ַ
//	////strlen�Ǻ�����ֻ����char*(�ַ���)��������������Ҫ�õ���ȷ������������'\0'
//	//printf("%d\n", strlen(arr + 0));       //���ֵ
//	////printf("%d\n", strlen(*arr));
//	////printf("%d\n", strlen(arr[1]));
//	////printf("%d\n", strlen(&arr));
//	////printf("%d\n", strlen(&arr + 1));
//	//printf("%d\n", strlen(&arr[0] + 1));    //���ֵ-1
//	////ָ��+1�����b��ʼ���㣬���Ҳ���\0���������ֵ-1������������鳤��-1
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));        //7
//	////sizeof������Ƿ���ռ��ʵ���ֽ������ַ���Ĭ����\0
//	//printf("%d\n", sizeof(arr + 0));    //4
//	////�ַ�'a'�ĵ�ַ�����ַ��ָ������Ĵ�С��4
//	//printf("%d\n", sizeof(*arr));       //1
//	////*arr����'a'
//	//printf("%d\n", sizeof(arr[1]));     //1
//	////����'b'
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
//	//p��ĵ�ַ��������Ԫ�صĵ�ַ,��&a
//	printf("%d\n", sizeof(p));		//4
//	//p��ָ�����͵ı���
//	printf("%d\n", sizeof(p + 1));	//4
//	//ָ����Ӽ�����ָ��
//	printf("%d\n", sizeof(*p));		//1
//	//�����õõ�a,aռһ���ֽ�
//	printf("%d\n", sizeof(p[0]));	//1
//	//p[0]��ȡֵΪa,�����0��Ԫ��
//	printf("%d\n", sizeof(&p));		//4
//	//����ָ�뱾����Ҳ��һ��ָ��,ռ4���ֽ�
//	printf("%d\n", sizeof(&p + 1));	//4
//	printf("%d\n", sizeof(&p[0] + 1));//4
//
//	printf("%d\n", strlen(p));		//6
//	//strlen��'\0'��β,��������������
//	printf("%d\n", strlen(p + 1));	//5
//	//ָ��+1Ҳ���Ǵ�b��ʼ����,��5����
//	//printf("%d\n", strlen(*p));		//
//	//printf("%d\n", strlen(p[0]));	//
//	//���ܶ�һ���ַ�ʹ��strlen����
//	printf("%d\n", strlen(&p));		//���ֵ
//	printf("%d\n", strlen(&p + 1));	//���ֵ
//	//������������ȡ���ֵ,��һ���Ǹ�����ָ��,ָ��Ĳ�������ַ�����
//	//�ڶ����Ƕ���ָ��+1ָ��Ĳ�������ַ�����
//	printf("%d\n", strlen(&p[0] + 1));//5
//	//ȡp[0]�ĵ�ַ,+1�õ�&p[1],���⿪ʼ���ַ�������Ϊ5
//	return 0;
//}}

//��ά����
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a)); //48
	//sizeof(������)������������
	printf("%d\n", sizeof(a[0][0]));//4 
	//a[0][0]�����һ�е�һ�е�Ԫ��
	printf("%d\n", sizeof(a[0])); //16
	//a[0]�����һ�е�������
	printf("%d\n", sizeof(a[0] + 1)); //4
	//(a[0]+1)����a[0][1]�ĵ�ַ
	printf("%d\n", sizeof(*(a[0] + 1))); //4
	//(*(a[0]+1))���� a[0][1]������
	printf("%d\n", sizeof(a + 1)); //4
	//a+1������ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a + 1))); //16
	//*(a+1)����ڶ��е�����
	printf("%d\n", sizeof(&a[0] + 1)); //4
	//&a[0]+1����ڶ�����Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1))); //16
	//*(&a[0]+1)����ڶ��е�����
	printf("%d\n", sizeof(*a)); //16
	//*a,�����ã������һ�е�����
	printf("%d\n", sizeof(a[3]));//16
	//*(a+3) a+3������������ָ��
	return 0;
}