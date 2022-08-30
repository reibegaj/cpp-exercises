#include <iostream>
using namespace std;

int main(){

    int x = 0;
    int y;
    while (x == 0) {
        cout << "Please give a number different than 5: \n";
        cin >> y;
        if (y == 5){
            cout << "Hey, you weren't supposed to enter 5! \n";
            break;
        }
        else {

        };
    };
}
