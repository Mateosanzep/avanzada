#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num;
    vector<int> v;
    for (int i=0;i<5;i++){
        cin>>num;
        v.push_back(num);
    }

    sort(v.begin(), v.end(), greater<int>());
    for (auto x: v){
        cout<<x<<" ";
    }

}
