#include <iostream>
#include <ctype.h>
#include <sstream>
#include <cstring>
#include <vector>
using namespace std;


int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string world;
    vector <string> a;
    while(getline(ss, world, '@')){
        cout<<world<<" ";
    }
    



    






    // while(ss >> world){
    //     a.push_back(world);
    // }   
    // for(string x : a){
    //     cout<<x<<endl;
    // }







    return 0;
}