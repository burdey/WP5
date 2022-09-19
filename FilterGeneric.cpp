//
// Created by Satori on 2022/9/18.
//

#include "FilterGeneric.h"

bool FilterGeneric::g(int value) {
    return 0;
}

//-------------------------------------------------

bool FilterOdd::g(int x) {
    return (x % 2) != 0;
}

vector<int> FilterOdd::filter(vector<int> vec) {
    vector<int> vect;
    int i = 0;
    filter(vec, i, &vect);
    return vect;
}

void FilterOdd::filter(vector<int> vec, int i, vector<int> *vect) {
    if (i < (vec).size()){
        bool oddFlag = g((vec)[i]);
        if (oddFlag){
            (*vect).push_back((vec)[i]);
        }
        i = i + 1;
        filter(vec, i, vect);
    }
}

//-------------------------------------------------

bool FilterNonPositive::g(int x) {
    return x < 0;
}

vector<int> FilterNonPositive::filter(vector<int> vec) {
    vector<int> vect;
    int i = 0;
    filter(vec, i, &vect);
    return vect;
}

void FilterNonPositive::filter(vector<int> vec, int i, vector<int> *vect) {
    if (i < (vec).size()){
        bool oddFlag = g((vec)[i]);
        if (oddFlag){
            (*vect).push_back((vec)[i]);
        }
        i = i + 1;
        filter(vec, i, vect);
    }
}

//-------------------------------------------------

bool FilterForTwoDigitPositive::g(int x) {
    if ((x > 9 && x < 100) && x != -x){
        return true;
    }
    else{
        return false;
    }
}

vector<int> FilterForTwoDigitPositive::filter(vector<int> vec) {
    vector<int> vect;
    int i = 0;
    filter(vec, i, &vect);
    return vect;
}

void FilterForTwoDigitPositive::filter(vector<int> vec, int i, vector<int> *vect) {
    if (i < (vec).size()){
        bool twoDigitPosFlag = g((vec)[i]);
        if (twoDigitPosFlag){
            (*vect).push_back((vec)[i]);
        }
        i = i + 1;
        filter(vec, i, vect);
    }
}

