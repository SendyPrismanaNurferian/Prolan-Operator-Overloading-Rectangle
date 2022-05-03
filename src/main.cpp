#include "include/PersegiPanjang.hpp"
#include <iostream>

//TUGAS PEMROGRAMAN LANJUT OPERATOR OVERLOADING PERSEGI PANJANG DI C++
//Nama       : Sendy Prismana Nurferian
//Kelas      : A Pemrograman Lanjut
//NRP        : 5024211012
//Departemen : Teknik Komputer

using namespace std;

void enter()
{
    cout<<"Harap tekan 'ENTER' untuk start program ini";
    cin.ignore();
    system("cls||clear");
}

int main()
{
    system("cls||clear");
    cout<<"TUGAS OPERATOR OVERLOADING PERSEGI PANJANG by Sendy Prismana Nurferian\n";
    cout <<"Attention!! Anda boleh menggunakan coding ini dijadikan sebagai referensi, namun tidak boleh keras mencopas atau mengganti tanpa seizin pemilik. By Sendy\n\n";
    float pjg,lbr,Ttengah_x,Ttengah_y;
    cout << "Masukkan Data yang diperlukan dalam Persegi Panjang ke 1 : \n\n";
    cout << "Panjang Persegi 1 : ";cin>>pjg;
    cout << "Lebar Persegi 1   : ";cin>>lbr;
    cout << "Titik tengah X    : ";cin>>Ttengah_x;
    cout << "Titik tengah Y    : ";cin>>Ttengah_y;
    PersegiPanjang pp1(pjg,lbr,Ttengah_x,Ttengah_y);

    system("cls||clear");
    cout << "Masukkan Data yang diperlukan dalam Persegi Panjang ke 2 : \n\n";
    cout << "Panjang Persegi 2 : ";cin>>pjg;
    cout << "Lebar Persegi 2   : ";cin>>lbr;
    cout << "Titik tengah X    : ";cin>>Ttengah_x;
    cout << "Titik tengah Y    : ";cin>>Ttengah_y;
    PersegiPanjang pp2(pjg,lbr,Ttengah_x,Ttengah_y);

    enter();
    PersegiPanjang pp3;//Persegi Panjang pp1(5,6,7,8) Persegi Panjang pp2(8,7,6,4)
    //Melihat nilai awal yang sudah diinput dari Persegi Panjang 1 dan 2
    cout << "Nilai awal Persegi Panjang 1 : \n";
    pp1.printresult();
    cout << "Nilai awal Persegi Panjang 2 : \n";
    pp2.printresult();
    
    enter();
    //Program berjalan ke Operator (+)
    cout << "Nilai awal Persegi Panjang 1 : \n";
    pp1.printresult();
    cout << "Nilai awal Persegi Panjang 2 : \n";
    pp2.printresult();

    pp3 = pp1 + pp2;
    if (pp1==pp2)
    { 
    cout << "Nilai Hasil Penjumlahan dari Persegi Panjang 1 dan 2 : \n";
     pp3.printresult();
    }    

    enter();
    //Program berjalan ke Operator (-)
    cout << "Nilai awal Persegi Panjang 1 : \n";
    pp1.printresult();
    cout << "Nilai awal Persegi Panjang 2 : \n";
    pp2.printresult();

    pp3 = pp1 - pp2;
    if (pp1==pp2)
    { 
    cout << "Nilai Hasil Pengurangan dari Persegi Panjang 1 dan 2 : \n";
     pp3.printresult();
    } 

    enter();
    //Program berjalan ke Operator (++)
    cout << "Persegi Panjang 1 : \n";
    pp1.printresult();
    ++pp1;
    cout << "Nilai Persegi Panjang 1 setelah dilakukannya Operator (++) : \n";
    pp1.printresult();
    --pp1;

    enter();
    //Program berjalan ke Operator (--)
    cout << "Persegi Panjang 2 : \n";
    pp2.printresult();
    --pp2;
    cout << "Nilai Persegi Panjang 2 setelah dilakukannya Operator (--) : \n";
    pp2.printresult();
    ++pp2;

    enter();
    //Program berjalan ke Operator [] bergungsi untuk membandingkan nilai xmin dari Persegi Panjang 1 dan 2
    cout << "Membandingkan nilai dari xmin Persegi Panjang 1 dan xmin Persegi Panjang 2 dengan Operator '[]' atau sequal \n";
    cout << "Nilai xmin Persegi Panjang 1 : "<<pp1[1]<< "\nNilai xmin Persegi Panjang 2 : "<<pp2[1];
    if (pp1[1]>pp2[1]) cout << "\n\nNilai xmin Persegi Panjang 1 lebih besar daripada xmin Persegi Panjang 2\n\n";
    else if (pp1[1]<pp2[1]) cout << "\n\nNilai xmin Persegi Panjang 1 lebih kecil daripada xmin Persegi Panjang 2\n\n";
    else cout << "\n\nNilai xmin Persegi Panjang 1 dan 2 sama besar nilainya\n\n";

    enter();
    //Program berjalan ke Operator == berfungsi untuk membuktikan bahwa Persegi Panjang 1 dan 2 beririsan
    cout << "Nilai awal Persegi Panjang 1 : \n";
    pp1.printresult();
    cout << "\nNilai awal Persegi Panjang 2 : \n";
    pp2.printresult();

    if (pp1==pp2) cout << "Kedua Persegi Panjang saling beririsan\n\n";
    else cout << "Kedua Persegi Panjang tidak saling beririsan\n\n";

    enter();
    cout << "Program sudah selesai, Terimakasih";
    cin.ignore();
    system("cls||clear");


    return 0;     
}