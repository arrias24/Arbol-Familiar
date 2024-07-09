#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <iostream>
#include <fstream>
#include "./structs.h"
using namespace std;

void openFile(ifstream&, string);
void saveData(ifstream&, Persona, int);

#endif
