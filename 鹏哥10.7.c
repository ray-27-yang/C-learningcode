void test()
//不需要任何返回
{
    //执行任务
}
//正常函数写法
int ADD (int x,int y)
{
    return x + y;
}
//define 定义宏的写法
#define ADD(x,y) ((x)+(y))宏体
       宏名 参数（无类型）
//宏完成替换
int c = ADD(a,b)--->int c = ((a)+(b))
