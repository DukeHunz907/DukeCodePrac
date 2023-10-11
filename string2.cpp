//Singular Reverse: Write a program that reverses each word in a given text string that has two words separated by a space character.
//For example, if the input is "hello world" the program should output "olleh dlrow"
#include <iostream>
using namespace std;
int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    string r = "";
    int i = 0;
    while(i < s1.length() and i < s2.length()) {
        r = s1[i], s2[i] + r;
        i++;

    }
    cout << r << endl;
}