//
// Created by Satori on 2022/9/18.
//

#ifndef WP5_REDUCE_H
#define WP5_REDUCE_H
#include <iostream>
#include <vector>
using namespace std;



class ReduceGeneric{
private:
    int binaryOperator(int x, int y);
public:
    virtual int reduce(vector<int> vect) = 0;
};



class ReduceMinimum : public ReduceGeneric{
private:
    int binaryOperator(int x, int y);
public:
    int reduce(vector<int> vect);
    void reduce(vector<int> vect, int i, int *min);
};



class ReduceGCD : public ReduceGeneric{
private:
    int binaryOperator(int x, int y);
public:
    int reduce(vector<int> vect);
    void reduce(vector<int> vect, int i, int *gcdValue);
};


#endif //WP5_REDUCE_H
