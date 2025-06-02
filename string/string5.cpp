#include <iostream>
#include <string>
using namespace std;

int main(){
    string s("hola a todos");

    cout<<s.length()<<endl;
    cout<<*s.begin()<<endl;
    cout<<*s.rbegin()<<endl;
    cout<<*s.end()<<endl;

    for(auto it = s.begin(); it < s.end(); it++){
        cout<<*it;
    }
    cout<<endl;

    for(auto it = s.end(); it != s.begin()-1; it--){
        cout<<*it;
    }
    cout<<endl;
    
    
    return 0;
}