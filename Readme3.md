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
#include <string>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    int usia;
    Node* next;
};

// Inisialisasi Node
Node* head = nullptr;

// Pengecekan List Kosong
bool isEmpty() {
    return head == nullptr;
}

// Tambah Node di Depan
void insertDepan(string nama, int usia) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;
    newNode->next = head;
    head = newNode;
}

// Tambah Node di Belakang
void insertBelakang(string nama, int usia) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;
    newNode->next = nullptr;
    
    if (isEmpty()) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

// Tambah Node di Tengah
void insertTengah(string nama, int usia, string posisi) {
    Node* current = head;
    while (current != nullptr && current->nama != posisi) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Posisi tidak ditemukan" << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;
    newNode->next = current->next;
    current->next = newNode;
}

// Hapus Node dengan Nama Tertentu
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

// Ubah Data Node dengan Nama Tertentu
void ubahData(string targetNama, string newNama, int newUsia) {
    Node* current = head;
    while (current != nullptr && current->nama != targetNama) {
        current = current->next;
    }
    if (current != nullptr) {
        current->nama = newNama;
        current->usia = newUsia;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
}

// Tampilkan Seluruh Data
void tampilkanData() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->nama << " " << current->usia << endl;
        current = current->next;
    }
}

int main() {
    string namaAnda;
    int usiaAnda;
    cout << "Masukkan Nama Anda: ";
    cin >> namaAnda;
    cout << "Masukkan Usia Anda: ";
    cin >> usiaAnda;

    insertDepan(namaAnda, usiaAnda);

    insertBelakang("John", 19);
    insertBelakang("Jane", 20);
    insertBelakang("Michael", 18);
    insertBelakang("Yusuke", 19);
    insertBelakang("Akechi", 20);
    insertBelakang("Hoshino", 18);
    insertBelakang("Karin", 18);

    hapus("Akechi");
    insertTengah("Futaba", 18, "John");
    insertDepan("Igor", 20);
    ubahData("Michael", "Reyn", 18);

    cout << "Data Mahasiswa:" << endl;
    tampilkanData();

    return 0;
}


```
#### Output:
![output unguided 1](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/770fbc39-85ee-4339-9cd9-26c2d54d6184)

Program yang Anda berikan adalah implementasi dari Single Linked List Non-Circular dalam bahasa C++. Program ini menyediakan fungsi-fungsi dasar untuk mengelola linked list, seperti menambahkan node di depan, belakang, atau tengah, menghapus node dengan nama tertentu, mengubah data node, dan menampilkan seluruh data yang tersimpan dalam linked list.


## ss kode
![Screenshot (152)](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/9ce7601c-e8d1-4ade-ae0f-43e3059e3cee)

## Kesimpulan dari Materi single linked list :
Dengan memahami konsep dan operasi pada single linked list, seseorang dapat lebih efektif dalam merancang, mengimplementasikan, dan memanfaatkan struktur data ini dalam pemrograman dan pengembangan perangkat lunak secara umum.


### 2. Soal mengenai Double Linked List 
Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga
![Screenshot 2024-03-27 232425](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/6d155755-4ed5-4e75-a438-d59df7af228d)
Case: 
1. Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific 
2. Hapus produk wardah 
3. Update produk Hanasui menjadi Cleora dengan harga 55.000 4. Tampilkan menu seperti dibawah ini 
Toko Skincare Purwokerto 
1. Tambah Data 
2. Hapus Data 
3. Update Data 
4. Tambah Data Urutan Tertentu 
5. Hapus Data Urutan Tertentu 
6. Hapus Seluruh Data 
7. Tampilkan Data 
8. Exit 
Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah ini :
![Screenshot 2024-03-27 232649](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/502ea2b5-fc90-4fdf-9bac-b0966ece9dbe)
8241-1bed942fd1bc)

```C++
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string nama_produk;
    int harga;
    Node* next;
    Node* prev;

    Node(string nama_produk, int harga) {
        this->nama_produk = nama_produk;
        this->harga = harga;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void tambah_data(string nama_produk, int harga) {
        Node* new_node = new Node(nama_produk, harga);
        if (head == nullptr) {
            head = new_node;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new_node;
            new_node->prev = current;
        }
    }

    void hapus_data(string nama_produk) {
        Node* current = head;
        while (current != nullptr) {
            if (current->nama_produk == nama_produk) {
                if (current->prev != nullptr) {
                    current->prev->next = current->next;
                }
                if (current->next != nullptr) {
                    current->next->prev = current->prev;
                }
                if (current == head) {
                    head = current->next;
                }
                delete current;
                return;
            }
            current = current->next;
        }
    }

    void update_data(string nama_produk, int harga) {
        Node* current = head;
        while (current != nullptr) {
            if (current->nama_produk == nama_produk) {
                current->harga = harga;
                return;
            }
            current = current->next;
        }
    }

    void tambah_data_urutan_tertentu(string nama_produk, int harga, int urutan) {
        Node* new_node = new Node(nama_produk, harga);
        if (urutan == 1 || head == nullptr) {
            new_node->next = head;
            if (head != nullptr) {
                head->prev = new_node;
            }
            head = new_node;
        } else {
            Node* current = head;
            int count = 1;
            while (current != nullptr && count < urutan - 1) {
                current = current->next;
                count++;
            }
            if (current == nullptr) {
                cout << "Urutan melebihi jumlah produk yang ada" << endl;
                return;
            }
            new_node->next = current->next;
            new_node->prev = current;
            if (current->next != nullptr) {
                current->next->prev = new_node;
            }
            current->next = new_node;
        }
    }

    void hapus_data_urutan_tertentu(int urutan) {
        if (head == nullptr) {
            return;
        }
        Node* current = head;
        if (urutan == 1) {
            head = current->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
            delete current;
            return;
        }
        int count = 1;
        while (current != nullptr && count < urutan) {
            current = current->next;
            count++;
        }
        if (current == nullptr) {
            return;
        }
        if (current->next != nullptr) {
            current->next->prev = current->prev;
        }
        if (current->prev != nullptr) {
            current->prev->next = current->next;
        }
        delete current;
    }

    void hapus_seluruh_data() {
        Node* current = head;
        while (current != nullptr) {
            Node* next_node = current->next;
            delete current;
            current = next_node;
        }
        head = nullptr;
    }

    void tampilkan_data() {
        Node* current = head;
        cout << "Nama Produk Harga" << endl;
        while (current != nullptr) {
            cout << current->nama_produk << " " << current->harga << endl;
            current = current->next;
        }
    }
};

