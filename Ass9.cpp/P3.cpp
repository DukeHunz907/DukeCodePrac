//Write a program that reads integers into two separate vectors until 0 is entered for each, 
//then finds and prints the common elements (intersection) between these vectors.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vector1, vector2, intersection;
    int num;

    cout << "Enter integers for the first vector (enter 0 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        vector1.push_back(num);
    }

    cout << "Enter integers for the second vector (enter 0 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        vector2.push_back(num);
    }

    for (int num1 : vector1) {
        for (int num2 : vector2) {
            if (num1 == num2) {
                intersection.push_back(num1);
                break;
            }
        }
    }

    cout << "Common elements (intersection):" << endl;
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

}
