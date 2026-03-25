#include<stdio.h>

int main(void)
{
    int C;
    int A = 0;
    int B = 0;//先找变量
    printf("A: ");
    scanf("%i",&A);//scanf函数需要传入变量的地址，而不是变量本身，应该使用&A和&B
    printf("B: ");
    scanf("%i",&B);
    printf("%i\n",C = A + B);//赋值语句的方向错误，应该是C = A + B而不是A + B = C
}
