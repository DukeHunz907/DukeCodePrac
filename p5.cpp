//Create a program that takes a text input from the user and prints out the first, second, and last characters of the input.
// Example str1 = "saddleback college" , str1[0] is s,
//Istr1[1]

#include <iostream>
using namespace std;
int main () {
    string s;
    getline(cin, s);
    int x = s.length();
    cout << s[0] << " " << s[1] << " " << s[x-1] << "\n";
    


}