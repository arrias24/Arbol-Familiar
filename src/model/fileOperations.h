#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <iostream>
#include <fstream>
#include "./structs.h"
#include "../class/queve/queve.h"
using namespace std;

void openFile(ifstream&, string);
void saveData(ifstream&, Persona, int);

void insertBrothers(Persona persona[], Hermano hermanos[], int num_person, int num_brother);

#endif
