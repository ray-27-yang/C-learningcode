#include<stdio.h>

int main(void)
{
    int cm = 0;
    scanf("%i",&cm);

    int foot = cm / 30.48;
    int inch =((cm / 30.48) - foot) * 12;

    printf("%i %i",foot,inch)

}
