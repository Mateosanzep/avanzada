#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include <algorithm>

using namespace std;

int main(){

    ifstream ifile("que_soy.bin", fstream::binary);
    string cadena;
    getline(ifile, cadena);
    cout<<cadena<<endl;
    int largo, ancho;
    ifile>>largo>>ancho;
    cout<<largo<<endl<<ancho<<endl;
    char prim;
    ifile.get(prim);
    bitset<8> x(prim);
    cout<<x<<endl;

    for(int i=1;i<201;i++){
        char primero;
        ifile.get(primero);
        bitset<8> x(primero);
        string binaryString = x.to_string();
        string visualRepresentation = binaryString;
        replace(visualRepresentation.begin(), visualRepresentation.end(), '0', '=');
        replace(visualRepresentation.begin(), visualRepresentation.end(), '1', ' ');
        cout<<visualRepresentation;
        if(i%5==0)cout<<endl;
    }
    
    
    
    ifile.close();
    return 0;
}