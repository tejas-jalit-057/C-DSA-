#include <iostream>
using namespace std;

// 7 
// 7 6
// 7 6 5
// 7 6 5 4
// 7 6 5 4 3
// 7 6 5 4 3 2
// 7 6 5 4 3 2 1

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    
    for ( int i =1; i<=n ; i++){
        for ( int j =n; j >= n-(i-1); j--){
           cout << j<< " "; 
        }
        cout << endl;
    }

    return 0;
}