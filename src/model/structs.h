#ifndef STRUCTS_H
#define STRUCTS_H

#include <iostream>
#include "../class/list/list.h"
using namespace std;
struct Persona
{
    int id;
    string nombre;
    string apellido;
    string genero;
    int edad;
    string fecha_nacimiento;
    string fecha_muerte;
    string estado;
    int hijo_de [2];
    int numero_de_hermanos;
    List<Persona> hermanos;
};

#endif