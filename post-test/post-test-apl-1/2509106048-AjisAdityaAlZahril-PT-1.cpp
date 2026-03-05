#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama = "ajis";
    string password = "048";
    
    int batLog = 3;
    bool statLog = false;
    int pilihanMenu;
    double waktu;

    cout << "===========================================\n";
    cout << "          SISTEM KONVERSI WAKTU            \n";
    cout << "===========================================\n";

    while (batLog > 0) {
        cout << "\nLogin (Sisa percobaan: " << batLog << ")\n";
        cout << "Masukkan Nama: ";
        cin >> nama;
        
        cout << "\nMasukkan Password: ";
        cin >> password;

        if (password == "048" && nama == "ajis") {
            statLog = true;
            break;
        } else {
            cout << "Password salah, Login Kembali.\n";
            batLog--;
        }
    }

    if (!statLog) {
        cout << "\n===========================================\n";
        cout << "  Program dihentikan. Gagal login 3 kali.  \n";
        cout << "===========================================\n";
        return 0; 
    }

    do {
        cout << "\n===========================================\n";
        cout << "              MENU UTAMA                   \n";
        cout << "===========================================\n";
        cout << "1. Konversi Jam = Menit dan Detik\n";
        cout << "2. Konversi Menit = Jam dan Detik\n";
        cout << "3. Konversi Detik = Jam dan Menit\n";
        cout << "4. Keluar\n";
        cout << "===========================================\n";
        cout << "Pilih menu (1-4): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1:
                cout << "\nKonversi Jam ke Menit & Detik\n";
                cout << "Masukkan waktu (Jam): ";
                cin >> waktu;
                cout << "Hasil: " << waktu << " Jam = " << (waktu * 60) << " Menit dan " << (waktu * 3600) << " Detik.\n";
                break;
                
            case 2:
                cout << "\nKonversi Menit ke Jam & Detik\n";
                cout << "Masukkan waktu (Menit): ";
                cin >> waktu;
                cout << "Hasil: " << waktu << " Menit = " << (waktu / 60) << " Jam dan " << (waktu * 60) << " Detik.\n";
                break;
                
            case 3:
                cout << "\nKonversi Detik ke Jam & Menit\n";
                cout << "Masukkan nilai waktu (Detik): ";
                cin >> waktu;
                cout << "Hasil: " << waktu << " Detik = " << (waktu / 3600) << " Jam dan " << (waktu / 60) << " Menit.\n";
                break;
                
            case 4:
                cout << "\n===========================================\n";
                cout << "             Terima kasih                    \n";
                cout << "===========================================\n";
                break;

            default:
                cout << "\nPilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihanMenu != 4);

    return 0;
}