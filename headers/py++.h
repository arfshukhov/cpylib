using namespace std;

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <algorithm>



#ifndef _PYPP_H
#define	_PYPP_H

string readline(string, int);

vector<string> readlines(string path);

string read(string path);

string join(vector<string>, string);

void rstrip(string&, char);

void lstrip(string&, char);

template <template <typename, typename> typename Container, typename T, typename Alloc = allocator<T>>
void print(Container<T, Alloc> vec, string separator = " ") {
    for (auto i = 0; i < vec.size()-1; i++) {
        cout << vec[i] << separator;
    }
    cout << vec[vec.size() - 1];
}
#endif 
