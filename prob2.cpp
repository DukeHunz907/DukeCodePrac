#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter a text: ";
    getline(cin, input);

    string abbreviation = "";

    istringstream iss(input);
    string word;

    while (iss >> word) {
        abbreviation += word[0];
    }

    cout << "Abbreviation: " << abbreviation << endl;

    return 0;
}
