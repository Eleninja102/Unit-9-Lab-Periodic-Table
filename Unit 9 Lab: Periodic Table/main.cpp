//
//  main.cpp
//  Unit 9 Lab: Periodic Table
//
//  Created by Coleton Watt on 11/11/21.
//

#include <iostream>
#include "Periodic.hpp"

using namespace std;

int main() {
    int choice;
    Periodic x;
    
    do{
        cout << "1. Search by Atomic Number\n2. Search by Abbreviation\n3. Quit\n";
        cout << "Choose one: ";
        cin >> choice;
        string value;
        
        switch (choice) {
            case 1:
               
                cout << "Enter Atomic Number: ";
                cin >> value;
                x.searchAtomic(value);
                break;
                
            case 2:
                cout << "Enter Abbreviation: ";
                cin >> value;
                x.searchAbbreviation(value);
                break;
            case 3:
                cout << "Quit\n";
                break;
             
            default:
                break;
        }
    }while(choice != 3);

    return 0;
}
