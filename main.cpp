#include<iostream>
#include<iomanip>
#include<new>
#include<stdexcept>
#include"classes.hpp"

using namespace std;



int main()
{
    farm f;
    vegtebale v;

    int len;
    int wid;
    int num = 0;


    while (num <= 0)
    {
        num = f.get_length();

        try
        {
            len = f.set_length(num);
        }
        catch(invalid_argument & l)
        {
            cout << "Error : " << l.what() << endl;
        }

    }
    
    num = 0;
    

    while (num <= 0)
    {
        num = f.get_width();

        try
        {
            wid = f.set_width(num);
        }
        catch(invalid_argument & w)
        {
            cout << "Error : " << w.what() << endl;
        }

    }
    

    f.print();



    num = -1;
    string veg;

    while (num < 0)
    {
        veg = v.get_type();

        try
        {
            v.set_type(veg);
            num = 0;
        }
        catch(invalid_argument & s)
        {
            cerr << "Error : " << s.what() << endl;
        }
        
    }

    for (size_t i = 0; i < 4; i++)
    {
        num = -1;

        while (num < 0)
        {
            num = v.get_x_y();
            try
            {
                v.set_xy(len , wid , num);
            }
            catch(out_of_range & x)
            {
                cerr << "Error : " << x.what() << endl;
            }
            catch(invalid_argument & y)
            {
                cerr << "Error : " << y.what() << endl;
            }
        }
        
    }
    
    
    v.print();

}