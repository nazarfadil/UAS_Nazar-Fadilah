#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <vector>

using namespace std;
using namespace chrono;

int main() {
      vector<string> loading = {"/", "-", "\\", "|"};
    for (int i = 0; i < 100; i++) {
        for (string s : loading) {
            cout << "\rHarap tunggu masih Loading... " << s;
            system("cls");
            this_thread::sleep_for(milliseconds(100));
        }
    }
    
    // Print output

    string message = "\nHello World\nNama = Nazar Fadilah\nNIM  = C030323145\nKelas TI 2A\nJurusan Teknik Elektro Prodi D3 Teknik Informatika\nSaya lulusan MA MIFTAHUL ULUM Tamban Catur km.20\n";
    for (char c : message) {
        cout << c;
        this_thread::sleep_for(milliseconds(100)); 
    }

    return 0;
}
