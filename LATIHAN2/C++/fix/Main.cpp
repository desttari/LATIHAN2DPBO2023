//load library
#include "DatabaseMahasiswa.cpp"
#include <iostream>

using namespace std;

int main() {

    //construct databasemahasiswa, atau manggil mau dipake
    DatabaseMahasiswa db;

    //menu program
    int pilihan;
    do {
        cout << "===== SI SIAK-KAN =====" << endl;
        cout << "1. Input data" << endl;
        cout << "2. Edit data" << endl;
        cout << "3. Hapus data" << endl;
        cout << "4. Tampilkan data" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                db.inputData();
                break;
            case 2:
                db.editData();
                break;
            case 3:
                db.hapusData();
                break;
            case 4:
                db.tampilData();
                break;
            case 5:
                cout << "Dadah." << endl;
                break;
            default:
                cout << "Silahkan pilih nomor pada menu." << endl;
                break;
        }
    } while (pilihan != 5);

    return 0;
}
