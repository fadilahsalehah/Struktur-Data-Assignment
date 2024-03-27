# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Fadilah Salehah - 2311102164</p>

## Dasar Teori
Dalam Single Linked List, setiap node menyimpan data dan pointer yang menunjuk ke node berikutnya dalam urutan sekuensial. Berikut adalah ilustrasi yang memperbaiki konsep Single Linked List:
rust
Copy code

  +-----+        +-----+        +-----+        +-----+
  |  1  | -----> |  2  | -----> |  3  | -----> |  4  | -----> NULL
  +-----+        +-----+        +-----+        +-----+
  | data|        | data|        | data|        | data|
  | next| -----> | next| -----> | next| -----> | next|
  +-----+        +-----+        +-----+        +-----+
  
Pada ilustrasi di atas, terdapat empat node yang saling terhubung membentuk Single Linked List. Setiap node memiliki dua bagian utama, yaitu data (nilai yang disimpan) dan next (pointer yang menunjukkan ke node berikutnya). Node terakhir memiliki pointer next yang menunjuk ke NULL, menandakan akhir dari Single Linked List.
Node pertama memiliki data dengan nilai 1 dan next yang menunjuk ke node kedua. Node kedua memiliki data dengan nilai 2 dan next yang menunjuk ke node ketiga. Node ketiga memiliki data dengan nilai 3 dan next yang menunjuk ke node keempat. Node keempat memiliki data dengan nilai 4 dan next yang menunjuk ke NULL.
Dengan menggunakan struktur seperti ini, Single Linked List memungkinkan penyimpanan dan pengelolaan data dalam urutan sekuensial dengan fleksibilitas yang tinggi, karena node-node dapat ditambahkan atau dihapus secara dinamis.

Double Linked List Circular adalah jenis dari struktur data Linked List di mana setiap node memiliki tiga bidang (field): satu bidang pointer yang menunjuk ke node berikutnya (next), satu bidang pointer yang menunjuk ke node sebelumnya (prev), dan satu bidang untuk menyimpan data yang sesuai untuk node tersebut.
Pada Double Linked List Circular, pointer next dan prev pada node terakhir di list akan menunjuk kembali ke node pertama, membentuk sebuah lingkaran atau siklus. Hal ini memungkinkan navigasi data dalam kedua arah (maju dan mundur) secara efisien dan dengan mudah, karena setiap node memiliki akses ke node sebelumnya dan node berikutnya.

## Guided 

### 1. Latihan single linked list

```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    // komponen/member
    int data;
    Node *next;
};
Node *head;
Node *tail;
// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}
// Tambah Depan
void insertDepan(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}
// Tambah Belakang
void insertBelakang(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}
// Hitung Jumlah List
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
// Tambah Tengah
void insertTengah(int data, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
        bantu = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
// Hapus Depan
void hapusDepan()
{
    Node *hapus;
    if (isEmpty() == false)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
// Hapus Belakang
void hapusBelakang()
{
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
// Hapus Tengah
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                bantu2 = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}
// Ubah Depan
void ubahDepan(int data)
{
    if (isEmpty() == false)
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Tengah
void ubahTengah(int data, int posisi)
{
    Node *bantu;
    if (isEmpty() == false)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else
        {
            bantu = head;
            int nomor = 1;
            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }
            bantu->data = data;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Belakang
void ubahBelakang(int data)
{
    if (isEmpty() == false)
    {
        tail->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus List
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
// Tampilkan List
void tampil()
{
    Node *bantu;
    bantu = head;
    if (isEmpty() == false)
    {
        while (bantu != NULL)
        {
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
int main()
{
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();    hapusBelakang();
    tampil();
    insertTengah(7, 2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    return 0;
}

```
Fungsi-fungsi ini memungkinkan pengguna untuk mengelola linked list sesuai dengan kebutuhan, baik itu menambahkan, menghapus, mengubah data, atau membersihkan seluruh isi list. Program juga memberikan feedback kepada pengguna jika terjadi kesalahan seperti menambahkan node di posisi yang tidak valid atau mengubah node yang tidak ada. Program berjalan secara interaktif, memberikan menu pilihan kepada pengguna untuk memilih operasi yang ingin dilakukan pada linked list.

### 2. Latihan double linked list

```C++
#include <iostream>
using namespace std;


class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
Kode yang Anda berikan adalah implementasi dari sebuah program yang menggunakan Double Linked List untuk mengelola data. Program ini memberikan menu interaktif kepada pengguna untuk melakukan operasi-operasi dasar pada Double Linked List, seperti menambah data, menghapus data, mengubah data, membersihkan seluruh data, dan menampilkan data.

## Unguided
### 1. Soal mengenai Single Linked List 
Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut: 

```C++
#include <iostream>
using namespace std;

class Node {
public:
    string nama;
    int usia;
    Node* next;

    Node(string nama, int usia) {
        this->nama = nama;
        this->usia = usia;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void tambahDepan(string nama, int usia) {
        Node* new_node = new Node(nama, usia);
        new_node->next = head;
        head = new_node;
    }

    void tambahBelakang(string nama, int usia) {
        Node* new_node = new Node(nama, usia);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node* last = head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = new_node;
    }

    void tambahTengah(Node* posisi, string nama, int usia) {
        if (posisi == nullptr) {
            cout << "Posisi tidak valid" << endl;
            return;
        }
        Node* new_node = new Node(nama, usia);
        new_node->next = posisi->next;
        posisi->next = new_node;
    }

    void hapus(string targetNama) {
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr && current->nama != targetNama) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Data tidak ditemukan" << endl;
            return;
        }

        if (prev == nullptr) {
            head = current->next;
        } else {
            prev->next = current->next;
        }

        delete current;
    }

    void tampilkanData() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->nama << " " << current->usia << endl;
            current = current->next;
        }
    }
};

int main() {
    LinkedList linkedList;

    // Menambahkan data sesuai urutan
    linkedList.tambahBelakang("John", 19);
    linkedList.tambahBelakang("Jane", 20);
    linkedList.tambahBelakang("Michael", 18);
    linkedList.tambahBelakang("Yusuke", 19);
    linkedList.tambahBelakang("Akechi", 20);
    linkedList.tambahBelakang("Hoshino", 18);
    linkedList.tambahBelakang("Karin", 18);

    // Menghapus data Akechi
    linkedList.hapus("Akechi");

    // Menambahkan data Futaba di antara John dan Jane
    Node* current = linkedList.head;
    while (current != nullptr && current->nama != "John") {
        current = current->next;
    }
    linkedList.tambahTengah(current, "Futaba", 18);

    // Menambahkan data Igor di awal
    linkedList.tambahDepan("Igor", 20);

    // Mengubah data Michael menjadi Reyn
    current = linkedList.head;
    while (current != nullptr && current->nama != "Michael") {
        current = current->next;
    }
    if (current != nullptr) {
        current->nama = "Reyn";
    }

    // Menampilkan seluruh data
    linkedList.tampilkanData();

    return 0;
}

```
#### Output:

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
