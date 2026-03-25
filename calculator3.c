#include <cs50.h>
#include<stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n",x + y);
}
//readable


int main(void)
{
    printf("%i\n",get_int("x: ") + get_int("y: "));
}
//uncommended

int main(void)
{
    int x = get_int("x: ");

    printf("%i\n",x * 2);
}

