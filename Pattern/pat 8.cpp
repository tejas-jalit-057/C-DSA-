#include <iostream>
using namespace std;

int main() 
{   
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for ( int i =1; i<=n ; i++){
       
        // for space
        for ( int j =1 ;j< i; j++){
            cout << "  ";
        }

        // for star
        for (int j=1; j<= 2*(n - i +1) - 1 ;j++){
            cout<< "* ";
        }

        cout<< endl;
    }

    return 0;
}