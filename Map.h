//
// Created by Satori on 2022/9/18.
//

#ifndef WP5_MAP_H
#define WP5_MAP_H

#include <iostream>
#include <vector>
using namespace std;

/**
* MapGeneric class is a base class contains
* virtual function as public and a private function.
*/

class MapGeneric{
private:
    int f(int x){
        return x;
    }
public:
    virtual vector<int> map(vector<int> vec) = 0;
};

/**
* MapSquare a sub class derived from MapGeneric
* This contains a private overridden function f
* that returns the square of the number.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function maps all the given vector list and
* returns a new vector list of square values of the
* orginal list.
*/


class MapSquare : public MapGeneric{
private:
    int f(int x){
        return x * x;
    }
public:
    void map(vector<int> *v, int i){
        if (i <(*v).size()){
            int value = f((*v)[i]);
            (*v)[i] = value;
            i = i + 1;
            map(v, i);
        }
    }

    vector<int> map(vector<int> vec){
        vector<int> v;
        v = vec;
        map(&v, 0);
        return v;
    }
};

/**
* MapTriple a sub class derived from MapGeneric
* This contains a private overridden function f
* that returns the triple value of the number.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function maps all the given vector list and
* returns a new vector list of triple the values of the
* orginal list.
*/


class MapTriple : public MapGeneric
{
private:
    int f(int x){
        return 3 * x;
    }

public:
    void map(vector<int> *v, int i){
        if (i <(*v).size()){
            int value = f((*v)[i]);
            (*v)[i] = value;
            i = i + 1;
            map(v, i);
        }
    }

    vector<int> map(vector<int> vec){
        vector<int> v;
        v = vec;
        map(&v, 0);
        return v;
    }
};

/**
* MapAbsoluteValue a sub class derived from MapGeneric
* This contains a private overridden function f
* that returns the absolute value of the number.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function maps all the given vector list and
* returns a new vector list of absolute values of the
* orginal list.
*/


class MapAbsoluteValue : public MapGeneric{
private:
    int f(int x){
        if (x < 0){
            return -1 * x;
        }
        return x;
    }
public:
    void map(vector<int> *v, int i){
        if (i <(*v).size()){
            int value = f((*v)[i]);
            (*v)[i] = value;
            i = i + 1;
            map(v, i);
        }
    }
    vector<int> map(vector<int> vec){
        vector<int> v;
        v = vec;
        map(&v, 0);
        return v;
    }
};

#endif //WP5_MAP_H
