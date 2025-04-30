#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream ofile("resultados.txt");
    int x=10;
    int y=5;
    ofile<<x<<endl;
    ofile<<y<<endl;
    ofile<<x+y<<endl;
    ofile<<x-y<<endl;
    ofile.close();
    return 0;
}