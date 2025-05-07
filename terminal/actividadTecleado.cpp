
#include <iostream>
using namespace std;

int main(int argc, char** argv){
    char *x=argv[1];
    int i=0;
    int contador=2;
    while(true){
        if(x[i]=='\0'){
            if(contador==argc){
                cout<<endl;
                break;
            }else{
                contador++;
            }
        };
        switch(x[i]){
            case 'a':
                cout<<22;
                break;
            case 'b':
                cout<<222;
                break;
            case 'c':
                cout<<2222;
                break;
            case 'd':
                cout<<33;
                break;
            case 'e':
                cout<<333;
                break;
            case 'f':
                cout<<3333;
                break;
            case 'g':
                cout<<44;
                break;
            case 'h':
                cout<<444;
                break;
            case 'i':
                cout<<4444;
                break;
            case 'j':
                cout<<55;
                break;
            case 'k':
                cout<<555;
                break;
            case 'l':
                cout<<5555;
                break;
            case 'm':
                cout<<66;
                break;
            case 'n':
                cout<<666;
                break;
            case 'o':
                cout<<6666;
                break;
            case 'p':
                cout<<77;
                break;
            case 'q':
                cout<<777;
                break;
            case 'r':
                cout<<7777;
                break;
            case 's':
                cout<<77777;
                break;
            case 't':
                cout<<88;
                break;
            case 'u':
                cout<<888;
                break;
            case 'v':
                cout<<8888;
                break;
            case 'w':
                cout<<99;
                break;
            case 'x':
                cout<<999;
                break;
            case 'y':
                cout<<9999;
                break;
            case 'z':
                cout<<00;
                break;
            case '\0':
                cout<<" ";
                break;
            default:
                cout<<x[i];
                break; 
        }
        i++;
    }
}