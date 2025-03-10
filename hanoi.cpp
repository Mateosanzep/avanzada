#include <iostream>
using namespace std;
#define altura 5

int torres[altura];
int pisos[altura];
int alturas[3];

void mover_piedra(int,int,int);
void dibujar_piso(int);

int main(){
    torres[4]=0;
    torres[3]=0;
    torres[2]=1;
    torres[1]=1;
    torres[0]=1;

    pisos[4]=0;
    pisos[3]=1;
    pisos[2]=0;
    pisos[1]=1;
    pisos[0]=2;

    alturas[0]=2;
    alturas[1]=3;
    alturas[2]=0;

    //dibujar las torres
    for(int i=altura-1; i>=0; i--)
	    dibujar_piso(i);
    cout<<"------------------------------------------------"<<endl;
}

void dibujar_piso(int p){
	for (int j=0; j<3;j++){	
	  cout<<"\t";
	  bool dibujado=false;
	  for (int i=0; i<altura; i++)
		if (pisos[i]==p && torres[i]==j){
			cout<<i;
			dibujado=true;
		}
	  if (!dibujado)
		cout<<"-1";
	}
	cout<<endl;

}


