#include <iostream>
using namespace std;

int main() {
    int n = 12343;
    int t = n;
    int rev = 0;

    while(t>0){
        int rev = rev * 10 + t % 10;
        t = t / 10;
    }
    
    if ( n == rev)
        cout << "Palindrome";
    else
        cout << " Not Palindrome";
    return 0;
}