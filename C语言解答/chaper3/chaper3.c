#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern char ch;
int
main()
{
#if 0
	enum Changes
	{
			ONU = 1,
			CPU = 8,
			thu = 3,
			PIN = 16,
			QUA = 32,
			GAL = 128
		
	};
	
	enum Changes jar;
	jar = QUA;
	
	printf("%c \n", jar);
	jar = jar + PIN;
	printf("%c \n", jar);
#endif

char *string = "hello, world!"; 
//	*(string+1) = 'w';			//编译完成，但无法正确运行
	
	printf("%s\n", string);
	printf("%c \n", ch);
	return 0;
}