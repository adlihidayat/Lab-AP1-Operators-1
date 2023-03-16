#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char input[5];
    cout << "masukkan 4 angka : ";
    cin >> input;

    int a1 = input[0] - '0';
    int a2 = input[1] - '0';
    int a3 = input[2] - '0';
    int a4 = input[3] - '0';
    printf("hasil : %d", a1 + a2 + a3 + a4);

    return 0;
}