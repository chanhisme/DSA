#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string, string> a;
    int n; cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string mssv, ten;
        cout<<"Ma so sinh vien #"<<i+1<<" : ";
        getline(cin ,mssv);
        cout<<"Ten sinh vien #"<<i+1<<" : ";
        getline(cin, ten);
        a[mssv] = ten;
    }
    int q; cin >> q;
    cin.ignore();
    
    for(int i = 0; i < q; i++){
        string id;
        cout<<"Nhap mssv: ";
        getline(cin, id);
        if(a.find(id) != a.end()){
            cout<<a[id]<<endl;
        }
        else{
        cout<<"NOT FOUND"<<endl;
    }
    }
    
   



    return 0;
}