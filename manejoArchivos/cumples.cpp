#include <iostream>
#include <fstream> //Libreria para leer de archivos
#include <string>
#include <filesystem>
#include <algorithm>
#include <vector>
#include <chrono>
using namespace std;
namespace fs = std::filesystem;
using namespace std::chrono;

struct info {
    string nombre;
    vector<int> dates;
};

int main(){
    vector<info> infoVec;
    int i = 0;
    fs::path dirPath = "./cumples"; // Current directory (you can change this)

        for (const fs::directory_entry& entry : fs::directory_iterator(dirPath)) {
            ifstream fin(entry.path()); //declaro que quiero leer de este archivo con esta funcion
            info p;
            string name;
            int dia, mes, ano;
            getline(fin, name);
            fin>>dia>>mes>>ano;
            p.nombre = name;
            p.dates = {dia, mes, ano};
            infoVec.push_back(p);
            fin.close();
            
        }
        sort(infoVec.begin(), infoVec.end(), [](const info& a, const info& b) {
            if (a.dates[2] != b.dates[2])
                return a.dates[2] > b.dates[2];
            if (a.dates[1] != b.dates[1])
                return a.dates[1] > b.dates[1];
            if (a.dates[0] != b.dates[0])
                return a.dates[0] > b.dates[0];
            return a.nombre < b.nombre;
    });
        // for(const fs::directory_entry& entry : fs::directory_iterator(dirPath)){
        //     cout<<infoVec[i].nombre<<endl;
        //     cout<<infoVec[i].dates[0]<<"/"<<infoVec[i].dates[1]<<"/"<<infoVec[i].dates[2]<<endl;
        //     i++;
        // }
        cout<<"El mas grande es: "<<endl<<infoVec.back().nombre<<endl<<infoVec.back().dates[0]<<"/"<<infoVec.back().dates[1]<<"/"<<infoVec.back().dates[2]<<endl;
        cout<<"El mas chico es: "<<endl<<infoVec.front().nombre<<endl<<infoVec.front().dates[0]<<"/"<<infoVec.front().dates[1]<<"/"<<infoVec.front().dates[2]<<endl;
        int mesDeseo = 0;
        cout<<"Ingrese el mes que buscas: ";
        cin>>mesDeseo;
        cout<<"Los que cumplen el mes "<<mesDeseo<<" son: "<<endl;
        for (struct info i : infoVec) {
            if (i.dates[1] == mesDeseo) {
                cout<<i.nombre<<endl<<i.dates[0]<<"/"<<i.dates[1]<<"/"<<i.dates[2]<<endl;
            }
        }
        // Obtener la fecha actual
    auto ahora = system_clock::now();
    auto fecha = floor<days>(ahora);
    year_month_day ymd = year_month_day{fecha};

    unsigned int dia = static_cast<unsigned>(ymd.day());
    unsigned int mes = static_cast<unsigned>(ymd.month());
    

    sort(infoVec.begin(), infoVec.end(), [](const info& a, const info& b) {
        if (a.dates[1] != b.dates[1])
            return a.dates[1] < b.dates[1]; 
        return a.dates[0] < b.dates[0];     
    });

bool encontrado = false;
    for (const auto& persona : infoVec) {
        int mesCumple = persona.dates[1];
        int diaCumple = persona.dates[0];

        if (mesCumple > mes || (mesCumple == mes && diaCumple >= dia)) {
            cout << "El cumpleaños más próximo es:"<<endl;
            cout << persona.nombre << endl;
            cout << persona.dates[0] << "/" << persona.dates[1] << "/" << persona.dates[2] << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
    const auto& persona = infoVec.front();
    cout << "El cumpleaños más próximo es:\n";
    cout << persona.nombre << endl;
    cout << persona.dates[0] << "/" << persona.dates[1] << "/" << persona.dates[2] << endl;
    }
        

    return 0;
    }
