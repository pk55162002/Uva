#include<iostream>
#define MAX = 100
using namespace std;
int main(){
	int a, i, sum, ave, flag, end = 1;
	while(cin>>a){
		int b[a];
		if(a == 0)break;
		sum = 0;
		ave = 0;
		for(i = 0 ; i < a ; i++){
			cin>>b[i];
			sum += b[i];
		}
		ave = sum / a;
		flag = 0;
		for(i = 0 ; i < a ; i++){
			if(b[i] > ave){
				sum = b[i] - ave;
				flag += sum;
			}
		}
		cout<<"Set #"<<end<<endl<<"The minimum number of moves is "<<flag<<"."<<endl;
		end++;
	}
	return 0;
}
