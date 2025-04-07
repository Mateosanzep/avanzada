#include <iostream>
using namespace std;

//Paso por valor
int sumaUno (int x) {
	x = x + 1;
	return 0;
}

//Paso por referencia, cambia el valor pero no es seguro
int sumaUnoReferencia (int &x) {
	x = x + 1;
	return 0;
}

//Paso por apuntador, es mas seguro
int sumaUnoApuntador (int* x) {
	*x = (*x) + 1;
	return 0;
}

//Sumar uno a cada miembro del arreglo, con apuntador
int sumaUnoArregloApuntador (int* x) {
	for(int i=0; i<3; i++)
		(*(x+i))++;
	return 0;
}

//Paso por arreglo, es igual que con los apuntadores
int sumaUnoArreglo (int x[]) {
	for(int i=0; i<3; i++)
		x[i]++;
	return 0;
}

int main() {
	int a = 10;
	int* ptr;
	ptr = &a;
	
	int arr[3] = {10,20,30};
	
	sumaUno(a);
	cout<<a<<endl;
	
	sumaUnoReferencia(a);
	cout<<a<<endl;
	
	sumaUnoApuntador(ptr);
	cout<<a<<endl;
	
	sumaUnoArregloApuntador(arr);
	for(int i=0; i<3; i++)
		cout<<arr[i]<<endl;
		
	sumaUnoArreglo(arr);
	for(int i=0; i<3; i++)
		cout<<arr[i]<<endl;

	return 0;
}
