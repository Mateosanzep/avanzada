#include <iostream>
using namespace std;

int main(int argc, char** argv){
    char *x=argv[1];
    int i=0;
    while(true){
        if(x[i]=='\0') break;
        cout<<x[i]<<endl;
        i++;
    }
}