#include "mealbuilder.h"

int main(int argc, char const *argv[])
{
    meal_builder meal_builder;

    meal* veg_meal = meal_builder.prepare_veg_meal();
    std::cout << "Veg Meal: " << std::endl;
    veg_meal -> show_items();
    std::cout << "Total Cost: " << veg_meal -> get_cost() << std::endl;

    meal* non_veg_meal = meal_builder.prepare_non_veg_meal();
    std::cout << "Non Veg Meal: " << std::endl;
    non_veg_meal -> show_items();
    std::cout << "Total Cost: " << non_veg_meal -> get_cost() << std::endl;

    return 0;
}
