#include <iostream>

using namespace std;

int main(){
    int a[200000]={0};
    int thaoTac, gam, truyVan; cin >> thaoTac >> gam >> truyVan;
    int j = 0;
    while(j < thaoTac){
        int left, right;
        cin >> left >> right;
        left --, right --;
        a[left] +=1;
        a[right+1] -=1;
        j++;
    }
    int res[200000];
    res[0] = a[0];
    for(int i = 1; i < 200000;i++){
        res[i] = res[i-1] + a[i];
    }
    int cnt = 0;
    for(int i = 0; i < 200000;i++){
        if(res[i] >= gam){
            cnt++;
        }
        a[i] = cnt;
    }

    while(truyVan --){
        int left, right;
        cin >> left >> right;
        
        cout<<res[right]-res[left-1];
    }



    return 0;
}