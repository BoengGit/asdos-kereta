#include <iostream>
using namespace std;

struct Rute
{
    int id;
    string awal_keberangkatan;
    string akhir_keberangkatan;
    string jenis_tiket[2];
    long harga_ekonomi;
    long harga_eksekutif;
};

Rute rute[3] = {
    {0,
     "KARAWANG",
     "CIKARANG",
     {"EKONOMI", "EKSEKUTIF"},
     50000,
     70000},
    {
        1,
        "KARAWANG",
        "JAKARTA",
        {"EKONOMI", "EKSEKUTIF"},
        80000,
        100000,
    },
    {2,
     "KARAWANG",
     "BANDUNG",
     {"EKONOMI", "EKSEKUTIF"},
     70000,
     90000}};
