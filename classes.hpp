#ifndef Project
#define Project

#include<iostream>
#include<iomanip>
#include<new>
#include<stdexcept>

using namespace std;

class farm
{
    public:
        int get_length();
        int set_length(int length = 0);
        int get_width();
        int set_width(int width = 0);
        void print() const;
        void get_farm();//yek makan baraye mazrae dar hafeze misazim
        

    private:
        unsigned int length;
        unsigned int width;
        string ** yourfarm;
};

class vegtebale
{
    private:
        string veg_type;
        unsigned int xy[4];
        int pos = 0;

    public:
        string get_type();
        void set_type(string);
        int get_x_y();
        void set_xy(int len , int wid , int num);
        void print();
};




#endif