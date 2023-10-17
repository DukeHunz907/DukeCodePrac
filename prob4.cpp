#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter a text with multiple words: ";
    getline(cin, input);

    istringstream iss(input);
    string lastWord, word;

    while (iss >> word) {
        lastWord = word;
    }

    if (!lastWord.empty()) {
        cout << "The last word is: " << lastWord << endl;
    } else {
        cout << "No words found." << endl;
    }

    return 0;
}
