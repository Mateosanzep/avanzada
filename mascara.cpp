#include <iostream>
#include <bitset>

using namespace std;

bool estaPrendido (int x, int pos){ //Retornara un 0 o un 1 si el bit esta predido
	
    	return (x&(1<<(pos-1)))!=0;
	}
	
int prenderBit (int x, int pos){ //Prende un bit en la posicion especificada
	return (x|(1<<(pos-1)));
}

int cambiarBit(int x, int pos){ //Apaga o prende el bit, si esta apagado lo prende y si esta prendido lo apaga
	return (x^(1<<(pos-1)));
}

int apagarBit(int x,int pos){ //Apaga un bit en especifico
	return (x&~(1<<(pos-1)));
}

int main (){
	//Se usan las mascaras para saber si estan prendidos los bits
    int x=13;
    int mask = -1;
    int n = 2;
    int m = 7;

    int y = 1<<(n-1)&x; //Si el resultado es == 0 el bit en esa posision esta apagado, pero si sale algo diferente entonces esta prendido

    cout << (x&mask)<<endl; 
    cout<<y<<endl;
    
	cout<<estaPrendido(x,n)<<endl;
	
	cout<<prenderBit(x,m)<<endl;
	
	cout<<cambiarBit(x,n)<<endl;
	
	cout<<apagarBit(x,n)<<endl;
	
	return 0;
}