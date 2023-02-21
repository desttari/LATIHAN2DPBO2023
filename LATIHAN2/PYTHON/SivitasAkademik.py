# load library
from Human import Human

# kelas SivitasAkademik anak dari kelas Human


class SivitasAkademik(Human):
    # deklarasi var protected
    def __init__(self, NIK, nama, jenis_kelamin, asal_universitas, email_edu):
        # ambil dari parent
        super().__init__(NIK, nama, jenis_kelamin)
        self._asal_universitas = asal_universitas
        self._email_edu = email_edu

    # setter getter
    def setAsalUniversitas(self, asal_universitas):
        self._asal_universitas = asal_universitas

    def getAsalUniversitas(self):
        return self._asal_universitas

    def setEmailEdu(self, email_edu):
        self._email_edu = email_edu

    def getEmailEdu(self):
        return self._email_edu
