#pragma once

bool creating_file()
{
    bool Creating_file = false;
    cout << "Hello my cutie, would you want create an txt file? " << endl << "Type 1 for yes " << endl << "Type 0 for no: ";
    cin >> Creating_file;
    return Creating_file;
}

string File_of_name_func()
{
    string File_of_name;
    cout << endl << "You want a file but what should be name that file?" << endl;
    cin.ignore();
    getline(cin, File_of_name);
    return File_of_name + ".txt";
}
