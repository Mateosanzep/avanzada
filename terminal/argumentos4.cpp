#include <iostream>
using namespace std;

int main(int argc, char** argv){
    char *x=argv[1];
    for(int i=0;i<20;i++){
        cout<<x[i]<<endl;
    }
}