// cpylib.cpp : Определяет функции для статической библиотеки.
//
#include "cpyheader.h"
using namespace std;

string get_str(string path, int count) {
    ifstream file(path);
    file.seekg(0);
    string str;
    for (auto i = 1; i < count; i++) {
        getline(file, str);
    }
    getline(file, str);
    file.close();
    return str;
}
