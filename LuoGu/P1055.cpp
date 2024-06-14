#include<iostream>
#include<cstring>

int main()
{
    char s[20]; //isbn号码需要使用的字符串
    std::cin >> s; //输入isbn号码

    int ans = 0, sum = 0;
    for (int i = 0; i <= 11; i++) {
        if (s[i] >= 48 && s[i] <= 57) {
            sum++; //数字的位数
            ans += sum * (s[i] - 48); //累乘计算mod前的值
        }
        else {
            continue; //遇到“-”不处理
        }
    }

    ans %= 11; //mod11得到isbn的识别码
    ans += 48; //转换为ASCII码
    if (ans == 58) {
        ans = 'X'; //处理“X”
    }
    if (ans == s[12]) {
        std::cout << "Right" << '\n'; //判断是否正确
    } else {
      s[12] = ans; //将正确的值赋给最后一位
      for (int i = 0; i <= 12; i++) {
        std::cout << s[i]; //输出正确的值
      }
      std::cout << '\n';
    }

    return 0;
}