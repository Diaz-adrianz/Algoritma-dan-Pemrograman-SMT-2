// Definisikan tipe data terstruktur untuk menyatakan data penerbangan di sebuah bandara
#include <string>
#include <ctime>
using namespace std;

struct Penerbangan
{
    string nomor_penerbangan;
    string kota_asal;
    string kota_tujuan;
    time_t tanggal_berangkat;
    time_t jam_berangkat;
    time_t jam_datang;
};
