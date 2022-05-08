#ifndef __PERSEGIPANJANG_HPP__
#define __PERSEGIPANJANG_HPP__
#include <iostream>

namespace enter
{ 
    void enter();
}
class PersegiPanjang
{    
    private :      
        float xmin,xmax,ymin,ymax;

    public :
        PersegiPanjang();
        PersegiPanjang(float Ttengah_x, float Ttengah_y, float pjg, float lbr);
        PersegiPanjang operator+(PersegiPanjang const &);
        PersegiPanjang operator-(PersegiPanjang const &); 
        bool operator==(PersegiPanjang const &) const;
        float operator[](int huha);
        void operator ++();
        void operator --();
        void operator --(int);
        void operator ++(int);
        void printresult();

};

#endif