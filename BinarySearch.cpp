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

void display()
{
    cout << "\n==================================\n";
    cout << "    element Array Setelah Diurutkan (Asc)    \n";
    cout << "==================================\n";
    
    for (int j = 0; j < nPanjang; j++) // Menampilkan hasil pengurutan array dengan format panah untuk visualisasi urutan
    {
        cout << element[j];
        if (j < nPanjang - 1)
        {
            cout << " -> ";
        }
    }
    cout << endl;
}

void binarySearch()
{
    char ulang;
    do
    {
        cout << "\n==================================\n";
        cout << "         Pencarian Binary Search         \n";
        cout << "==================================\n";
        cout << "Masukkan element yang ingin dicari: ";
        cin >> x;
        
        int low = 0;              // Inisialisasi variabel low dan high untuk algoritma Binary Search
        int high = nPanjang - 1;
        
        do
        {
            int mid = (low + high) / 2; // Menghitung indeks tengah untuk membagi array menjadi dua bagian
            if (element[mid] == x)
            {
                cout << "\n[+] element " << x << " ditemukan pada indeks " << mid << ".\n";
                return;
            }
            if (x < element[mid])
            {
                high = mid - 1;
            }
            if (x > element[mid])
            {
                low = mid + 1;
            }
        } while (low <= high);
        
        if (low > high)
        {
            cout << "\n[!] element " << x << " tidak ditemukan di dalam array.\n";
        }
        cout << "\nIngin mencari lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');
}

int main()
{
    input();
    bubbleSortArray();
    display();
    binarySearch();
}