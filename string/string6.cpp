#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string s("hola a todos");

    istringstream palabras(s);

    string x;
    while(getline(palabras, x, ' ')){
        cout<<x<<" : "<<x.length()<<endl;
    }
    
    
    return 0;
}