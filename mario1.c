package com.fei.practice;

import java.util.Scanner;

public class fenzhi {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);

        System.out.println("请输入你的税前工资：");
        double x = sc.nextDouble();
        //计算纳税数额
        double sui = System.out.println("您的纳税数额为： "+ tax);
        //计算税后工资
        double afterTaxSalary = y - tax;
        System.out.println("您的纳税数额为： "+ afterTaxSalary);
    }

    public static double getTax(double x){//x为税前的原始工资
        //计算扣除三险一金后的金额y
        double y = x * 0.9;
        if (y < 5000){
            return 0;
        }

        double tax = 0;
        if (y <= 3000) {
            tax = y * 0.03;
        }

        else if(y <= 12000){
            tax = 90 + (y-3000) * 0.1;
        }

        else if(y > 12000 && y <= 25000){
            tax = 90 + 900 + (y-12000) * 0.2;
        }
        else if(y > 25000 && y <= 35000){
            tax = 90 + 900 + 2600 + (y-25000) * 0.25;
        }
        else if(y > 35000 && y <= 55000){
            tax = 90 + 900 + 2600 + 2500 + (y-35000) * 0.3;
        }
        else if(y > 55000 && y <= 80000){
            tax = 90 + 900 + 2600 + 2500 + 6000 + (y-55000) * 0.35;
        }
        else {
            tax = 90 + 900 + 2600 + 2500 + 6000 + 8750 + (y - 80000) * 0.45;
        }
        return tax;

    }

}
//题目
// 2019年1月1日起，国家推出新的个人所得税政策，起征点上调值5000元。也就是说税前工资扣除三险一金
//（三险一金数额假设是税前工资的10%）后如果不足5000元，则不交税。
//如果大于5000元，那么大于5000元的部分按梯度交税，具体梯度比例如下：
//  0 ~ 3000元的部分，交税3%
//  3000 ~ 12000元的部分，交税10%
//  12000 ~ 25000的部分 ， 交税20%
//  25000 ~ 35000的部分，交税25%
//  35000 ~ 55000的部分，交税30%
//  55000 ~ 80000的部分，交税35%
//  超过80000的部分，交税45%
// 比如：某学长入职一家企业后，税前工资是15000，则他每月该交个税的部分是15000-1500-5000=8500元，
//个税缴纳数额是3000×3%+5500×10%=640元。税后工资12860元。
// 请完成一个个税计算程序，在用户输入税前工资后，计算出他对应的纳税数额，以及税后工资为多少？



