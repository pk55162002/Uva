#include<iostream>
using namespace std;

int main(){
	int num, i, j, k, l, m, n, a, f;
	while(cin>>num){
		for(i = 1 ; i <= num ; i++){
			cin>>a>>f;
			for(j = 1 ; j <= f ; j++){
				for(k = 1 ; k <= a ; k++){
					for(l = 1 ; l <= k ; l++){
						cout<<k;
					}
					cout<<endl;
				}
				for(m = a - 1 ; m > 0 ; m--){
					for(n = a - 1 ; n >= a - m ; n--){
						cout<<m;
					}
					cout<<endl;
				}
				cout<<endl;
			}
		}
	}
} 
