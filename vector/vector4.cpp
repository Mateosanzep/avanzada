#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    v.pop_back(); //quita el ultimo elemento
    v.push_back(12); //añade al final
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}