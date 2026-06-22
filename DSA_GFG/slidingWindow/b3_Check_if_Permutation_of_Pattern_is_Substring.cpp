// Given two strings txt and pat having lowercase letters, 
// the task is to check if any permutation of pat is a substring of txt.
#include <iostream>
#include <unordered_map>

using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
    faster;
    //mainCode
    string txt, pat;
    cin >> txt >> pat;
    int n = pat.length();

    if(n > txt.length()){
        cout<<"False";
        return 0;
    }

    unordered_map <char, int> cnt;
    for(char x : pat) cnt[x]++;
    int l = 0, ok = 0, dem = 0;

    for(int r = 0; r < txt.length(); r++){
        char tmp = txt[r];
        if(cnt.count(tmp)){
            cnt[tmp]--;
                if(cnt[tmp] == 0){
                dem ++;
            }
        }

        if(dem == cnt.size()){
            ok = 1;
            break;
        }
        if(r >= n-1){
            if(dem == n){
                ok = 1;
                break;
            }
            char remove = txt[l];
            l++;
            if(cnt.count(remove)){
                if(cnt[remove] == 0){
                    dem--;
                }
                cnt[remove]++;
            }
        }
        
    }
    if(ok) cout<<"True";
    else cout<<"False";



    return 0;
}