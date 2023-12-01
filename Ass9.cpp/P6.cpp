//Develop a program that reads integers into a vector until 0 is entered, then counts the frequency 
//of each element and prints the elements along with their frequencies.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num;

    cout << "Enter integers (enter 0 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        numbers.push_back(num);
    }

    cout << "Element\tFrequency" << endl;
    for (int i = 0; i < numbers.size(); i++) {
        int count = 1;
        if (numbers[i] != 0) {
            for (int j = i + 1; j < numbers.size(); j++) {
                if (numbers[j] == numbers[i]) {
                    count++;
                    numbers[j] = 0;
                }
            }
            cout << numbers[i] << "\t" << count << endl;
        }
    }

}
