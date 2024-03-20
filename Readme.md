# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Fadilah Salehah - 2311102164</p>

## Dasar Teori

Array adalah struktur data yang digunakan untuk mengumpulkan elemen dengan tipe data yang sama dalam satu variabel, memudahkan proses pengelolaan dan akses data. Terdapat tiga jenis array yang umum digunakan:

1.Array Satu Dimensi: Array ini sederhana dengan satu indeks, menyusun elemen dalam satu baris atau kolom.
2.Array Dua Dimensi: Memiliki dua indeks, mengatur elemen dalam baris dan kolom, cocok untuk representasi data tabel atau matriks.
3.Array Multidimensi: Memiliki lebih dari dua dimensi, cocok untuk struktur data kompleks seperti matriks tiga dimensi atau lebih.
## Guided 

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
// Deklarasi array
int arr[2][3][3];
// Input elemen
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Input Array[" << x << "][" << y << "][" << z <<

"] = ";

cin >> arr[x][y][z];
}
}
cout << endl;
}
// Output Array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Data Array[" << x << "][" << y << "][" << z <<

"] = " << arr[x][y][z] << endl;
}
}
}
cout << endl;
// Tampilan array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << arr[x][y][z] << ends;
}
cout << endl;
}
cout << endl;
}
}

```
Program diatas adalah sebuah Program komputer yang ditulis dalam bahasa pemrograman tertentu, seperti Python, C++, Java, atau bahasa pemrograman lainnya, yang bertujuan untuk mengizinkan pengguna untuk memasukkan nilai-nilai ke dalam array yang memiliki tiga dimensi. 

### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;
int main()
{
int maks, a, i = 1, lokasi;
cout << "Masukkan panjang array: ";
cin >> a;
int array[a];
cout << "Masukkan " << a << " angka\n";
for (i = 0; i < a; i++)
{
cout << "Array ke-" << (i) << ": ";
cin >> array[i];
}
maks = array[0];
for (i = 0; i < a; i++)
{
if (array[i] > maks)
{
maks = array[i];
lokasi = i;
}
}
cout << "Nilai maksimum adalah " << maks << " berada di Array
ke " << lokasi << endl;
}

```
Program diatas adalah program komputer yang ditulis dalam bahasa pemrograman tertentu untuk menemukan nilai terbesar (maksimum) di antara elemen-elemen yang ada dalam sebuah array. Tujuan dari program ini adalah untuk mengidentifikasi nilai terbesar dalam kumpulan data yang tersimpan dalam array.
## Unguided

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yangdiinputkan oleh user!

```C++

```
#### Output:
![Screenshot (143)](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/cfce3c80-3890-4fa5-9a03-69af492b4af2)
1.	Program diatas adalah sebuah program c++ yang mendefinisikan dua buah fungsi dan menggunakan tipe data primitif untukmenghitung luas lingkaran.
   
a.	Fungsi integer `penjumlahan_164(int angka1_164, int angka2_164)` ini memiliki dua buah parameter berbentuk bilangan bulat, lalu menjumlahkannya dan kemudian mengembalikan hasilnya.
b.	Fungsi float `float LuasLingkaran_164(float Jarijari_164)` memiliki satu parameter yang berbentuk bilangan pecahan. Dalam fungsi ini memiliki nilai pi yang sudah ditetapkan yaitu 3.24, dan kemudian mengembalikan luas lingkaran berdasarkan rumus pi*jarijari*jarijari.
c.	Fungsi `main()` ini merupakan fungsi utama dari program ini. Didalamnya mendeklarasikan dan menginisialisasikan variabel   angka1 = 8, angka2 = 4, dan jarijari = 10. Kemudian dilakukan pemanggilan fungsi penjumlahan_164 dengan `angka1` dan `angka2` dan menampilkan output hasilnya. Selanjutnya dilakukan pemanggilan fungsi `LuasLingkaran_dilah164` dengan `jarijari` dan menmapilkan output hasilnya.
d.	Return 0 pada program menandakan bahwa program telah berakhir dan mengembalikan nilain 0 sebagai tanda bahwa program sudah berjalan dengan baik.
e.	Output dari program tersebut berupa hasil penjumlahan dua angka dan luas lingkaran dengan jari-jari yang telah ditentukan.

Kesimpulan dari Materi Tipe Data Primitif:
Tipe data primitif seperti integer dan float sangat berguna dalam pemrograman karena mereka menyimpan nilai dasar seperti angka. Dalam pemrograman C++, tipe data primitif memungkinkan kita untuk melakukan operasi matematika dan manipulasi data dengan mudah. Dengan menggunakan tipe data primitif yang sesuai dengan kebutuhan program dapat membantu mengoptimalkan penggunaan memori dan meningkatkan kinerja program. Penting untuk memahami batasan dan perilaku tipe data primitif, seperti rentang nilai yang dapat disimpan dan presisi floating point.



### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

