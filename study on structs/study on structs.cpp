
/*
    outhor: Fahrettin Baþtürk, a.k.a Ferivonus
    wrote reason: a pocket of struct for using car companies for make their job easier.
*/

#include <string>
#include <iostream>
#include <fstream>
using namespace std;
#include "CarsStructs.h"
#include "PeopleClass.h"
#include "WritingFuncs.h"
bool having_car(string);
bool creating_file();




int how_many_human_calculator() {
    int returner;
    cout << "How many human do we have? ";
    cin >> returner;
    return returner;
}

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



int main()
{
    int how_many_human = 0;
    people *names[10]={ 0 };
    how_many_human = how_many_human_calculator();
    for (int counter = 0; counter < how_many_human; counter++)
    {
        counter++;
        cout<<endl << "About " << counter << ". Person:" << endl;
        counter--;
        names[counter] = new people;
        cin >> *names[counter];
        names[counter]->for_car();
    }
    for (int i = 0; i < how_many_human; i++)
    {
        i++;
        cout << endl << "About " << i << ". Person:" << endl;
        i--;
        cout << *names[i];
        names[i]->print_car_func();
    }
    /*
        working on file:    
    */

    if (creating_file())
    {
        string File_of_name;
        File_of_name = File_of_name_func();
        ofstream File_of_human (File_of_name);
        for (int i = 0; i < how_many_human; i++)
        {
            File_of_human << *names[i] << endl << endl;
            File_of_human << names[i]->public_own_car << endl;
        }
        cout << endl;
        File_of_human.close();
    }
    else
    {
        cout << "You don't want to create a file. ";
    }
    for (int i = 0; i < how_many_human; i++)
    {
        delete names[i];
    }
    cout << endl;
    return 0;
}
