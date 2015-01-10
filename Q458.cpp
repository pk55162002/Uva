#include<iostream>
using namespace std;

int main(){
	char c;
	int i;
	while(1){
		cin.get(c);
		if(cin.fail())break;
		if(c > 0x20 && c < 0x7E){
			c -= 7;	
		}
		cout<<c;
	}
	return 0;
} 
