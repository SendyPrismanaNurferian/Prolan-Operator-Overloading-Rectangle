#include <iostream>
#include "include/PersegiPanjang.hpp"
#include <cmath>
using namespace std;

void enter::enter()
{
    cout <<"Perhatian!!! Anda boleh menggunakan coding ini dijadikan sebagai referensi, namun tidak boleh keras mencopas atau mengganti tanpa seizin pemilik. By Sendy"<< endl;
    cout <<"Harap tekan 'ENTER' untuk start dan melanjutkan program ini";
    cin.ignore();
    system("cls||clear");
}

void PersegiPanjang::printresult()
{
    float pjg = this->xmax - this->xmin;
    float lbr = this->ymax - this->ymin;
  //pengubahan nilai abs di Panjang dan Lebar agar persegi bisa di masukkan ke nilai yang positif dan membuktikan persegi beririsan atau tidak
    pjg = abs (pjg);
    lbr = abs (lbr);
        cout << "Titik tengah X    : " << (this->xmax - this->xmin)/2 + this->xmin << endl;
        cout << "Titik tengah Y    : " << (this->ymax - this->ymin)/2 + this->ymin << endl;
        cout << "Panjang untuk (X) : " << pjg << endl;
        cout << "Lebar untuk (Y)   : " << lbr << endl;
        cout << "Nilai xmin        : " << this->xmin << endl;
        cout << "Nilai xmax        : " << this->xmax << endl;
        cout << "Nilai ymin        : " << this->ymin << endl;
        cout << "Nilai ymax        : " << this->ymax << endl;
        cout << endl;
}

PersegiPanjang::PersegiPanjang(){}
//Cara mencari dan menentukan xmin,xmax dan ymin,ymax 
PersegiPanjang::PersegiPanjang(float Ttengah_x,float Ttengah_y,float pjg,float lbr)
{
    this->xmin = Ttengah_x - (pjg/2);
    this->xmax = Ttengah_x + (pjg/2);
    this->ymin = Ttengah_y - (lbr/2);
    this->ymax = Ttengah_y + (lbr/2);
}

//Logika untuk mengetahui apakah kedua persegi panjang bersifat beririsan atau tidak 
bool PersegiPanjang::operator==(PersegiPanjang const &yoi)const
{
    if (this->xmax > yoi.xmin && this->xmin < yoi.xmax && this->ymax > yoi.ymin && this->ymin < yoi.ymax)
    return true;
    else 
    return false;
}

//Operator (+) berfungsi untuk menambah luasan persegi panjang dengan menggabungkan kedua luasan persegi panjang tadi
PersegiPanjang PersegiPanjang::operator+(PersegiPanjang const &yoi)
{
    PersegiPanjang temp(0,0,0,0);
    
    if (*this == yoi)//Berfungsi penunjuk nilai dari variable persegi dan syarat yang dipenuhi (terdapat di line command no 26)
    {
        // Untuk mengetahui update dari x
        temp.xmin = min(this-> xmin,yoi.xmin);
        temp.xmax = max(this-> xmax,yoi.xmax);
        // Untuk mengetahui update dari y
        temp.ymin = min(this-> ymin,yoi.ymin);
        temp.ymax = max(this-> ymax,yoi.ymax);

    }else cout << "Persegi Panjang 1 dam 2 Tidak Beririsan, Persegi Panjang tidak bisa lanjut ke pertambahan";
        return temp;
}

//Operator (-) berfungsi untuk mengambil irisan dari dua persegi panjang tadi
PersegiPanjang PersegiPanjang::operator-(PersegiPanjang const &yoi)
{
    PersegiPanjang temp(0,0,0,0);
    
    if (*this == yoi)//Berfungsi penunjuk nilai dari variable persegi dan syarat yang dipenuhi (terdapat di line command no 26)
    {
        // Untuk mengetahui update dari x
        temp.xmin = min(this-> xmin,yoi.xmin);
        temp.xmax = max(this-> xmax,yoi.xmax);
        // Untuk mengetahui update dari y
        temp.ymin = min(this-> ymin,yoi.ymin);
        temp.ymax = max(this-> ymax,yoi.ymax);

    }else cout << "Persegi Panjang 1 dan 2 Tidak Beririsan, Persegi Panjang tidak bisa lanjut ke pengurangan";
        return temp;
}

void PersegiPanjang::operator -- (int){}
void PersegiPanjang::operator ++ (int){} //Untuk mengambil salah satu properti kelas dari operator (--) dan (++)
//Operator (++) berfungsi untuk mengubah luasan persegi panjang dengan mengkali 2x luasan awalnya (diperbesar)
void PersegiPanjang::operator++()
{
    float pjg = 0,lbr = 0,Ttengah_x = 0,Ttengah_y = 0; 
  //Persegi panjang yang diminta dengan memasukkan panjang dan lebar
    pjg = (this->xmax - this->xmin);
    lbr = (this->ymin - this->ymax);
    pjg = abs(pjg);
    lbr = abs(lbr);
  //Cara menentukkan titik-titik sumbu baru persegi tadi
    this->xmin = Ttengah_x - (pjg/2);
    this->xmax = Ttengah_x + (pjg/2);
    this->ymin = Ttengah_y - (lbr/2);
    this->ymax = Ttengah_y + (lbr/2);
  //Titik Tengah Yang dimasukkan dari Persegi panjang tadi
    Ttengah_x = pjg/2 + this->xmin;
    Ttengah_y = lbr/2 + this->ymin;
  //Lalu luasan persegi panjang menjadi 2 kali luasannya 
    pjg*=2;
    lbr*=2;

}

//Operator (--) berfungsi untuk membuat luasan persegi panjang menjadi 0,5 atau setengah luasan awalnya (diperkecil)
void PersegiPanjang::operator--()
{
    float pjg = 0,lbr = 0,Ttengah_x = 0,Ttengah_y = 0; 
  //Persegi panjang yang diminta dengan memasukkan panjang dan lebar   
    pjg = (this->xmax - this->xmin);
    lbr = (this->ymin - this->ymax);
    pjg = abs(pjg);
    lbr = abs(lbr);
  //Cara menentukkan titik-titik sumbu baru persegi tadi
    this->xmin = Ttengah_x - (pjg/2);
    this->xmax = Ttengah_x + (pjg/2);
    this->ymin = Ttengah_y - (lbr/2);
    this->ymax = Ttengah_y + (lbr/2);
  //Titik Tengah Yang dimasukkan dari Persegi panjang tadi
    Ttengah_x = pjg/2 + this->xmin;
    Ttengah_y = lbr/2 + this->ymin;
  //Lalu luasan persegi panjang menjadi setengah atau 0,5 kali luasannya 
    pjg/=2;
    lbr/=2;
}

float PersegiPanjang::operator[](int huha)
{
    switch(huha)
    {
        case 1:
            return this->xmin;
            break;

        case 2:
            return this->xmax;
            break;

        case 3:
            return this->ymin;
            break;

        case 4:
            return this->ymax;
            break;
    }
        return 0;
}