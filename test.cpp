#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int k;
    std::cin >> k;

    int coin = 0, cnt = 1;
    for (int i = 1; i <= k; ++i)
    {
        k -= i;
        coin = coin + cnt * cnt;
        cnt++;
    }

    std::cout << coin + k * cnt << \'n';
    
    return 0;
}

/* #include <iostream>

int main()
{
    int k;
    std::cin >> k;

    int coin = 0, cnt = 1; //coin是金币，cnt是比原来每天多获得的金币数
    for (int i = 1; i <= k; ++i)
    {
        k -= i;
        coin = coin + cnt * cnt;
        cnt++;
    }

    std::cout << coin + k * cnt << '\n';

    return 0;
} */