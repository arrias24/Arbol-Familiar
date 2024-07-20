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

void saveDataPerosn(ifstream &file, Persona persona[], int &num_person)
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
        persona[num_person].hijo_de[0] = std::stoi(data);
        getline(stream,data,',');
        persona[num_person].hijo_de[1] = std::stoi(data);
        getline(stream,data,',');
        persona[num_person].numero_de_hermanos = std::stoi(data);
        num_person++;
    }
    file.close();
}

void saveDataBrother(ifstream &file, Hermano hermano[], int &num_hermano)
{
    num_hermano = 0;
    string line;
    while (getline(file,line,'\n'))
    {
        stringstream stream(line);
        string data;
        getline(stream,data,',');
        hermano[num_hermano].id = std::stoi(data);
        getline(stream,data,',');
        hermano[num_hermano].nombre = data;
        getline(stream,data,',');
        hermano[num_hermano].apellido = data;
        getline(stream,data,',');
        hermano[num_hermano].genero = data;
        getline(stream,data,',');
        hermano[num_hermano].edad = std::stoi(data);
        getline(stream,data,',');
        hermano[num_hermano].fecha_nacimiento = data;
        getline(stream,data,',');
        hermano[num_hermano].fecha_muerte = data;
        getline(stream,data,',');
        hermano[num_hermano].estado = data;
        getline(stream,data,',');
        hermano[num_hermano].hijo_de[0] = std::stoi(data);
        getline(stream,data,',');
        hermano[num_hermano].hijo_de[1] = std::stoi(data);
        num_hermano++;
    }
    file.close();
}

void insertBrothers(Persona persona[], Hermano hermanos[], int num_person, int num_brother)
{
   for (int i = 0; i < num_person; i++)
   {
      if (persona[i].numero_de_hermanos>0)
      {
         for (int j = 0; j < num_brother; j++)
         {
            if (persona[i].hijo_de[0]==hermanos[j].hijo_de[0] || persona[i].hijo_de[1]==hermanos[j].hijo_de[1])
            {
               persona[i].hermanos.push(hermanos[j]);
            }
         }
      }
   }
}