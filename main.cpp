#include <iostream>
using namespace std;
#include "_data_kereta.cpp"

int pilih_rute;
char _REPEAT;

// FUNCTION PILIH RUTE
int pilihRute()
{
    // UCAPAN SELAMAT DATANG
    cout << "|=========================================================|" << endl;
    cout << "|=============   SELAMAT DATANG (WELCOME)!   =============|" << endl;
    cout << "|=========================================================|" << endl;
    cout << "============== SILAKAN PILIH RUTE KERETA ENTE ============|" << endl;
    cout << "|                                                         |" << endl;
    cout << "| 1. KARAWANG - CIKARANG                                  |" << endl;
    cout << "| 2. KARAWANG - JAKARTA                                   |" << endl;
    cout << "| 3. KARAWANG - BANDUNG                                   |" << endl;
    cout << "|                                                         |" << endl;
    cout << "|=========================================================|" << endl;
    // END UCAPAN SELAMAT DATANG

    // LOGIKA MASUKIN PILIHAN RUTE DAN LOOPING BILA USER MASUKIN PILIHAN MENU YANG ADE-ADE AJE
    do
    {
        cout << "\n MASUKIN PILIHAN RUTE YANG ENTE INGINKAN: ";
        cin >> pilih_rute;
        cout << endl;

        if (cin.fail() || pilih_rute > 3 || pilih_rute <= 0)
        {
            cin.clear();
            cin.ignore();
            cout << endl
                 << endl;
            cout << "|=========================================================|" << endl;
            cout << "|===== JANGAN NGIDE ENTE, MASUKIN PILIHAN YANG BENER =====|" << endl;
            cout << "|=========================================================|" << endl;
        }

    } while (cin.fail() || pilih_rute > 3 || pilih_rute <= 0);
    // END LOGIKA MASUKIN PILIHAN RUTE DAN LOOPING BILA USER MASUKIN PILIHAN MENU YANG ADE-ADE AJE

    return pilih_rute;
};
// END FUNCTION PILIH RUTE

// FUNCTION MILIH JENIS TIKET KERETA
long jenisTiketKereta(int pilih_rute)
{
    long harga_total;
    int pilihan_jenis_tiket, banyak_orang;

    cout << "|========= ENTE MEMILIH RUTE " << (rute[pilih_rute - 1].awal_keberangkatan) << " - " << rute[pilih_rute - 1].akhir_keberangkatan << " =========|" << endl;
    cout << "|=========================================================|" << endl;
    cout << "|=========== PILIH JENIS TIKET YANG ENTE MAU =============|" << endl;
    cout << "|                                                         |" << endl;
    cout << "| 1. EKONOMI                                              |" << endl;
    cout << "| 2. EKSEKUTIF                                            |" << endl;
    cout << "|                                                         |" << endl;
    cout << "|=========================================================|" << endl;

    do
    {
        cout << "\n MASUKIN PILIHAN JENIS TIKET YANG ENTE INGINKAN: ";
        cin >> pilihan_jenis_tiket;
        cout << endl;

        if (pilihan_jenis_tiket == 1)
        {
            cout << "|========= ENTE MEMILIH TIKET " << rute[pilih_rute - 1].jenis_tiket[pilihan_jenis_tiket - 1] << " =========|" << endl;
            cout << "HARGA TIKET EKONOMI ADALAH: " << rute[pilih_rute - 1].harga_ekonomi << endl;

            do
            {
                cout << "UNTUK BERAPA ORANG: ";
                cin >> banyak_orang;
                if (cin.fail() || banyak_orang <= 0)
                {
                    cin.clear();
                    cin.ignore();
                    cout << endl
                         << endl;
                    cout << "|=========================================================|" << endl;
                    cout << "|===== JANGAN NGIDE ENTE, MASUKIN BANYAK ORNG YG BNR =====|" << endl;
                    cout << "|=========================================================|" << endl;
                }
                harga_total = rute[pilih_rute - 1].harga_ekonomi * banyak_orang;
            } while (cin.fail() || banyak_orang <= 0);
        }

        if (pilihan_jenis_tiket == 2)
        {
            cout << "|========= ENTE MEMILIH TIKET " << rute[pilih_rute - 1].jenis_tiket[pilihan_jenis_tiket - 1] << " =========|" << endl;
            cout << "HARGA TIKET EKSEKUTIF ADALAH: " << rute[pilih_rute - 1].harga_eksekutif << endl;
            do
            {
                cout << "UNTUK BERAPA ORANG: ";
                cin >> banyak_orang;
                if (cin.fail() || banyak_orang <= 0)
                {
                    cin.clear();
                    cin.ignore();
                    cout << endl
                         << endl;
                    cout << "|=========================================================|" << endl;
                    cout << "|===== JANGAN NGIDE ENTE, MASUKIN BANYAK ORNG YG BNR =====|" << endl;
                    cout << "|=========================================================|" << endl;
                }
                harga_total = rute[pilih_rute - 1].harga_eksekutif * banyak_orang;
            } while (cin.fail() || banyak_orang <= 0);
        }

        if (cin.fail() || pilihan_jenis_tiket > 2 || pilihan_jenis_tiket <= 0)
        {
            cin.clear();
            cin.ignore();
            cout << endl
                 << endl;
            cout << "|=========================================================|" << endl;
            cout << "|===== JANGAN NGIDE ENTE, MASUKIN PILIHAN YANG BENER =====|" << endl;
            cout << "|=========================================================|" << endl;
        }

    } while (cin.fail() || pilihan_jenis_tiket > 2 || pilihan_jenis_tiket <= 0);

    cout << "TOTAL HARGANYA: " << harga_total;
    return harga_total;
}
// END FUNTION MILIH TIKET KERETA

int main()
{
    do
    {
        pilihRute();
        jenisTiketKereta(pilih_rute);

        cout << "\n APAKAH ENTE INGIN BELI TIKET LAGI [Y/N]: ";
        cin >> _REPEAT;

    } while (_REPEAT == 'y' || _REPEAT == 'Y');
}
