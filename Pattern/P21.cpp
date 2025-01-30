#include <iostream>
using namespace std;

//         A 
//       A B
//     A B C
//   A B C D
// A B C D E

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    for ( int i =1; i<=n ; i++){
        
        // print space
        for ( int j = 1; j <= n-i ; j++){
            cout <<  "  " ;
        }
        // print stars
        for ( char name ='A'; name <= 'A' +(i-1); name++){
            cout << name << " "  ;
        }
        cout << endl;
    }

    return 0;
}