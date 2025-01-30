#include <iostream>
using namespace std;
//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
// * * * * * *    

int main() {
    int n;
    cout << " Enter a Number : " ;
    cin >> n;

    // for (int i=1 ; i<= n ; i++){
    //     // print spaces
        
    //     for ( int j = 1; j <= n - i ; j++){
    //         cout << " " ;
    //     }
    //     for ( int j = 1; j <= i ; j++){
    //         cout << "* " ;
    //     }
    //     cout << endl ;
    // }

//         1 
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9

    // for (int i=1 ; i<= n ; i++){
    //     // print spaces
        
    //     for ( int j = 1; j <= n - i ; j++){
    //         cout << "  " ;
    //     }
    //     for ( int j = 1; j <= 2*i-1 ; j++){
    //         cout << j <<" ";
    //     }
    //     cout << endl ;
//     // }

//         A 
//       A B C
//     A B C D E
//   A B C D E F G
// A B C D E F G H I
    
    for (int i=1 ; i<= n ; i++){
        // print spaces
        
        for ( int j = 1; j <= n - i ; j++){
            cout << "  " ;
        }
        for (char name = 'A'; name < 'A'+2*i-1; name++){
            
            cout << name <<" ";
        }
        cout << endl ;
    }


    return 0;
}