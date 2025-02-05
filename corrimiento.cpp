#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int x;
    using bin16 = bitset<16>;

    x=6;


    cout<<(bin16)(x<<2)<<endl;



    return 0;
}