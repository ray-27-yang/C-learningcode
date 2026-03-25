Student s1 = new Student(name:Keng)
studentoperator s = new studentoperator(s1)
//创建学生操作类：如何将学生对象的数据导到学生操作类里面去
public class studentoperator{
    private Student s;
    public studentoperator(Student s){
        this.s = s;
    }
     //方法：对对象数据的处理
    // 方法study()（无参，打印 “正在学习”）
    public void study(){
        System.out.println("正在学习");
    }
    //study(String subject)（含科目参数，打印 “正在学习 XXX”）
    public void study(String subject){
        this.subject = subject;
        System.out.println("正在学习" + s.subject);
    }
    //study(String subject, int hour)（含科目 + 时长，打印 “学习 XXX 时长 X 小时”）
    public void study(String subject, int hour){
        this.subjct = subject;
        this.hour = hour;
        System.out.println("学习"+s.subject+"时长"+s.hour);
    }

}
