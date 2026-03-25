#include <cs50.h>
#include<stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n",x / y);
}
//truncation

#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%.5f\n",(float) x / y);//小数点后面打印5位
}
