#include <iostream>
using namespace std;

void possiblebonus(int, int);

int main() {
    int yourPosition;
    int friendsPosition;

    cout << "Enter your position: ";
    cin >> yourPosition;
    cout << "Enter your friend's position: ";
    cin >> friendsPosition;

    possiblebonus(yourPosition, friendsPosition);

}

void possiblebonus(int a, int b)
 {
    int distance = b - a;
    if (distance >= 1 && distance <= 6)
     {
        cout << "true" << endl;  
     } 
    else 
     {
        cout << "false" << endl; 
     }
}