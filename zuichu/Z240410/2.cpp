// 欧几里得算法求最大公约数

#include <iostream>
#include <chrono>

int GCD(int a, int b)
{
    // 当任一数为0时，直接返回另一个数
    if (b == 0)
        return a;
    // 否则继续调用该函数，b和a%b作为参数
    return GCD(b, a % b);
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