
# kelas untuk variabel human, parent mahasiswa, sivitasakademik
class Human:
    # deklarasi var protected
    def __init__(self, NIK, nama, jenis_kelamin):
        self._NIK = NIK
        self._nama = nama
        self._jenis_kelamin = jenis_kelamin

    # setter getter
    def setNIK(self, NIK):
        self._NIK = NIK

    def getNIK(self):
        return self._NIK

    def setNama(self, nama):
        self._nama = nama

    def getNama(self):
        return self._nama

    def setJenisKelamin(self, jenis_kelamin):
        self._jenis_kelamin = jenis_kelamin

    def getJenisKelamin(self):
        return self._jenis_kelamin
