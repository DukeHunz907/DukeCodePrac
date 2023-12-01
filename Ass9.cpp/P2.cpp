//Create a program that reads 6 integers into two separate vectors. 
//Perform element-wise addition of these two vectors and store the result in a third vector. 
//Finally, print the resulting vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vector1, vector2, resultVector;
    int num;

    cout << "Enter 6 integers, 3 for the first vector and 3 for the second vector:\n";

    cout << "First vector: ";
    for (int i = 0; i < 3; i++) {
        cin >> num;
        vector1.push_back(num);
    }

    cout << "Second vector: ";
    for (int i = 0; i < 3; i++) {
        cin >> num;
        vector2.push_back(num);
    }

    for (int i = 0; i < 3; i++) {
        resultVector.push_back(vector1[i] + vector2[i]);
    }

    cout << "Resulting vector (element-wise addition):\n";
    for (int num : resultVector) {
        cout << num << " ";
    }
    cout << endl;

}
