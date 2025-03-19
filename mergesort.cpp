#include <iostream>
using namespace std;

void sort(int* a, int* b, int tam){
	sort(a, b, tam/2);
	sort(a+tam/2, b, tam/2);
	merge(a, b, tam/2);
}

int main(){
	int arr[10] = {83,63,3,75,57,44,67,25,29,94};
	int resultado[10];
	
	sort(arr, resultado, 10);
	for(int i=0; i<10; i++)
		cout<<arr[i]<<endl;
}