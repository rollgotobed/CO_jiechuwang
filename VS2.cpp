// VS2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int shuchu();
float zhijiaosanjianxing(float a, float b, float c);


int main()
{
    int i=1,k,h=3;
    float bian, a[3], lk;
    while (h--)
    {
        printf("输入第%d条边长\n", i);
        scanf_s ("%f", &lk);
        bian = zhijiaosanjianxing(lk, 4, 0);
        if (bian != -1)
        {
            printf("%0.4f\n", bian);
        }
        else
        {
            printf("传参有问题\n");
        }
    }
    
}

int shuchu()
{
    printf("ffdkjs\n");
    return 1;
}

/* 函数 zhijiaosanjianxing (float a, float b, float c)

     功能：已知直角三角形两个边长，求第三边，a、b为直角边，c为斜边
*/
float zhijiaosanjianxing(float a, float b, float c)
{
    if ((a == 0 && b == 0) || (c == 0 && b == 0) || (a == 0 && c == 0) || (a == 0 && b == 0 && c==0) || (a != 0 && b != 0 && c != 0))
    {
        return -1;
    }
    if (a == 0)
    {
        return sqrt(c * c - b * b);
    }
    if (b == 0)
    {
        return sqrt(c * c - a * a);
    }
    if (c == 0)
    {
        return sqrt(b * b + a * a);
    }
    return -1;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
