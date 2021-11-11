#include"classes.hpp"


int farm::get_length()
{
    int num;
    cout << "please Enter length of your farm -> ";
    cin >> num;

    return num;
}

int farm::set_length(int num)
{
    if(num > 0)
    {
        length = num;
    }
    else
    {
        throw invalid_argument("legnth of your farm has to be a positive number :(");
    }

    return length;
}

int farm::get_width()
{
    int num;
    cout << "please Enter width of your farm -> ";
    cin >> num;

    return num;
}

int farm::set_width(int num)
{
    if(num > 0)
    {
        width = num;
    }
    else
    {
        throw invalid_argument("width of your farm has to be a positive number :(");
    }
    return width;
}

void farm::print() const
{
    cout << "lenth of your farm is : " << length << endl;
    cout << "width of your fatm is : " << width << endl;
}

void farm::get_farm()
{
    yourfarm = new(nothrow) string*[length];
    if(!yourfarm)
    {
        cerr << "Error in memmory allocation!!!" << endl;
    }
    for (size_t i = 0; i < length; i++)
    {
        yourfarm[i] = new(nothrow) string[width];
        if (!yourfarm[i])
        {
            cerr << "Error in memmory allocation!!!" << endl;
        }   
    }
}

string vegtebale::get_type()
{
    string type;
    cout << "vegtebale you can plant is :\ntomato\tlettur\tcarrot\tcucumber" << endl;
    cout << "what vegtebale you wanna plant ? " ;
    cin >> type;

    return type;
}

void vegtebale::set_type(string type)
{
    if (type == "carrot" || type == "tomato" || type == "lecttur")
    {
        veg_type = type;
    }
    else
    {
        throw invalid_argument("please choose a vegtebale you can plant!!!");
    }
    
    
    
}

int vegtebale::get_x_y()
{
    int num;
    
    if(pos == 0 || pos == 1)
    {
        cout << "please enter x" << pos+1 << " : ";
    }
    else if(pos == 2 || pos == 3)
    {
        cout << "please enter y" << pos-1 << " : ";
    }

    cin >> num;

    return num;
}

void vegtebale::set_xy(int len , int wid , int num)
{
    if (pos < 2)
    {
        if (num >= 0 && num < len)//barye in ke az mazrae kharej nashavim
        {
            if(pos == 1 && num < xy[pos-1])//baraye in ke x2 az x1 koochektar nabashad
            {
                throw invalid_argument("x2 has to be bigger than x1");
            }
            xy[pos] = num;
        }
        else
        {
            throw out_of_range("this place isnt in your farm");
        }
        
    }

    else if (pos >= 2)
    {
        if (num >= 0 && num < wid)
        {
            if(pos == 3 && num < xy[pos-1])
            {
                throw invalid_argument("y2 has to be bigger than y1");
            }
            xy[pos] = num;
        }
        else
        {
            throw out_of_range("this place isnt in your farm");
        }
        
    }

    pos++;
    
}

void vegtebale::print()
{
    cout << "vegtebale i want to plant is : " << veg_type << endl;
    for (size_t i = 0; i < pos; i++)
    {
        cout << "xy[" << i << "] : " << xy[i] << endl;
    }
    
}
