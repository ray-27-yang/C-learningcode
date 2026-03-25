
void fun (int x, int *px)
{
    //x是输入的数，px是结果数
    *px = 0;
    int x1 = x;
    int yi;
    int has = 0;
    int count = 0;
    int arr[10];
    int sign = 1;//

    if (x < 0)
    {
        sign = -1;
        x = -x;// 转为正数，避免负数取余的问题
    }
    while (x != 0)
    {
        yi = x % 10;//拿到每一位

        if (yi % 3 == 0)
        {
            has = 1;
            arr[count] = yi;
            count++;
        }
        x = x / 10;
    }

    if (has == 0)
    {
        //*px = x;原数x被修改了
        *px = x1;
    }
    else
    {
        for (int i = count - 1;i >= 0;i--)
        {
            *px = *px * 10 + arr[i];
        }
        *px *= sign;// 恢复符号
    }
}
