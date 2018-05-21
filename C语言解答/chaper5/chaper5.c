#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int
main()
{
#if 0
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


#if 0
unsigned int flag = 0, flag2 =0, count = 0;
int value, temp = 0;
char str_value[64];
while((gets(str_value)) != NULL )
{
    value = atoi(str_value);
    printf("before shift :0x%x\n", value);
    flag = (unsigned int)1<<(sizeof(int)*8-1);
    flag2 = 1;
    printf("flag:0x%x\n", flag);
    count = 0;
    temp = 0 ;
    while(flag)
    {
        if(flag & value)
            temp = temp | flag2;
        else 
        {
            if(temp == 0)
            count++;
        }
        flag = flag >>1;
        flag2 = flag2 <<1;
        printf("flag1:0x%x\n", flag);
        printf("flag2:0x%x\n", flag2);
        printf("countt:%d\n", count);
    }
    value = value << count;
    printf("after shift :0x%x\n", value);
    printf("after symmetry :0x%x\n", temp);
}

#endif

#if 1

typedef struct bits_map_struct
{
    struct bits_map_struct *Pbits_map_self;
    unsigned int buf_len;
    unsigned int max_bit_num;
    unsigned int pos;
    unsigned int gap_len;
    unsigned int index;
    unsigned int num;
    unsigned int buf[0];
} bit_Map, *Pbit_Map;


Pbit_Map *bit_create(num_bits);
int bit_destroy(Pbit_Map *bit_Map_name);
int bit_set(Pbit_Map *bit_Map_name,unsigned int bit_number_pos,unsigned int bit_value);
int bit_get(Pbit_Map *bit_Map_name,unsigned int bit_number_pos);
int set_bit_map(Pbit_Map *bit_Map_name,unsigned int bit_value);




#endif

return 0;
    
}




















