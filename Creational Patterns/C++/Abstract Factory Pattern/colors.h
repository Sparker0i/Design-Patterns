#include <iostream>

class color
{
    public:
        virtual void fill() = 0;
};

class red : public color
{
    public:
        void fill()
        {
            std::cout << "Inside Red::fill()" << std::endl;
        }
};

class green : public color
{
    public:
        void fill()
        {
            std::cout << "Inside Green::fill()" << std::endl;
        }
};

class blue : public color
{
    public:
        void fill()
        {
            std::cout << "Inside Blue::fill()" << std::endl;
        }
};