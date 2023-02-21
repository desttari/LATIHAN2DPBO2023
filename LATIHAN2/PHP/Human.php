<?php
//kelas human
class Human {
  private $NIK;
  private $nama;
  private $jk;

    //constructor
  public function __construct($NIK, $nama, $jk) {
    $this->NIK = $NIK;
    $this->nama = $nama;
    $this->jk = $jk;
  }
  //methode menampilkan isi variabel
  public function display() {
    echo "NIK           : " . $this->NIK . "<br>";
    echo "Nama          : " . $this->nama . "<br>";
    echo "Jenis kelamin : " . $this->jk . "<br>";
  }

  //ggetter setter
  public function getNIK() { return $this->NIK; }
  public function setNIK($NIK) { $this->NIK = $NIK; }

  public function getNama() { return $this->nama; }
  public function setNama($nama) { $this->nama = $nama; }

  public function getJk() { return $this->jk; }
  public function setJk($jk) { $this->jk = $jk; }
}
