#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char input[6];
    cout << "masukkan 6 angka : ";
    cin >> input;

    int a1 = (input[0] - '0') + 2;
    int a2 = (input[1] - '0') + 2;
    int a3 = (input[2] - '0') + 2;
    int a4 = (input[3] - '0') + 2;
    int a5 = (input[4] - '0') + 2;
    int a6 = (input[5] - '0') + 2;
    printf("hasil : %d%d%d%d%d%d", a1, a2, a3, a4, a5, a6);

    return 0;
}