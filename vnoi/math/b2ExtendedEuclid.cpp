// https://wiki.vnoi.info/algo/algebra/euclid#thu%E1%BA%ADt-to%C3%A1n-euclid-m%E1%BB%9F-r%E1%BB%99ng
#include <bits/stdc++.h>

using namespace std;

// mục đích việc euclid mở rộng là xây dựng từ ra ước chung bth thì nó tạo thành
// tổ hợp tuyến tính x và ythế vào sao cho thỏa mãn phương trình ax + by = gdc(a,b)
const pair<int, int> INVALID_ROOT = {INT_MAX, INT_MAX};
int ext_euclid(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }

    int q = a / b;
    int r = a % b; // r = a - b*q
    int x1 = 0, y1 = 0;
    int g = ext_euclid(b, r, x1, y1);
    x = y1;
    y = x1 - q * y1;
    return g;
}

pair<int, int> diophantineSolve(int a, int b, int c)
{
    int x = 0, y = 0;
    int d = ext_euclid(a, b, x, y);
    if (c % d != 0)
        return INVALID_ROOT;

    x *= (c / d);
    y *= (c / d);
    if (a < 0)
        x = -x;
    if (b < 0)
        y = -y;

    return make_pair(x, y);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int x, y; // Khởi tạo 2 biến để nhận kết quả

    int g = ext_euclid(a, b, x, y); // Gọi hàm, truyền x, y vào

    cout << "gcd(" << a << ", " << b << ") = " << g << '\n';
    cout << "x = " << x << ", y = " << y << '\n';
    cout << "Kiem tra: " << a << "*" << x << " + " << b << "*" << y << " = " << g << '\n';

    pair <int, int> result = diophantineSolve(a, b, 12);
    if (result.first != INT_MAX)
    {
        cout << "Nghiem rieng: x = " << result.first << ", y = " << result.second << '\n';
    }
    else
    {
        cout << "Phuong trinh vo nghiem nguyen!\n";
    }
    return 0;
}