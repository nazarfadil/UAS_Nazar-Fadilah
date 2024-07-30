#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int nilai[5];
    //int nilai[5] = {34,56,63,77,98};
    for (int i=0; i<5; i++)
    {
        cout << "masukkan data ke-" << i+1 <<":";
        cin >> nilai[i];
    }
    cout << "\n\n";
    for (int i=0; i<5; i++)
    {
        cout << "array dengan index ["<<i<<"] bernilai : "<<nilai[i] << "\n";
    }

    return 0;
}
