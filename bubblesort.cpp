#include <iostream>
using namespace std;

bool esMayor(int a, int b){
	if (a>b) return true;
	else return false;
}

void swap(int &a, int &b){
	int temp = b;
	b = a;
	a = temp;
}

int main(){
	int tam = 10;
	int arr[10] = {83,63,3,75,57,44,67,25,29,94};
	
	for (int i=0; i<tam; i++)
		for(int j = 0; j < tam - i - 1; j++){
			int pos1 = j;
			int pos2 = j+1;
			if (esMayor(arr[pos1], arr[pos2]))
				swap(arr[pos1], arr[pos2]);
			}
	for(int i=0; i<tam; i++)
		cout<<arr[i]<<endl;
}