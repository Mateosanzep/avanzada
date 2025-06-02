#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v = {9, 52, 83, 54, 19, 94, 64, 72};
    for (auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    reverse(v.begin(), v.end());
    for (auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end(), greater<int>());
    for (auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
}
