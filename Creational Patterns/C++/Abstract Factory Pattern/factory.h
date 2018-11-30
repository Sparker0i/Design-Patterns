#include "colors.h"
#include "shapes.h"
#include <algorithm>
#include "string.h"

class abstract_factory
{
    public:
        virtual color* get_color(std::string choice) = 0;
        virtual shape* get_shape(std::string choice) = 0;
};

class shape_factory: public abstract_factory
{
    public:
        shape* get_shape(std::string choice)
        {
            std::transform(choice.begin() , choice.end() , choice.begin() , ::toupper);
            if (choice.empty())
                return NULL;
            if (strcmp(choice.c_str() , "CIRCLE") == 0)
                return new circle;
            else if (strcmp(choice.c_str() , "SQUARE") == 0)
                return new square;
            else if (strcmp(choice.c_str() , "RECTANGLE") == 0)
                return new rectangle;
        }

        color* get_color(std::string choice)
        {
            return NULL;
        }
};

class color_factory: public abstract_factory
{
    public:
        shape* get_shape(std::string choice)
        {
            return NULL;
        }

        color* get_color(std::string choice)
        {
            std::transform(choice.begin() , choice.end() , choice.begin() , ::toupper);
            if (choice.empty())
                return NULL;
            if (strcmp(choice.c_str() , "RED") == 0)
                return new red;
            else if (strcmp(choice.c_str() , "GREEN") == 0)
                return new green;
            else if (strcmp(choice.c_str() , "BLUE") == 0)
                return new blue;
        }
};

class factory_producer
{
    public:
        static abstract_factory* get_factory(std::string choice)
        {
            std::transform(choice.begin() , choice.end() , choice.begin() , ::toupper);
            if (choice.empty())
                return NULL;
            if (strcmp(choice.c_str() , "COLOR") == 0)
                return new color_factory;
            else if (strcmp(choice.c_str() , "SHAPE") == 0)
                return new shape_factory;
        }
};