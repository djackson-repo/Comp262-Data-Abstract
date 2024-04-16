//
// Created by djackson on 9/22/2021.
//
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

#ifndef PERSONTEST_STREAMUTIL_H
#define PERSONTEST_STREAMUTIL_H



template <typename T>

    ostream& operator<< (ostream& out, const vector<T>& v)
    {
        copy ( v.begin ( ), v.end ( ), ostream_iterator<T> ( out, ", " ));
        return out;


}


#endif //PERSONTEST_STREAMUTIL_H
