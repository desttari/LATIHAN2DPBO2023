public class Main {
  public static void main(String[] args) {
    // format string untuk jarak tabel
    String format =
        "| %-16s | %-30s | %-15s | %-40s | %-25s | %-8s | %-10s | %-20s |%n";
    System.out.format(
        "+------------------+--------------------------------+-----------------+------------------------------------------+---------------------------+----------+------------+----------------------+%n");
    System.out.format(format, "NIK", "Nama", "Jenis Kelamin", "Universitas",
                      "Email", "NIM", "Fakultas", "Program Studi");
    System.out.format(
        "+------------------+--------------------------------+-----------------+------------------------------------------+---------------------------+----------+------------+----------------------+%n");

    // masukan data mahasiswa 1
    Mahasiswa mhs1 = new Mahasiswa(
        "3201020333429910", "Destira Lestari Saraswati", "Perempuan",
        "Universitas Pendidikan Indonesia", "dest.saras29@upi.edu", "2100506",
        "FPMIPA", "Ilmu Komputer");

    // ambil tiap isi variabel trus di format jaraknya pake yg diatas trus di
    // print
    System.out.format(format, mhs1.getNIK(), mhs1.getNama(), mhs1.getJk(),
                      mhs1.getUniversitas(), mhs1.getEmail(), mhs1.getNIM(),
                      mhs1.getFakultas(), mhs1.getProdi());

    // masukan data mahasiswa 1
    Mahasiswa mhs2 =
        new Mahasiswa("3201020333878787", "Lestari Saraswati", "Perempuan",
                      "Universitas Pendidikan Indonesia", "lsw@upi.edu",
                      "2100899", "FPMIPA", "Ilmu Komputer");

    // ambil tiap isi variabel trus di format jaraknya pake yg diatas trus di
    // print
    System.out.format(format, mhs2.getNIK(), mhs2.getNama(), mhs2.getJk(),
                      mhs2.getUniversitas(), mhs2.getEmail(), mhs2.getNIM(),
                      mhs2.getFakultas(), mhs2.getProdi());

    System.out.format(
        "+------------------+--------------------------------+-----------------+------------------------------------------+---------------------------+----------+------------+----------------------+%n");
  }
}
