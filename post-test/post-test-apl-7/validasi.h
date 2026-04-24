#ifndef VALIDASI_H
#define VALIDASI_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>

using namespace std;

int inputInt(const string& prompt) {
    int nilai;
    cout << prompt;
    if (!(cin >> nilai)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw invalid_argument("Input harus berupa angka bulat!");
    }
    return nilai;
}

void validasiMenu(int pilihan, int min, int max) {
    if (pilihan < min || pilihan > max) {
        throw out_of_range("Pilihan menu tidak valid! Masukkan angka " +
                           to_string(min) + " - " + to_string(max) + ".");
    }
}

void validasiStringKosong(const string& input, const string& namaField) {
    if (input.empty()) {
        throw invalid_argument("Field '" + namaField + "' tidak boleh kosong!");
    }
}

void validasiRank(const string& rank) {
    if (rank != "S" && rank != "A") {
        throw invalid_argument("Rank tidak valid! Harus 'S' atau 'A'.");
    }
}

void validasiTier(const string& tier) {
    if (tier != "T0" && tier != "T0.5" && tier != "T1" && tier != "T2" && tier != "T3") {
        throw invalid_argument("Tier tidak valid! Gunakan: T0, T0.5, T1, T2, atau T3.");
    }
}

void validasiID(int id) {
    if (id <= 0) {
        throw invalid_argument("ID harus berupa angka positif!");
    }
}

#endif
