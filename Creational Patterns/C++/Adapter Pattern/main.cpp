#include "tempadapters.h"
#include <vector>
#include <iostream>

using std::vector;

vector<temp_sensor *> get_vectors()
{
    vector<temp_sensor *> sensors;

    sensors.push_back(new ts_7000_adapter(ts_7000(40)));
    sensors.push_back(new ts_7000_adapter(ts_7000(30)));
    sensors.push_back(new ts_7000_adapter(ts_7000(37)));
    sensors.push_back(new ts_7000_adapter(ts_7000(35)));

    sensors.push_back(new str_adapter(super_temp_reader(4)));
    sensors.push_back(new str_adapter(super_temp_reader(3.6)));
    sensors.push_back(new str_adapter(super_temp_reader(3.2)));
    sensors.push_back(new str_adapter(super_temp_reader(2.9)));

    return sensors;
}

int main(int argc, char const *argv[])
{
    vector<temp_sensor *> sensors = get_vectors();
    double sum = 0;
    for (int i = 0; i < sensors.size(); ++i)
    {
        sum += sensors[i] -> get_temperature();
    }
    sum = sum / sensors.size();
    std::cout << sum << std::endl;
    return 0;
}
