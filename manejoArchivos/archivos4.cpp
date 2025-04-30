#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream ofile("numero.bin", fstream::binary);
    int x=127;
    ofile.write((char *)&x, sizeof(int));
    ofile.close();
    return 0;
}