#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long input, hour, minute, sec;

    cout << "masukkan detik : ";
    cin >> input;
    while (input > 0)
    {

        if (input > 3600)
        {
            hour = input / 3600;
            input = input - (hour * 3600);
        }
        else if (input > 60)
        {
            minute = input / 60;
            input = input - (minute * 60);
        }
        else if (input <= 60)
        {
            sec = input;
            input = input - sec;
        }
    };

    printf("hasil : %02d:%02d:%02d", hour, minute, sec);

    return 0;
}