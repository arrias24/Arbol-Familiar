#ifndef STRUCTS_H
#define STRUCTS_H

#include <iostream>
#include "../class/queve/queve.h"
using namespace std;

struct Hermano
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
};
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
    Queue<Hermano> hermanos;
};

#endif