#include <iostream>
#include <string>
using namespace std;

int main(){
    string frase = "el arbol de manzana da manzanas";
    string palabra = "manzana";

    int x = frase.find(palabra);
    cout<<x<<endl;

    x = frase.find(palabra, x+1);
    cout<<x<<endl;

    string nueva = "pera";
    frase.replace(frase.find(palabra), palabra.length(), nueva);
    frase.replace(frase.find(palabra), palabra.length(), nueva);
    cout<<frase<<endl;
    
    return 0;
}