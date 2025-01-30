#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 3;

    cout<< "Before swap, a = "<< a << " b = "<<b<<endl;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout<< " After swap : a = "<<a <<" b = "<<b
    <<endl;




    return 0;
}