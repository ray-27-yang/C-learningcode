import java.util.Scanner;
import java.util.Arrays;

public class zuoyearray {
    public static void main() {
        getArray();
         //数组打印
        System.out.println(Arrays.toString(arr));

    }
    public static void getArray() {
        int num;
        //定义数组
        int[] arr = {12,14,23,45,66,68,70,77,90,91};
        //扫描器
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个数字： ")
        num = sc.nextInt();
        //遍历数组的数字
        for (i = 0;i < arr.length;i++)
        {
            int data = arr[i];
            if (data <= num)
            {
                break;
            }
            else if (data > num)
            {
                arr[i] = arr[i + 1];
            }
            else if (data == 0){
                data = num;
            }
        }
    }
}
// 有一个数组，其中有十个元素从小到大依次排列
//{12,14,23,45,66,68,70,77,90,91}。再通过键盘录入一个整数数字。
//要求：把数字放入数组序列中，生成一个新的数组，
//并且数组的元素依旧是从小到大排列的。执行效果如下：
// 提示
// 1. 定义原数组arr，和一个比原数组长度大1的新数组brr。
// 2. 通过键盘录入的方式输入变量num的值。
// 3. 定义变量index用于记录num存放的索引位置。
// 4. 遍历数组，小于或等于num的元素直接存放到原来的位置，
//大于num的元素往后移动一个位置。
// 5. 存放结束之后，中间会空出一个位置,在遍历时用index记录这个位置。
//把num放在这个索引处。
// 6. 最终遍历新数组打印结果
