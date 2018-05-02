#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main()
{	

/*
**打印当前文件名、编译日期时间、三字母词、转义字符、预编译处理后的注释
*/
#if 0	
	printf("%s: DATE:%s TIME:%s \n", __FILE__, __DATE__, __TIME__);
	printf("\"bonder \?\?!\?\?\" \n\n");
	int a = '\40';
	int b = '\x40';
	int c = '\0123';
	int a1/* just test the comment*/,b1;
	printf("\\40:%d \\x40:%d \\0123:%d \n", a, b, c);
	
#endif	
/*
**标准输入C代码，保存到当前目录。
*/

	char input, output;
	FILE *fp;
	
	fp = fopen("c_input.c", "a+");
	if(fp == NULL)
	{
		printf("open file c_input.c err!\n");
		return 1;
	}
	else
		printf("file c_input.c was open!\n ");
	
	while((input = getchar()) != EOF)
	{
		if((int)NULL == fwrite(&input, sizeof(input), 1, fp))
		{
			printf("write file c_input.c err.\n");
			return 2;
		}
	}
	printf("read file c_input.c .....\n\n");
	fseek(fp, SEEK_SET, 0);
	
	while((fread(&output, sizeof(output), 1, fp)) != 0)
	{
		putchar(output);
	}
	
	printf("\n");
	
	if((int)NULL != fclose(fp))
	{
		printf("close file c_input.c err.\n");
		return 3;
	}
	
	printf("write file c_input.c is done ~0_0~ dadadala\n");
	
	return EXIT_SUCCESS;
}