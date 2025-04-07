#include <iostream>
#include <utility>
using namespace std;
#include "mate.h"
#include "constantes.h"

double pedirUnNumero(){
    double a;
    cin>>a;
    return a;
}

pair<double, double> pedirDosNumeros() {
  double a;
  double b;
  cin >> a >> b;
  return make_pair(a, b);
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
        pair<double, double> num = pedirDosNumeros();
        cout << "Resultado: " << suma(num.first, num.second) << endl;
    }
    else if(opcion==2){
        pair<double, double> num = pedirDosNumeros();
        cout << "Resultado: " << resta(num.first, num.second) << endl;
    } else if(opcion==3){
        double num = pedirUnNumero();
        cout<<"Resultado: "<<areaCirculo(num)<<endl;
    } else if(opcion==4){
        pair<double, double> num = pedirDosNumeros();
        cout << "Resultado: " << areaRombo(num.first, num.second) << endl;
    }
}
