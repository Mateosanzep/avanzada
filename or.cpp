#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int x, y, z;
    using bin16 = bitset<16>;

    x=108;
    y=28;

    z=x|y;
    cout<<z<<endl;



    return 0;
}