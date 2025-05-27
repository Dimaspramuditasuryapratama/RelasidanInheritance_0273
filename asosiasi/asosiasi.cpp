#include <iostream>
#include <vector>
using namespace std;

class dokter;

class pasisen {     //Asosiasi
    public:
        string nama;
        vector<dokter*> daftar_dokter;
        pasisen(string pNama): nama(pNama) {
            cout << "Pasien \"" << nama << "\" ada\n";
        }
        ~pasisen() {
            cout << "Pasien \"" << nama << "\" tidak ada\n";
        }

        void tambahkanDokter(dokter*);
        void cetakDokter();
};

class dokter {
    public:
        string nama;
        vector<pasisen*> daftar_pasien;

        dokter(string pNama): nama(pNama) {
            cout << "Dokter \"" << nama << "\" ada\n";
        }
        ~dokter() {
            cout << "Dokter \"" << nama << "\" tidak ada\n";
        }
        void tambahkanPasien(pasisen*);
        void cetakPasien();
};