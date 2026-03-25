// 学生  不占内存
struct Stu//结构体
{
    //成员
    char name[]; // 声明了一个名为 name 的字符数组
    int age;
    char sex[];
    char tele[];
}

int main(void)
{
    struct Stu s = {"zhangsan",20,"nan","1299876788"}; // .操作符：结构体对象.成员名
    printf("%s %d %s %s\n", s.name,s.age,s.sex,s.tele);

    return 0;
}

//用指针打印
#include <stdio.h>

struct Stu
{
    char name[20];//必须给固定大小
    int age;
}
// 重命名函数，避免与标准库printf冲突
void print(struct Stu* ps) //这里不能给ps赋值，这是c++的写法，ps 是一个指针变量的名称，通常是 "pointer to Stu"（指向 Stu 结构体的指针）的缩写，是程序员为了方便理解而自定义的变量名。
{   // 通过指针访问结构体成员的两种方式
    printf("%s %d\n",(*ps).name,(*ps).age);
    printf("%s %d\n",ps->name,ps->age);//指针的解引用操作
}

int main(void)
{
    struct Stu s = {"zhangsan",20};
    print(&s);
}
