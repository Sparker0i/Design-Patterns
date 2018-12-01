#include <string>

class Packing
{
    public:
        virtual std::string pack() = 0;
};

class wrapper : public Packing
{
    public:
        std::string pack() override 
        {
            return "Wrapper";
        }
};

class bottle : public Packing
{
    public:
        std::string pack() override 
        {
            return "Bottle";
        }
};