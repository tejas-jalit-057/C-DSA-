#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    
    for ( int i =1; i<=n ; i++){
        for ( int j =1; j <= i ; j++){
            char name = 'a' + (j-1);
            cout << name <<" " ;
        }
        cout << endl;
    }

    return 0;
}