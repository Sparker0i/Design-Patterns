#pragma once
#include "abstractitems.h"
#include <vector>
#include <iostream>

class meal
{
    private:
        std::vector<item *> items;
    public:
        void add_item(item* item)
        {
            items.push_back(item);
        }

        double get_cost()
        {
            double cost = 0;

            for (int i = 0; i < items.size(); ++i)
            {
                cost += (*items[i]).price();
            }

            return cost;
        }

        void show_items()
        {
            for (int i = 0; i < items.size(); ++i)
            {
                std::cout << "Item : " << (*items[i]).name();
                std::cout << ", Packing: " << ((*items[i]).packing()) -> pack();
                std::cout << ", Price : " << (*items[i]).price() << std::endl;
            }
        }
};