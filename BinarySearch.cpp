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

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j < nPanjang - 1 - pass; j++) // Implementasi algoritma Bubble Sort untuk mengurutkan array secara ascending
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];                // Penggunaan variabel sementara untuk pertukaran nilai dalam proses pengurutan
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    } while (pass < nPanjang - 1);
}

