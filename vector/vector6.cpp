#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Alumno{
    public:
        string nombre;
        float calif_objetos;
        float calif_avanzada;
        Alumno(string n, float co, float ca){
            nombre = n;
            calif_objetos = co;
            calif_avanzada = ca;
        }

};

int main(){
    vector<string> nombres = {"Mateo", "Gallo", "Juan", "Maria", "Jose", "Santi"};
    vector<Alumno> alumnos;
    srand(50771708);
    for(auto n: nombres){
        alumnos.push_back(Alumno(n, rand()%100, rand()%100));
    }

    sort(alumnos.begin(), alumnos.end(), [](Alumno a, Alumno b){return a.calif_objetos < b.calif_objetos;});

    for(auto a: alumnos){
        cout<<a.nombre<<" "<<a.calif_objetos<<" "<<a.calif_avanzada<<endl;
    }


}
