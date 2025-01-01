#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Passenger {
    string name;
    string flightNumber;
    string destination;
    string departureAirport;
    string airline;
    double ticketPrice;
};

// Fungsi untuk menampilkan data penumpang
void displayPassengerData(const Passenger& passenger) {
    cout << "====================================\n";
    cout << "       DATA PENUMPANG PESAWAT       \n";
    cout << "====================================\n";
    cout << "Nama: " << passenger.name << "\n";
    cout << "Nomor Penerbangan: " << passenger.flightNumber << "\n";
    cout << "Tujuan: " << passenger.destination << "\n";
    cout << "Bandara Keberangkatan: " << passenger.departureAirport << "\n";
    cout << "Maskapai: " << passenger.airline << "\n";
    cout << fixed << setprecision(2);
    cout << "Harga Tiket: Rp" << passenger.ticketPrice << "\n";
    cout << "====================================\n";
}

// Fungsi untuk menampilkan daftar maskapai lain
void displayAirlines(const vector<pair<string, double>>& airlines) {
    cout << "====================================\n";
    cout << "          DAFTAR MASKAPAI          \n";
    cout << "====================================\n";
    for (size_t i = 0; i < airlines.size(); ++i) {
        cout << i + 1 << ". " << airlines[i].first << " - Rp" << airlines[i].second << "\n";
    }
    cout << "====================================\n";
}

// Fungsi untuk menghitung total harga tiket berdasarkan jumlah penumpang
void calculateTotalPrice(const Passenger& passenger, int numberOfPassengers) {
    double totalPrice = passenger.ticketPrice * numberOfPassengers;
    cout << "====================================\n";
    cout << "TOTAL HARGA TIKET\n";
    cout << "====================================\n";
    cout << "Jumlah Penumpang: " << numberOfPassengers << "\n";
    cout << "Harga Tiket per Penumpang: Rp" << passenger.ticketPrice << "\n";
    cout << "Total Harga: Rp" << totalPrice << "\n";
    cout << "====================================\n";
}

int main() {
    // Data penumpang
    Passenger passenger = {
        "Misbakhul Munir",   // Nama
        "EK202",             // Nomor Penerbangan
        "Amsterdam",         // Tujuan
        "Bandara Internasional Soekarno-Hatta", // Bandara Keberangkatan
        "Emirates",          // Maskapai
        20000000              // Harga Tiket
    };

    // Daftar maskapai lain
    vector<pair<string, double>> airlines = {
        {"Garuda Indonesia", 1600000},
        {"Lion Air", 1900000},
        {"Etihad", 4900000},
        {"Air Canada", 24000000},
        {"KLM Royal Dutch", 15800000},
        {"Emirates", 20000000}
    };

    // Menampilkan data penumpang
    displayPassengerData(passenger);

    // Menampilkan daftar maskapai lain
    displayAirlines(airlines);

    // Menanyakan jumlah penumpang dan menghitung total harga tiket
    int numberOfPassengers;
    cout << "Masukkan jumlah penumpang: ";
    cin >> numberOfPassengers;
    calculateTotalPrice(passenger, numberOfPassengers);

    return 0;
}
