#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e+7 + 1;
bool nt[maxn];

void sang(){
	for(int i = 2; i <= maxn; i++){
		nt[i] = true;
	}
	
	for(int i =2; i <= sqrt(maxn); i++){
		if(nt[i]){
			for(int j = i*i; j <= maxn; j+=i ){
				nt[j] = false;
				
			}
		}
	}
}
int main(){
	int so;
	cin >> so; 
	sang();
	for( int i = 2; i<=so; i++){
		if(nt[i]) {
			cout << i << " ";
		}
	}
	
	return 0;
}
	
	
	

