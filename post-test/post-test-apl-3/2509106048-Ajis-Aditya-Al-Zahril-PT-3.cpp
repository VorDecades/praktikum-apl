#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct DetailKarakter {
    string roleKarakter;
    string elemenKarakter;
};

struct Karakter {
    int idKarakter;
    string namaKarakter;
    DetailKarakter detail;
    string rankKarakter;
    string tierKarakter;
};

struct AkunUser {
    int idUser;
    string namaUser;
    string password;
    string roleUser;
};

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void inisialisasiData(Karakter dbKarakter[], int &jumlahKarakter, AkunUser dbUser[], int &jumlahUser) {
    dbKarakter[jumlahKarakter++] = {1, "Alice", {"Anomaly", "Physical"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {2, "Anby Demara", {"Stun", "Electric"}, "A", "T3"};
    dbKarakter[jumlahKarakter++] = {3, "Anby: Soldier 0", {"Attack", "Electric"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {4, "Anton", {"Attack", "Electric"}, "A", "T2"};
    dbKarakter[jumlahKarakter++] = {5, "Aria", {"Anomaly", "Ether"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {6, "Astra Yao", {"Support", "Ether"}, "S", "T0"};
    dbKarakter[jumlahKarakter++] = {7, "Banyue", {"Rupture", "Fire"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {8, "Ben", {"Defense", "Fire"}, "S", "T3"};
    dbKarakter[jumlahKarakter++] = {9, "Billy", {"Attack", "Physical"}, "A", "T2"};
    dbKarakter[jumlahKarakter++] = {10, "Burnice", {"Anomaly", "Fire"}, "S", "T1"};
    dbKarakter[jumlahKarakter++] = {11, "Caesar", {"Defense", "Physical"}, "S", "T2"};
    dbKarakter[jumlahKarakter++] = {12, "Corin", {"Attack", "Physical"}, "A", "T2"};
    dbKarakter[jumlahKarakter++] = {13, "Dialyn", {"Stun", "Physical"}, "S", "T0"};
    dbKarakter[jumlahKarakter++] = {14, "Ellen", {"Attack", "Ice"}, "S", "T1"};
    dbKarakter[jumlahKarakter++] = {15, "Evelyn", {"Attack", "Fire"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {16, "Grace", {"Anomaly", "Electric"}, "S", "T2"};
    dbKarakter[jumlahKarakter++] = {17, "Harumasa", {"Attack", "Electric"}, "S", "T1"};
    dbKarakter[jumlahKarakter++] = {18, "Hugo", {"Attack", "Ice"}, "S", "T1"};
    dbKarakter[jumlahKarakter++] = {19, "Jane Doe", {"Anomaly", "Physical"}, "S", "T1"};
    dbKarakter[jumlahKarakter++] = {20, "Ju Fufu", {"Stun", "Fire"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {21, "Koleda", {"Stun", "Fire"}, "S", "T2"};
    dbKarakter[jumlahKarakter++] = {22, "Lighter", {"Stun", "Fire"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {23, "Lucia", {"Support", "Ether"}, "S", "T0"};
    dbKarakter[jumlahKarakter++] = {24, "Lucy", {"Support", "Fire"}, "A", "T2"};
    dbKarakter[jumlahKarakter++] = {25, "Lycaon", {"Stun", "Ice"}, "S", "T1"};
    dbKarakter[jumlahKarakter++] = {26, "Manato", {"Rupture", "Fire"}, "A", "T1"};
    dbKarakter[jumlahKarakter++] = {27, "Miyabi", {"Anomaly", "Frost"}, "S", "T0"};
    dbKarakter[jumlahKarakter++] = {28, "Nekomata", {"Attack", "Physical"}, "S", "T2"};
    dbKarakter[jumlahKarakter++] = {29, "Nicole", {"Support", "Ether"}, "A", "T0.5"};
    dbKarakter[jumlahKarakter++] = {30, "Orphie & Magus", {"Attack", "Fire"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {31, "Pan Yinhu", {"Defense", "Physical"}, "A", "T1"};
    dbKarakter[jumlahKarakter++] = {32, "Piper", {"Anomaly", "Physical"}, "A", "T1"};
    dbKarakter[jumlahKarakter++] = {33, "Pulchra", {"Stun", "Physical"}, "A", "T2"};
    dbKarakter[jumlahKarakter++] = {34, "Qingyi", {"Stun", "Electric"}, "S", "T1"};
    dbKarakter[jumlahKarakter++] = {35, "Rina", {"Support", "Electric"}, "S", "T2"};
    dbKarakter[jumlahKarakter++] = {36, "Seed", {"Attack", "Electric"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {37, "Seth", {"Defense", "Electric"}, "A", "T3"};
    dbKarakter[jumlahKarakter++] = {38, "Soldier 11", {"Attack", "Fire"}, "S", "T1"};
    dbKarakter[jumlahKarakter++] = {39, "Soukaku", {"Support", "Ice"}, "A", "T1"};
    dbKarakter[jumlahKarakter++] = {40, "Sunna", {"Support", "Physical"}, "S", "T0"};
    dbKarakter[jumlahKarakter++] = {41, "Trigger", {"Stun", "Electric"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {42, "Vivian", {"Anomaly", "Ether"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {43, "Yanagi", {"Anomaly", "Electric"}, "S", "T1"};
    dbKarakter[jumlahKarakter++] = {44, "Ye Shunguang", {"Attack", "Honed Edge"}, "S", "T0"};
    dbKarakter[jumlahKarakter++] = {45, "Yidhari", {"Rupture", "Ice"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {46, "Yixuan", {"Rupture", "Auric Ink"}, "S", "T0"};
    dbKarakter[jumlahKarakter++] = {47, "Yuzuha", {"Support", "Physical"}, "S", "T0"};
    dbKarakter[jumlahKarakter++] = {48, "Zhao", {"Defense", "Ice"}, "S", "T0.5"};
    dbKarakter[jumlahKarakter++] = {49, "Zhu Yuan", {"Attack", "Ether"}, "S", "T1"};

    dbUser[jumlahUser++] = {1, "ajis", "048", "admin"};
    dbUser[jumlahUser++] = {2, "user", "123", "user"};
    dbUser[jumlahUser++] = {3, "wow", "123", "heker"};
}

int cariKarakterRek(Karakter dbKarakter[], int indeks, string keyword) {
    if (indeks < 0) return -1; 
    if (dbKarakter[indeks].namaKarakter == keyword) return indeks; 
    return cariKarakterRek(dbKarakter, indeks - 1, keyword); 
}

int cariKarakter(Karakter dbKarakter[], int jumlahKarakter, string nama) {
    return cariKarakterRek(dbKarakter, jumlahKarakter - 1, nama); 
}

int cariKarakter(Karakter dbKarakter[], int jumlahKarakter, int id) {
    for (int i = 0; i < jumlahKarakter; i++) {
        if (dbKarakter[i].idKarakter == id) return i;
    }
    return -1;
}

void tampilkanSemuaKarakter(Karakter dbKarakter[], int jumlahKarakter, string roleSaatIni) {
    clearScreen();
    if (roleSaatIni == "admin") {
        cout << "\n" << left << setw(5) << "ID" << setw(20) << "Nama" << setw(10) << "Rank" << setw(15) << "Role" << setw(15) << "Elemen" << setw(10) << "Tier" << "\n";
        cout << "---------------------------------------------------------------------------\n";
    } else {
        cout << "\n" << left << setw(20) << "Nama" << setw(10) << "Rank" << setw(15) << "Role" << setw(15) << "Elemen" << "\n";
        cout << "------------------------------------------------------------\n";
    }
    
    if (jumlahKarakter == 0) cout << "Data karakter kosong.\n";
    
    for (int i = 0; i < jumlahKarakter; i++) {
        if (roleSaatIni == "admin") {
            cout << left << setw(5) << dbKarakter[i].idKarakter
                 << setw(20) << dbKarakter[i].namaKarakter
                 << setw(10) << dbKarakter[i].rankKarakter
                 << setw(15) << dbKarakter[i].detail.roleKarakter
                 << setw(15) << dbKarakter[i].detail.elemenKarakter 
                 << setw(10) << dbKarakter[i].tierKarakter << "\n";
        } else {
            cout << left << setw(20) << dbKarakter[i].namaKarakter
                 << setw(10) << dbKarakter[i].rankKarakter
                 << setw(15) << dbKarakter[i].detail.roleKarakter
                 << setw(15) << dbKarakter[i].detail.elemenKarakter << "\n";
        }
    }
}

void tambahKarakter(Karakter dbKarakter[], int &jumlahKarakter) {
    clearScreen();
    if (jumlahKarakter < 100) {
        Karakter charBaru;
        charBaru.idKarakter = dbKarakter[jumlahKarakter - 1].idKarakter + 1;
        cout << "\n--- TAMBAH KARAKTER ---\n";
        cout << "Nama Karakter: ";
        cin.ignore(); getline(cin, charBaru.namaKarakter);
        cout << "Rank Karakter (S/A): ";
        getline(cin, charBaru.rankKarakter);
        cout << "Role (Attack/Stun/Support/Anomaly/Defense/Rupture): ";
        getline(cin, charBaru.detail.roleKarakter);
        cout << "Elemen (Ice/Ether/Electric/Fire/Physical/dll): ";
        getline(cin, charBaru.detail.elemenKarakter);
        cout << "Tier (T0/T0.5/T1/T2/T3): ";
        getline(cin, charBaru.tierKarakter);

        dbKarakter[jumlahKarakter] = charBaru;
        jumlahKarakter++;
        cout << "Karakter berhasil ditambahkan!\n";
    } else {
        cout << "Database penuh\n";
    }
}

void editKarakter(Karakter dbKarakter[], int jumlahKarakter) {
    clearScreen();
    int idEdit;
    cout << "\n--- EDIT KARAKTER ---\n";
    cout << "Masukkan ID Karakter yang ingin diedit: ";
    cin >> idEdit;

    int i = cariKarakter(dbKarakter, jumlahKarakter, idEdit); 

    if (i != -1) {
        bool sedangEdit = true;
        do {
            clearScreen();
            cout << "\n--- EDIT KARAKTER (" << dbKarakter[i].namaKarakter << ") ---\n";
            cout << "1. Nama   : " << dbKarakter[i].namaKarakter << "\n";
            cout << "2. Rank   : " << dbKarakter[i].rankKarakter << "\n";
            cout << "3. Role   : " << dbKarakter[i].detail.roleKarakter << "\n";
            cout << "4. Elemen : " << dbKarakter[i].detail.elemenKarakter << "\n";
            cout << "5. Tier   : " << dbKarakter[i].tierKarakter << "\n";
            cout << "6. Kembali\n";
            cout << "Pilih data yang ingin diubah (1-6): ";
            
            int pilihanEdit;
            cin >> pilihanEdit;

            if (pilihanEdit == 1) {
                cout << "Masukkan Nama Baru: "; cin.ignore(); getline(cin, dbKarakter[i].namaKarakter);
                cout << "Nama berhasil diubah\n";
            } else if (pilihanEdit == 2) {
                cout << "Masukkan Rank Baru (S/A): "; cin.ignore(); getline(cin, dbKarakter[i].rankKarakter);
            } else if (pilihanEdit == 3) {
                cout << "Masukkan Role Baru: "; cin.ignore(); getline(cin, dbKarakter[i].detail.roleKarakter);
            } else if (pilihanEdit == 4) {
                cout << "Masukkan Elemen Baru: "; cin.ignore(); getline(cin, dbKarakter[i].detail.elemenKarakter);
            } else if (pilihanEdit == 5) {
                cout << "Masukkan Tier Baru: "; cin.ignore(); getline(cin, dbKarakter[i].tierKarakter);
            } else if (pilihanEdit == 6) {
                sedangEdit = false;
            } else {
                cout << "Pilihan tidak valid.\n";
            }
        } while (sedangEdit);
    } else {
        cout << "ID Karakter tidak ditemukan.\n";
    }
}

void hapusKarakter(Karakter dbKarakter[], int &jumlahKarakter) {
    clearScreen();
    int idHapus;
    cout << "\n--- HAPUS KARAKTER ---\n";
    cout << "Masukkan ID Karakter yang ingin dihapus: ";
    cin >> idHapus;

    int pos = cariKarakter(dbKarakter, jumlahKarakter, idHapus); 

    if (pos != -1) {
        for (int j = pos; j < jumlahKarakter - 1; j++) {
            dbKarakter[j] = dbKarakter[j + 1];
        }
        jumlahKarakter--;
        cout << "Karakter berhasil dihapus!\n";
    } else {
        cout << "ID Karakter tidak ditemukan.\n";
    }
}

void tampilkanTierlist(Karakter dbKarakter[], int jumlahKarakter) {
    clearScreen();
    string daftarRole[6] = {"Attack", "Stun", "Support", "Anomaly", "Defense", "Rupture"};
    string daftarTier[6] = {"T0", "T0.5", "T1", "T2", "T3"};

    for (int r = 0; r < 6; r++) {
        cout << "\n=== CLASS : " << daftarRole[r] << " ===\n";
        for (int t = 0; t < 6; t++) {
            bool adaKarakterDiTierIni = false;
            for (int i = 0; i < jumlahKarakter; i++) {
                if (dbKarakter[i].detail.roleKarakter == daftarRole[r] && dbKarakter[i].tierKarakter == daftarTier[t]) {
                    if (!adaKarakterDiTierIni) {
                        cout << "  [ " << daftarTier[t] << " ]\n";
                        adaKarakterDiTierIni = true;
                    }
                    cout << "  - " << dbKarakter[i].namaKarakter << " (Elemen: " << dbKarakter[i].detail.elemenKarakter << ")\n";
                }
            }
        }
    }
}

void ubahTierKarakter(Karakter dbKarakter[], int jumlahKarakter) {
    clearScreen();
    int idTierEdit;
    cout << "\n--- UBAH TIER KARAKTER ---\n";
    cout << "Masukkan ID Karakter : ";
    cin >> idTierEdit;

    int i = cariKarakter(dbKarakter, jumlahKarakter, idTierEdit);

    if (i != -1) {
        cout << "Karakter saat ini : " << dbKarakter[i].namaKarakter << " (Tier: " << dbKarakter[i].tierKarakter << ")\n";
        
        int pilihanTier;
        cout << "Pilih Tier Baru:\n1. T0\n2. T0.5\n3. T1\n4. T2\n5. T3\nPilihan: ";
        cin >> pilihanTier;

        if (pilihanTier == 1) dbKarakter[i].tierKarakter = "T0";
        else if (pilihanTier == 2) dbKarakter[i].tierKarakter = "T0.5";
        else if (pilihanTier == 3) dbKarakter[i].tierKarakter = "T1";
        else if (pilihanTier == 4) dbKarakter[i].tierKarakter = "T2";
        else if (pilihanTier == 5) dbKarakter[i].tierKarakter = "T3";
        else { cout << "Pilihan tidak valid.\n"; return; }
        
        cout << "Tier berhasil diperbarui menjadi " << dbKarakter[i].tierKarakter << "\n";
    } else {
        cout << "ID Karakter tidak valid.\n";
    }
}

void manajemenUser(AkunUser dbUser[], int &jumlahUser, int idUserAktif) {
    bool menuUserAktif = true;
    do {
        clearScreen();
        int menuUser;
        cout << "\n= MANAJEMEN USER =\n";
        cout << "1. Lihat Semua User\n";
        cout << "2. Ubah Data User\n";
        cout << "3. Hapus User\n";
        cout << "4. Kembali\n";
        cout << "Pilih aksi: ";
        cin >> menuUser;

        if (menuUser == 1) {
            clearScreen();
            cout << "\n" << left << setw(5) << "ID" << setw(20) << "Username" << setw(15) << "Role" << "\n";
            cout << "----------------------------------------\n";
            for (int i = 0; i < jumlahUser; i++) {
                cout << left << setw(5) << dbUser[i].idUser
                     << setw(20) << dbUser[i].namaUser
                     << setw(15) << dbUser[i].roleUser << "\n";
            }
            cout << "\nTekan Enter untuk melanjutkan";
            cin.ignore(); cin.get();
        } else if (menuUser == 2) {
            int idEdit;
            bool ketemu = false;
            cout << "Masukkan ID User yang ingin diubah: "; cin >> idEdit;
            for (int i = 0; i < jumlahUser; i++) {
                if (dbUser[i].idUser == idEdit) {
                    ketemu = true;
                    cout << "Username Baru: "; cin >> dbUser[i].namaUser;
                    cout << "NIM/Password Baru: "; cin >> dbUser[i].password;
                    cout << "Data berhasil diperbarui!\n";
                    break;
                }
            }
            if(!ketemu) cout << "ID tidak valid.\n";
            cout << "\nTekan Enter untuk melanjutkan";
            cin.ignore(); cin.get();
        } else if (menuUser == 3) {
            int idHapus;
            bool ketemu = false;
            cout << "Masukkan ID User yang ingin dihapus: "; cin >> idHapus;
            if (idHapus == idUserAktif) {
                cout << "Tidak bisa menghapus akun, Akun Anda masih Aktif\n";
            } else {
                for (int i = 0; i < jumlahUser; i++) {
                    if (dbUser[i].idUser == idHapus) {
                        ketemu = true;
                        for (int j = i; j < jumlahUser - 1; j++) {
                            dbUser[j] = dbUser[j + 1];
                        }
                        jumlahUser--;
                        cout << "User berhasil dihapus!\n";
                        break;
                    }
                }
                if (!ketemu) cout << "ID User tidak valid.\n";
            }
            cout << "\nTekan Enter untuk melanjutkan";
            cin.ignore(); cin.get();
        } else if (menuUser == 4) {
            menuUserAktif = false;
        } else {
            cout << "Pilihan tidak valid.\n";
            cout << "\nTekan Enter untuk melanjutkan";
            cin.ignore(); cin.get();
        }
    } while(menuUserAktif);
}

void editProfil(AkunUser &userAktif) { 
    clearScreen();
    cout << "\n= EDIT PROFIL =\n";
    cout << "Nama Username saat ini: " << userAktif.namaUser << "\n";
    cout << "Masukkan Nama Username baru: ";
    cin >> userAktif.namaUser;
    cout << "Masukkan NIM/Password baru: ";
    cin >> userAktif.password;
    cout << "Profil berhasil diperbarui!\n";
}

void subMenuDbKarakter(Karakter dbKarakter[], int &jumlahKarakter, string roleSaatIni) {
    bool sesiDbKarakter = true;
    do {
        clearScreen();
        int menuDb;
        cout << "\n= DATABASE KARAKTER =\n";
        cout << "1. Tampilkan Semua Karakter\n";
        cout << "2. Cari Karakter\n";
        if (roleSaatIni == "admin") {
            cout << "3. Tambah Karakter Baru\n";
            cout << "4. Edit Karakter\n";
            cout << "5. Hapus Karakter\n";
            cout << "6. Kembali\n";
        } else {
            cout << "3. Kembali\n";
        }
        cout << "Pilih aksi: ";
        cin >> menuDb;

        if (menuDb == 1) {
            tampilkanSemuaKarakter(dbKarakter, jumlahKarakter, roleSaatIni);
            cout << "\nTekan Enter untuk kembali";
            cin.ignore(); cin.get();
        } else if (menuDb == 2) {
            clearScreen();
            string keyword;
            cout << "Masukkan Nama Karakter yang dicari (Perhatikan Huruf Besar/Kecil): ";
            cin.ignore();
            getline(cin, keyword);
            
            int hasilPencarian = cariKarakter(dbKarakter, jumlahKarakter, keyword);
            
            cout << "\n= HASIL PENCARIAN =\n";
            if (hasilPencarian != -1) {
                if (roleSaatIni == "admin") cout << "ID     : " << dbKarakter[hasilPencarian].idKarakter << "\n";
                cout << "Nama   : " << dbKarakter[hasilPencarian].namaKarakter << "\n";
                cout << "Rank   : " << dbKarakter[hasilPencarian].rankKarakter << "\n";
                cout << "Role   : " << dbKarakter[hasilPencarian].detail.roleKarakter << "\n";
                cout << "Elemen : " << dbKarakter[hasilPencarian].detail.elemenKarakter << "\n";
                if (roleSaatIni == "admin") cout << "Tier   : " << dbKarakter[hasilPencarian].tierKarakter << "\n";
            } else {
                cout << "Karakter tidak ditemukan.\n";
            }
            cout << "\nTekan Enter untuk kembali";
            cin.get();
        } else if (menuDb == 3 && roleSaatIni == "admin") {
            tambahKarakter(dbKarakter, jumlahKarakter);
            cout << "\nTekan Enter untuk kembali";
            cin.get();
        } else if (menuDb == 4 && roleSaatIni == "admin") {
            editKarakter(dbKarakter, jumlahKarakter);
        } else if (menuDb == 5 && roleSaatIni == "admin") {
            hapusKarakter(dbKarakter, jumlahKarakter);
            cout << "\nTekan Enter untuk kembali";
            cin.ignore(); cin.get();
        } else if ((menuDb == 6 && roleSaatIni == "admin") || (menuDb == 3 && roleSaatIni == "user")) {
            sesiDbKarakter = false;
        } else {
            cout << "Pilihan tidak valid.\n";
            cout << "\nTekan Enter untuk kembali";
            cin.ignore(); cin.get();
        }
    } while (sesiDbKarakter);
}

void subMenuTierlist(Karakter dbKarakter[], int &jumlahKarakter, string roleSaatIni) {
    bool sesiTierlist = true;
    do {
        clearScreen();
        int menuTier;
        cout << "\n= TIERLIST KARAKTER =\n";
        cout << "1. Tampilkan Tierlist Berdasarkan Class/Role\n";
        if (roleSaatIni == "admin") {
            cout << "2. Ubah Tier Karakter\n";
            cout << "3. Kembali\n";
        } else {
            cout << "2. Kembali\n";
        }
        cout << "Pilih aksi: ";
        cin >> menuTier;

        if (menuTier == 1) {
            tampilkanTierlist(dbKarakter, jumlahKarakter);
            cout << "\nTekan Enter untuk kembali";
            cin.ignore(); cin.get();
        } else if (menuTier == 2 && roleSaatIni == "admin") {
            ubahTierKarakter(dbKarakter, jumlahKarakter);
            cout << "\nTekan Enter untuk kembali";
            cin.ignore(); cin.get();
        } else if ((menuTier == 3 && roleSaatIni == "admin") || (menuTier == 2 && roleSaatIni == "user")) {
            sesiTierlist = false;
        } else {
            cout << "Pilihan tidak valid.\n";
            cout << "\nTekan Enter untuk kembali";
            cin.ignore(); cin.get();
        }
    } while (sesiTierlist);
}

void Admin(Karakter dbKarakter[], int &jumlahKarakter, AkunUser dbUser[], int &jumlahUser, int indeksUserAktif, bool &dashboardAktif) {
    do {
        clearScreen();
        cout << "\nSelamat datang, " << dbUser[indeksUserAktif].namaUser << " (Admin)!\n";
        cout << "\n=== DASHBOARD ADMIN ===\n";
        cout << "1. Database Karakter\n";
        cout << "2. Tierlist Karakter\n";
        cout << "3. Manajemen User\n";
        cout << "4. Logout\n";
        cout << "Pilih menu: ";
        
        int menuDashboard;
        cin >> menuDashboard;

        if (menuDashboard == 1) {
            subMenuDbKarakter(dbKarakter, jumlahKarakter, "admin");
        } else if (menuDashboard == 2) {
            subMenuTierlist(dbKarakter, jumlahKarakter, "admin");
        } else if (menuDashboard == 3) {
            manajemenUser(dbUser, jumlahUser, dbUser[indeksUserAktif].idUser);
        } else if (menuDashboard == 4) {
            cout << "Logout berhasil! Kembali ke menu utama.\n";
            dashboardAktif = false;
        } else {
            cout << "Pilihan tidak valid.\n";
            cout << "\nTekan Enter untuk kembali";
            cin.ignore(); cin.get();
        }
    } while (dashboardAktif);
}

void User(Karakter dbKarakter[], int &jumlahKarakter, AkunUser dbUser[], int indeksUserAktif, bool &dashboardAktif) {
    do {
        clearScreen();
        cout << "\nSelamat datang, " << dbUser[indeksUserAktif].namaUser << "!\n";
        cout << "\n=== DASHBOARD PENGGUNA ===\n";
        cout << "1. Database Karakter\n";
        cout << "2. Tierlist Karakter\n";
        cout << "3. Edit Profil\n";
        cout << "4. Logout\n";
        cout << "Pilih menu: ";
        
        int menuDashboard;
        cin >> menuDashboard;

        if (menuDashboard == 1) {
            subMenuDbKarakter(dbKarakter, jumlahKarakter, "user");
        } else if (menuDashboard == 2) {
            subMenuTierlist(dbKarakter, jumlahKarakter, "user");
        } else if (menuDashboard == 3) {
            editProfil(dbUser[indeksUserAktif]);
            cout << "\nTekan Enter untuk kembali";
            cin.ignore(); cin.get();
        } else if (menuDashboard == 4) {
            cout << "Logout berhasil! Kembali ke menu utama.\n";
            dashboardAktif = false;
        } else {
            cout << "Pilihan tidak valid.\n";
            cout << "\nTekan Enter untuk kembali";
            cin.ignore(); cin.get();
        }
    } while (dashboardAktif);
}

void registerUser(AkunUser dbUser[], int &jumlahUser) {
    clearScreen();
    if (jumlahUser < 50) {
        cout << "\n--- MENU REGISTER ---\n";
        AkunUser akunBaru;
        
        if (jumlahUser == 0) akunBaru.idUser = 1;
        else akunBaru.idUser = dbUser[jumlahUser - 1].idUser + 1;
        
        cout << "Masukkan Username: ";
        cin >> akunBaru.namaUser;
        cout << "Masukkan Password: ";
        cin >> akunBaru.password;
        akunBaru.roleUser = "user";

        dbUser[jumlahUser] = akunBaru;
        jumlahUser++;
        cout << "Register berhasil! Silakan Login.\n";
    } else {
        cout << "Kapasitas user penuh\n";
    }
}

void prosesLogin(Karakter dbKarakter[], int &jumlahKarakter, AkunUser dbUser[], int &jumlahUser, bool &App) {
    string inputUser, inputPassword;
    bool statusLoginSukses = false;
    int indeksUserAktif = -1;
    int cobaLogin = 3;

    while (cobaLogin > 0 && !statusLoginSukses) {
        clearScreen();
        cout << "\nLogin (Sisa percobaan: " << cobaLogin << ")\n";
        cout << "Masukkan Username: ";
        cin >> inputUser;
        cout << "Masukkan password : ";
        cin >> inputPassword;

        for (int i = 0; i < jumlahUser; i++) {
            if (dbUser[i].namaUser == inputUser && dbUser[i].password == inputPassword) {
                statusLoginSukses = true;
                indeksUserAktif = i;
                break;
            }
        }

        if (!statusLoginSukses) {
            cout << "Username atau Password salah!\n";
            cobaLogin--;
            cout << "\nTekan Enter untuk mencoba lagi";
            cin.ignore(); cin.get();
        }
    }

    if (cobaLogin == 0) {
        clearScreen();
        cout << "\n===========================================\n";
        cout << "  Program dihentikan. Gagal login 3 kali.  \n";
        cout << "===========================================\n";
        App = false;
        return;
    }

    if (statusLoginSukses) {
        bool dashboardAktif = true;
        string roleSaatIni = dbUser[indeksUserAktif].roleUser;

        if (roleSaatIni == "admin") {
            Admin(dbKarakter, jumlahKarakter, dbUser, jumlahUser, indeksUserAktif, dashboardAktif);
        } else if (roleSaatIni == "user") {
            User(dbKarakter, jumlahKarakter, dbUser, indeksUserAktif, dashboardAktif);
        } else {
            cout << "\nHeker Jir\n";
            App = false;
        }
    }
}

int main() {
    Karakter dbKarakter[100];
    int jumlahKarakter = 0;
    AkunUser dbUser[50];
    int jumlahUser = 0;

    inisialisasiData(dbKarakter, jumlahKarakter, dbUser, jumlahUser);

    bool App = true;

    do {
        clearScreen();
        cout << "===========================================\n";
        cout << "   DATABASE & TIERLIST ZENLESS ZONE ZONE   \n";
        cout << "===========================================\n";
        
        int menuAwal;
        cout << "\n--- MENU LOG IN ---\n";
        cout << "1. Login\n";
        cout << "2. Register\n";
        cout << "3. Keluar Aplikasi\n";
        cout << "Pilih menu (1-3): ";
        cin >> menuAwal;

        if (menuAwal == 3) {
            cout << "Terima kasih telah menggunakan sistem database ZZZ\n";
            App = false;
        } 
        else if (menuAwal == 2) {
            registerUser(dbUser, jumlahUser);
            cout << "\nTekan Enter untuk kembali ke menu awal";
            cin.ignore(); cin.get();
        } 
        else if (menuAwal == 1) {
            prosesLogin(dbKarakter, jumlahKarakter, dbUser, jumlahUser, App);
        } else {
            cout << "Pilihan menu awal tidak valid.\n";
            cout << "\nTekan Enter untuk kembali";
            cin.ignore(); cin.get();
        }
    } while (App);

    return 0;
}