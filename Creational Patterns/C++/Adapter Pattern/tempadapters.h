#include "tempsensors.h"

class temp_sensor 
{
    public:
        virtual double get_temperature() = 0;
};

class ts_7000_adapter : public temp_sensor
{
    private:
        ts_7000 sensor;
    public:
        ts_7000_adapter(ts_7000 sensor)
        {
            this -> sensor = sensor;
        }

        double get_temperature()
        {
            return sensor.get_temp();
        }
};

class str_adapter : public temp_sensor
{
    private:
        super_temp_reader sensor;
    public:
        str_adapter(super_temp_reader sensor)
        {
            this -> sensor = sensor;
        }

        double get_temperature()
        {
            return sensor.current_reading() * 10;
        }
};