#include <iostream>

using namespace std;

void tukarbilangan(int& x,int& y){
    int z;
    z = x;
    x = y;
    y = z;
}

int main()
{
    int bilangan1, bilangan2;
    cout << "masukkan bil pertama: "; cin >> bilangan1;
    cout << "masukkan bil kedua: "; cin >> bilangan2;
    cout << endl;

    cout << "sebelum ditukar ()" << endl;
    cout << "nilai pertama: " << bilangan1 << endl;
    cout << "nilai kedua: " << bilangan2 << endl;

    tukarbilangan(bilangan1,bilangan2);
    cout << "sesudah ditukar" << endl;
    cout << "niali pertama: " << bilangan1 << endl;
    cout << "nilai kedua: " << bilangan2;
    return 0;
}
