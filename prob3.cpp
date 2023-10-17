#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Enter a text with multiple words: ";
    getline(cin, input);

    istringstream iss(input);
    string word;
    int index = 1;
    bool found = false;

    while (iss >> word) {
        if (word[0] == 'a' || word[0] == 'A') {
            found = true;
            break;
        }
        index++;
    }

    if (found) {
        cout << "The first word starting with 'a' is at index: " << index << endl;
    } else {
        cout << "No word starting with 'a' found." << endl;
    }

    return 0;
}
