#include <iostream>
#include <string>
#include <sstream>
#include "../model/structs.h"
#include "../model/fileOperations.h"

using namespace std;

void openFile(ifstream& file, string directory)
{
    file.open(directory);
    if(!file.is_open()){cout<<"[ERROR] - La ruta del archivo es incorrecta."<<endl; exit(1);}
}

void saveData(ifstream& file, Persona persona[], int& num_person)
{
    num_person = 0;
    string line;
    while (getline(file,line,'\n'))
    {
        stringstream stream(line);
        string data;
        getline(stream,data,',');
        persona[num_person].id = std::stoi(data);
        getline(stream,data,',');
        persona[num_person].nombre = data;
        getline(stream,data,',');
        persona[num_person].apellido = data;
        getline(stream,data,',');
        persona[num_person].genero = data;
        getline(stream,data,',');
        persona[num_person].edad = std::stoi(data);
        getline(stream,data,',');
        persona[num_person].fecha_nacimiento = data;
        getline(stream,data,',');
        persona[num_person].fecha_muerte = data;
        getline(stream,data,',');
        persona[num_person].estado = data;
        getline(stream,data,',');
        persona[num_person].hijo_de = std::stoi(data);
        num_person++;
    }
    file.close();
}