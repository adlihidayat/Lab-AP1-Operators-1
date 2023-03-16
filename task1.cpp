#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int input, result;

    cout << "masukkan 4 digit angka : ";
    cin >> input;

    result = (((input + 8) / 3) % 5) * 5;

    printf("hasil : %d", result);

    return 0;
}