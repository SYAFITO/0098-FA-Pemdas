#include <iostream>
using namespace std;

class Matakuliah
{
private:
   float presensi;
   float activity;
   float exercise;
   float TugasAkhir;
   

public:
    Matakuliah()
    {
        presensi=0,0;
        activity=0,0;
        exercise=0,0;
        TugasAkhir=0,0;

    }
    virtual void namaMatakuliah() {return; }
    virtual void inputnilai() {}
    virtual void hitungNilaiAkhir() {return; }
    virtual void cekKelulusan() {}

    void setPresensi(float nilai)
    {
        this->presensi = nilai;
    }
    float getPresensi()
    {
        return presensi;
    }
    void setActivity(float nilaiActivity)
    {
        this->activity = nilaiActivity;
    }
    float getActivity()
    {
        return activity;
    }
    void setExercise(float nilaiExercise)
    {
        this->exercise = nilaiExercise;
    }
    float getExercise()
    {
        return exercise;
    }
    void setTugasAkhir(float nilaiTugasAkhir)
    {
        this->TugasAkhir = nilaiTugasAkhir;
    }
    float getTugasakhir()
    {
        return TugasAkhir;
    }

// tambahkan setter dan getter lain yang dibutuhkan dibawah ini
};

class Pemrograman : public Matakuliah
{
public:
     void namaMataKuliah() {
    cout << "Pemrograman" << endl;
}

void inputNilai() {
    cout << "Masukkan nilai Presensi : ";
    float presensi;
    cin >> presensi;
    setPresensi(presensi);

    cout << "Masukkan nilai Activity : ";
    float activity;
    cin >> activity;
    setActivity(activity);

    cout << "Masukkan nilai Exercise : ";
    float exercise;
    cin >> exercise;
    setExercise(exercise);

    cout << "Masukkan nilai Tugas Akhir : ";
    float tugasakhir;
    cin >> tugasakhir;
    setTugasakhir(tugasakhir);
}
float hitungNilaiAkhir() {
    return(getPresensi() * 0.7) + (getActivity() * 0.2) + (getExercise() * 0.3) + (getTugasakhir() * 0.4);
}

void cekKelulusan() {
    float nilaiAkhir = hitungNilaiAkhir();
    cout << "Nilai Akhir : " << nilaiAkhir << endl;
    if (nilaiAkhir >= 75) {
        cout << "Selamat anda dinyatakan Lulus." << endl;
    }
    else {
        cout << "Anda dinyatakan Tidak Lulus." << endl;
    }
}
public:
    void namaMataKuliah() {
        cout << "Jaringan" << endl;
    }

    void inputNilai() {
        cout << "Masukkan nilai Activity : ";
        float activity;
        cin >> activity;
        setActivity(activity);

        cout << "Masukkan nilai Exercise : ";
        float exercise;
        cin >> exercise;
        setExercise(exercise);
    }

    float hitungNilaiAkhir() {
        return(getActivity() * 0.4) + (getExercise() * 0.5);
    }

    void cekKelulusan() {
        float nilaiAkhir = hitungNilaiAkhir();
        cout << "Nilai Akhir : " << nilaiAkhir << endl;
        if (nilaiAkhir >= 75) {
            cout << "Selamat anda dinyatakan Lulus." << endl;
        }
        else {
            cout << "Anda dinyatakan Tidak Lulus." << endl;
        }
    }
    // isi disini untuk mengisi kelas pemrograman
};

class Jaringan : public Matakuliah
{
    // isi disini untuk mengisi kelas jaringan
public:
    void namaMataKuliah() {
        cout << "Jaringan" << endl;
    }

    void inputNilai() {
        cout << "Masukkan nilai Activity : ";
        float activity;
        cin >> activity;
        setActivity(activity);

        cout << "Masukkan nilai Exercise : ";
        float exercise;
        cin >> exercise;
        setExercise(exercise);
    }

    float hitungNilaiAkhir() {
        return(getActivity() * 0.4) + (getExercise() * 0.5);
    }

    void cekKelulusan() {
        float nilaiAkhir = hitungNilaiAkhir();
        cout << "Nilai Akhir : " << nilaiAkhir << endl;
        if (nilaiAkhir >= 75) {
            cout << "Selamat anda dinyatakan Lulus." << endl;
        }
        else {
            cout << "Anda dinyatakan Tidak Lulus." << endl;
        }
    }
};

int main()
{
    char pilih; 
    MataKuliah *mataKuliah; 
    Pemrograman pemrograman; 
    Jaringan jaringan;
// isi disini untuk menentukan mata kuliah yang dipilih

    cout << "Pilih Mata Kuliah : " << endl;
    cout << "1. Pemrograman" << endl;
    cout << "2. Jaringan" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih : ";
    cin >> pilih;

    switch(pilih) {
    case '1':
    mataKuliah = &pemrograman;
    mataKuliah->inputNilai();
    mataKuliah->cekKelulusan();
    break;
    case '2':
    mataKuliah = &jaringan;
    mataKuliah->inputNilai();
    mataKuliah->cekKelulusan();
    break;
    case '3':
    cout << "Keluar dari Program" << endl;
    return 0;
    default:
    cout << "pilihan tidak valid." << endl;
    break;
    }
}


