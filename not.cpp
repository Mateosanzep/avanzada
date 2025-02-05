#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int x;
    using bin16 = bitset<16>;

    x=108;
    x=~x;


    cout<<(bin16)x<<endl;



    return 0;
}