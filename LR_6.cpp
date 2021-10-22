
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int max = 3;
    float Y = 0;
    int x;

    cout << "Введіть значення : ";
    cin >> x;


    float i = 2;
    while (i <= max) {
        Y += pow(cos(x), 2) + log10(x) + 2;
        cout << "i= " << i << "\t" << "Y= " << Y << endl;
        i += 0.1;
    }

   
}
