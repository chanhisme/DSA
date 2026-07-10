#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

ll phi(ll m)
{
    ll res = m;
    for (int i = 2; i * i <= m; i++)
    {
        if (m % i == 0)
        {
            while (m % i == 0)
            {
                m /= i;
                // để tìm cái cơ số nguyên tố chứ ko quan tâm mũ vdu là 27 = 3^3 thì chỉ quan tâm là có số 3 thoi
            }
            res -= res / i;
        }
    }
    if (m > 1)
    {
        res -= res / m;
        //  Tác dụng của cái if cuối là áp dụng nốt công thức tính
        //  Phi hàm Euler cho thừa số nguyên tố lớn hơn sqrt{m}, tránh cho bài toán bị tính thiếu bước.
        //  do phi hàm euler là đếm tới bé hơn m
        // do mình đã tối ưu hàm chỉ có tốn O(sqrt(m)) bước nên phải thêm if lẻ để đầy đủ
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        ll m;
        cin >> m;
        cout << phi(m)<<endl;
    }

    return 0;
}