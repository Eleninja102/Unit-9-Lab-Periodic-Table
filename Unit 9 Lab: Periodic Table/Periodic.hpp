//
//  Periodic.hpp
//  Unit 9 Lab: Periodic Table
//
//  Created by Coleton Watt on 11/11/21.
//

#ifndef Periodic_hpp
#define Periodic_hpp

#include <iostream>
#include <sstream>
#include <fstream>
/*#include <string>*/
using namespace std;

class Periodic{
public:
    //Periodic();
    void searchAtomic(string);
    void searchAbbreviation(string);
    
private:
    
    
    
};

#endif /* Periodic_hpp */

void Periodic::searchAtomic(string num){
    cout << "\n";
    
    //cout << "HI";
    ifstream fin("/Users/coletonwatt/Downloads/elements.csv");
    string number, name, symbol, mass;
    while(!fin.eof()){
        //cout << "hi2";
        getline(fin, number, ',');
        getline(fin, name, ',');
        getline(fin, symbol, ',');
        getline(fin, mass, '\n');
        if(number == num){
            
            cout << "Number: " << number << endl;
            cout << "Name: " << name << endl;
            cout << "Symbol: " << symbol << endl;
            cout << "Mass: " << mass << endl;
            
        }
    }
    cout << endl;
    fin.close();
}



void Periodic::searchAbbreviation(string input){
    cout << endl;
        ifstream fin("/Users/coletonwatt/Downloads/elements.csv");
    
    string number, name, symbol, mass;
    while(!fin.eof()){
        //cout << "hi2";
        getline(fin, number, ',');
        getline(fin, name, ',');
        getline(fin, symbol, ',');
        getline(fin, mass, '\n');
        if(symbol == input){
            
            cout << "Number: " << number << endl;
            cout << "Name: " << name << endl;
            cout << "Symbol: " << symbol << endl;
            cout << "Mass: " << mass << endl;
            
        }
    }
    cout << endl;
    fin.close();
}
