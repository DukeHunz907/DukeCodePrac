#include <iostream>
using namespace std;

int main() {
int num = 1;          
int sum_of_odds = 0;  

    while (num <= 50) {
        sum_of_odds += num;  
        num += 2;            
    }

    cout << "The sum of all odd numbers from 1 to 50 is: " << sum_of_odds << "\n";





}
