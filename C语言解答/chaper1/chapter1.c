#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
#if 0    
	int a =1;
	char* s = "my world,hello!\n";
	float lf = 3.14;
	int q, p;
	char smatrix[20];
	printf("int:%d, string:%s, long float:%lf\n\n", a, s, lf);
	printf("input a integer for q, input a integer for p, and input a string for smatrix\n");
	scanf("%d %d %s", &q, &q, s);

	printf("q:%d p:%d smatrix:%s \n", q, q, s);
#endif

#if 0  //打印输入最长的一行字符串

	int ch =0;
	int len =0;
	int temp_len =0;
	char* long_s;
	char* temp_s;
	char* temp;
	
	long_s = (char*)malloc(1000);
	if(long_s == NULL)
		printf("err:%s:%d\n",__FUNCTION__, __LINE__);
	
	temp_s = (char*)malloc(1000);
	if(temp_s == NULL)
		printf("err:%s:%d\n",__FUNCTION__, __LINE__);
	memset(long_s, 0, 1000);
	memset(temp_s, 0, 1000);
	
	while( (ch = getchar()) != EOF ) 
	{
		if(ch != '\n')
		{	
			temp_s[temp_len] = (char)ch;
			temp_len++;
		}
		else
		{
			temp_s[temp_len] = '\0';
			if(len < temp_len)
			{
				temp = long_s;
				long_s = temp_s;
				temp_s = temp;
				len = temp_len;
			}
			temp_len = 0;
			memset(temp_s, 0, 1000);
		}
	
		
		
		
	}
	
	temp_s[temp_len] = '\0'; //最后EOF结尾时，temp_s未打包成字符串格式。
	
	if(len < temp_len)
		printf("1:%s, the sum of char is :%d\n", temp_s, temp_len);
	else
		printf("2:%s, the sum of char is :%d\n", long_s, len);
	
	free(temp_s);
	free(long_s);
#endif

	

}
