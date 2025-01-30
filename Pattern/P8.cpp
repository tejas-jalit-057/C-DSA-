#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    
    for ( int i = 1 ; i<= n ; i++){
        
        for ( char j = 'a' ; j <= 'e' ; j++){
            char name = 'a' + (i - 1);
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}