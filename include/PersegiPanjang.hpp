#ifndef __PERSEGIPANJANG_HPP__
#define __PERSEGIPANJANG_HPP__
#include <iostream>

class PersegiPanjang 
{
    private :
        float xmin,xmax,ymax,ymin;

    public :
        PersegiPanjang();
        PersegiPanjang(float Ttengah_x, float Ttengah_y, float pjg, float lbr);
        bool operator== (PersegiPanjang const &) const;
        PersegiPanjang operator+ (PersegiPanjang const &);
        PersegiPanjang operator- (PersegiPanjang const &); 
        void operator ++ ();
        void operator -- ();
        void operator -- (int);
        void operator ++ (int);
        float operator[](int huha);
        void printresult ();

};

#endif