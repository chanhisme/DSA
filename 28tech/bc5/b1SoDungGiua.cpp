// Cho số nguyên không âm N, hãy xác định chữ số đứng giữa của N, trong trường hợp N không có chữ số đứng
// giữa thì in ra "NOT FOUND". Ví dụ N = 12345 thì số đứng giữa là 3, N = 2213 thì không có chữ số đứng giữa.

// Input Format

// Một dòng duy nhất chứa số nguyên dương N

// Constraints

// 0 <= N <= 10^18;

// Output Format

// In ra chữ số đứng giữa của N hoặc in ra NOT FOUND nếu N không có số đững giữa
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string a;
    getline(cin, a);
    if(a.size() % 2 == 0){
        cout<<-1;
    }
    else{
        cout<<a[a.size()/2];
        
    }




    return 0;
}