int main() {
    DoublyLinkedList dll;

    // Menambahkan data awal
    dll.tambah_data("Originote", 60000);
    dll.tambah_data("Somethinc", 150000);
    dll.tambah_data("Skintific", 100000);
    dll.tambah_data("Wardah", 50000);
    dll.tambah_data("Hanasui", 30000);

    // Modifikasi sesuai dengan case yang diberikan
    dll.tambah_data_urutan_tertentu("Azarine", 65000, 3);
    dll.hapus_data("Wardah");
    dll.update_data("Hanasui", 55000);

    // Tampilkan menu
    cout << "Toko Skincare Purwokerto" << endl;
    cout << "1. Tambah Data" << endl;
    cout << "2. Hapus Data" << endl;
    cout << "3. Update Data" << endl;
    cout << "4. Tambah Data Urutan Tertentu" << endl;
    cout << "5. Hapus Data Urutan Tertentu" << endl;
    cout << "6. Hapus Seluruh Data" << endl;
    cout << "7. Tampilkan Data" << endl;
    cout << "8. Exit" << endl;

    // Tampilkan data setelah modifikasi
    dll.tampilkan_data();

    return 0;
}
```
#### Output:
![Screenshot 2024-03-27 235419](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/d6df504d-4d2c-4327-bca8-1939ce2e19df)

Program yang Anda berikan adalah implementasi dari doubly linked list untuk menyimpan data produk skincare beserta harganya. Program ini memiliki beberapa fungsi utama seperti tambah data, hapus data, update data, tambah data pada urutan tertentu, hapus data pada urutan tertentu, hapus seluruh data, dan menampilkan data.

![Screenshot (118)](https://github.com/fadilahsalehah/Struktur-Data-Assignment/assets/162522335/f8477d2a-9889-40ba-a26f-9989a1775478)

Program yang Anda berikan merupakan implementasi dari doubly linked list untuk menyimpan data produk skincare beserta harga. Program ini juga memiliki fungsi-fungsi tambah, hapus, update, tambah urutan tertentu, hapus urutan tertentu, dan hapus seluruh data.





## Referensi
https://osf.io/preprints/osf/he29v 
https://osf.io/preprints/u6qf7
