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

people::people()
{
    full_name = name + " " + surname;

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


people::~people()
{
    cout << full_name << " were survived. " << endl << endl;
}
