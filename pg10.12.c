#include <stdio.h>

int main(void)
{
    char password[20] = {0};
    printf("Please input password: ");
    scanf("%s", password);
    int ch = 0;
    //getchar();
    while ((ch = getchar()) != '\n')
    {
        ;//一直读取，包括清理\n
    }
    printf("Please confirm the password(Y / N): ");

    int ret = getchar();
    if ('Y' == ret)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
// scanf和getchar一样，会在输入缓冲区域一次读一个数据，注意会有一个\n
//终端结果
// Please input password: 1234567
// Please confirm the password(Y / N): NO
//解释：键盘输入123456,回车后scanf才能拿到数据123456，但同时在数据缓冲区
//给了一个\n，printf执行后getchar在数据缓冲区拿到一个\n ,由于\n不等于'Y'
//所以会紧接着打印No
//解决方法：在前面放一个getchar读取走\n（不能做到较好地清理）
//abc def\n在缓冲区时，scanf读取abc,getchar拿走空格

//代码：只打印数字字符
#include <stdio.h>

int main(void)
{
    char ch = '\0';
    while ((ch = getchar()) != EFO)
    {
        if (ch < '0' || ch > '9')
        {
            continue;
        }
        putchar(ch);
    }
    return 0;
}
//打印字符'a'
printf("%c\n",'a');
printf("%c\n",97;)
