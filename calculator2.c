public class array {
    public static void main(String[] args) {


    }
    public static void randomCall() {
        //创建数组存储名字
        string[] names = {"西条高人"，"空空道士"，"林黛玉"，"贾宝玉"，"贺新郎"};
        //得到一个随机数字
        //Math.random随机生成[0-1)的小数，names.length数组长度，即数组的元素个数
        //即可随机生成[0-5)的数字，强制类型转换取整得到[0-4]的随机数字
        int index = (int)(Math.random * names.length);
        string name = names[index];
        System.out.println("抽取到的名字是： "+ name);


    }

}
