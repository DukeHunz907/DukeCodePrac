//Multiplication Table: Create a C++ program that uses nested loops to print a multiplication table from 1 to 10, similar to the following format:
1x1=1     1x2=2 ...      1x10=10
2x1=2     2x2=4 ...      2x10=20
#include<iostream>
using namespace std;
int main () {
    int i = 1;
    int j = 1;
    while (j <= 10) {
        i = 1;
          while (i <= 10) {
        cout << j << " X " << i << " = " << j * i << "  ";
        i++;
    }


    }
   
    }
    



 i++
