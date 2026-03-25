//打印数组里面的所有元素
#include<stdio.h>

int main (void)
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int i;//定义循环变量

    for (i = 0;i < 10;i++);//循环体后面多了一个分号怕，导致循环体为空，大括号里面的内容变成了循环外的代码
    {
        printf("%d",arr[i]);
    }
    return 0;
}
