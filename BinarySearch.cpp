#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true) // Validasi input untuk memastikan panjang array tidak melebihi batas maksimal
    {
        cout << "Masukkan banyaknya element pada array (maksimal 10): ";
        cin >> nPanjang;
        
        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah element tidak boleh lebih dari 10. Silakan coba lagi.\n"; // Menambahkan pesan error untuk input yang tidak valid
        }
    }
    
    cout << "\n==================================\n";
    cout << "       Masukkan element Array      \n";
    cout << "===================================\n";

    for (int i = 0; i < nPanjang; i++) // Menambahkan loop untuk input elemen array dari pengguna
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}

