#pragma once

class car1
{
public:
    car1(){}
    string car_name = "Tofas", car_type = " Sedan ", car_model = "Sahin";
    int car_money = 2000;
};

class car2
{
public:
    car2(){}
    string car_name = "BMW", car_type = "SUV", car_model = "X5";
    int car_money = 4300;
};

class car3
{
public:
    car3() {}
    string car_name = "Toyota", car_type = "Sedan", car_model = "Corolla";
    int car_money = 4000;
};

class car4
{
public:
    car4() {}
    string car_name = "Ferrari", car_type = "Super Car", car_model = "Spider";
    int car_money = 7000;
};

class car5
{
public:
    car5() {}
    string car_name = "Tesla", car_type = "SUV", car_model = "Model X";
    int car_money = 5000;
};

class car6
{
public:
    car6() {}
    string car_name = "Hundai", car_type = "Sedan", car_model = "Accent";
    int car_money = 3500;
};

class Print
{
public:

    string car_name = "", car_type = "", car_model = "";
    int car_money = 0;
};



class type_of_cars
{
public:
    car1 car1; car2 car2; car3 car3; car4 car4; car5 car5; car6 car6; Print Print;
    type_of_cars(cars& returner);
};

bool Wants_car_or_not(string full_name)
{
    int taker;
    cout << "Does " << full_name << " want a car? " << endl << "Type 1 for yes " << endl << "Type 0 for no: ";
    cin >> taker;
    if (taker == 1)
    {
        return 1;
    }
    else
    {
        cout << "Seriously? Does " << full_name << " want a car? " << endl << "Type 1 for yes " << endl << "Type 0 for no: ";
        cin >> taker;
        if (taker == 1)
        {
            return 1;
        }
        else
            return 0;
    }

}

class cars
{
public:
    cars(){}
    string car_name, car_type, car_model;
    int car_money = 0, number_of_car = 0;
    friend ostream& operator << (ostream&, cars&);
    friend istream& operator >>(istream&, cars&);    
};



ostream& operator << (ostream& out, cars& about_car)
{
    out << "car name: " << about_car.car_name << "\tcar model: " << about_car.car_model << endl;
    out << "car type: " << about_car.car_type << endl << "car money: " << about_car.car_money << endl;
    return out;
}


istream& operator >>(istream& in, cars& writing_car)
{
    cout << "Type to name of car: ";
    in >> writing_car.car_name;
    cout << "Type to model of car: ";
    in >> writing_car.car_model;
    cout << "type to type of car: ";
    in >> writing_car.car_type;
    cout << "type to money of car: ";
    in >> writing_car.car_money;
    return in;
}

