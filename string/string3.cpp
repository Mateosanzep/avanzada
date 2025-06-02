#include <iostream>
#include <string>
using namespace std;

int main(){
    string nombre;
    cout<<"Introduce tu nombre: \n";
    getline(cin, nombre);
    
    for(int i = 0; i < nombre.length(); i++){
        nombre[i] = toupper(nombre[i]);
    }
    cout<<nombre<<endl;
    
    return 0;
}