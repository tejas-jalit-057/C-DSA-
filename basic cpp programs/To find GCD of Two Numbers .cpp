#include <iostream>
using namespace std;

// By using Euclidean Algorithm


int main() {
    
    int num1 , num2 , i , gcd ;
    
    cout<< " Enter the first number : ";
    cin >> num1;
    cout << " Enter the second number : ";
    cin >> num2;

    for (i =1; i<= num1 && i<= num2 ; i++){
        if ( num1 % i ==0 && num2 % i == 0){
            gcd = i;
        }
    }

    cout << gcd << " is the gcd of "<< num1 << " and "<< num2;
    return 0;
}