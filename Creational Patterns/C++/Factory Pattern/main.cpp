#include "shapes.h"
#include "string.h"
#include <algorithm>

class shape_factory
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
};

int main()
{
    shape_factory shape_factory;
    
    shape* shape1 = shape_factory.get_shape("CIRCLE");
    shape1 -> draw();

    shape1 = shape_factory.get_shape("SQUARE");
    shape1 -> draw();

    shape1 = shape_factory.get_shape("RECTANGLE");
    shape1 -> draw();

    return 0;
}