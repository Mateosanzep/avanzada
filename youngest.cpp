#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <filesystem>

namespace fs = std::filesystem;

// Structure to hold person's data
struct Person {
    std::string name;
    std::vector<int> birthdate; // {dd, mm, yy}
};

// Function to compare dates
bool is_younger(const std::vector<int>& date1, const std::vector<int>& date2) {
    if (date1[2] > date2[2]) return true;
    if (date1[2] < date2[2]) return false;
    if (date1[1] > date2[1]) return true;
    if (date1[1] < date2[1]) return false;
    return date1[0] > date2[0];
}

int main() {
    std::string directory_path = "manejoArchivos/cumples";
    Person youngest_person;
    youngest_person.birthdate = {0, 0, 0};

    try {
        for (const auto& entry : fs::directory_iterator(directory_path)) {
            if (entry.is_regular_file()) {
                std::ifstream file(entry.path());
                if (file.is_open()) {
                    std::string name;
                    std::string date_str;
                    std::getline(file, name);
                    std::getline(file, date_str);
                    std::vector<int> date(3);
                    std::stringstream ss(date_str);
                    char space;

                    if (ss >> date[0] >> date[1] >> date[2]) {
                        
                        if (youngest_person.birthdate[2] == 0 || is_younger(date, youngest_person.birthdate) )
                        {
                            youngest_person.name = name;
                            youngest_person.birthdate = date;
                        }
                        
                    } else {
                        std::cerr << "Error: Invalid date format in file: " << entry.path() << std::endl;
                    }
                    file.close();
                } else {
                    std::cerr << "Error: Could not open file: " << entry.path() << std::endl;
                }
            }
        }

        if (youngest_person.birthdate[2] != 0){
            std::cout << "The youngest person is: " << youngest_person.name << std::endl;
            std::cout << "Birthdate: " << youngest_person.birthdate[0] << "/"
                      << youngest_person.birthdate[1] << "/"
                      << youngest_person.birthdate[2] << std::endl;
        }
    
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Filesystem error: " << e.what() << std::endl;
    }

    return 0;
}