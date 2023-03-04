// HW.13.02.23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct provider {
    string name;
    double cost;
};
int main()
{
    double minutes; 
    double total;
    int prov; 
    int provO; 
    bool dum = true;

    provider Bell;
    Bell.name = "Bell";
    Bell.cost = 2.3;

    provider Ace;
    Ace.name = "Ace";
    Ace.cost = 1.5;

    provider Cae;
    Cae.name = "Cae";
    Cae.cost = 3;
    while (dum == true) {
        cout << "Please enter your provider number: \n1 -  Bell\n2 -  Ace\n3 -  Cae\n";
        cin >> prov;
        if (prov >= 1 && prov <= 3) {
            dum = false;
        }
        else {
            cout << "Error\n\n";
        }
    }
    dum = true;
    while (dum == true) {
    cout << "Please enter provider number of the person you called: \n1 -  Bell\n2 -  Ace\n3 -  Cae\n";
    cin >> provO;
        if (prov >= 1 && prov <= 3) {
            dum = false;
        }
        else {
            cout << "Error\n\n";
        }
    }
    cout << "Please enter duriation of call in minutes: \n";
    cin >> minutes;

    if (prov == provO) {
        cout << "No fee!";
    }
    else if (prov == 1) {
        total = minutes * Bell.cost;
        cout << "Fee: "<< total<<endl;
    }
    else if (prov == 2) {
        total = minutes * Ace.cost;
        cout << "Fee: " << total << endl;
    }
    else if (prov == 3) {
        total = minutes * Cae.cost;
        cout << "Fee: " << total << endl;
    }
}

