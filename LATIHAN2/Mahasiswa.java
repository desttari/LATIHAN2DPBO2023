public class Mahasiswa extends SivitasAkademik {
  private String NIM;
  private String fakultas;
  private String prodi;

  public Mahasiswa(String NIK, String nama, String jk, String universitas,
                   String email, String NIM, String fakultas, String prodi) {
    super(NIK, nama, jk, universitas, email);
    this.NIM = NIM;
    this.fakultas = fakultas;
    this.prodi = prodi;
  }

  public void display() {
    super.display();
    System.out.println("NIM           : " + NIM);
    System.out.println("Fakultas      : " + fakultas);
    System.out.println("Program studi : " + prodi);
  }

  public String getNIM() { return NIM; }
  public void setNIM(String NIM) { this.NIM = NIM; }

  public String getFakultas() { return fakultas; }
  public void setFakultas(String fakultas) { this.fakultas = fakultas; }

  public String getProdi() { return prodi; }
  public void setProdi(String prodi) { this.prodi = prodi; }
}