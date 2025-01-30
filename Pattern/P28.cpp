 #include <iostream>
using namespace std;

//       * 
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
// * * * * * * *
// * * * * * * *
//  * * * * * *
//   * * * * *
//    * * * *
//     * * *
//      * *
//       *
int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    for ( int i = 1; i<=n ; i++){

         // print space
        for (int j = 1; j <= n-i; j++){  
            cout <<" ";
        }

        // print star
        for ( int j = 1; j <= i ; j++){
            cout <<  "* " ;
        }
        cout << endl;
    }
    for ( int i = n; i>=1 ; i--){

         // print space
        for (int j = 1; j <= n-i; j++){  
            cout <<" ";
        }

        // print star
        for ( int j = 1; j <= i ; j++){
            cout <<  "* " ;
        }
        cout << endl;
    }


    return 0;
}