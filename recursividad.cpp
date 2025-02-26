//funcion recursiva: funcion que se llama a si misma
//necesita detenerse

#include <iostream>
using namespace std;

int f(int); //Sumatoria
int f2(int); //Potencias
int f3(int); //Factorial
int f4(int); //Fibonacci

int main(){
	cout<< f(10)<<endl;
	cout<<f2(0)<<endl;
	cout<<f3(5)<<endl;
	cout<<f4(45)<<endl;
	
	return 0;
}

int f(int i){
	if(i==0) return 0;
	return i + f(i-1);
}

int f2(int i){
	if(i==0) return 1;
	return 3 * f2(i-1);
}

int f3(int i){
	if(i==0) return 1;
	return i * f3(i-1);
}

int f4(int i){
	if(i==1) return 1;
	if(i==2) return 1;
	return f4(i-1) + f4(i-2);
}