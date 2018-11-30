class ts_7000 
{
    private:
        double temperature;
    public:
        ts_7000()
        {

        }

        ts_7000(double temperature)
        {
            this -> temperature = temperature;
        }

        double get_temp() 
        {
            return temperature;
        }
};

class super_temp_reader
{
    private:
        double reading;
    public:
        super_temp_reader()
        {

        }

        super_temp_reader(double reading)
        {
            this -> reading = reading;
        }

        double current_reading() 
        {
            return reading;
        }
};