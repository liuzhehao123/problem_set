#include <iostream>
#include <vector>
using namespace std;

const int MAX_VAL = 1000000;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> count(MAX_VAL + 1, 0);

    // 记录每个数字出现的次数
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        count[a[i]]++;
    }

    int max_len = 0;

    for (int i = 1; i <= MAX_VAL; ++i)
    {
        int current_count = 0;

        // 检查所有是i倍数的数的出现次数
        for (int multiple = i; multiple <= MAX_VAL; multiple += i)
        {
            current_count += count[multiple];
        }

        // 取最大值
        max_len = max(max_len, current_count);
    }

    cout << max_len << endl;
    return 0;
}