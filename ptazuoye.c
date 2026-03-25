//作业-最大公约数
#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;

    scanf("%d %d",&a,&b);
    int r = a / b; // 一定注意赋值是双等号
    if (r == 0)
    {
        printf("%d\n",r);
    }
    else
    {
        while (r != 0)
        {
           int b = a;
           int r = b;
           int r = a / b;
        }
        printf("%d",r);
    }

    return 0;
}


//作业2打印1000年到2000年之间的闰年
