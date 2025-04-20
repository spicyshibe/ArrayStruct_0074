#include <iostream>
using namespace std;

struct DetailAlamat
{
    string kota;
    string provinsi;

};

struct Mahasiswa
{
    string nama;
    string nim;
    DetailAlamat alamat;

};

int main()
{
    //membuat object struct dalam array
    Mahasiswa mhs[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "mahasiswa ke- " << i + 1 << endl;
        cout << "masukkan nim = ";
        cin >> mhs[i].nim;
        cout << "Masukkan Nama = ";
        cin >> mhs[i].nama;
        cout << "Masukkan kota = ";
        cin >> mhs[i].alamat.kota;
        cout << "Masukkan provinsi = ";
        cin >> mhs[i].alamat.provinsi;
        cin.ignore();

    }
    cout << endl;
    cout << "Menampilkan data" << endl;
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "mahasiswa ke -" << i + 1 << endl;
        cout << "NIM = " << mhs[i].nim << endl;
        cout << "Nama = " << mhs[i].nama << endl;
        cout << "Kota = " << mhs[i].alamat.kota << endl;
        cout << "Provinsi = " << mhs[i].alamat.provinsi << endl;

    }
    
}