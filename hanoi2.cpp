#include <iostream>
using namespace std;
#define altura 5
//constants for visualization
#define ALTURA 5      //number of disks
#define ANCHO_TORRE 11 //width of each tower representation
//characters for ascii drawing
const char* DISCO_BORDE = "*";
const char* DISCO_MEDIO = "o";
const char* POSTE_CARACTER = "|";
const char* BASE_CARACTER = "=";

//color codes
const char* COLOR_RESET = "\033[0m";
const char* COLOR_DISCO = "\033[1;34m"; //blue
const char* COLOR_POSTE = "\033[1;33m"; //yellow
const char* COLOR_BASE = "\033[1;31m";  //red
int torres[altura];
int pisos[altura];
int alturas[3];

void mover_piedra(int,int,int);
void mover_piramide(int,int,int,int);
void dibujar_piso(int);

int main(){
    torres[4]=0;
    torres[3]=0;
    torres[2]=0;
    torres[1]=0;
    torres[0]=0;

    pisos[4]=0;
    pisos[3]=1;
    pisos[2]=2;
    pisos[1]=3;
    pisos[0]=4;

    alturas[0]=5;
    alturas[1]=0;
    alturas[2]=0;

	while(true){
	    for(int i=altura-1; i>=0; i--)
		    dibujar_piso(i);
    	    cout<<"------------------------------------------------"<<endl;
	    
	    mover_piramide(4, 0, 2, 1);
	    if (alturas[2]==4) break;
	}
}

void mover_piedra(int i, int inicio, int fin){
	torres[i]=fin;
	alturas[inicio]--;
	pisos[i]= alturas[fin];
	alturas[fin]++;

}

void mover_piramide (int tam, int inicio, int termina, int aux){
	int tamano2 = tam -1;
	if (tam == 1) mover_piedra(tam,inicio,termina);
	mover_piramide(tamano2, inicio, aux, termina);
	mover_piedra(tam, inicio,termina);
	mover_piramide(tamano2, aux, termina, inicio);
	
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


