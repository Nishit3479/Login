#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void login();

int main()
{
    int choice;
    cout << "***********************************************************************\n\n";
    cout << "                       Welcome to Login page                               \n\n";
    cout << "***********************        MENU        ****************************\n\n";
    cout << "1.LOGIN" << endl;
    cout << "2.Exit" << endl;
    cout << "\nEnter your choice : ";
    cin >> choice;
    cout << endl;
    if (choice == 1)
    {
        login();
    }
    else if(choice == 2)
    {
        cout << "The program will terminate now...!!\n\n";
        exit(5);
    }
    else
    {
        system("cls");
        cout << "Invalid Option entered. Kindly choose the correct option\n" << endl;
        main();
    }
}

void login()
{
    string user, pass;
    system("cls");
    cout << "Please enter the following details" << endl;
    cout << "USERNAME : ";
    cin >> user;
    cout << "PASSWORD : ";
    cin >> pass;
    if (user == "admin" && pass == "pass123")
    {
        cout << "\nHello " << user << "..!!\nYou have been successfully logged in..!!\n";
        cin.get();
        cin.get();
        main();
        system("cls");
    }
    else if (user == "Nishit" && pass == "abcd000")
    {
        cout << "\nHello " << user << "..!!\nYou have been successfully logged in..!!\n";
        cin.get();
        cin.get();
        main();
        system("cls");
    }
    else
    {
        cout << "\nLOGIN FAILED..!!\nPlease check your username and/or password..!!\n";
        main();
    }
}