// 蛮力法求最大公约数
#include <iostream>
#include <chrono>

int GCD(int a, int b)
{
    int gcd = 1; // 最小的公约数为1
    // 较小数作为遍历的起点
    int minNum = (a < b) ? a : b;

    // 从较小的数开始向下遍历，直到1
    for (int i = minNum; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break; // 找到最大公约数后退出循环
        }
    }
    return gcd;
}

int main()
{
    // 记录开始时间
    auto start = std::chrono::high_resolution_clock::now();

    int num1, num2;
    std::cin >> num1 >> num2;

    int gcd = GCD(num1, num2);
    std::cout << gcd << std::endl;

    // 记录结束时间
    auto stop = std::chrono::high_resolution_clock::now();
    // 计算运行时间：结束时间 - 开始时间
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
     // 输出运行时间
    std::cout << "time:" << duration.count() << "(us)" << std::endl;

    return 0;
}
