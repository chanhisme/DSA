//You are given an array of non-negative integers and a target sum. 
//Your task is to find a contiguous subarray whose sum is the maximum possible, 
//while ensuring that it does not exceed the given target sum.
//Note: The given array contains only non-negative integers.

#include <iostream>
#include <vector>
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);

int myMax(int currMax, int pivot){
	if(pivot > currMax) currMax = pivot;
	return currMax;
}

int main(){
	faster;
	//mainCode
	int n, k; cin >> n >> k;
	vector <int> a(n);
	for(int &x : a) cin >> x;
	int sum = 0;
	long long currMax = -10e9;
	int l = 0, r = 0;
	while(r < n){
		sum += a[r];
		r++;
		while(sum > k){
			sum -= a[l];
			l++;
		}
		currMax = myMax(currMax, sum);
	}
	cout<<currMax;
	
	
	return 0;
}