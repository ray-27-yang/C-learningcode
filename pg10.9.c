//switch语句的学习
//swith根据里面（）的值决定匹配哪个case语句，从case:进去后到跳转语句跳出
//只决定了入口，没有break会一直执行到最后（default在最后的话也会执行）
//字符存储的是ASC II的值，本质也是整形
#include <stdio.h>

int main(void)
{
    int day = 2;
    switch(day)
   {
        case 1:
        case 2:
        case 3:
            printf("week1\n");
            break;  //break只能跳出所在的switch，跳出后还会继续走
        case 4:
        case 5:
            printf("week2\n");
            break;
        default:
            printf("wrong\n");
   }    
}
