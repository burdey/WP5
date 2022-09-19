//
// Created by Satori on 2022/9/18.
//

#ifndef WP5_FILTER_H
#define WP5_FILTER_H
#include <iostream>
#include <vector>
using namespace std;


class FilterGeneric{
private:
    bool g(int value);
public:
    virtual vector<int> filter(vector<int> vec) = 0;
};


class FilterOdd : public FilterGeneric{
private:
    bool g(int x);
public:
    vector<int> filter(vector<int> vec);
    void filter(vector<int> vec, int i, vector<int> *vect);
};


class FilterNonPositive : public FilterGeneric{
private:
    bool g(int x);
public:
    vector<int> filter(vector<int> vec);
    void filter(vector<int> vec, int i, vector<int> *vect);
};


class FilterForTwoDigitPositive : public FilterGeneric{
private:
    bool g(int x);
public:
    vector<int> filter(vector<int> vec);
    void filter(vector<int> vec, int i, vector<int> *vect);
};


#endif //WP5_FILTER_H
