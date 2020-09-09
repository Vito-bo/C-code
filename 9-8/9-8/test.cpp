
//文件操作

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.text", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	FILE* fclose(pf);
//	pf = NULL;
//	return 0;
//}

////文件的打开和关闭
//int main()
//{
//	FILE * pFile;
//	pFile = fopen("myfile.txt", "w");
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		fclose(pFile);
//	}
//	return 0;
//}

////文件的随机读写
////fseek:根据文件指针的位置和偏移量来定位文件指针
//int main()
//{
//	FILE * pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}

////ftell
////返回文件指针相对与起始位置的偏移量
//int main()
//{
//	FILE * pFile;
//	long size;
//	pFile = fopen("myfile.txt", "rb");
//	if (pFile == NULL) perror("Error opening file");
//	else
//	{
//		fseek(pFile, 0, SEEK_END); // non-portable
//		size = ftell(pFile);
//		fclose(pFile);
//		printf("Size of myfile.txt: %ld bytes.\n", size);
//	}
//	return 0;
//}

////rewind:让文件指针的位置回到文件的起始位置
//int main()
//{
//	int n;
//	FILE * pFile;
//	char buffer[27];
//	pFile = fopen("myfile.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++)
//		fputc(n, pFile);
//	rewind(pFile);
//	fread(buffer, 1, 26, pFile);
//	fclose(pFile);
//	buffer[26] = '\0';
//	puts(buffer);
//	return 0;
//}

////文件结束判定
////文本文件
//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//}

//二进制文件的例子
enum { SIZE = 5 };
int main(void)
{
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE *fp = fopen("test.bin", "wb"); // 必须用二进制模式
	fwrite(a, sizeof(*a), SIZE, fp); // 写 double 的数组
	fclose(fp);
	fp = fopen("test.bin", "rb");
	// 读 double 的数组
	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
	{
		printf("%lf\n", b);
	}
	if (feof(fp))
		printf("Error reading test.bin: unexpected end of file\n");
	else if (ferror(fp)) {
		perror("Error reading test.bin");
	}
	fclose(fp);
	fp = NULL;
}