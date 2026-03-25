//判断一个数是否为奇数
#include <stdio.h>

int main(void)

{
    if (int a < 100) // 在 C 语言中，if条件表达式中不能声明变量（编译器不支持），这是c++写法
    {
        int k >= 0; // 变量声明时不能使用>=这样的比较运算符
        int a = 2k + 1; // 不能用2k这种形式表示2*k，乘法必须显式写出*
        printf("%d",a); //变量作用域问题，k在使用前未声明
        k++;
    }
    return 0;
}//你似乎想写打印100以内的奇数的代码，读题
//改
#include <stdio.h>

int main(void)
{   // 获得一个要判断的数
    int num = 0;
    scanf("%d", &num);
    // 判断奇数的方法
    if (num % 2 == 1)
    {
        printf("odd\n");
    }

    return 0;
}
//输出100以内的奇数,用循环语句
#include <stdio.h>

int main(void)

{
    int a = 0;//do not use the single equals sign
    if (int a % 2 == 1 && int a < 100)
    {
        printf("%d", &a);
        a++;
    }
}//只会打印一次
//改
#include <stdio.h>

int main(void)
{
    for (int i = 0;i < 100;i++)
    if (i % 2 == 1)
    printf("%d ",i);
}
//一个分号代表一个语句，若if后面加了分号就变成空语句了
//一个错误写法age=10,18<=age<28,从左往右看前半部分为假，0<28,最后结果为真
//应该用&&表示
//if else if else if...else
//分支语句只能选择一个进行执行
//分支语句默认只管一个语句，多语句要花括号
//else默认和最近的if匹配，不是看对齐
//书写的规范书：《高质量的C/c++编程》
//两个等号两边的量互换没有问题
