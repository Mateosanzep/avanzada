#include <iostream>
#include <fstream> //Libreria para leer de archivos
#include <string>
#include <filesystem>
#include <vector>
using namespace std;
namespace fs = std::filesystem;

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
        for(const fs::directory_entry& entry : fs::directory_iterator(dirPath)){
            if(infoVec[i].dates)
            i++;
        }
    
    return 0;
}