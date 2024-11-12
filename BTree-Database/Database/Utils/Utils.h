//
// Created by Sarah Masoumi.
//

#ifndef SQL_UTILS_H
#define SQL_UTILS_H


#include "../Type/Type.h"
#include "../Operator/Operator.h"
#include <iostream>
using namespace std;

Type convertStringToType(string s);

Operator convertStringToOperator(string s);
Operator withEqual(Operator op);
bool checkOperator(Operator op, int a, int b);
bool isAscending(Operator op);
bool isDescending(Operator op);

#endif //SQL_UTILS_H
