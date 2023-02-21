//load library
#include <string>
#include "Human.cpp"
using namespace std;

//kelas sivitasakademik anak dari kelas human
class SivitasAkademik : public Human {
//deklarasi var protected
protected:
    string asal_universitas;
    string email_edu;

public:
    //constructor
    SivitasAkademik(string _NIK, string _nama, string _jenis_kelamin, string _asal_universitas, string _email_edu) : Human(_NIK, _nama, _jenis_kelamin), asal_universitas(_asal_universitas), email_edu(_email_edu) {}

    //setter getter
    void setAsalUniversitas(string _asal_universitas) {
        asal_universitas = _asal_universitas;
    }

    string getAsalUniversitas() {
        return asal_universitas;
    }

    void setEmailEdu(string _email_edu) {
        email_edu = _email_edu;
    }

    string getEmailEdu() {
        return email_edu;
    }
    //gak pake destructor soalnya gak tau bakal mempengaruhi si anak apa engga
};
