#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>





int main(void)
{

#if 0           //stringtoint(char *input_string);
char instring[128];
int stringtoint( char *input_string)
{
    int sum = 0;
    const char *temp_string = NULL;
    temp_string = input_string;
    if(temp_string == NULL)
    {
        printf("input_string address is NULL");
        return (sum =0);
    }
    
    while(*temp_string != '\0')
    {
        if(*temp_string <='9' && *temp_string >= '0')
            sum = sum*10 +(*temp_string -'0');
        else
        {
            sum = 0;
            break;
        }
        
        temp_string++;
    }
    
    return sum;
    
}

while(gets(instring) != NULL)
{
    int result;
    
    result = stringtoint(instring);
    printf("convert string vlaue is :%d\n", result);
    
}
#endif

#if 0       //maxprintf(char *format, ...)

int
maxprintf(char *format, ...)
{
    char *para1 = NULL, *para2 = NULL;
        va_list va_ptr;
    
        va_start(va_ptr,format);
        para1 = va_arg(va_ptr,char *);
        para2 = va_arg(va_ptr,char *);
        va_end(va_ptr);
        printf("para1:%s, para2:%s\n", para1, para2);
        
    return 0;
}

    maxprintf("NULL","this is first parameter","this is second parameter");
    
    return 0;
#endif




}