#include "factory.h"

int main()
{
    abstract_factory* shape_factory = factory_producer::get_factory("SHAPE");

    shape* shape1;

    shape1 = (*shape_factory).get_shape("CIRCLE");
    shape1 -> draw();

    shape1 = (*shape_factory).get_shape("SQUARE");
    shape1 -> draw();

    shape1 = (*shape_factory).get_shape("RECTANGLE");
    shape1 -> draw();

    abstract_factory* color_factory = factory_producer::get_factory("COLOR");

    color *color1;

    color1 = (*color_factory).get_color("RED");
    color1 -> fill();

    color1 = (*color_factory).get_color("BLUE");
    color1 -> fill();

    color1 = (*color_factory).get_color("GREEN");
    color1 -> fill();
}