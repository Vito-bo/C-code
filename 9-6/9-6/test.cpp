
//字符串+内存函数的介绍3
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

//char *strtok(char *str, const char *sep);
//sep参数是个字符串，定义了用作分割符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分割符分割的标记
//strtok函数找到str中的下一个标记，并将其用\0结尾，返回一个指向这个标记的指针。
//注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改
//strtok函数的第一个参数不为NULL，函数找到str中第一个标记，strtok函数将保存它在字符串中的位置
//strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//如果字符串中不存在更多的标记，则返回NULL指针
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
//	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}
//
////char *strerror(int errnum);
////返回错误码，所对应的错误信息
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
//函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置.
//这个函数在遇到'\0'的时候并不会停止下来。
//如果source和destination有任何的重叠，复制的结果都是未定义的
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
//模拟实现memcpy
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
////和memcpy的差别就是memmove函数处理的源内存块是可以重叠的
////如果源空间和目标空间出现重叠，就得使用memmove函数处理
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