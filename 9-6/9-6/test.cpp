
//�ַ���+�ڴ溯���Ľ���3
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

//char *strtok(char *str, const char *sep);
//sep�����Ǹ��ַ����������������ָ�����ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ���ָ�ı��
//strtok�����ҵ�str�е���һ����ǣ���������\0��β������һ��ָ�������ǵ�ָ�롣
//ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸�
//strtok�����ĵ�һ��������ΪNULL�������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ��
//strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
//����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,");
//	}
//	return 0;
//}

//int main()
//{
//	char *p = "gaoningbo@mengmeng.tech";
//	const char* sep = ".@";
//	char arr[30];
//	char *str = NULL;
//	strcpy(arr, p);//�����ݿ���һ�ݣ�����arr���������
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}
//
////char *strerror(int errnum);
////���ش����룬����Ӧ�Ĵ�����Ϣ
//int main()
//{
//	FILE * pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	//errno: Last error number
//	return 0;
//}

//void *memcpy(void *destination, const void *source, size_t num):
//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ��.
//�������������'\0'��ʱ�򲢲���ֹͣ������
//���source��destination���κε��ص������ƵĽ������δ�����
//struct {
//	char name[40];
//	int age;
//}person, person_copy;
//int main()
//{
//	char myname[] = "price is well";
//	memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 35;
//
//	memcpy(&person_copy, &person, sizeof(person));
//	printf("person_copy: %s, %d\n", person_copy.name, person_copy.age);
//}
//ģ��ʵ��memcpy
//void *my_memcpy(void * dst, const void * src, size_t count)
//{
//	void * ret = dst;
//	assert(dst);
//	assert(src);
//	/*
//	* copy from lower addresses to higher addresses
//	*/
//	while (count--) {
//		*(char *)dst = *(char *)src;
//		dst = (char *)dst + 1;
//		src = (char *)src + 1;
//	}
//	return(ret);
//}

////void *memmove(void *destination, const void* source, size_t num);
////��memcpy�Ĳ�����memmove���������Դ�ڴ���ǿ����ص���
////���Դ�ռ��Ŀ��ռ�����ص����͵�ʹ��memmove��������
//int main()
//{
//	char str[] = "l love you baby in the future...";
//	memmove(str + 10, str + 5, 10);
//	puts(str);
//	return 0;
//}
//void * memmove(void * dst, const void * src, size_t count)
//{
//	void * ret = dst;
//	if (dst <= src || (char *)dst >= ((char *)src + count)) {
//		/*
//		* Non-Overlapping Buffers
//		* copy from lower addresses to higher addresses
//		*/
//		while (count--) {
//			*(char *)dst = *(char *)src;
//			dst = (char *)dst + 1;
//			src = (char *)src + 1;
//		}
//	}
//	else {
//		/*
//		* Overlapping Buffers
//		* copy from higher addresses to lower addresses
//		*/
//		dst = (char *)dst + count - 1;
//		src = (char *)src + count - 1;
//		while (count--) {
//			*(char *)dst = *(char *)src;
//			dst = (char *)dst - 1;
//			src = (char *)src - 1;
//		}
//	}
//	return(ret);
//}

//int memcpy(const void* ptr1, const void *ptr2,size_t num);
int main()
{
	char buffer1[] = "DWgaOtP12df0";
	char buffer2[] = "DWGAOTP12DF0";
	int n;
	n = memcmp(buffer1, buffer2, sizeof(buffer1));
	if (n>0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
	else if (n<0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
	else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
	return 0;
}