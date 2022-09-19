//
// Created by Satori on 2022/9/18.
//

#include "Reduce.h"

int ReduceGeneric::binaryOperator(int x, int y) {
    return 0;
}

//-------------------------------------------------

int ReduceMinimum::binaryOperator(int x, int y) {
    if (x < y){
        return x;
    }
    else{
        return y;
    }
}

int ReduceMinimum::reduce(vector<int> vect) {
    int minVal = vect[0], i = 0;
    reduce(vect, i, &minVal);
    return minVal;
}

void ReduceMinimum::reduce(vector<int> vect, int i, int *min) {
    if (i < (vect).size()){
        *min = binaryOperator(*min, vect[i]);
        i = i + 1;
        reduce(vect, i, min);
    }
}

//-------------------------------------------------

int ReduceGCD::binaryOperator(int x, int y) {
    if (x == 0){
        return y;
    }
    return binaryOperator(y % x, x);
}

int ReduceGCD::reduce(vector<int> vect) {
    int gcd = vect[0], i = 0;
    reduce(vect, i, &gcd);
    return gcd;
}

void ReduceGCD::reduce(vector<int> vect, int i, int *gcdValue) {
    if (i < (vect).size()){
        *gcdValue = binaryOperator(*gcdValue, vect[i]);
        i = i + 1;
        reduce(vect, i, gcdValue);
    }
}


