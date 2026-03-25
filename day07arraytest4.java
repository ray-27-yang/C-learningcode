#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int price = get_int("price: ");
    int bill = get_int("bill: ");

    if (bill < price)
    {
        int bill = get_int("bill: ");
    }
    printf("%i\n",bill - price); 
}


