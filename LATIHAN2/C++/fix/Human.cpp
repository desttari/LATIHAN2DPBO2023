//load library
#include <string>
using namespace std;

//kelas untuk variabel human, parent mahasiswa, sivitasakademik
class Human {
//deklarasi var protected
protected:
    string NIK;
    string nama;
    string jenis_kelamin;

//constructor
public:
    Human(string _NIK, string _nama, string _jenis_kelamin) : NIK(_NIK), nama(_nama), jenis_kelamin(_jenis_kelamin) {}

    //setter getter
    void setNIK(string _NIK) {
        NIK = _NIK;
    }

    string getNIK() {
        return NIK;
    }

    void setNama(string _nama) {
        nama = _nama;
    }

    string getNama() {
        return nama;
    }

    void setJenisKelamin(string _jenis_kelamin) {
        jenis_kelamin = _jenis_kelamin;
    }

    string getJenisKelamin() {
        return jenis_kelamin;
    }
    //gak pake destructor soalnya gak tau bakal mempengaruhi si anak apa engga
};
