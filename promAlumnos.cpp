#include <iostream>

using namespace std;

int main(){
    int casos = 0;
    int aluSci = 0;
    int aluEco = 0;
    cin>>casos;

    while(casos>=1){
        cin>>aluSci>>aluEco;
        int caliSci[aluSci];
        for(int i=0;i<aluSci;i++){
            cin>>caliSci[i];
        }
        int caliEco[aluEco];
        for(int i=0;i<aluEco;i++){
            cin>>caliEco[i];
        }
        float promSci;
        for(int i=0;i<aluSci;i++){
            promSci = promSci + caliSci[i];
        }
        promSci = promSci/aluSci;

        float promEco=0;
        for(int i=0;i<aluEco;i++){
            promEco = promEco + caliEco[i];
        }
        promEco = promEco/aluEco;
        cout<<promEco<<endl<<promSci;
    }
}