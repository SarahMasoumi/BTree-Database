//
// Created by Sarah Masoumi.
//

#ifndef SQL_FIELD_H
#define SQL_FIELD_H
#include "../Type/Type.h"
#include <iostream>
using namespace std;

class Field {
    const int HASH_BASE = 619;
    const int HASH_MOD = 1e9 + 7;
public:
    Field(int _data) {
        data = to_string(_data);
        type = Type::Integer;
    }
    Field(string _data, Type _type) {
        data = _data;
        type = _type;
        validateField();
    }
    void validateField();
    int getHash();
    string represent();
    string data;
    Type type;
};


#endif //SQL_FIELD_H
