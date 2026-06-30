#include <iostream>
using namespace std;

class twoStack{
    int *a;
    int size;
    int top1;
    int mid;
    int top2;

    public:
        twoStack(int n){
            size = n;
            a = new int[n];
            top1 = -1;
            mid = n/2;
            top2 = mid-1;
        }
        void push1(int x){
            if(top1 == mid-1){
                return;
            }
            ++top1;
            a[top1] = x;
        }
        void push2(int x){
            if(size-1 == top2){
                return;
            }
            a[++top2] =x;
            
        }
        int pop1(){
            if(top1 == -1){
                return -1;
            }
            return a[top1--];
            
        }
        int pop2(){
            if(top2 == mid-1){
                return -1;
            }
            return a[top2--];
        }
};

int main(){
    twoStack ts(5);
    ts.push1(2);
    ts.push1(3);
    ts.push2(4);
    cout << ts.pop1() << " ";
    cout << ts.pop2() << " ";
    cout << ts.pop2() << " ";

    return 0;
}