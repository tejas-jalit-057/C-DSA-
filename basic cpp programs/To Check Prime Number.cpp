#include <iostream>
using namespace std;

int main() 
{
    
    int n = 30;
    int count = 0;


    if(n <= 1)
        cout << n << " Is not Prime "<< endl;
    else {
        for (int i = 1; i<= n;i++){
        if (n% i == 0)
            count++;
        }

        if (count > 2)
        cout << n <<" is Not prime. ";

        else
            cout << n << " Is Prime. ";
    
    }
    return 0;
}