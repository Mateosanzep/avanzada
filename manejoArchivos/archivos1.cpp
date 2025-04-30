#include <iostream>
#include <fstream> //Libreria para leer de archivos
#include <string>
using namespace std;

int main(){
    ifstream fin("datos.in"); //declaro que quiero leer de este archivo con esta funcion
    string comida;
    string comida2, comida3;
    cin>>comida;
    fin>>comida2; //lee del archivo lo primero que encuenta y lo guarda en la variable comida
    fin>>comida3;
    cout<<"Me gusta la "<<comida<<endl;
    cout<<"Me gusta la "<<comida2<<endl; //imprime lo primero del archivo
    cout<<"Me gusta la "<<comida3<<endl; //imprime lo segundo del archivo
    return 0;
}