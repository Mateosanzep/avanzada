#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream ofile("numero2.bin", fstream::binary);
    int x=1025;
    ofile.write((char *)&x, sizeof(int));
    ofile.close();

    ifstream ifile("numero2.bin", fstream::binary);
    int y;
    ifile.read((char *)&y, sizeof(int));
    cout<<y<<endl;
    ifile.close();
    return 0;
}