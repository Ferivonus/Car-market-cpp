#pragma once

struct car1
{
    string car_name = "Tofas", car_type = " Sedan ", car_model = "Sahin";
    int car_money = 2000;
};

struct car2
{
    string car_name = "BMW", car_type = "SUV", car_model = "X5";
    int car_money = 4300;
};

struct car3
{
    string car_name = "Toyota", car_type = "Sedan", car_model = "Corolla";
    int car_money = 4000;
};

struct car4
{
    string car_name = "Ferrari", car_type = "Super Car", car_model = "Spider";
    int car_money = 7000;
};

struct car5
{
    string car_name = "Tesla", car_type = "SUV", car_model = "Model X";
    int car_money = 5000;
};

struct car6
{
    string car_name = "Hundai", car_type = "Sedan", car_model = "Accent";
    int car_money = 3500;
};

struct Print
{
    string car_name = "", car_type = "", car_model = "";
    int car_money = 0;
};

struct cars
{
    string car_name, car_type, car_model;
    int car_money = 0, number_of_car = 0;
    friend ostream& operator << (ostream&, cars&);
    friend istream& operator >>(istream&, cars&);

};

struct type_of_cars
{
    car1 car1; car2 car2; car3 car3; car4 car4; car5 car5; car6 car6; Print Print;
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

void people::About_cars()
{
    int buy_controller = 0;
    if (Wants_car_or_not(full_name))
    {
        int car_counter = 0;
        buy_controller++;
        type_of_cars types_of_cars;
        bool buyed = false;
        do
        {
            car_counter = 0;
            cout << full_name << " have " << money << " money." << endl << "with that money,";
            cout << " which car does he want? " << endl;
            cout << "there are:" << endl;
            cout << ++car_counter << "." << types_of_cars.car1.car_name << " \t which money is: " << types_of_cars.car1.car_money << endl;
            cout << ++car_counter << "." << types_of_cars.car2.car_name << "   \t which money is: " << types_of_cars.car2.car_money << endl;
            cout << ++car_counter << "." << types_of_cars.car3.car_name << " \t which money is: " << types_of_cars.car3.car_money << endl;
            cout << ++car_counter << "." << types_of_cars.car4.car_name << " \t which money is: " << types_of_cars.car4.car_money << endl;
            cout << ++car_counter << "." << types_of_cars.car5.car_name << " \t which money is: " << types_of_cars.car5.car_money << endl;
            cout << ++car_counter << "." << types_of_cars.car6.car_name << " \t which money is: " << types_of_cars.car6.car_money << endl;
            cout << "which one does he buy? use word of 1, 2, 3, 4, 5, 6?\n";
            cin >> my_Car;

            if ((my_Car == 1) && (money >= types_of_cars.car1.car_money))
            {

                own_car.car_model = types_of_cars.car1.car_model;
                own_car.car_money = types_of_cars.car1.car_money;
                money -= own_car.car_money;
                own_car.car_name = types_of_cars.car1.car_name;
                own_car.car_type = types_of_cars.car1.car_type;
                own_car.number_of_car = 1;
                buyed = false;
            }
            else if ((my_Car == 1) && !(money >= types_of_cars.car1.car_money))
            {
                for (int i = 0; i < 70; i++)
                {
                    cout << "-";
                }
                cout << endl << endl << full_name << "'s money not enough for buying " << types_of_cars.car1.car_name << endl << full_name << " just have " << money << " money to buy a car." << endl << endl;
                buyed = true;
            }
            else if ((my_Car == 2) && (money >= types_of_cars.car2.car_money))
            {
                own_car.car_model = types_of_cars.car2.car_model;
                own_car.car_money = types_of_cars.car2.car_money;
                money -= own_car.car_money;
                own_car.car_name = types_of_cars.car2.car_name;
                own_car.car_type = types_of_cars.car2.car_type;
                own_car.number_of_car = 2;
                buyed = false;
            }
            else if ((my_Car == 2) && !(money >= types_of_cars.car2.car_money))
            {
                for (int i = 0; i < 70; i++)
                {
                    cout << "-";
                }
                cout << endl << endl << full_name << "'s money not enough for buying " << types_of_cars.car2.car_name << endl << full_name << " just have " << money << " money to buy a car." << endl << endl;
                buyed = true;

            }
            else if ((my_Car == 3) && (money >= types_of_cars.car3.car_money))
            {
                own_car.car_model = types_of_cars.car3.car_model;
                own_car.car_money = types_of_cars.car3.car_money;
                money -= own_car.car_money;
                own_car.car_name = types_of_cars.car3.car_name;
                own_car.car_type = types_of_cars.car3.car_type;
                own_car.number_of_car = 3;
                buyed = false;
            }
            else if ((my_Car == 3) && !(money >= types_of_cars.car3.car_money))
            {
                for (int i = 0; i < 70; i++)
                {
                    cout << "-";
                }
                cout << endl << endl << full_name << "'s money not enough for buying " << types_of_cars.car3.car_name << endl << full_name << " just have " << money << " money to buy a car." << endl << endl;
                buyed = true;
            }

            else if ((my_Car == 4) && (money >= types_of_cars.car4.car_money))
            {
                own_car.car_model = types_of_cars.car4.car_model;
                own_car.car_money = types_of_cars.car4.car_money;
                money -= own_car.car_money;
                own_car.car_name = types_of_cars.car4.car_name;
                own_car.car_type = types_of_cars.car4.car_type;
                own_car.number_of_car = 4;
                buyed = false;
            }
            else if ((my_Car == 4) && !(money >= types_of_cars.car4.car_money))
            {
                for (int i = 0; i < 70; i++)
                {
                    cout << "-";
                }
                cout << endl << endl << full_name << "'s money not enough for buying " << types_of_cars.car4.car_name << endl << full_name << " just have " << money << " money to buy a car." << endl << endl;
                buyed = true;
            }
            else if ((my_Car == 5) && (money > types_of_cars.car5.car_money))
            {
                own_car.car_model = types_of_cars.car5.car_model;
                own_car.car_money = types_of_cars.car5.car_money;
                money -= own_car.car_money;
                own_car.car_name = types_of_cars.car5.car_name;
                own_car.car_type = types_of_cars.car5.car_type;
                own_car.number_of_car = 3;
                buyed = false;
            }
            else if ((my_Car == 5) && !(money > types_of_cars.car5.car_money))
            {
                for (int i = 0; i < 70; i++)
                {
                    cout << "-";
                }
                cout << endl << endl << full_name << "'s money not enough for buying " << types_of_cars.car5.car_name << endl << full_name << " just have " << money << " money to buy a car." << endl << endl;
                buyed = true;
            }
            else if ((my_Car == 6) && (money > types_of_cars.car6.car_money))
            {
                own_car.car_model = types_of_cars.car6.car_model;
                own_car.car_money = types_of_cars.car6.car_money;
                money -= own_car.car_money;
                own_car.car_name = types_of_cars.car6.car_name;
                own_car.car_type = types_of_cars.car6.car_type;
                own_car.number_of_car = 3;
                buyed = false;
            }
            else if ((my_Car == 6) && !(money > types_of_cars.car6.car_money))
            {
                for (int i = 0; i < 70; i++)
                {
                    cout << "-";
                }

                cout << endl << endl << full_name << "'s money not enough for buying " << types_of_cars.car6.car_name << endl << full_name << " just have " << money << " money to buy a car." << endl << endl;
                buyed = true;
            }
        } while (buyed);
    }
    else
    {
        cout << full_name << " will not buy a car " << endl << endl;
    }
}