//打印1-10数字
i = 1; // 先创建变量
while (i < 11)
{
    if (i==5)
    {
        break; // 这里的break不会像switch里面一样就跳出来了，而是会先循环到满足if了再跳出，永久终止循环
    }// 换成continue后跳过本次循环，后面的代码不会执行，直接进行下一次循环的判断

    printf("%d",i);
    i++;
}

int ch = getchar(void) // 从键盘读取一个字符并且返回该字符的ASCII值
EOF//end of file  ctrl+z会返回一个EOF
//输出单个字符的标准函数
putchar(ch)//等于printf("%c",ch)
//getchar()  输入缓冲区  键盘  刚运行的时候函数没有在缓冲区读取到东西，会等待
//当键盘出入a回车时，缓冲区会有a\n,函数读取到a != EOF后会返回a的ASCII值，然后读取了\n != EOF,返回它的ASCII值（10）
//数组本来是个地址，所以scanf不用&取地址


