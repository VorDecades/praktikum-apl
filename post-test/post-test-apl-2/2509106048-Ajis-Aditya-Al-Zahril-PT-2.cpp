    #include <iostream>
    #include <string>
    #include <iomanip>

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

    int main() {
        Karakter dbKarakter[100];
        int jumlahKarakter = 0;

        dbKarakter[jumlahKarakter] = {1, "Alice", {"Anomaly", "Physical"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {2, "Anby Demara", {"Stun", "Electric"}, "A", "T3"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {3, "Anby: Soldier 0", {"Attack", "Electric"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {4, "Anton", {"Attack", "Electric"}, "A", "T2"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {5, "Aria", {"Anomaly", "Ether"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {6, "Astra Yao", {"Support", "Ether"}, "S", "T0"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {7, "Banyue", {"Rupture", "Fire"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {8, "Ben", {"Defense", "Fire"}, "S", "T3"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {9, "Billy", {"Attack", "Physical"}, "A", "T2"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {10, "Burnice", {"Anomaly", "Fire"}, "S", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {11, "Caesar", {"Defense", "Physical"}, "S", "T2"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {12, "Corin", {"Attack", "Physical"}, "A", "T2"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {13, "Dialyn", {"Stun", "Physical"}, "S", "T0"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {14, "Ellen", {"Attack", "Ice"}, "S", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {15, "Evelyn", {"Attack", "Fire"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {16, "Grace", {"Anomaly", "Electric"}, "S", "T2"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {17, "Harumasa", {"Attack", "Electric"}, "S", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {18, "Hugo", {"Attack", "Ice"}, "S", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {19, "Jane Doe", {"Anomaly", "Physical"}, "S", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {20, "Ju Fufu", {"Stun", "Fire"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {21, "Koleda", {"Stun", "Fire"}, "S", "T2"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {22, "Lighter", {"Stun", "Fire"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {23, "Lucia", {"Support", "Ether"}, "S", "T0"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {24, "Lucy", {"Support", "Fire"}, "A", "T2"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {25, "Lycaon", {"Stun", "Ice"}, "S", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {26, "Manato", {"Rupture", "Fire"}, "A", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {27, "Miyabi", {"Anomaly", "Frost"}, "S", "T0"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {28, "Nekomata", {"Attack", "Physical"}, "S", "T2"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {29, "Nicole", {"Support", "Ether"}, "A", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {30, "Orphie & Magus", {"Attack", "Fire"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {31, "Pan Yinhu", {"Defense", "Physical"}, "A", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {32, "Piper", {"Anomaly", "Physical"}, "A", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {33, "Pulchra", {"Stun", "Physical"}, "A", "T2"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {34, "Qingyi", {"Stun", "Electric"}, "S", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {35, "Rina", {"Support", "Electric"}, "S", "T2"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {36, "Seed", {"Attack", "Electric"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {37, "Seth", {"Defense", "Electric"}, "A", "T3"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {38, "Soldier 11", {"Attack", "Fire"}, "S", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {39, "Soukaku", {"Support", "Ice"}, "A", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {40, "Sunna", {"Support", "Physical"}, "S", "T0"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {41, "Trigger", {"Stun", "Electric"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {42, "Vivian", {"Anomaly", "Ether"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {43, "Yanagi", {"Anomaly", "Electric"}, "S", "T1"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {44, "Ye Shunguang", {"Attack", "Honed Edge"}, "S", "T0"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {45, "Yidhari", {"Rupture", "Ice"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {46, "Yixuan", {"Rupture", "Auric Ink"}, "S", "T0"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {47, "Yuzuha", {"Support", "Physical"}, "S", "T0"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {48, "Zhao", {"Defense", "Ice"}, "S", "T0.5"};
        jumlahKarakter++;
        dbKarakter[jumlahKarakter] = {49, "Zhu Yuan", {"Attack", "Ether"}, "S", "T1"};
        jumlahKarakter++;

        AkunUser dbUser[50];
        int jumlahUser = 0;

        dbUser[jumlahUser] = {1, "ajis", "048", "admin"};
        jumlahUser++;
        dbUser[jumlahUser] = {2, "user", "123", "user"};
        jumlahUser++;

        bool App = true;
        int cobaLogin = 3;

        cout << "===========================================\n";
        cout << "  DATABASE ZENLESS ZONE ZERO & TIERLIST    \n";
        cout << "===========================================\n";

        do {
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
                break;
            } 
            else if (menuAwal == 2) {
                if (jumlahUser < 50) {
                    cout << "\n--- MENU REGISTER ---\n";
                    AkunUser akunBaru;
                    akunBaru.idUser = jumlahUser + 1;
                    cout << "Masukkan Nama (Username): ";
                    cin >> akunBaru.namaUser;
                    cout << "Masukkan NIM (Password): ";
                    cin >> akunBaru.password;
                    akunBaru.roleUser = "user";

                    dbUser[jumlahUser] = akunBaru;
                    jumlahUser++;
                    cout << "Register berhasil! Silakan Login.\n";
                } else {
                    cout << "Kapasitas user penuh\n";
                }
            } 
            else if (menuAwal == 1) {
                string inputNama, inputPassword;
                bool statusLoginSukses = false;
                int indeksUserAktif = -1;

                while (cobaLogin > 0 && !statusLoginSukses) {
                    cout << "\nLogin (Sisa percobaan: " << cobaLogin << ")\n";
                    cout << "Masukkan Nama: ";
                    cin >> inputNama;
                    cout << "Masukkan NIM : ";
                    cin >> inputPassword;

                    for (int i = 0; i < jumlahUser; i++) {
                        if (dbUser[i].namaUser == inputNama && dbUser[i].password == inputPassword) {
                            statusLoginSukses = true;
                            indeksUserAktif = i;
                            break;
                        }
                    }

                    if (!statusLoginSukses) {
                        cout << "Username atau Password salah!\n";
                        cobaLogin--;
                    }
                }

                if (cobaLogin == 0) {
                    cout << "\n===========================================\n";
                    cout << "  Program dihentikan. Gagal login 3 kali.  \n";
                    cout << "===========================================\n";
                    App = false;
                    break;
                }

                if (statusLoginSukses) {
                    cobaLogin = 3;
                    bool dashboardAktif = true;
                    string roleSaatIni = dbUser[indeksUserAktif].roleUser;

                    cout << "\nSelamat datang, " << dbUser[indeksUserAktif].namaUsername << "!\n";

                    do {
                        int menuDashboard;

                        if (roleSaatIni == "admin") {
                            cout << "\n=== DASHBOARD ADMIN ===\n";
                            cout << "1. Database Karakter\n";
                            cout << "2. Tierlist Karakter\n";
                            cout << "3. Manajemen User\n";
                            cout << "4. Logout\n";
                            cout << "Pilih menu: ";
                            cin >> menuDashboard;
                        } 
                        else if (roleSaatIni == "user") {
                            cout << "\n=== DASHBOARD PENGGUNA ===\n";
                            cout << "1. Database Karakter\n";
                            cout << "2. Tierlist Karakter\n";
                            cout << "3. Edit Profil\n";
                            cout << "4. Logout\n";
                            cout << "Pilih menu: ";
                            cin >> menuDashboard;
                        }
                        else {
                            cout << "\nheker jir.\n";
                            break;
                        }

                        if (menuDashboard == 1) {
                            bool sesiDbKarakter = true;
                            do {
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
                                else if (menuDb == 2) {
                                    string keywordPencarian;
                                    bool ditemukan = false;
                                    int posDitemukan = -1;

                                    cout << "Masukkan Nama Karakter yang dicari (Perhatikan Huruf Besar/Kecil): ";
                                    cin.ignore();
                                    getline(cin, keywordPencarian);

                                    for (int i = 0; i < jumlahKarakter; i++) {
                                        if (dbKarakter[i].namaKarakter == keywordPencarian) {
                                            posDitemukan = i;
                                            ditemukan = true;
                                            break;
                                        }
                                    }

                                    cout << "\n= HASIL PENCARIAN =\n";
                                    if (ditemukan) {
                                        if (roleSaatIni == "admin") cout << "ID     : " << dbKarakter[posDitemukan].idKarakter << "\n";
                                        
                                        cout << "Nama   : " << dbKarakter[posDitemukan].namaKarakter << "\n";
                                        cout << "Rank   : " << dbKarakter[posDitemukan].rankKarakter << "\n";
                                        cout << "Role   : " << dbKarakter[posDitemukan].detail.roleKarakter << "\n";
                                        cout << "Elemen : " << dbKarakter[posDitemukan].detail.elemenKarakter << "\n";

                                        if (roleSaatIni == "admin") cout << "Tier   : " << dbKarakter[posDitemukan].tierKarakter << "\n";
                                    } else {
                                        cout << "Karakter tidak ditemukan.\n";
                                    }
                                }
                                else if (menuDb == 3 && roleSaatIni == "admin") {
                                    if (jumlahKarakter < 100) {
                                        Karakter charBaru;
                                        charBaru.idKarakter = jumlahKarakter + 1;
                                        cout << "Nama Karakter: ";
                                        cin.ignore(); getline(cin, charBaru.namaKarakter);
                                        cout << "Rank Karakter (S/A): ";
                                        getline(cin, charBaru.rankKarakter);
                                        cout << "Role (Attack/Stun/Support/Anomaly/Defense/Rupture): ";
                                        getline(cin, charBaru.detail.roleKarakter);
                                        cout << "Elemen (Ice/Ether/Electric/dll): ";
                                        getline(cin, charBaru.detail.elemenKarakter);
                                        cout << "Tier (T0/T0.5/T1/T2/T3): ";
                                        getline(cin, charBaru.tierKarakter);

                                        dbKarakter[jumlahKarakter] = charBaru;
                                        jumlahKarakter++;
                                        cout << "Karakter berhasil ditambahkan!\n";
                                    } else 
                                        cout << "Database penuh\n";
                                }
                                else if (menuDb == 4 && roleSaatIni == "admin") {
                                    int idEdit;
                                    bool ketemu = false;
                                    cout << "Masukkan ID Karakter yang ingin diedit: ";
                                    cin >> idEdit;

                                    for (int i = 0; i < jumlahKarakter; i++) {
                                        if (dbKarakter[i].idKarakter == idEdit) {
                                            ketemu = true;
                                            bool sedangEdit = true;

                                            do {
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
                                                    cout << "Masukkan Nama Baru: ";
                                                    cin.ignore();
                                                    getline(cin, dbKarakter[i].namaKarakter);
                                                    cout << "Nama berhasil diubah\n";
                                                } else if (pilihanEdit == 2) {
                                                    cout << "Masukkan Rank Baru (S/A): ";
                                                    cin.ignore();
                                                    getline(cin, dbKarakter[i].rankKarakter);
                                                    cout << "Rank berhasil diubah\n";
                                                } else if (pilihanEdit == 3) {
                                                    cout << "Masukkan Role Baru: ";
                                                    cin.ignore();
                                                    getline(cin, dbKarakter[i].detail.roleKarakter);
                                                    cout << "Role berhasil diubah\n";
                                                } else if (pilihanEdit == 4) {
                                                    cout << "Masukkan Elemen Baru: ";
                                                    cin.ignore();
                                                    getline(cin, dbKarakter[i].detail.elemenKarakter);
                                                    cout << "Elemen berhasil diubah\n";
                                                } else if (pilihanEdit == 5) {
                                                    cout << "Masukkan Tier Baru: ";
                                                    cin.ignore();
                                                    getline(cin, dbKarakter[i].tierKarakter);
                                                    cout << "Tier berhasil diubah\n";
                                                } else if (pilihanEdit == 6) {
                                                    sedangEdit = false;
                                                } else {
                                                    cout << "Pilihan tidak valid.\n";
                                                }
                                            } while (sedangEdit);
                                            
                                            break;
                                        }
                                    }
                                    if (!ketemu) cout << "ID Karakter tidak ditemukan.\n";
                                }
                                else if (menuDb == 5 && roleSaatIni == "admin") {
                                    int idHapus;
                                    bool ketemu = false;
                                    cout << "Masukkan ID Karakter yang ingin dihapus: ";
                                    cin >> idHapus;

                                    for (int i = 0; i < jumlahKarakter; i++) {
                                        if (dbKarakter[i].idKarakter == idHapus) {
                                            ketemu = true;
                                            for (int j = i; j < jumlahKarakter - 1; j++) {
                                                dbKarakter[j] = dbKarakter[j + 1];
                                            }
                                            jumlahKarakter--;
                                            cout << "Karakter berhasil dihapus!\n";
                                            break;
                                        }
                                    }
                                    if (!ketemu) cout << "ID Karakter tidak ditemukan.\n";
                                }
                                else if ((menuDb == 6 && roleSaatIni == "admin") || (menuDb == 3 && roleSaatIni == "user")) {
                                    sesiDbKarakter = false;
                                } else {
                                    cout << "Pilihan tidak valid.\n";
                                }
                            } while (sesiDbKarakter);
                        }

                        else if (menuDashboard == 2) {
                            bool sesiTierlist = true;
                            do {
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
                                else if (menuTier == 2 && roleSaatIni == "admin") {
                                    int idTierEdit;
                                    bool ketemu = false;
                                    cout << "Masukkan ID Karakter : ";
                                    cin >> idTierEdit;

                                    for (int i = 0; i < jumlahKarakter; i++) {
                                        if (dbKarakter[i].idKarakter == idTierEdit) {
                                            ketemu = true;
                                            cout << "Karakter saat ini : " << dbKarakter[i].namaKarakter << " (Tier: " << dbKarakter[i].tierKarakter << ")\n";
                                            
                                            int pilihanTier;
                                            cout << "Pilih Tier Baru:\n";
                                            cout << "1. T0\n";
                                            cout << "2. T0.5\n";
                                            cout << "3. T1\n";
                                            cout << "4. T2\n";
                                            cout << "5. T3\n";
                                            cout << "Pilihan: ";
                                            cin >> pilihanTier;

                                            if (pilihanTier == 1) dbKarakter[i].tierKarakter = "T0";
                                            else if (pilihanTier == 2) dbKarakter[i].tierKarakter = "T0.5";
                                            else if (pilihanTier == 3) dbKarakter[i].tierKarakter = "T1";
                                            else if (pilihanTier == 4) dbKarakter[i].tierKarakter = "T2";
                                            else if (pilihanTier == 5) dbKarakter[i].tierKarakter = "T3";
                                            else cout << "Pilihan tidak valid.\n";

                                            if (pilihanTier >= 1 && pilihanTier <= 5) {
                                                cout << "Tier berhasil diperbarui menjadi " << dbKarakter[i].tierKarakter << "\n";
                                            }
                                            break;
                                        }
                                    }
                                    if (!ketemu) cout << "ID Karakter tidak valid.\n";
                                }
                                else if ((menuTier == 3 && roleSaatIni == "admin") || (menuTier == 2 && roleSaatIni == "user")) {
                                    sesiTierlist = false;
                                } else {
                                    cout << "Pilihan tidak valid.\n";
                                }
                            } while (sesiTierlist);
                        }

                        else if (menuDashboard == 3) {
                            if (roleSaatIni == "admin") {
                                bool manajemenUser = true;
                                do {
                                    int menuUser;
                                    cout << "\n= MANAJEMEN USER =\n";
                                    cout << "1. Lihat Semua User\n";
                                    cout << "2. Ubah Data User\n";
                                    cout << "3. Hapus User\n";
                                    cout << "4. Kembali\n";
                                    cout << "Pilih aksi: ";
                                    cin >> menuUser;

                                    if (menuUser == 1) {
                                        cout << "\n" << left << setw(5) << "ID" << setw(20) << "Username" << setw(15) << "Role" << "\n";
                                        cout << "----------------------------------------\n";
                                        for (int i = 0; i < jumlahUser; i++) {
                                            cout << left << setw(5) << dbUser[i].idUser
                                                << setw(20) << dbUser[i].namaUsername
                                                << setw(15) << dbUser[i].roleUser << "\n";
                                        }
                                    }
                                    else if (menuUser == 2) {
                                        int idUserEdit;
                                        bool ketemu = false;
                                        cout << "Masukkan ID User yang ingin diubah: ";
                                        cin >> idUserEdit;
                                        for (int i = 0; i < jumlahUser; i++) {
                                            if (dbUser[i].idUser == idUserEdit) {
                                                ketemu = true;
                                                cout << "Username Baru: ";
                                                cin >> dbUser[i].namaUsername;
                                                cout << "NIM/Password Baru: ";
                                                cin >> dbUser[i].passwordNim;
                                                cout << "Data User berhasil diperbarui!\n";
                                                break;
                                            }
                                        }
                                        if (!ketemu) cout << "ID User tidak valid.\n";
                                    }
                                    else if (menuUser == 3) {
                                        int idUserHapus;
                                        bool ketemu = false;
                                        cout << "Masukkan ID User yang ingin dihapus: ";
                                        cin >> idUserHapus;
                                        if (idUserHapus == dbUser[indeksUserAktif].idUser) {
                                            cout << "Tidak bisa menghapus akun, Akun masih Aktif\n";
                                        } else {
                                            for (int i = 0; i < jumlahUser; i++) {
                                                if (dbUser[i].idUser == idUserHapus) {
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
                                    }
                                    else if (menuUser == 4) {
                                        manajemenUser = false;
                                    } else {
                                        cout << "Pilihan tidak valid.\n";
                                    }
                                } while (manajemenUser);
                            }
                            else if (roleSaatIni == "user") {
                                cout << "\n= EDIT PROFIL =\n";
                                cout << "Nama Username saat ini: " << dbUser[indeksUserAktif].namaUsername << "\n";
                                cout << "Masukkan Nama Username baru: ";
                                cin >> dbUser[indeksUserAktif].namaUsername;
                                cout << "Masukkan NIM/Password baru: ";
                                cin >> dbUser[indeksUserAktif].passwordNim;
                                cout << "Profil berhasil diperbarui!\n";
                            }
                            else {
                                cout << "\nHeker Jir.\n";
                                break;
                            }
                        }

                        else if (menuDashboard == 4) {
                            cout << "Logout berhasil! Kembali ke menu utama.\n";
                            dashboardAktif = false;
                        }

                        else {
                            cout << "Pilihan tidak valid.\n";
                        }

                    } while (dashboardAktif);
                }
            }
            else {
                cout << "Pilihan menu awal tidak valid.\n";
            }

        } while (App);

        return 0;
    }