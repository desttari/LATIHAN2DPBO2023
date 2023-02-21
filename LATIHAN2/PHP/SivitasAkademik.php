<?php
require_once 'C:/xampp/htdocs/DPBO/PRAK/LATIHAN2/Human.php';
//anak dari human
class SivitasAkademik extends Human {
  private $universitas;
  private $email;

    //construct
  public function __construct($NIK, $nama, $jk, $universitas, $email) {
    parent::__construct($NIK, $nama, $jk);
    $this->universitas = $universitas;
    $this->email = $email;
  }

    //methode print 
  public function display() {
    parent::display();//print parent
    echo "Universitas   : " . $this->universitas . "<br>";
    echo "Email         : " . $this->email . "<br>";
  }

    //getter setter
  public function getUniversitas() { return $this->universitas; }
  public function setUniversitas($universitas) { $this->universitas = $universitas; }

  public function getEmail() { return $this->email; }
  public function setEmail($email) { $this->email = $email; }
}
