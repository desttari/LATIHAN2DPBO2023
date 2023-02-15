// kelas sivitas anak dari human
public class SivitasAkademik extends Human {
  // delarasi variabel private untuk dalam kelas
  private String universitas;
  private String email;

  // konstruktor
  public SivitasAkademik(String NIK, String nama, String jk, String universitas,
                         String email) {
    // ambil dari ortunya
    super(NIK, nama, jk);
    this.universitas = universitas;
    this.email = email;
  }
  // prosedur print
  public void display() {
    super.display();
    System.out.println("Universitas   : " + universitas);
    System.out.println("Email         : " + email);
  }
  // getter setter
  public String getUniversitas() { return universitas; }
  public void setUniversitas(String universitas) {
    this.universitas = universitas;
  }

  public String getEmail() { return email; }
  public void setEmail(String email) { this.email = email; }
}