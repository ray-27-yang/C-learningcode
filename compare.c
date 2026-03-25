#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int price = get_int("price: ");
    int bill = get_int("bill: ");

    printf("change:%i\n",bill - price);
}
//这里用了scanf与get_int两种方式做出来
