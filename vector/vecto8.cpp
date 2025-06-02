#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num;
    vector<int> dado1;
    for (int i=0;i<6;i++){
        cin>>num;
        dado1.push_back(num);
    }
    vector<int> dado2;
    for (int i=0;i<6;i++){
        cin>>num;
        dado2.push_back(num);
    }
    vector<int> posibles;
     while(cin>> num){
        // cin>>num;
        for (auto d1: dado1) {
        for (auto d2: dado2) {
            if (d1+d2==num && find(posibles.begin(), posibles.end(), num) == posibles.end()){

                posibles.push_back(num);
            }
        }
        }

        
    }
    sort(posibles.begin(), posibles.end());
    if (posibles.size() == 0){
        cout << 0;
    }else {

    for (auto x: posibles){
        cout<<x<<" ";
    }
    }

}
