#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    for(auto x: v){
        cout<<x<<endl;
    }
}