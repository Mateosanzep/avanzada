#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int x;
    char c;
    using bin8 = bitset<8>;
    using bin16 = bitset<16>;
    using bin64 = bitset<64>;

    c = 'A';
    c=0b01000001;
    c=0x42;
    cout<<(bin8)c<<endl;

    x=0;
    cout<<(bin16)x<<endl;

    x=1025;
    cout<<(bin16)x<<endl;

    x=-1;
    cout<<(bin16)x<<endl;



    return 0;
}