#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1];
    int R[n2];
    for(int i = 0; i < n1; i++){
        L[i] = a[l+i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = a[i+m+1];
    }
    int i = 0, j = 0;
    int idx = l;
    while(i < n1 && j <n2){
        if(L[i] <= R[j]){
            a[idx] = L[i];
            i++; idx++;
        }
        
        else{
            a[idx] = R[j];
            j++;idx++;
        }
        
    }
    while(i < n1){
        a[idx] = L[i];
        i++; idx++;
    }
    while(j < n2){
        a[idx] = R[j];
        j++; idx++;
    }
}


void mergeSort(int a[], int l, int r){
    if(l < r){
        int m = (l+r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);

    }     
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //mainCode
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


    
    mergeSort(a, 0, n -1);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }



    return 0;
}