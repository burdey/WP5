//
// Created by Satori on 2022/9/18.
//

#include "Map.h"

//-------------------------------------------------

int MapGeneric::f(int x){
    return x;
}

//-------------------------------------------------

int MapTriple::f(int x) {
    return 3 * x;
}

vector<int> MapTriple::map(vector<int> vec) {
    vector<int> vect;
    vect = vec;
    map(&vect, 0);
    return vect;
}

void MapTriple::map(vector<int> *vect, int i) {
    if (i<(*vect).size()){
        int value = f((*vect)[i]);
        (*vect)[i] = value;
        i = i + 1;
        map(vect, i);
    }
}

//-------------------------------------------------

int MapSquare::f(int x) {
    return x * x;
}
vector<int> MapSquare::map(vector<int> vec) {
    vector<int> vect;
    vect = vec;
    map(&vect, 0);
    return vect;
}
void MapSquare::map(vector<int> *vect, int i) {
    if (i<(*vect).size()){
        int value = f((*vect)[i]);
        (*vect)[i] = value;
        i = i + 1;
        map(vect, i);
    }
}

//-------------------------------------------------

int MapAbsoluteValue::f(int x) {
    if (x < 0){
        return -1 * x;
    }
    return x;
}

vector<int> MapAbsoluteValue::map(vector<int> vec) {
    vector<int> vect;
    vect = vec;
    map(&vect, 0);
    return vect;
}

void MapAbsoluteValue::map(vector<int> *vect, int i) {
    if (i<(*vect).size()){
        int value = f((*vect)[i]);
        (*vect)[i] = value;
        i = i + 1;
        map(vect, i);
    }
}