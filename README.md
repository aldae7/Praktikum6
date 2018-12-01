# Praktikum6

**Program membuat nilai menjadi ditukar dengan passing //parameter by reference// **

**Alur Program :**
1. kita harus mengimplementasikan tukarbilangan dengan fungsi ```void``` dengan code ``` void tukarbilangan(int& x,int& y) ```
2. mendeklarasikan fungsi ```void``` 
3. Kemudian kita mendeklarasikan fungsi utama utk memanggil fungsi ```void``` kemudian di deklarasikan fungsi utamanya.
4. Kemudian memanggil fungsi ```void``` dan dideklarasikan.
5. dan di akhiri dengan return karna fungsi kedua adalah non-void.

**Code Prgram :**

``` c++

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

```

**Hasil screenshoot Program :**

![img](https://raw.githubusercontent.com/aldae7/Praktikum6/master/nilaitukar.png)