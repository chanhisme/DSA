#include <iostream>
#include <algorithm>
using namespace std;
#define foi(i,l,r) for(int i = l; i < r; i++)
#define fod(i,l,r) for(int i = r; i > l; i--)
void reverse(string &s, int l, int r){
    int i = l, j = r-1;
    while(i < j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    
}
int main(){
    string s;
    int k;
    cin >> s;
    cin >> k;
    int n = s.size();
    for(int i = 0; i < n; i += 2*k){
        int left = i;
        int right = min(i + k, n);
        reverse(s, left, right);
    }

    cout<<s;


    return 0;
}