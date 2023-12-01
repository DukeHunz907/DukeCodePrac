//Input 9 integers into a vector and remove any duplicates, leaving only unique elements in the vector. 
//Print the modified vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    cout << "Enter 9 integers, one at a time:" << endl;

    for (int i = 0; i < 9; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    vector<int> uniqueNumbers;

    for (int num : numbers) {
        bool isUnique = true;

        for (int uniqueNum : uniqueNumbers) {
            if (num == uniqueNum) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            uniqueNumbers.push_back(num);
        }
    }

    cout << "Modified vector with unique elements:\n";
    for (int uniqueNum : uniqueNumbers) {
        cout << uniqueNum << " ";
    }
    cout << endl;

}
