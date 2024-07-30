#include <iostream>
#include <string>
#include <chrono>
using namespace std;
struct mahasiswa
    {
        string nim;
        string nama;
        string alamat;
        float ipk; 
    };
int main() {
    
    mahasiswa doni;

    doni.nim="c03240001";
    doni.nama="doni ajah";
    doni.alamat="Jl. Selesai Sekarang No.14";
    doni.ipk=3.7;

    cout << doni.nim<<"\n";
    cout << doni.nama<<"\n";
    cout << doni.alamat<<"\n";
    cout << doni.ipk<<"\n";
}