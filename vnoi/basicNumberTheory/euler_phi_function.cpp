#include <iostream>
#include <vector>
using namespace std;
//nghịch đảo module bằng phi hàm euler
vector<int> tachThuaSo(int a)
{
    vector<int> fact;

    for (long long p = 2; p * p <= a; p++)
    {
        if (a % p == 0)
        {
            fact.push_back(p);
            while (a % p == 0)
                a /= p;
        }
    }
    if (a > 1)
    {
        fact.push_back(a);
    }
    return fact;
}

long long phi(vector<int>& a, int n){
    double res = 1;

    for(int x : a){
        res  = res / x * (x-1);
    }

    return res * n;
}
int main(){
    int a; cin >> a;
    vector <int> tmp = tachThuaSo(a);
    cout<< phi(tmp, a);

    return 0;
}