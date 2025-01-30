#include <iostream>
using namespace std;

int reverse_num(int n){
    int rev_num = 0;
    while(n > 0){
        rev_num = rev_num* 10 + n %10;
        n = n /10;
    }
    return rev_num;
    
}
int main() {
    int n = 123456789;
    cout << " The Given number is :"<< n << endl;
    cout << " Reverse of number is : "<< reverse_num(n);

    return 0;
}