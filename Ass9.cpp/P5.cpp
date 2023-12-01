//Write a program that reads integers into a vector until 0 is entered, then calculates and prints 
//the average and variance of the elements in the vector.

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

    double sum = 0.0;
    for (int num : numbers) {
        sum += num;
    }
    double average = sum / numbers.size();

    double variance = 0.0;
    for (int num : numbers) {
        double diff = num - average;
        variance += diff * diff;
    }
    variance /= numbers.size();

    cout << "Average: " << average << endl;
    cout << "Variance: " << variance << endl;

}
