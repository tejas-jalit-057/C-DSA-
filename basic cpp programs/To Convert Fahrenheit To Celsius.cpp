#include <iostream>
using namespace std;

// T(°C) = (T(°F) - 32) × 5/9
// create a funtion 
float conversion(float n){
    return (n- 32.0)* 5 / 9;
}
int main() {
    float n = 5;
    
    cout << conversion(n);

    return 0;
}