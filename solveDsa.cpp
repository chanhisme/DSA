#include <bits/stdc++.h>

using namespace std;

bool isSplit(vector<int>& a) {
    int n = a.size();
    int t = a[a.size() - 1] / 2;
    for (int i = 0; i < n; i++) {
        if (a[i] == t) {
            return true;
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if(n < 2){
        cout<<"false";
        return 0;
    }
    vector<int> a(n), b;
    for (int& x : a) cin >> x;

    for (int i = 1; i < a.size(); i++) {
        a[i] += a[i - 1];
    }

    
    if(a[a.size()-1] % 2 != 0){
        cout<<"false";
        return 0;
    }


    if (isSplit(a))
        cout << "true";
    else
        cout << "false";

    return 0;
}