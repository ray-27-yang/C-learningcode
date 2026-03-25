#include <stdio.h>
#include <stdlib.h>  // 用于exit函数

// 1. 读取N个学生成绩的函数
void Input(float scores[], int N) {
    printf("请输入%d个学生的成绩（0-100）：\n", N);
    for (int i = 0; i < N; i++) {
        // 循环校验输入，确保成绩是有效数字且在0-100之间
        while (1) {
            printf("第%d个学生成绩：", i + 1);
            // 检查输入是否为有效浮点数
            if (scanf("%f", &scores[i]) != 1) {
                printf("输入错误！请输入数字形式的成绩！\n");
                // 清空输入缓冲区，避免死循环
                while (getchar() != '\n');
                continue;
            }
            // 检查成绩范围
            if (scores[i] >= 0 && scores[i] <= 100) {
                break;
            } else {
                printf("成绩无效！请输入0-100之间的数值！\n");
            }
        }
    }
}

// 2. 输出学生成绩的函数
void Output(float scores[], int N, const char *title) {
    printf("\n%s：\n", title);
    for (int i = 0; i < N; i++) {
        printf("第%d个学生：%.1f分\n", i + 1, scores[i]);
    }
}

// 3. 降序排序函数（冒泡排序，通用性强）
void Sort(float scores[], int N) {
    // 冒泡排序实现降序
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (scores[j] < scores[j + 1]) {
                // 交换两个元素
                float temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

// 4. 计算平均分的函数
float Average(float scores[], int N) {
    float sum = 0.0;
    for (int i = 0; i < N; i++) {
        sum += scores[i];
    }
    return sum / N;
}

// 5. 求最高分的函数
float Max(float scores[], int N) {
    float max_score = scores[0];
    for (int i = 1; i < N; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }
    return max_score;
}

// 主函数
int main() {
    // 定义成绩数组，N最大为20，符合要求
    float scores[20];
    int N;

    // 读取学生数量N，校验范围1-20
    while (1) {
        printf("请输入学生数量（1-20）：");
        if (scanf("%d", &N) != 1) {
            printf("输入错误！请输入整数！\n");
            while (getchar() != '\n');  // 清空缓冲区
            continue;
        }
        if (N >= 1 && N <= 20) {
            break;
        } else {
            printf("学生数量必须在1-20之间！请重新输入！\n");
        }
    }

    // 调用各功能函数完成需求
    Input(scores, N);                  // 读入成绩
    Output(scores, N, "排序前的学生成绩");  // 输出排序前成绩

    // 注意：排序会修改原数组，如需保留原数据，可先复制数组
    Sort(scores, N);                   // 降序排序
    Output(scores, N, "排序后的学生成绩");  // 输出排序后成绩

    float avg = Average(scores, N);    // 计算平均分
    float max = Max(scores, N);        // 计算最高分

    // 输出平均分和最高分
    printf("\n平均分：%.2f分\n", avg);
    printf("最高分：%.1f分\n", max);

    return 0;
}
