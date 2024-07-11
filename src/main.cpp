//LIBRERIAS
#include <iostream>
#include <fstream>
#include <string>
#include "../src/controller/fileOperations.cpp"
#include "../src/class/tree/tree.cpp"
using namespace std;

int main()
{   
    //CREAMOS ARCHIVO Y LO ABRIMOS

    ifstream file_tree, file_brothers; 
    openFile(file_tree,"../assets/dataTree.csv");
    openFile(file_brothers, "../assets/dataBrothers.csv");

    //CREAMOS ESTRUCTURA Y GUARDAMOS LOS DATOS DE LA FAMILIA Y LOS HERMANOS

    string header_tree; getline(file_tree,header_tree); //retenemos encabezado
    string header_brother; getline(file_brothers,header_brother); //retenemos encabezado


    Persona persona_tree[11], persona_brother[8]; int num_person_tree, num_person_brother;
    saveData(file_tree,persona_tree, num_person_tree);
    saveData(file_brothers,persona_brother, num_person_brother);

    return 0;
}
