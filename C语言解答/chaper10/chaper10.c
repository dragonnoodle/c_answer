#include <stdio.h>

typedef int(*PFUN)(int);



int fun2(int num)
{
    printf("input interger:%d\n",num);
    return 0;
}

int main()
{
int temp;
temp = 19;
    PFUN fun1 = fun2;

     fun2(temp);

}