#include <iostream>
using namespace std;

        // 1 2 3 4 5 6 
        // 1 2 3 4 5
        // 1 2 3 4
        // 1 2 3
        // 1 2
        // 1

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    
    for ( int i =1; i<=n ; i++){
        for ( int j =1; j <= n-(i-1) ; j++){
           cout <<  j << " "; 
        }
        cout << endl;
    }
    return 0;
}