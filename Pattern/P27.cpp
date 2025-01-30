 #include <iostream>
using namespace std;

// *                     * 
// * *                 * *
// * * *             * * *
// * * * *         * * * *
// * * * * *     * * * * *
// * * * * * * * * * * * *
// * * * * *     * * * * *
// * * * *         * * * *
// * * *             * * *
// * *                 * *
// *                     *
int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    for ( int i = 1; i<=n ; i++){

         // print star
        for (int j = 1; j <= i; j++){  
            cout <<"* ";
        }

        // print space
        for ( int j = 1; j <= 2*n-(2*i) ; j++){
            cout <<  "  " ;
        }
        // print star
        for ( int j = 1; j <= i ; j++){
            cout <<  "* " ;
        }
        cout << endl;
    }
    for ( int i = n-1; i>=1 ; i--){
         // print star
        for (int j = 1; j <= i; j++){  
            cout <<"* ";
        }

        // print space
        for ( int j = 1; j <= 2*n-(2*i) ; j++){
            cout <<  "  " ;
        }
        // print star
        for ( int j = 1; j <= i ; j++){
            cout <<  "* " ;
        }
        cout << endl;
        
    }

    return 0;
}