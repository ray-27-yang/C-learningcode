package com.fei.day07;

public class day07arraytest4 {
    // 目标：完成做牌和洗牌
    public static void main() {
        printArray();
    }
    public static void printArray() {
        // 1.做牌：创建一个动态初始化的数组存储54张牌
        String[] poker = new String[54];// 先放54个萝卜坑儿，这时里面存的是null
        // 创建两个数组放花色和数字
        String[] colors = {"♦","♣","♥","♠"};
        String[] numbers = {"3","4","5","6","7","8","9","10","J","Q","K","A","2"};
        //用嵌套遍历这两个数组
        int index = 0;
        for (int i = 0;i < colors.length;i++){
            for (int j = 0;j < numbers.length;j++){
                poker[index++] = color[i] = numbers[j];

            }
        }

        //存放大王和小王
        poker[index++] = "King";
        poker[index] = "prince";
        //打印新牌
        System.out.println("新牌： ")；
        //遍历数组并打印
        for (int i = 0;i < poker.length;i++){
            System.out.println(poker[i] + "\t");
        }
        System.out.println()//换行
    }
}
