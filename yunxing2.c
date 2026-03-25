//随机生成一个数字
int num = (int) (Math.random() * 100);
//提示用户猜测一个数字
//扫描器
do{
Scanner sc = new Scanner(System.in);
System.out.println("请猜测一个数字： ")；
int num1 = sc.nextInt();
}

//提示猜测大了还是小了直到猜对为止
while (num != num1){
    if (num1 < num){
        System.out.println("猜小了")；
    }
    else{
        System.out.println("猜大了")；
    }
}
