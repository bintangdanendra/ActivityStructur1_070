#include <iostream>
using namespace std; 

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    int umur;
}; 


int main() {
    mahasiswa mhs, mhs2;

    mhs.nim = "20210140019";
    mhs.umur = 20;
    mhs.nama = "Ardian Mulya";
    mhs.alamat = "Wonosobo";

    cout << "Masukkan NIM : ";
    cin >> mhs2.nim;
    cout << "Masukkan Umur : ";
    cin >> mhs2.umur;
    cout << "Masukkan Nama : ";
    cin >> mhs2.nama;
    cout << "Masukkan Alamat : ";
    cin >> mhs2.alamat;

    cout << "NIM : " << mhs.nim;
    cout << "\nUmur : " << mhs.umur;
    cout << "\nNama : " << mhs.nama;
    cout << "\nAlamat : " << mhs.alamat;

    cout << "\n\nNIM : " << mhs2.nim;
    cout << "\nUmur : " << mhs2.umur;
    cout << "\nNama : " << mhs2.nama;
    cout << "\nAlamat : " << mhs2.alamat;

} 