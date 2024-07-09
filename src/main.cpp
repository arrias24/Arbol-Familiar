//LIBRERIAS
#include <iostream>
#include <fstream>
#include <string>
#include "../src/controller/fileOperations.cpp"
using namespace std;

int main()
{   
    //CREAMOS ARCHIVO Y LO ABRIMOS

    ifstream file; 
    openFile(file,"../assets/data.csv");

    //CREAMOS ESTRUCTURA Y GUARDAMOS LOS DATOS DE LA FAMILIA

    string header; getline(file,header); //retenemos encabezado

    Persona personas[20]; int num_person;
    saveData(file,personas, num_person);

    return 0;
}
