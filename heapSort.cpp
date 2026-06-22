#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void heapify(vector <int> &a, int n, int i){
	int largest = i;
	int left = 2*i + 1;
	int right = 2*i + 2;
	if(left < n&& a[left] > a[largest]) largest = left;
	if(right < n && a[right] > a[largest]) largest = right;
	if(largest != i){
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}
	
}
void heapSort(vector <int> &a, int n){
	//Xay dung max heap
	for(int i = n/2 - 1; i >= 0; i --){
		heapify(a, n, i); 
	}
	for(int i = n - 1; i >= 0; i--){
		swap(a[i], a[0]);
		heapify(a, i, 0);
	}
}

int main(){
	int n; cin >> n;
	vector <int> a(n);
	for(int &x : a) cin >> x;
	heapSort(a, n);
	for(int x : a) cout<<x<<' ';
	
	return 0;
}