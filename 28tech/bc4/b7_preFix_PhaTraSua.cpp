// Tèo mới lên đại học và kiếm được một công việc tại hàng trà sữa, có không quá 200000 cốc trà sữa xếp thành
// 1 hàng ngang, ban đầu mỗi cốc trà sữa có độ ngọt bằng 0. Tèo tiến hành liên tiếp N các thao tác, mỗi thao tác
// anh ta sẽ thêm 1 gam đường vào các cốc trà sữa từ vị trí L tới vị trí R. Sau cùng những cốc trà sữa có lượng
// đường >= K gam được chuyển đi để phục vụ khách hàng. Có nhiều câu hỏi, mỗi câu hỏi yêu cầu bạn trả lời
// trong các cốc trà từ thứ L tới thứ R có bao nhiêu cốc đạt chuẩn để bán cho khách hàng ?

// Input Format

// · Dòng 1 gồm 3 số N, K, Q với Q là số truy vấn

// · N dòng tiếp theo mỗi dòng gồm 2 số L, R (thao tác)

// · Q dòng tiếp theo mỗi dòng là 2 số L, R (truy vấn)

// Constraints

// . 1 <= K <= N <= 200000

// .. 1 <= Q <= 200000

// . 1 <= L,R <= 200000

// Output Format

// Đối với mỗi truy vấn in ra số lượng cốc trà sữa đạt chuẩn

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> a(200000, 0), cnt(200000, 0);
    int n, k, q;
    cin >> n >> k >> q;
    while(n--){
        int l, r;
        cin >> l >> r;
        a[l] ++;
        a[r+1] --;
    }
    for(int i = 1; i < a.size(); i++){
        a[i] += a[i-1];
    }
    int dem = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] >= k){
            dem ++;
        }
        cnt[i]= dem;

    }
    while(q--){
        int l, r;
        cin >> l >> r;
        
        cout<<cnt[r] - cnt[l-1];          
    }

    


    return 0;
}