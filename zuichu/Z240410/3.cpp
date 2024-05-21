// 分解质数法求最大公约数

#include <iostream>
#include <chrono>

// 找出两个数的最大公共质因数乘积，即最大公约数
int GCD(int a, int b)
{
    int gcd = 1;                  // 最大公约数初始为1
    int minVal = (a < b) ? a : b; // 用较小的数确定遍历的界限
    for (int i = 2; i <= minVal; i++)
    {
        if (a % i == 0 && b % i == 0) // 查看i是否为两个数的质因数
        {
            gcd *= i; // 更新最大公约数
            // 取出质因数i
            while (a % i == 0 && b % i == 0)
            {
                a /= i;
                b /= i;
            }
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
