# <h1 align="center">Laporan Praktikum Modul 2 Array </h1>
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

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    int bilangan;

    // Meminta pengguna untuk memasukkan bilangan bulat
    cout << "Masukkan bilangan bulat: ";
    cin >> bilangan;

    // Memeriksa apakah bilangan tersebut genap atau ganjil
    if (bilangan % 2 == 0) {
        cout << "Bilangan " << bilangan << " adalah bilangan genap." << endl;
    } else {
        cout << "Bilangan " << bilangan << " adalah bilangan ganjil." << endl;
    }

    return 0;
}

```
#### Output:
![Screenshot (150)](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/f2335f65-505e-440f-ae64-ad36329f50b4)

Program di atas adalah program sederhana dalam bahasa C++ yang bertujuan untuk menentukan apakah sebuah bilangan bulat genap atau ganjil. Berikut adalah parafrase dari penjelasan mengenai fungsi-fungsi utama dari program tersebut:

Meminta Input dari Pengguna:

Program menggunakan cout untuk meminta pengguna memasukkan bilangan bulat.
Kemudian, program menggunakan cin untuk mengambil input bilangan bulat dari pengguna dan menyimpannya dalam variabel bilangan.
Mengecek Bilangan Genap atau Ganjil:

Program menggunakan operator modulo % untuk memeriksa sisa bagi bilangan dengan 2.
Jika hasil sisa bagi adalah 0, maka bilangan tersebut genap. Jika tidak, bilangan tersebut ganjil.
Menampilkan Output:

Hasil pengecekan (apakah bilangan genap atau ganjil) ditampilkan kepada pengguna melalui cout.
Return 0:

Program mengakhiri eksekusi dengan return 0 untuk menandakan bahwa program berjalan tanpa masalah.
Dengan demikian, program tersebut membantu pengguna untuk memahami cara menggunakan conditional statement (if-else) dan operator modulo (%) dalam bahasa pemrograman C++. Program ini memberikan feedback langsung kepada pengguna untuk memberitahu apakah bilangan yang dimasukkan adalah genap atau ganjil.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
// Deklarasi array
int arr[1][2][2];
// Input elemen
for (int x = 0; x < 1; x++)
{
for (int y = 0; y < 2; y++)
{
for (int z = 0; z < 2; z++)
{
cout << "Input Array[" << x << "][" << y << "][" << z <<

"] = ";

cin >> arr[x][y][z];
}
}
cout << endl;
}
// Output Array
for (int x = 0; x < 1; x++)
{
for (int y = 0; y < 2; y++)
{
for (int z = 0; z < 2; z++)
{
cout << "Data Array[" << x << "][" << y << "][" << z <<

"] = " << arr[x][y][z] << endl;
}
}
}
cout << endl;
// Tampilan array
for (int x = 0; x < 1; x++)
{
for (int y = 0; y < 2; y++)
{
for (int z = 0; z < 2; z++)
{
cout << arr[x][y][z] << ends;
}
cout << endl;
}
cout << endl;
}
}

```
#### Output:
![Screenshot (148)](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/3aba0821-2df5-4863-ab58-882c7e34a942)

Program tersebut adalah sebuah program dalam bahasa C++ yang bertujuan untuk mengizinkan pengguna untuk memasukkan elemen-elemen ke dalam sebuah array tiga dimensi dan menampilkan output dari array tersebut. Berikut adalah parafrase dari penjelasan mengenai fungsi-fungsi utama dari program tersebut:

Deklarasi dan Input Array:

Program pertama-tama membuat sebuah array tiga dimensi dengan ukuran 1x2x2 menggunakan deklarasi int arr[1][2][2];.
Selanjutnya, program menggunakan nested loop (for) untuk memungkinkan pengguna memasukkan nilai-nilai elemen array. Loop pertama digunakan untuk mengakses dimensi pertama array, loop kedua untuk dimensi kedua, dan loop ketiga untuk dimensi ketiga.
Pengguna diminta untuk memasukkan nilai-nilai elemen array dalam format Input Array[x][y][z] = nilai.
Output Array:

