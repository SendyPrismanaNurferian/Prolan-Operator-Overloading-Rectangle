#include <iostream>
#include <cmath>
#include "include/PersegiPanjang.hpp"

using namespace std;

void enter::enter()
{
    cout<<"Harap tekan 'ENTER' untuk start program ini";
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
        cout << "\nTitik tengah X    : \n" << (this->xmax - this->xmin)/2 + this->xmin;
        cout << "\nTitik tengah Y    : \n" << (this->ymax - this->ymin)/2 + this->ymin;
        cout << "\nPanjang untuk (X) : \n" << pjg;
        cout << "\nLebar untuk (Y)   : \n" << lbr;
        cout << "\nNilai xmax        : \n" << this->xmax;
        cout << "\nNilai xmin        : \n" << this->xmin;
        cout << "\nNilai ymax        : \n" << this->ymax;
        cout << "\nNilai ymin        : \n" << this->ymin;
        cout << "\n\n";
}

PersegiPanjang::PersegiPanjang(){}
//Cara mencari dan menentukan xmax,xmin dan ymax,ymin 
PersegiPanjang::PersegiPanjang(float Ttengah_x,float Ttengah_y,float pjg,float lbr)
{
    this->xmax = Ttengah_x + pjg/2;
    this->xmin = Ttengah_x - pjg/2;
    this->ymax = Ttengah_y + lbr/2;
    this->ymin = Ttengah_y - lbr/2;
}

//Logika untuk mengetahui apakah kedua persegi panjang bersifat beririsan atau tidak 
bool PersegiPanjang::operator==(PersegiPanjang const &yoi)const
{
    if (this->xmax == yoi.xmin && this->xmin < yoi.xmax && this->ymax > yoi.ymin && this->ymin < yoi.ymax)return true;
    else return false;
}

//Operator (+) berfungsi untuk menambah luasan persegi panjang dengan menggabungkan kedua luasan persegi panjang tadi
PersegiPanjang PersegiPanjang::operator+(PersegiPanjang const &yoi)
{
    PersegiPanjang temp(0,0,0,0);
    
    if (*this == yoi)//Berfungsi penunjuk nilai dari variable persegi dan syarat yang dipenuhi (terdapat di line command no 26)
    {
        // Untuk mengetahui update dari x
        temp.xmax = max(this-> xmax,yoi.xmax);
        temp.xmin = min(this-> xmin,yoi.xmin);
        // Untuk mengetahui update dari y
        temp.ymax = max(this-> ymax,yoi.ymax);
        temp.ymin = min(this-> ymin,yoi.ymin);

    }else cout << "Persegi Panjang 1 dam 2 Tidak Beririsan dan tidak dapat dilakukan pertambahan \n";

        return temp;
}

//Operator (-) berfungsi untuk mengambil irisan dari dua persegi panjang tadi
PersegiPanjang PersegiPanjang::operator-(PersegiPanjang const &yoi)
{
    PersegiPanjang temp(0,0,0,0);
    
    if (*this == yoi)//Berfungsi penunjuk nilai dari variable persegi dan syarat yang dipenuhi (terdapat di line command no 26)
    {
        // Untuk mengetahui update dari x
        temp.xmax = max(this-> xmax,yoi.xmax);
        temp.xmin = min(this-> xmin,yoi.xmin);
        // Untuk mengetahui update dari y
        temp.ymax = max(this-> ymax,yoi.ymax);
        temp.ymin = min(this-> ymin,yoi.ymin);

    }else cout << "Persegi Panjang 1 dam 2 Tidak Beririsan dan tidak dapat dilakukan pengurangan \n";
      return temp;
}

//Operator (++) berfungsi untuk mengubah luasan persegi panjang dengan mengkali 2x luasan awalnya (diperbesar)
void PersegiPanjang::operator++()
{
    float pjg = 0,lbr = 0,Ttengah_x = 0,Ttengah_y = 0; 
  //Persegi panjang yang diminta dengan memasukkan panjang dan lebar
    pjg = (this->xmax - this->xmin);
    lbr = (this->ymin - this->ymax);
    pjg = abs(pjg);
    lbr = abs(lbr);
  //Titik Tengah Yang dimasukkan dari Persegi panjang tadi
    Ttengah_x = pjg/2 + this->xmin;
    Ttengah_y = lbr/2 + this->ymin;
  //Lalu luasan persegi panjang menjadi 2 kali luasannya 
    pjg*=2;
    lbr*=2;
  //Cara menentukkan titik-titik sumbu baru persegi tadi
    this->xmax = Ttengah_x + pjg/2;
    this->xmin = Ttengah_x - pjg/2;
    this->ymax = Ttengah_y + lbr/2;
    this->ymin = Ttengah_y - lbr/2;

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
  //Titik Tengah Yang dimasukkan dari Persegi panjang tadi
    Ttengah_x = pjg/2 + this->xmin;
    Ttengah_y = lbr/2 + this->ymin;
  //Lalu luasan persegi panjang menjadi setengah atau 0,5 kali luasannya 
    pjg/=2;
    lbr/=2;
  //Cara menentukkan titik-titik sumbu baru persegi tadi
    this->xmax = Ttengah_x + pjg/2;
    this->xmin = Ttengah_x - pjg/2;
    this->ymax = Ttengah_y + lbr/2;
    this->ymin = Ttengah_y - lbr/2;

}

void PersegiPanjang::operator ++ (int){}
void PersegiPanjang::operator -- (int){}
//Mengambil nilai salah satu dari properti kelas tadi
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