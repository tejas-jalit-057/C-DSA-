#include <iostream>
using namespace std;

int main() {
    int a = 1, b =3, c= 4;

    if(a>= b && a>=c)
    cout << a;

    else if ( b>= a && b>=c)
    cout <<  b;

    else
    cout << c;

    return 0;
}