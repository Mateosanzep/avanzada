#include <iostream>
#include <string>

using namespace std;


int main(){
	string num1 = "";
	string num2 = "";
	string num1nuevo = "";

	
	cin>>num1>>num2;
	
	for(int i=2; i>=0; i--){
		num1nuevo += num1[i];
		
	}
	cout<<num1nuevo;
	
	return 0;
}