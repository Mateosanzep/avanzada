#include <iostream>
#include <string>
using namespace std;

int main(){
    string b="hola";
    string c="adios";

    cout<<"SWAP"<<endl;
    b.swap(c);
    cout<<b<<endl;
    cout<<c<<endl;

    cout<<"concatenar"<<endl;
    c.append(" ").append(b);
    cout<<c<<endl;

    cout<<"tamaño"<<endl;
    cout<<c.length()<<endl;
    cout<<sizeof(c)<<endl;
    
    
    return 0;
}