#include <iostream>
using namespace std;
#include "mate.h"
#include "constantes.h"

double pedirUnNumero(){
    double a;
    cin>>a;
    return a;
}

double pedirDosNumeros(){
    double a;
    double b;
    double arr[2]={a,b};
    cin>>a>>b;
    return arr[2];
}

int escogerOperacion(){
    int opcion;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Area de un circulo"<<endl;
    cout<<"4. Area de un rombo"<<endl;
    cin>>opcion;
    return opcion;
}

void mostrarResultado(int opcion){
    if(opcion==1){
        cout<<"Resultado: "<<suma(pedirDosNumeros())<<endl;
    }
    else if(opcion==2){
        cout<<"Resultado: "<<resta(pedirDosNumeros())<<endl;
    } else if(opcion==3){
        cout<<"Resultado: "<<areaCirculo(pedirUnNumero(), pi)<<endl;
    } else if(opcion==4){
        cout<<"Resultado: "<<areaRombo(pedirDosNumeros())<<endl;
    }
}