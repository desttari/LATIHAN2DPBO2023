<!DOCTYPE html>
<html>
  <head>
    <title>Daftar Mahasiswa</title>
  </head>
  <body>
    <?php
    require_once 'C:/xampp/htdocs/DPBO/PRAK/LATIHAN2/Mahasiswa.php';
    // format string untuk jarak tabel
    $format =
        "<td>%s</td><td>%s</td><td>%s</td><td>%s</td><td>%s</td><td>%s</td><td>%s</td><td>%s</td>";

    echo "<table border='1'>";
    echo "<tr><th>NIK</th><th>Nama</th><th>Jenis Kelamin</th><th>Universitas</th><th>Email</th><th>NIM</th><th>Fakultas</th><th>Program Studi</th></tr>";

    // masukan data mahasiswa 1
    $mhs1 = new Mahasiswa(
        "3201020333429910", "Destira Lestari Saraswati", "Perempuan",
        "Universitas Pendidikan Indonesia", "dest.saras29@upi.edu", "2100506",
        "FPMIPA", "Ilmu Komputer");

    // ambil tiap isi variabel trus di format jaraknya pake yg diatas trus di
    // print
    echo "<tr>" . sprintf($format, $mhs1->getNIK(), $mhs1->getNama(), $mhs1->getJk(),
                  $mhs1->getUniversitas(), $mhs1->getEmail(), $mhs1->getNIM(),
                  $mhs1->getFakultas(), $mhs1->getProdi()) . "</tr>";

    // masukan data mahasiswa 2
    $mhs2 = new Mahasiswa("3201020333878787", "Lestari Saraswati", "Perempuan",
                  "Universitas Pendidikan Indonesia", "lsw@upi.edu",
                  "2100899", "FPMIPA", "Ilmu Komputer");

    // ambil tiap isi variabel trus di format jaraknya pake yg diatas trus di
    // print
    echo "<tr>" . sprintf($format, $mhs2->getNIK(), $mhs2->getNama(), $mhs2->getJk(),
                  $mhs2->getUniversitas(), $mhs2->getEmail(), $mhs2->getNIM(),
                  $mhs2->getFakultas(), $mhs2->getProdi()) . "</tr>";

    echo "</table>";
    ?>
  </body>
</html>
