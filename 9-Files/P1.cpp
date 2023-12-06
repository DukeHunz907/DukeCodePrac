

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("output.txt");
    string s;
    getline(cin, s);
    f << s; // cout << s;
    f.close();
}
