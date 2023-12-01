//Create a program that reads integers into a vector until 0 is entered, then rotates the elements of 
//the vector by a given number of positions (input from the user) to the left and 
//prints the rotated vector.
//Example: 
//Input vector: 9 3 5 15 29 1 7
//Rotated by 2 to the left: 5 15 29 1 7 9 3

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num, rotateBy;

    cout << "Enter integers (enter 0 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        numbers.push_back(num);
    }

    cout << "Enter the number of positions to rotate left: ";
    cin >> rotateBy;

    int n = numbers.size();
    rotateBy %= n;

    vector<int> rotatedVector(n);
    for (int i = 0; i < n; i++) {
        int newPos = (i - rotateBy + n) % n;
        rotatedVector[newPos] = numbers[i];
    }

    cout << "Rotated vector by " << rotateBy << " positions to the left:" << endl;
    for (int num : rotatedVector) {
        cout << num << " ";
    }
    cout << endl;

}
