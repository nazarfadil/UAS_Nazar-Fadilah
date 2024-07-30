#include <iostream>

    using namespace std;
        float LSegitiga(float alas, float tinggi);
        void cetak();
        //penggunaan parameter untuk memasukkan data
        //kedalam variabelsegi lokal suatu
        //fungsi atauopun procedure

        int main() {
            system("cls");
            cetak();
            return 0;
            }

        void cetak() {
            cout <<"Hello word"<< endl;
            cout <<"luas segitiga : "<<LSegitiga(7,5);
            }

        float LSegitiga(float alas,float tinggi){
            float luas =(alas*tinggi)/2;
                return luas;
                }
