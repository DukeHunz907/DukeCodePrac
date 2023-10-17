#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a text containing two words: ";
    getline(cin, input);

    string word1, word2;
    bool spaceFound = false;

    for (char c : input) {
        if (c == ' ') {
            spaceFound = true;
        } else if (!spaceFound) {
            word1 += c;
        } else {
            word2 += '*';
        }
    }

    cout << "Modified text: " << word1 << " " << word2 << endl;

    return 0;
}
