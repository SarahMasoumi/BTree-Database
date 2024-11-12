//
// Created by Sarah Masoumi.
//

#include "Record.h"

void Record::print() {
    for (int i = 0; i < c; i++) cout << F[i]->represent() << ' ';
    cout << endl;
}