# load library
from Mahasiswa import Mahasiswa

# kelas untuk tempat data


class DatabaseMahasiswa:
    # deklarasi list buat data
    def __init__(self):
        self.data_mahasiswa = []

    # methode masukin data ke vector
    def inputData(self):
        NIM = input("Masukkan NIM: ")

        for i in range(len(self.data_mahasiswa)):
            if self.data_mahasiswa[i].getNIM() == NIM:
                print("NIM sudah terdaftar dalam database.")
                return

        nama = input("Masukkan nama: ")
        jenis_kelamin = input("Masukkan jenis kelamin (L/P): ")
        asal_universitas = input("Masukkan asal universitas: ")
        email_edu = input("Masukkan email institusi: ")
        fakultas = input("Masukkan fakultas: ")
        prodi = input("Masukkan program studi: ")

        # constructor
        mhs = Mahasiswa(NIM, nama, jenis_kelamin, fakultas,
                        prodi, asal_universitas, email_edu)

        # masukin ke list
        self.data_mahasiswa.append(mhs)

        print("Data berhasil ditambahkan.")

    # methode mengedit data berdasarkan NIM
    def editData(self):
        NIM = input("Masukkan NIM yang ingin diubah: ")

        for i in range(len(self.data_mahasiswa)):
            if self.data_mahasiswa[i].getNIM() == NIM:
                nama = input("Masukkan nama baru: ")
                self.data_mahasiswa[i].setNama(nama)

                jenis_kelamin = input("Masukkan jenis kelamin baru (L/P): ")
                self.data_mahasiswa[i].setJenisKelamin(jenis_kelamin)

                asal_universitas = input("Masukkan asal universitas baru: ")
                self.data_mahasiswa[i].setAsalUniversitas(asal_universitas)

                email_edu = input("Masukkan email institusi baru: ")
                self.data_mahasiswa[i].setEmailEdu(email_edu)

                fakultas = input("Masukkan fakultas baru: ")
                self.data_mahasiswa[i].setFakultas(fakultas)

                prodi = input("Masukkan program studi baru: ")
                self.data_mahasiswa[i].setProdi(prodi)

                print("Data berhasil diubah.")
                return

        print("NIM tidak ditemukan dalam database.")

    # methode hapus data berdasarkan nim
    def hapusData(self):
        NIM = input("Masukkan NIM yang ingin dihapus: ")
        for i in range(len(self.data_mahasiswa)):
            if (self.data_mahasiswa[i].getNIM() == NIM):
                self.data_mahasiswa.pop(i)
                print("Data berhasil dihapus.")
                return
        print("NIM tidak ditemukan dalam database.")

    # methode untuk menampilkan seluruh isi database
    def tampilData(self):
        if (len(self.data_mahasiswa) == 0):
            print("Tidak ada data.")
            return

        # Mencari panjang string maksimum dari setiap kolom pada data_mahasiswa
        max_nim = 3
        max_nama = 4
        max_jk = 13
        max_fakultas = 8
        max_prodi = 5
        max_asal_universitas = 5
        max_email_edu = 14
        for i in range(len(self.data_mahasiswa)):
            if (len(self.data_mahasiswa[i].getNIM()) > max_nim):
                max_nim = len(self.data_mahasiswa[i].getNIM())
            if (len(self.data_mahasiswa[i].getNama()) > max_nama):
                max_nama = len(self.data_mahasiswa[i].getNama())
            if (len(self.data_mahasiswa[i].getJenisKelamin()) > max_jk):
                max_jk = len(self.data_mahasiswa[i].getJenisKelamin())
            if (len(self.data_mahasiswa[i].getFakultas()) > max_fakultas):
                max_fakultas = len(self.data_mahasiswa[i].getFakultas())
            if (len(self.data_mahasiswa[i].getProdi()) > max_prodi):
                max_prodi = len(self.data_mahasiswa[i].getProdi())
            if (len(self.data_mahasiswa[i].getAsalUniversitas()) > max_asal_universitas):
                max_asal_universitas = len(
                    self.data_mahasiswa[i].getAsalUniversitas())
            if (len(self.data_mahasiswa[i].getEmailEdu()) > max_email_edu):
                max_email_edu = len(self.data_mahasiswa[i].getEmailEdu())

        # Menampilkan header tabel
        print("=======================================================================================================================================================")
        print("| NIM" + " " * (max_nim - 3) + " | Nama" + " " * (max_nama - 4) + " | Jenis Kelamin" + " " * (max_jk - 13) + " | Fakultas" + " " * (max_fakultas - 8) +
              " | Program Studi" + " " * (max_prodi - 5) + " | Asal Universitas" + " " * (max_asal_universitas - 5) + " | Email Institusi" + " " * (max_email_edu - 14) + " |")
        print("=======================================================================================================================================================")

        # Menampilkan isi tabel
        for i in range(len(self.data_mahasiswa)):
            print("| " + self.data_mahasiswa[i].getNIM() + " " * (max_nim - len(self.data_mahasiswa[i].getNIM()))
                  + " | " + self.data_mahasiswa[i].getNama() + " " *
                  (max_nama - len(self.data_mahasiswa[i].getNama()))
                  + " | " + self.data_mahasiswa[i].getJenisKelamin() + " " * (
                    max_jk - len(self.data_mahasiswa[i].getJenisKelamin()))
                  + " | " + self.data_mahasiswa[i].getFakultas() + " " *
                  (max_fakultas - len(self.data_mahasiswa[i].getFakultas()))
                  + " | " + self.data_mahasiswa[i].getProdi() + " " *
                  (max_prodi - len(self.data_mahasiswa[i].getProdi()))
                  + " | " + self.data_mahasiswa[i].getAsalUniversitas() + " " * (
                    max_asal_universitas - len(self.data_mahasiswa[i].getAsalUniversitas()))
                  + " | " + self.data_mahasiswa[i].getEmailEdu() + " " * (max_email_edu - len(self.data_mahasiswa[i].getEmailEdu())) + " |")

        # Menampilkan tutups tabel
        print("======================================================================================================================================================================================================")
