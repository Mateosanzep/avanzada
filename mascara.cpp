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

int prenderVariosBits(int x){//usa la mascara para prender los bits en esa posicion
	return x|(0b10101010);
}

int cambiarVariosBits(int x){//apaga o prende los bits en cierta posicion
	return  x^(0b1010100);
}

int apagaTodosParesBits(int x){//apaga todo los bits en las posiciones pares usando la mascara
	return x&(0x55555555);//equivale en hex a bits (0101) y lo contrario es 0xAA (1010)
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

	cout<<prenderVariosBits(x)<<endl;

	cout<<cambiarVariosBits(x)<<endl;

	cout<<apagaTodosParesBits(x)<<endl;
	
	return 0;
}