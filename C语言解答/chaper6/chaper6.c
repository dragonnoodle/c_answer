#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int 
main()
{
#if 0
char* 
find_chars(char *source, char *chars)
{
    char *temp = NULL, *ch1 = source, *ch2 = chars;
    int flag = 0;
    
    if(ch1 == NULL || ch2 == NULL)
        return NULL;
    while( *ch2 != '\0')
    {
        for(ch1 = source; *ch1 != '\0'; ch1++)
        {
            if(*ch1 == *ch2)
            {
                printf("ch1:%c\n", *ch1);
                return ch1;
            }
        }
        ch2++;
    }
    return NULL;
}


int *ch;
char input1[64], input2[64];

while( gets(input1) && gets(input2) )
{
    printf(" input1:%s \n input2:%s\n ", input1, input2);
    ch = find_chars(input1, input2);
}

return 0;
#endif



#if 1
char input_temp[64] = {0};

char*
reverse_string(char* input)
{
    char *ch1 = input;
    char temp;
    int len, i =0;
    len = strlen(ch1);
    printf("input:%s\n", ch1);

    for(int i =0; len/2 > i;i++)
    {
        temp = *(ch1+i);
        *(ch1+i) = *(ch1 +len-1-i);
        *(ch1 +len-1-i) = temp;
    }
            
    printf("after reverse:%s\n", input);
}

while(gets(input_temp) != NULL)
{
    reverse_string(input_temp);
}
#endif



}