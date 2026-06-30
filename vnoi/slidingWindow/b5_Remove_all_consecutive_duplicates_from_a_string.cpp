// Given a string s , we have to remove all the consecutive 
// duplicate characters of the string and return the resultant string. 
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);
int main(){
	faster;
	//mainCode
	string s;
	cin >> s;
	cin.ignore();
	int n = s.size();
	string res;
	res.push_back(s[0]);
	for(int i = 1; i < n ; i++){
		if(s[i] != s[i-1]){
			res.push_back(s[i]);
		}
	}
	cout<<res;

	
	
	return 0;
}