#pragma once
#include "abstractitems.h"

class veg_burger : public burger
{
    public:
        double price() override
        {
            return 25.0;
        }

        std::string name() override
        {
            return "Veg Burger";
        }
};

class non_veg_burger : public burger
{
    public:
        double price() override
        {
            return 45.0;
        }

        std::string name() override
        {
            return "Non-Veg Burger";
        }
};

class coke : public colddrink
{
    public:
        double price() override
        {
            return 30.0;
        }

        std::string name() override
        {
            return "Coke";
        }
};

class pepsi : public colddrink
{
    public:
        double price() override
        {
            return 35.0;
        }

        std::string name() override
        {
            return "Pepsi";
        }
};