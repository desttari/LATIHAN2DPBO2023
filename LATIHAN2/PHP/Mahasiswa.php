<?php
require_once 'C:/xampp/htdocs/DPBO/PRAK/LATIHAN2/SivitasAkademik.php';
//nganak dari sivitasakademik
class Mahasiswa extends SivitasAkademik {
  private $NIM;
  private $fakultas;
  private $prodi;
    //constructor
  public function __construct($NIK, $nama, $jk, $universitas, $email,
                              $NIM, $fakultas, $prodi) {
    parent::__construct($NIK, $nama, $jk, $universitas, $email);
    $this->NIM = $NIM;
    $this->fakultas = $fakultas;
    $this->prodi = $prodi;
  }

  //methode menampilkan isi mahasiswa
  public function display() {
    //ambil display methode dari parent
    parent::display();
    echo "NIM           : " . $this->NIM . "<br>";
    echo "Fakultas      : " . $this->fakultas . "<br>";
    echo "Program studi : " . $this->prodi . "<br>";
  }
  //getter setter
  public function getNIM() { return $this->NIM; }
  public function setNIM($NIM) { $this->NIM = $NIM; }

  public function getFakultas() { return $this->fakultas; }
  public function setFakultas($fakultas) { $this->fakultas = $fakultas; }

  public function getProdi() { return $this->prodi; }
  public function setProdi($prodi) { $this->prodi = $prodi; }
}