```C++
#include <iostream>
#include <string>
using namespace std;

// Mendefinisikan struct untuk data mahasiswa
struct MahasiswaData {
    string nama_dilah164;
    string jurusan_dilah164;
    string NIM_dilah164;
};

// Mendefinisikan class Mahasiswa
class Mahasiswa {
private:
    MahasiswaData data; // Objek MahasiswaData sebagai atribut private

public:
    // Constructor untuk class Mahasiswa
    Mahasiswa(string nama, string jurusan, string NIM) {
        data.nama_dilah164 = nama;
        data.jurusan_dilah164 = jurusan;
        data.NIM_dilah164= NIM;
    }

    // Prosedur untuk menampilkan data mahasiswa
    void tampilkanData() {
        cout << "Data Mahasiswa" << endl;
        cout << "Nama : " << data.nama_dilah164 << endl;
        cout << "NIM : " << data.NIM_dilah164 << endl;
        cout << "Jurusan : " << data.jurusan_dilah164 << endl;
    }

    // Metode untuk mengambil data mahasiswa
    MahasiswaData getData() {
        return data;
    }

    // Metode untuk mengatur data mahasiswa
    void setData(string nama, string jurusan, string NIM) {
        data.nama_dilah164 = nama;
        data.jurusan_dilah164 = jurusan;
        data.NIM_dilah164 = NIM;
    }
};

int main() {
    // Membuat objek mhs dari class Mahasiswa dengan data yang telah ditentukan
    Mahasiswa mhs("Fadilah Salehah", "Teknik Informatika", "2311102164");

    // Memanggil prosedur tampilkanData untuk menampilkan data mahasiswa pada output
    mhs.tampilkanData();

    return 0;
}
```
#### Output:
![Screenshot (144)](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/3d3ec0c4-41b5-4c7b-95fb-18754955c9f8)

Program di atas adalah sebuah program C++ yang mendefinisikan sebuah struct MahasiswaData untuk menyimpan data mahasiswa, termasuk nama, jurusan, dan NIM. Selanjutnya, sebuah class Mahasiswa dibuat untuk merepresentasikan objek mahasiswa yang memiliki atribut data bertipe MahasiswaData. Program ini menggunakan konstruktor untuk inisialisasi data mahasiswa saat objek Mahasiswa dibuat. Metode tampilkanData() digunakan untuk menampilkan data mahasiswa ke layar. Program ini memanfaatkan struktur data untuk menyimpan informasi yang terkait dengan mahasiswa dan menggunakan class untuk mengelola data dan perilaku terkait mahasiswa tersebut.

Struct adalah kumpulandari beberapa variabel dengan beragam tipe data yang dibungkus dalam satu variabel. Struct berfungsi untuk mengelompokkan berbagai jenis tipe data yang berbeda menjadi satu unit. Hal ini dapat memungkinkan programmer dapat membuat jenis data baru yang meliputi sejumlah variabel dengan tipe data yang berbeda.

Class merupakan suatu blueprint atau cetakan untuk mendefinisikan variable dan methode pada seluruh objek tertentu. Class ini memiliki fungsi untuk menampung isi dari program yang akan dijalankan, yang iddalamnya berisi tipe data dan method untuk menjalankan suatu program. Selain itu class berfungsi untuk mengorgnaisir kode menjadi unit yang lebib terstruktur dan class juga memungkinkan untuk pembuatan program yang lebih besar dan kompleks dengan memanfaatkan konsep seperti pewarisan.



### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

```C++
#include <iostream> //Library untuk input-output stream
#include <map> //Library untuk map
using namespace std; //namespace std digunakan agar tidka perlu menuliskan std::

int main() {
    // Membuat map dengan pasangan kunci-nilai bertipe string dan int
    map<string, int> dataMap_dilah164;

    // Memasukkan elemen ke dalam map
    dataMap_dilah164["John"] = 25;
    dataMap_dilah164["Alice"] = 30;
    dataMap_dilah164["Bob"] = 20;

    // Mengakses dan mencetak nilai yang terkait dengan kunci tertentu
    cout << "Umur John: " << dataMap_dilah164["John"] << endl;
    cout << "Umur Alice: " << dataMap_dilah164["Alice"] << endl;
    cout << "Umur Bob: " << dataMap_dilah164["Bob"] << endl;

    return 0;
}

```
#### Output:
![Screenshot (145)](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/1d62d2d2-2286-456b-a423-a6a4f14ddd94)


Program tersebut merupakan contoh penggunaan map dalam C++, di mana sebuah map dengan pasangan kunci-nilai bertipe string dan int dibuat. Tiga elemen dimasukkan ke dalam map dengan menggunakan kunci bertipe string sebagai nama dan nilai bertipe int sebagai umur. Setelah itu, nilai-nilai yang terkait dengan kunci tertentu diakses dan dicetak ke layar, seperti umur John, Alice, dan Bob. 

Perbeedaan yang dapat dilihat dari array dan map yaitu :
1.	Array tidak mengizinkan perpindahan elemen, sedangkan map mengizinkan duplikasi key
2.	Array dapat mengizinkan duplikasi elemen, sedangkan map tidak bisa mengizinkan duplikasi elemen
3.	Array dapat diteruskan secara otomatis,sedangkan map tidka bisa secara otomatis
4.	Array lebih efisien dalam penggunaan saat megakses elemen dengan menggunakan indeks, sedangkan map lebih efisien dalam penggunaan ketika mengakses elemen dengan menggunakan key.
5.	Array ini digunakan untuk menyimpan sekumpulan elemen yang dapat diakses menggunakan indeks, sedangkan map digunakan untuk menyimpan kumpulan key-value pair yang dapat diakses menggunakan key.


## Kesimpulan
Dalam penggunaan tipe data c++, penting sekali untuk mengetahui jenis jenis dari tipe data. Pemilihan tipe data yang tepat juga penting untuk membantu seorang progammer dalam mengetahui efisiensi dan keamanan program, serta untuk menghindari kelebihan atau kekurangan dari penggunaan memori.

## Referensi
[1] Syahidin, M.M. Mengenal Jenis-jenis Tipe Data dalam Bahasa C++. Jurnal MMS, 2019. <br/>
[2] Hanief, S., Jepriana, I. W., & Kom, S. (2020). Konsep Algoritme dan Aplikasinya dalam Bahasa Pemrograman C++. Penerbit Andi.<br/>
