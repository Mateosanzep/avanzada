#include <iostream>
#include <fstream> //Libreria para leer de archivos
#include <string>
using namespace std;

int main(){
    ifstream fin("canciones.in"); //declaro que quiero leer de este archivo con esta funcion
    string cancion;
    while(getline(fin, cancion)){
        cout<<cancion<<endl;
    }
    
    return 0;
}