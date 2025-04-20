#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim; 
    string alamat;

};

int main()
{
    //membuat object struct dalam array
    Mahasiswa mhs[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan nim = ";
        cin >> mhs[i].nim;
        cout << "Masukkan nama = ";
        cin >> mhs[i].nama;
        cout << "masukkan alamat = ";
        cin >> mhs[i].alamat;
    }


}