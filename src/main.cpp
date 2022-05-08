#include "include/PersegiPanjang.hpp"
#include <iostream>
using namespace std;

void enter()
{
    cout <<"Perhatian!!! Anda boleh menggunakan coding ini dijadikan sebagai referensi, namun tidak boleh keras mencopas atau mengganti tanpa seizin pemilik. By Sendy"<< endl;
    cout <<"Harap tekan 'ENTER' untuk start dan melanjutkan program ini";
    cin.ignore();
    system("cls||clear");
}

int main()
{
    system("cls||clear");
    float pjg,lbr,Ttengah_x,Ttengah_y;
    cout << "TUGAS PEMROGRAMAN LANJUT OPERATOR OVERLOADING PERSEGI PANJANG DI C++"<< endl;
    cout << "Nama   : Sendy Prismana Nurferian"<< endl;
    cout << "NRP    : 5024211012"<< endl;
    cout << "Kelas  : (A) Pemrograman Lanjut"<< endl;
    cout << "Departemen Teknik Komputer"<< endl;
    cout << "Institut Teknologi Sepuluh Nopember"<< endl;
    cout << endl
         << endl;
    cout << "Masukkan Data yang diperlukan dalam Persegi Panjang ke 1 : "<< endl;
    cout << "Titik tengah X P1   : ";cin>>Ttengah_x;
    cout << "Titik tengah Y P1   : ";cin>>Ttengah_y;
    cout << "Panjang Persegi 1   : ";cin>>pjg;
    cout << "Lebar Persegi 1     : ";cin>>lbr;
    PersegiPanjang pp1(Ttengah_x,Ttengah_y,pjg,lbr);

    cout << "Masukkan Data yang diperlukan dalam Persegi Panjang ke 2 : "<< endl;
    cout << "Titik tengah X P2   : ";cin>>Ttengah_x;
    cout << "Titik tengah Y P2   : ";cin>>Ttengah_y;
    cout << "Panjang Persegi 2   : ";cin>>pjg;
    cout << "Lebar Persegi 2     : ";cin>>lbr;
    PersegiPanjang pp2(Ttengah_x,Ttengah_y,pjg,lbr);

    enter();
    PersegiPanjang pp3;//Persegi Panjang pp1(5,6,7,8) Persegi Panjang pp2(8,7,4,4)
    //Melihat nilai awal yang sudah diinput dari Persegi Panjang 1 dan 2
    cout << "Nilai awal Persegi Panjang 1 : "<< endl;
    pp1.printresult();
    cout << "Nilai awal Persegi Panjang 2 : "<< endl;
    pp2.printresult();
    
    enter();
    //Program berjalan ke Operator (+)
    pp3 = pp1 + pp2;
    if (pp1==pp2)
    { 
    cout << "Nilai Hasil Penjumlahan dari Persegi Panjang 1 dan 2 : "<< endl;
    pp3.printresult();
    }    

    enter();
    //Program berjalan ke Operator (-)
    pp3 = pp1 - pp2;
    if (pp1==pp2)
    { 
    cout << "Nilai Hasil Pengurangan dari Persegi Panjang 1 dan 2 : "<<endl;
    pp3.printresult();
    } 

    enter();
    //Program berjalan ke Operator (++)
    cout << "Nilai awal Persegi Panjang 1 : "<< endl;
    pp1.printresult();
    ++pp1;
    cout << "Nilai Persegi Panjang 1 setelah dilakukannya Operator (++) : "<< endl;
    pp1.printresult();
    
    cout << "Nilai awal Persegi Panjang 2 : "<< endl;
    pp2.printresult();
    ++pp2;
    cout << "Nilai Persegi Panjang 2 setelah dilakukannya Operator (++) : "<< endl;
    pp2.printresult();

    enter();
    //Program berjalan ke Operator (--)
    cout << "Nilai awal Persegi Panjang 1 : "<< endl;
    pp1.printresult();
    --pp1;
    cout << "Nilai Persegi Panjang 1 setelah dilakukannya Operator (--) : "<< endl;
    pp1.printresult();

    cout << "Nilai awal Persegi Panjang 2 : "<< endl;
    pp2.printresult();
    --pp2;
    cout << "Nilai Persegi Panjang 2 setelah dilakukannya Operator (--) : "<< endl;
    pp2.printresult();

    enter();
    //Program berjalan ke Operator == berfungsi untuk membuktikan bahwa Persegi Panjang 1 dan 2 beririsan
    if (pp1==pp2)
        cout << "Kedua Persegi Panjang saling beririsan"<< endl;
    else cout << "Kedua Persegi Panjang tidak saling beririsan"<< endl;

    enter();
    cout << "Program sudah selesai dijalankan, Terima Kasih";
    cin.ignore();
    system("cls||clear");

    return 0;     
}