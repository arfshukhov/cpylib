#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <algorithm>

#include "py++.h"


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

string join(vector<string> vec, string symbol) {
    string result = "";
    for (auto elem : vec) result = result + elem + symbol;
    result.pop_back();
    return result;
}
void rstrip(string& word, char sym = ' ') {
    short len = word.length();
    for(auto i = len-1; i >= 0; i--)
    {
        if (word[i] == sym) word.pop_back();
        else  break;
    }
}

void lstrip(string& word, char sym = ' ') {
    short size = word.length();
    int count = 0;
    for (auto i = 0; i <= size; i++) {
        if (word[i] == sym) count++;
        else break;
    }
    word.erase(0, count);
}

