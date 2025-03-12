/*
	Arreglos:
	-memoria contigua
	-mismo tipo de dato
	-tam def
	-modificabla
	-accede por indice
	-index = 0

	Indice       Base
	#1 0 120      120 + 0(4)
	#2 1 124      120 + 1(4)
	#3 2 128      120 + 2(4)


	Apuntadores:
	int x; valor
	int *y;  direccio de memoria
	
            referecia      desreferencia
             &x       x    *x
	int x    0x120   16   error
	int *y   ox140   0x120   16
	
	0x120   x   16
	0x140   y   0x120
	
*/
#include <iostream>
using namespace std;

int main(){
	int x=17;
	int &y = x;
	int *p;
	int arr[5] = {10,20,30,40,50};
	
	p = &x;
	*p = 18;
	
	cout<<x<<endl;
	cout<<&x<<endl;
	
	cout<<y<<endl;
	cout<<&y<<endl;
	
	cout<<p<<endl;
	cout<<*p<<endl;
	
	cout<<arr<<endl;
	cout<<*arr<<endl;
	cout<<*(arr+4)<<endl;
	
	return 0;
}