public class studentoper
     //方法：对对象数据的处理
    // 方法study()（无参，打印 “正在学习”）
    public void study(){
        System.out.println("正在学习");
    }
    //study(String subject)（含科目参数，打印 “正在学习 XXX”）
    public void study(String subject){
        this.subject = subject;
        System.out.println("正在学习" + this.subject);
    }
    //study(String subject, int hour)（含科目 + 时长，打印 “学习 XXX 时长 X 小时”）
    public void study(String subject, int hour){
        this.subjct = subject;
        this.hour = hour;
        System.out.println("学习"+this.subject+"时长"+this.hour);
    }

}
