//load library
#include <string>
#include "SivitasAkademik.cpp"
using namespace std;

//inheritance fr sivitasakademik
class Mahasiswa : public SivitasAkademik {
//private soalnya anak gk anakan lagi
private:
    string NIM;
    string fakultas;
    string prodi;

//constructor
public:
    Mahasiswa(string _NIM, string _nama, string _jenis_kelamin, string _fakultas, string _prodi, string _asal_universitas, string _email_edu) : NIM(_NIM), fakultas(_fakultas), prodi(_prodi), SivitasAkademik("", _nama, _jenis_kelamin, _asal_universitas, _email_edu) {}

    //setter getter
    void setNIM(string _NIM) {
        NIM = _NIM;
    }

    string getNIM() {
        return NIM;
    }

    void setFakultas(string _fakultas) {
        fakultas = _fakultas;
    }

    string getFakultas() {
        return fakultas;
    }

    void setProdi(string _prodi) {
        prodi = _prodi;
    }

    string getProdi() {
        return prodi;
    }
};
