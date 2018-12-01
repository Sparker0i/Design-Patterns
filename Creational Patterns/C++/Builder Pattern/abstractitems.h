#pragma once
#include <string>
#include "packings.h"

class item
{
    public:
        virtual std::string name() = 0;
        virtual Packing* packing() = 0;
        virtual double price() = 0;
};

class burger : public item
{
    public:
        Packing* packing() override
        {
            return new wrapper;
        }
};

class colddrink : public item
{
    public:
        Packing* packing() override
        {
            return new bottle;
        }
};

