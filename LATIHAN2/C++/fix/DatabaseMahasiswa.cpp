//load library
#include <iostream>
#include <string>
#include <vector>//pakai buat masukin data di vector
#include "Mahasiswa.cpp"

using namespace std;

//kelas untuk tempat data
class DatabaseMahasiswa {
//deklarasi vector buat data
private:
//ambil dari mahasiswa soalnya dia udah punya semua dr ortunya
    vector<Mahasiswa> data_mahasiswa;

public:
    //methode masukin data ke vector
     void inputData() {
        string NIM, nama, fakultas, prodi, asal_universitas, email_edu;
        string jenis_kelamin;

        cout << "Masukkan NIM: ";
        cin >> NIM;

        for (int i = 0; i < data_mahasiswa.size(); i++) {
            if (data_mahasiswa[i].getNIM() == NIM) {
                cout << "NIM sudah terdaftar dalam database." << endl;
                return;
            }
        }

        cout << "Masukkan nama: ";
        cin >> nama;

        cout << "Masukkan jenis kelamin (L/P): ";
        cin >> jenis_kelamin;

        cout << "Masukkan asal universitas: ";
        cin >> asal_universitas;

        cout << "Masukkan email institusi: ";
        cin >> email_edu;

        cout << "Masukkan fakultas: ";
        cin >> fakultas;

        cout << "Masukkan program studi: ";
        cin >> prodi;

        
        //constructor
        Mahasiswa mhs(NIM, nama, jenis_kelamin, fakultas, prodi, asal_universitas, email_edu);

        //masukin ke vector
        data_mahasiswa.push_back(mhs);

        cout << "Data berhasil ditambahkan." << endl;
    }

    //methode mengedit data berdasarkan NIM
    void editData() {
        string NIM;
        cout << "Masukkan NIM yang ingin diubah: ";
        cin >> NIM;

        for (int i = 0; i < data_mahasiswa.size(); i++) {
            if (data_mahasiswa[i].getNIM() == NIM) {
                string nama, fakultas, prodi, asal_universitas, email_edu;
                string jenis_kelamin;

                cout << "Masukkan nama baru: ";
                cin >> nama;
                data_mahasiswa[i].setNama(nama);

                cout << "Masukkan jenis kelamin baru (L/P): ";
                cin >> jenis_kelamin;
                data_mahasiswa[i].setJenisKelamin(jenis_kelamin);

                cout << "Masukkan asal universitas baru: ";
                cin >> asal_universitas;
                data_mahasiswa[i].setAsalUniversitas(asal_universitas);

                cout << "Masukkan email institusi baru: ";
                cin >> email_edu;
                data_mahasiswa[i].setEmailEdu(email_edu);

                cout << "Masukkan fakultas baru: ";
                cin >> fakultas;
                data_mahasiswa[i].setFakultas(fakultas);

                cout << "Masukkan program studi baru: ";
                cin >> prodi;
                data_mahasiswa[i].setProdi(prodi);

                

                cout << "Data berhasil diubah." << endl;
                return;
            }
        }

        cout << "NIM tidak ditemukan dalam database." << endl;
    }

    //methode hapus data berdasarkan nim
    void hapusData() {
        string NIM;
        cout << "Masukkan NIM yang ingin dihapus: ";
        cin >> NIM;

        for (int i = 0; i < data_mahasiswa.size(); i++) {
            if (data_mahasiswa[i].getNIM() == NIM) {
                data_mahasiswa.erase(data_mahasiswa.begin() + i);
                cout << "Data berhasil dihapus." << endl;
                return;
            }
        }

        cout << "NIM tidak ditemukan dalam database." << endl;
    }

    //methode untuk menampilkan seluruh isi database 
    void tampilData() {
        if (data_mahasiswa.size() == 0) {
            cout << "Tidak ada data." << endl;
            return;
        }

        // Mencari panjang string maksimum dari setiap kolom pada data_mahasiswa
        int max_nim = 3, max_nama = 4, max_jk = 13, max_fakultas = 8, max_prodi = 5, max_asal_universitas = 5, max_email_edu = 14;
        for (int i = 0; i < data_mahasiswa.size(); i++) {
            if (data_mahasiswa[i].getNIM().length() > max_nim) {
                max_nim = data_mahasiswa[i].getNIM().length();
            }
            if (data_mahasiswa[i].getNama().length() > max_nama) {
                max_nama = data_mahasiswa[i].getNama().length();
            }
            if (data_mahasiswa[i].getJenisKelamin().length() > max_jk) {
                max_jk = data_mahasiswa[i].getJenisKelamin().length();
            }
            if (data_mahasiswa[i].getFakultas().length() > max_fakultas) {
                max_fakultas = data_mahasiswa[i].getFakultas().length();
            }
            if (data_mahasiswa[i].getProdi().length() > max_prodi) {
                max_prodi = data_mahasiswa[i].getProdi().length();
            }
            if (data_mahasiswa[i].getAsalUniversitas().length() > max_asal_universitas) {
                max_asal_universitas = data_mahasiswa[i].getAsalUniversitas().length();
            }
            if (data_mahasiswa[i].getEmailEdu().length() > max_email_edu) {
                max_email_edu = data_mahasiswa[i].getEmailEdu().length();
            }
        }

        // Menampilkan header tabel
        cout << "=======================================================================================================================================================" << endl;
        cout << "| NIM" << string(max_nim - 3, ' ') << " | Nama" << string(max_nama - 4, ' ') << " | Jenis Kelamin" << string(max_jk - 13, ' ') << " | Fakultas" << string(max_fakultas - 8, ' ') << " | Program Studi" << string(max_prodi - 5, ' ') << " | Asal Universitas" << string(max_asal_universitas - 5, ' ') << " | Email Institusi" << string(max_email_edu - 14, ' ') << " |" << endl;
        cout << "=======================================================================================================================================================" << endl;

        // Menampilkan isi tabel
        for (int i = 0; i < data_mahasiswa.size(); i++) {
            cout << "| " << data_mahasiswa[i].getNIM() << string(max_nim - data_mahasiswa[i].getNIM().length(), ' ')
            << " | " << data_mahasiswa[i].getNama() << string(max_nama - data_mahasiswa[i].getNama().length(), ' ')
            << " | " << data_mahasiswa[i].getJenisKelamin() << string(max_jk - data_mahasiswa[i].getJenisKelamin().length(), ' ')
            << " | " << data_mahasiswa[i].getFakultas() << string(max_fakultas - data_mahasiswa[i].getFakultas().length(), ' ')
            << " | " << data_mahasiswa[i].getProdi() << string(max_prodi - data_mahasiswa[i].getProdi().length(), ' ')
            << " | " << data_mahasiswa[i].getAsalUniversitas() << string(max_asal_universitas - data_mahasiswa[i].getAsalUniversitas().length(), ' ')
            << " | " << data_mahasiswa[i].getEmailEdu() << string(max_email_edu - data_mahasiswa[i].getEmailEdu().length(), ' ') << " |" << endl;
        }

        // Menampilkan tutups tabel
        cout << "======================================================================================================================================================================================================" << endl;
    }
};
