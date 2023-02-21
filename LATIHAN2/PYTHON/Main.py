# load library
from DatabaseMahasiswa import DatabaseMahasiswa

# construct databasemahasiswa, atau manggil mau dipake ke db
db = DatabaseMahasiswa()

# menu program
pilihan = 0
while pilihan != 5:
    print("===== SI SIAK-KAN =====")
    print("1. Input data")
    print("2. Edit data")
    print("3. Hapus data")
    print("4. Tampilkan data")
    print("5. Keluar")

    pilihan = int(input("Pilih menu: "))

    if pilihan == 1:
        db.inputData()
    elif pilihan == 2:
        db.editData()
    elif pilihan == 3:
        db.hapusData()
    elif pilihan == 4:
        db.tampilData()
    elif pilihan == 5:
        print("Dadah.")
    else:
        print("Silahkan pilih nomor pada menu.")
