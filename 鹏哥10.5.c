import java.util.Scanner;

public class zuoyeweek202 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("请输入第一个整数：");
        int num1 = sc.nextInt();

        System.out.println("请输入第一个整数：");
        int num2 = sc.nextInt();

        System.out.println("请输入您要进行的运算(1:表示加法,2:表示减法,3:表示乘法,4:表示除法): ");
        int num3 = sc.nextInt();

        int add = num1 + num2;
        int sub = num1 - num2;
        int mul = num1 * num2;
        int chu = num1 % num2;
        switch (num3)
        {
            case 1:
            System.out.println(num1 "+" num2 "=" + add);
            break;
            case 2:
            System.out.println(num1 "-" num2 "=" + sub);
            break;
            case 3:
            System.out.println(num1 "*" num2 "=" + mul);
            break;
            case 4:
            System.out.println(num1 "%" num2 "=" + chu);
            break;
        }
    }

}
