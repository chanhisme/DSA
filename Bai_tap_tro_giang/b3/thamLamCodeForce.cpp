#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n; cin >> n;
	vector <int> a;
	for(int i = 0; i < n ; i++){
		int x; cin >> x;
		a.push_back(x);
	}
	int diemSenraja = 0, diemDima = 0;
	int left = 0, right = n - 1;
	while(left <= right){
		if(a[left] > a[right]){
			diemSenraja += a[left];
			left ++;
		}
		else if(a[right] > a[left]){
			diemSenraja += a[right];
			right --;
		}
		
		if(a[left] > a[right]){
			diemDima += a[left];
			left ++;
		}
		else if(a[right] > a[left]){
			diemDima += a[right];
			right --;
		}
		
	}
	cout<<diemSenraja<<" "<<diemDima;
	
	
	return 0;
}