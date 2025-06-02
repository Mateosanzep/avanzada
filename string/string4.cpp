#include <iostream>
#include <string>
using namespace std;

int main(){
    string s("hola a todos");
    char *c = "Hola a todos";
    char c2[100] = "hola a todos";
    cout<<s.length()<<endl;
    cout<<sizeof(s)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(c2)<<endl;
    
    
    return 0;
}