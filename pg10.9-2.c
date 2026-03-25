//练习1：计算n的阶乘
//方法：产生1-n的数字，再累积乘到一个数上
// #include <stdio.h>

// int main(void)
// {
//     int i = 1;
//     int n = 0;
//     int ret = 1;

//     scanf("%d",n)

//     for (i = 1;i <= n;i++)
//     {
//         ret = ret * i;//累积乘
//     }
//     printf("%d",ret);

//     return 0;
// }

//练习2：算1到10的阶乘的和
#include <stdio.h>

int main(void)
{
    int i = 1;
    int n = 0;
    int ret = 1;
    int sum = 0;

    for (n = 1; n <= 10;  n++)
    {
        ret = 1;
        for (i = 1; i <= n; i++)
        {
            ret = ret * i;//累积乘
        }
        sum += ret;
    }
    printf("%d\n",sum);
    return 0;
}
