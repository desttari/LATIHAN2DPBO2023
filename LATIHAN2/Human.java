// class untuk NIK, NAMA, JK
public class Human { // public agar bebas diakses
  private String NIK;
  private String nama;
  private String jk;

  // Konstruktor
  public Human(String NIK, String nama, String jk) {
    this.NIK = NIK;
    this.nama = nama;
    this.jk = jk;
  }

  // Print NIK, NAMA, JK
  public void display() {
    System.out.println("NIK           : " + NIK);
    System.out.println("Nama          : " + nama);
    System.out.println("Jenis kelamin : " + jk);
  }

  // getter setter
  public String getNIK() { return NIK; }
  public void setNIK(String NIK) { this.NIK = NIK; }

  public String getNama() { return nama; }
  public void setNama(String nama) { this.nama = nama; }

  public String getJk() { return jk; }
  public void setJk(String jk) { this.jk = jk; }
}