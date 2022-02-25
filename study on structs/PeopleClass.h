#pragma once

class people
{
private:
    string name, surname, full_name;
    int money = 0, my_Car = 0;
    cars own_car;
public:
    cars public_own_car;
    people();
    people(string name, string surname, int money);
    ~people();
    void for_car();
    void About_cars();
    bool having_car();
    void print_car_func();
    bool car_changing();
    friend ostream& operator << (ostream&, people&);
    friend istream& operator >> (istream&, people&);
};

void people::for_car()
{
    if (having_car())
    {
        cin >> own_car;
        if (car_changing())
        {
            cout << full_name << " have car but:" << endl << endl;
            About_cars();
        }
    }
    else
    {
        cout << full_name << " don't have car but:" << endl << endl;
        About_cars();
    }
}

people::people()
{
    full_name = name + " " + surname;

}

istream& operator >> (istream& in, people& writer)
{
    string full_name;
    cout << "Type name and surname: ";
    in >> writer.name >> writer.surname;
    full_name = writer.name + " " + writer.surname;
    writer.full_name = full_name;
    cout << "Does " << full_name << " have how much money: ";
    in >> writer.money;
    return in;
}

ostream& operator << (ostream& out, people& printer)
{
    out << printer.full_name << " still have " << printer.money << " money" << endl;
    return out;
}

void people::print_car_func()
{
    cout << own_car;
    public_own_car = own_car;
}


people::people(string name, string surname, int money)
{
    this->name = name;
    this->surname = surname;
    this->money = money;
    full_name = name + " " + surname;
}
bool people::car_changing()
{
    bool changing = false;
    cout << "Does " << full_name << " would want to sell her " << own_car.car_name << "?" << endl << "Type 1 for yes " << endl << "Type 0 for no: ";
    cin >> changing;
    if (changing)
    {
        money = money + own_car.car_money;
    }
    return changing;
}

bool people::having_car()
{
    bool booler = true;
    cout << "Does " << full_name << " have a car? " << endl << "Type 1 for yes " << endl << "Type 0 for no: ";
    cin >> booler;
    return booler;
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

people::~people()
{
    cout << full_name << " were survived. " << endl << endl;
}
