#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a text ";
    getline(cin, s);
    string r = "";
    int i = 0;
    while (i < s.length()) {
          r = s[i] + r;
          i++;

    }
   cout << r << endl;
       

}