
//�ļ�����

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.text", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	FILE* fclose(pf);
//	pf = NULL;
//	return 0;
//}

////�ļ��Ĵ򿪺͹ر�
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

////�ļ��������д
////fseek:�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
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
////�����ļ�ָ���������ʼλ�õ�ƫ����
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

////rewind:���ļ�ָ���λ�ûص��ļ�����ʼλ��
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

////�ļ������ж�
////�ı��ļ�
//int main(void)
//{
//	int c; // ע�⣺int����char��Ҫ����EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//}

//�������ļ�������
enum { SIZE = 5 };
int main(void)
{
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE *fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
	fwrite(a, sizeof(*a), SIZE, fp); // д double ������
	fclose(fp);
	fp = fopen("test.bin", "rb");
	// �� double ������
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