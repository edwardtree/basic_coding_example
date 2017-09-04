//ignore header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ADD(x,y)( x + y )
#define SUB(x,y)( x - y )
#define MUL(x,y)( x * y )
#define DEV(x,y)( x / y )




double stof(const char* s){
    double result = 0, sign = 1;
    int value;

    if(*s == '-')
    {
        s++;
        sign = -1;
    };

    for (int i = 0; *s; s++)
    {
        printf("");
        if(*s == '.')
        {
            i = 1;
            continue;
        };

        value = SUB(*s,'0');
        if (value >= 0 && value <= 9)
        {
            if(i)
                sign = DEV(sign,10.0f);
                result = MUL(result,10.0f);
                result = ADD(result,(double)value);
        };
    };
    return result * sign;
};

int main(void)
{
    char str[] = "123.154";
    printf("%f",stof(str));

    //printf("%d",ADD(3,2));

    return 0;

}
