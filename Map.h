//
// Created by Satori on 2022/9/18.
//

#ifndef WP5_MAP_H
#define WP5_MAP_H
#include <iostream>
#include <vector>
using namespace std;


class MapGeneric{
private:
    int f(int x);
public:
    virtual vector<int> map(vector<int> vec) = 0;
};


class MapSquare : public MapGeneric {
private:
    int f(int x);
public:
    vector<int> map(vector<int> vec);
    void map(vector<int> *vect, int i);
};


class MapTriple : public MapGeneric {
private:
    int f(int x);
public:
    vector<int> map(vector<int> vec);
    void map(vector<int> *vect, int i);
};


class MapAbsoluteValue : public MapGeneric{
private:
    int f(int x);
public:
    vector<int> map(vector<int> vec);
    void map(vector<int> *vect, int i);
};

#endif //WP5_MAP_H
