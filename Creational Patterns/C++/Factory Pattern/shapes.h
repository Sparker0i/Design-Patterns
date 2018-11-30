#include <iostream>

class shape 
{
    public:
        virtual void draw() = 0;
};

class circle: public shape
{
    public:
        void draw()
        {
            std::cout << "Inside Circle::draw()" << std::endl;
        }
};

class square: public shape
{
    public:
        void draw()
        {
            std::cout << "Inside Square::draw()" << std::endl;
        }
};

class rectangle: public shape
{
    public:
        void draw()
        {
            std::cout << "Inside Rectangle::draw()" << std::endl;
        }
};