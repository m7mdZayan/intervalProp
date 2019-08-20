#include <iostream>

using namespace std;

int main()
{
    double x = 0;
    cin >> x;
    if ( 0 < x < 100){
        if ( 0 <x < 25 ){
            cout << " Intervalo [0,25] " << endl;
        }
        else if (25 < x < 50 ){
            cout << " Intervalo (25,50] " << endl;

        }
        else if ( 50 < x < 75){
            cout << " Intervalo [50,75] " << endl;

        }
        else if (75 < x < 100){
            cout << " Intervalo [75,100] " << endl;

        }
    }
    else {
        cout << " Fora de intervalo " << endl;
    }
    return 0;
}
