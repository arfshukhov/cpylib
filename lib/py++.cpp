#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <algorithm>

#include "py++.h"

using namespace std;

string readline(string path, int count) {
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

vector<string> readlines(string path) {
    vector<string>lines = {};

    ifstream file(path);
    file.seekg(0);

    string line;

    while (!file.eof()) {
        getline(file, line);
        lines.push_back(line);
    }
    return lines;
}

string read(string path) {
    auto file = readlines(path);
    string lines = join(file, "\n");
    return lines;
}

string join(vector<string> vec, string symbol) {
    string result="";
    for (string elem : vec) result = result + elem + symbol;
    result.pop_back();
    return result;
}

void writeline(string line);

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

/*template <template <typename, typename> typename Container, typename T, typename Alloc = allocator<T>>
void print(Container<T, Alloc> vec, string separator = ' ') {
    for (auto i = 0; i < vec.size(); i++) {
        cout << vec[i] << separator;
    }
    cout << vec[vec.size() - 1];
}*/
