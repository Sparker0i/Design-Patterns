#pragma once
#include "meal.h"
#include "items.h"

class meal_builder
{
    public:
        meal* prepare_veg_meal()
        {
            meal* Meals = new meal();
            (*Meals).add_item(new veg_burger);
            (*Meals).add_item(new coke);
            return Meals;
        }

        meal* prepare_non_veg_meal()
        {
            meal* Meal = new meal();
            (*Meal).add_item(new non_veg_burger);
            (*Meal).add_item(new pepsi);
            return Meal;
        }
};