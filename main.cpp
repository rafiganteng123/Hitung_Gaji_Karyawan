#include <iostream>

using namespace std;

int main()
{

    string nama, jenis_kelamin, pend;
    int golongan, kode_pendidikan, jumlah_anak, gaji_pokok, tunj_pendidikan, tunj_anak, gaji_total;
    char ulang;

    do{

    cout << "\n========== Hitung Gaji Pegawai ==========\n";
    cout << "\nMasukkan Nama Anda                    : ";
    cin >> nama;
    cout << "\nMasukkan Jenis Kelamin(L/P)           : ";
    cin >> jenis_kelamin;
    cout << "\nMasukkan Golongan Anda(1/2/3)         : ";
    cin >> golongan;
    cout << "\nMasukkan Pendidikan Terakhir\n";
    cout << "\n[1]SMA/SMK\n";
    cout << "\n[2]D3/S1\n";
    cout << "\nMasukkan Nomer Pendidikan Sesuai Anda : ";
    cin >> kode_pendidikan;
    cout << "\nMasukkan Jumlah Anak                  : ";
    cin >> jumlah_anak;

    if(jenis_kelamin == "L"){
        jenis_kelamin = "Laki-laki";
    } else if(jenis_kelamin == "P"){
        jenis_kelamin = "Perempuan";
    } else {
        cout << "Huruf Tidak Valid";
        return 0;
    }

    if(kode_pendidikan == 1){
        pend = "SMA/SMK";
    } else if(kode_pendidikan == 2){
        pend = "D3/S1";
    } else {
        cout << "Angka Tidak Valid";
        return 0;
    }

    if(golongan == 1){
        gaji_pokok = 3000000;
    } else if(golongan == 2){
        gaji_pokok = 4000000;
    } else if(golongan == 3){
        gaji_pokok = 5000000;
    } else {
        cout << "Angka Tidak Valid";
        return 0;
    }

    if(kode_pendidikan == 1){
        tunj_pendidikan = 250000;
    } else if(kode_pendidikan == 2){
        tunj_pendidikan = 300000;
    } else {
        cout << "Angka Tidak Valid";
        return 0;
    }

    tunj_anak = jumlah_anak * 200000;

    gaji_total = gaji_pokok + tunj_pendidikan + tunj_anak;

    cout << "\n==========================================";
    cout << "\n========== Detail Gaji Karyawan ==========";
    cout << "\n==========================================\n";
    cout << "\nNama                 : " << nama << endl;
    cout << "Jenis Kelamin        : " << jenis_kelamin << endl;
    cout << "Golongan             : " << golongan << endl;
    cout << "Pendidikan           : " << pend << endl;
    cout << "Jumlah Anak          : " << jumlah_anak << endl;
    cout << "Gaji Pokok           : " << gaji_pokok << endl;
    cout << "Tunjangan Pendidikan : " << tunj_pendidikan << endl;
    cout << "Tunjangan Anak       : " << tunj_anak << endl;
    cout << "Total Gaji           : " << gaji_total << endl;
    cout << "===========================================\n";
    cout << "Apakah Anda Ingin Menghitung Gaji Kembali? : ";
    cin >> ulang;

    } while(ulang == 'y');

    return 0;
}
