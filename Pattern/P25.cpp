#include <iostream>
using namespace std;

// * * * * * * * * * 
//   * * * * * * *
//     * * * * *
//       * * *
//         *
        
int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    for ( int i = 1; i<=n ; i++){

         // print space
        for (int j = 1; j <= i-1; j++){  
        cout <<"  ";
        }

        // print stars
        for ( int j = 1; j <= 2*n-(2*i-1) ; j++){
            cout <<  "* " ;
        }
        cout << endl;
    }

    return 0;
}