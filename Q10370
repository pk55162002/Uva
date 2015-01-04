#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a, b, sum, ave, flag;
	cin>>a;
	while(a--){
		cin>>b;
		int c[100];
		sum = 0;
		ave = 0;
		for(int i = 0 ; i < b ; i++){
			cin>>c[i];
			sum += c[i];
		}
		ave = sum / b;
		flag = 0;
		for(int i = 0 ; i < b ; i++){
			if(c[i] > ave){
				flag++;
			}
		}	
		cout<<fixed<<setprecision(3)<<(flag/b)*100<<"%"<<endl;
	}
	return 0;
}
