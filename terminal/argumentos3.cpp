#include <iostream>
using namespace std;

void instrucciones(){
    cout<<"para usar el programa debes ingresar dos numeros"<<endl;
}

int main(int argc, char** argv){
    if(argc!=3){
        instrucciones();
        exit(1);
    }
    int x,y;
    x=atoi(argv[1]);
    y=atoi(argv[2]);
    cout<<x+y<<endl;
}