Setelah selesai melakukan input, program menggunakan loop yang sama untuk menampilkan output dari array yang telah diinputkan. Loop-loop ini juga digunakan untuk mengakses masing-masing elemen array.
Tampilan Array:

Program juga menampilkan tampilan array tanpa label dimensinya dengan menggunakan loop yang sama untuk mengakses dan menampilkan nilai-nilai elemen array tanpa label dimensinya.
Penjelasan Variabel:

arr[1][2][2]: Merupakan array tiga dimensi dengan ukuran 1x2x2 yang digunakan untuk menyimpan elemen-elemen yang dimasukkan oleh pengguna.
x, y, z: Variabel loop yang digunakan untuk mengakses setiap elemen array dalam loop for.
Dengan demikian, program tersebut memungkinkan pengguna untuk melakukan operasi input dan output pada data yang disimpan dalam sebuah array tiga dimensi. Program ini juga dapat membantu pengguna memahami konsep array tiga dimensi dan penggunaan loop dalam bahasa pemrograman C++.


### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

```C++
#include <iostream>
#include <climits> // Untuk menggunakan nilai maksimum dan minimum dari tipe data int
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Deklarasi array dengan ukuran yang ditentukan oleh pengguna
    int arr[n];

    // Input nilai-nilai array
    cout << "Masukkan nilai-nilai array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << ": ";
        cin >> arr[i];
    }

    // Menginisialisasi nilai maksimum, minimum, dan total untuk rata-rata
    int max_val = INT_MIN; // Menggunakan nilai minimum dari tipe int
    int min_val = INT_MAX; // Menggunakan nilai maksimum dari tipe int
    int total = 0;

    // Mencari nilai maksimum, minimum, dan menghitung total untuk rata-rata
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        total += arr[i];
    }

    // Menghitung nilai rata-rata
    float rata_rata = static_cast<float>(total) / n;

    // Menampilkan output
    cout << "\nNilai Maksimum: " << max_val << endl;
    cout << "Nilai Minimum: " << min_val << endl;
    cout << "Nilai Rata-rata: " << rata_rata << endl;

    return 0;
}


```
#### Output:
![Screenshot (149)](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/e7b059e2-451f-43ea-8327-91cb680d02bf)

Program tersebut merupakan program C++ yang bertujuan untuk menghitung nilai maksimum, minimum, dan rata-rata dari sebuah array dengan ukuran yang ditentukan oleh pengguna. Berikut adalah parafrase dari penjelasan mengenai fungsi-fungsi utama dari program tersebut:

Program akan meminta pengguna untuk memasukkan jumlah elemen array yang diinginkan.
Setelah itu, program akan mendeklarasikan sebuah array dengan ukuran yang telah diinputkan.
Pengguna diminta untuk memasukkan nilai-nilai elemen array sesuai dengan ukuran yang telah ditentukan sebelumnya.
Program akan menginisialisasi variabel max_val dan min_val dengan nilai maksimum dan minimum yang dapat ditampung oleh tipe data int.
Variabel total diinisialisasi dengan nilai 0 untuk menghitung total elemen array.
Selanjutnya, program melakukan iterasi melalui seluruh elemen array untuk mencari nilai maksimum, minimum, dan menghitung total elemen array.
Setelah selesai iterasi, program menghitung nilai rata-rata dengan membagi total nilai dengan jumlah elemen array.
Terakhir, program menampilkan nilai maksimum, minimum, dan rata-rata dari array yang telah diinputkan oleh pengguna.
Dengan demikian, program tersebut dapat membantu pengguna untuk melakukan analisis sederhana terhadap data dalam array dengan menghitung nilai maksimum, minimum, dan rata-rata dari nilai-nilai tersebut.


## Kesimpulan
Parafrase dari kesimpulan tersebut adalah bahwa program-program yang telah dibuat memberikan contoh konkret tentang bagaimana menggunakan array dalam bahasa pemrograman C++. Program-program tersebut mencakup konsep-konsep dasar seperti input-output, penggunaan variabel, loop untuk melakukan iterasi, operator aritmatika, dan conditional statement untuk membuat keputusan berdasarkan kondisi tertentu.

## Referensi
www.duniailkom.com/tutorial-belajar-cpp-cara-membuat-array-3-dimensi/
