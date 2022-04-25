// Even Myren Nybø
// CPSC 306; Spring 2022
// Portfolio Assignment - even_portfolio.cpp
// Code Summary: This source code file is for the portfolio assignment
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //used in sort and find
using namespace std;

#include "Currency_Calc.h"
#include "CurrencyData.h"
//used for read/write
#include <fstream>
#include <sstream>
/*
vector<std::string> split (const string &s, char delim){
    vector<std::string> result;
    stringstream ss(s);
    std::string item;
    while(getline(ss, item, delim)){
        result.push_back(item);
    }
    return result;
}
void Update_currency(){


    ifstream raw_file("../dailySjekker.txt");
    updated_file("../updated_currency.csv");
    std::string this_line;
    std::vector <string> new_currency{};
    while(getline(raw_file, this_line)){
        vector<string> cur_arr = split(this_line, ',');
        string currency = cur_arr[0];
        int rate = stoi(cur_arr[1]);
        string s(currency, rate);
        // s.get_student_person_data
        new_currency.push_back(s);
    }
    for(int i=0; i < new_currency.size(); i++)
        std::cout << new_currency.at(i) << ' ';


    ofstream new_file;
    //open a handle to the file (uses default 'destroy file if it exist mode)
    updated_file.open(new_file);
    //For each record in the Student_Body (alredy sorted) update the file with the record.
    for(int z = 0; z < 51; z++){
        new_file << this_line[z] << endl;
    }
    //close the file when done writing all the data
    new_file.close();
}
*/
int main() {

    //Update_currency();
    string USD = "USD, 8.9010";
    string EUR =  "EUR, 9.6110";
    string SEK = "SEK, 0.9302";
    string DKK = "DKK, 1.2899";
    string GBP = "GBP, 11.4710";
    string JPY = "JPY, 0.0692";
    string NOK = "NOK, 10"; //Base currency

    vector<string> currency{USD, EUR, SEK, DKK, GBP, JPY, NOK};
    cout<<  "Welcome to my currency calculator" << endl;
    cout<<  "What currency are you using?\n"
    << "Options: USD (united state Dollar), NOK (Norwegian Krone), SEK (Swedish Krone), DKK (Danish Krone), JPY (Japanese Yen), GBP (Great British Pound), EUR (Euros)" << endl;

    //oldCurrency = RollDownFunction();
    string oldCurrency;
    cin >> oldCurrency;
    cout << "What currency are you converting money to?" << endl;
    cout << "Options: USD (united state Dollar), NOK (Norwegian Krone), SEK (Swedish Krone), DKK (Danish Krone), JPY (Japanese Yen), GBP (Great British Pound), EUR (Euros)" << endl;

    // newCurrency = rollDownFunction();
    cout << "How much money do you want to send in your own currency?" << endl;
    int amount_input;
    cin >> amount_input;
    //int new_money Convert_money(oldCurrency, newCurrency, amount_input);
    cout << "This is the amount of the new currency:" << endl;
    //Print new_money;
    cout << "Thank you for using our currency calculator, press 1 if you want to do a new transaction" <<endl;
    return 0;
}
