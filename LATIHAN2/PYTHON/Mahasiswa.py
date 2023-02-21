# load library
from SivitasAkademik import SivitasAkademik

# inheritance fr SivitasAkademik


class Mahasiswa(SivitasAkademik):
    # private karena tidak perlu diwariskan lagi
    def __init__(self, NIM, nama, jenis_kelamin, fakultas, prodi, asal_universitas, email_edu):
        # ambil constructor dr parent
        super().__init__("", nama, jenis_kelamin, asal_universitas, email_edu)
        self._NIM = NIM
        self._fakultas = fakultas
        self._prodi = prodi

    # setter getter
    def setNIM(self, NIM):
        self._NIM = NIM

    def getNIM(self):
        return self._NIM

    def setFakultas(self, fakultas):
        self._fakultas = fakultas

    def getFakultas(self):
        return self._fakultas

    def setProdi(self, prodi):
        self._prodi = prodi

    def getProdi(self):
        return self._prodi
