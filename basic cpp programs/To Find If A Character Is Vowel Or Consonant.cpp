#include <iostream>
using namespace std;


// create a funtion
void vowelorconsonent( char x){
    if ( x=='a' || x == 'e' || x =='i'|| x=='o'|| x=='u')
    cout << "Vowel ";
    else
    cout<< "Consonent ";

}
int main() {
    vowelorconsonent('k');
    vowelorconsonent('e');
    return 0;
}