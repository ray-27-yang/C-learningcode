// 1.,掌握创建类与对象的方法,尤其是关于java中的方法重载
// 题目 1：学生类与方法重载（构造方法 + 普通方法重载）
// 定义Student类，要求：
// 1. 构造方法重载：无参构造、仅含 “姓名” 的构造、含 “姓名 + 年龄 + 学号” 的构造；
// 2. 普通方法重载：study()（无参，打印 “正在学习”）、study(String subject)（含科目参数，打印 “正在学习 XXX”）、study(String subject, int hour)（含科目 + 时长，打印 “学习 XXX 时长 X 小时”）；
// 3. 创建 3 个不同的学生对象，分别调用不同重载方法。
public class Student{
    //成员变量
    private String name;
    private int age;
    private int id;
    private String subject;
    private double hour;

    //无参构造
    public Student(){

    }
    //仅含 “姓名” 的构造
    public Student(String name){
        this.name = name;
    }
    //含 “姓名 + 年龄 + 学号” 的构造
    public Student(String name,int age,int id)
    {
        this.name = name;
        this.age = age;
        this.id = id;
    }
    //公开的get&&set方法以便数据的取存
    public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return name;
    }
    public void setAge(int age){
        this.age = age;
    }
    public int getAge(){
        return age;
    }
    public void setId(int id){
        this.id = id;
    }
    public int getId(){
        return id;
    }
    public void setSubject(String subject){
        this.subject = subject;
    }
    public String getSubject(){
        return subject;
    }
    public void setHour(double hour){
        this.hour = hour;
    }
    public double getHour(){
        return hour;
    }

