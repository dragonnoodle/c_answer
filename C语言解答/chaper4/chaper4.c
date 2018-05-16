#include <stdio.h>
#include <string.h>

int 
main()
{
#if 0	
	double a = 1, a1 = 0;
	int flag = 0, i = 0;
	scanf("%d", &i);
	
	while(flag == 0 && i >0)
	{
		a1 = (a + i/a) / 2;
		if(a1 == a)
			flag = 1;
		else
			a = a1;
		
	}
	
	printf("sqrt(%d) = %lf\n", i, a1);
#endif


#if 0
#define MAX_STRING_LEN 128
char input[MAX_STRING_LEN];
char output[MAX_STRING_LEN];
char temp[MAX_STRING_LEN];
int flag = 0;
	while( gets(input) != NULL )
	{
		if(strcmp(input, temp) == 0)
			flag = 1;
		else
		{	
			if(flag ==1)
			{
				flag = 0;
				printf("repeat :%s\n",temp);
			}
			strcpy(temp, input);
			//printf("temp:%s\n", temp);
			
		}
		
	}
	
	return 0;
	
#endif



		
}