// Write a C++ program that receives a 16-character string from the user and prints it as a 4x4 matrix.

#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);

    int k = 0;
    for(int row=0; row < 4; row++) {
        for(int col=0; col < 4; col++){
            cout << s[k++];
        }
        cout << endl;
    }

} 
