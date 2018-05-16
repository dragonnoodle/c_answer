#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int
main()
{
#if 1
    int i= -2;
        printf("before right shift i :0x%x\n", i);
    i = i>>1;
    printf("after right shift i :0x%x\n", i);
    

    
#endif


#if 0
int ch;

while((ch = getchar()) != EOF )
{
    if(ch !='\n')
    {
        printf("input:%c\n", ch);
        if((ch > 'A') && (ch < 'Z'))
        {
            ch = ch - 'A' + 'a';
        }
        printf("output:%c\n", ch);
    }
    
    
    
}
#endif
unsigned int flag = 0, count = 0;
int value;
char str_value[64];
while((gets(str_value)) != NULL )
{
    value = atoi(str_value);
    printf("before shift :0x%x\n", value);
    flag = (unsigned int)1<<(sizeof(int)*8-1);
    printf("flag:0x%x\n");
    while(flag)
    {
        if(flag & value)
            count++;
        flag = flag >>1;
    }
    printf("after shift :0x%x\n", value);
}




    
}




















