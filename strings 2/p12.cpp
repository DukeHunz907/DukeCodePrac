//Write a C++ program that receives two words and prints out the word that comes first in alphabetical order. Use `for` loop to solve this problem. 
#include <iostream>
using namespace std;
int main() {
    cout << "Enter 2 words" << endl;
    string n1, n2;
    cin >> n1 >> n2;
    if (n1[0] < n2[0]) {
        cout << n1 << endl;
    }else {
        cout << n2 << endl;
    }
    
}