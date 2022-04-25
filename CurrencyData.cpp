// Even Myren Nybø
// CPSC 306; Spring 2022
// Portfolio Assignment - even_portfolio.cpp
// .cpp file for CurrencyData

#include "CurrencyData.h"
#include <iostream>
#include <string>
using namespace std;
CurrencyData::CurrencyData() {}
CurrencyData::CurrencyData(string, float) {}

// Creating setters, and set the currency rate to a spesific currency
void CurrencyData::set_USD_currency(float new_USD_rate){ //US rate update
    this->USD_rate = new_USD_rate;
}
void CurrencyData::set_JPN_currency(float new_JPN_rate){ //Japan rate update
    this->JPN_rate = new_JPN_rate;
}
void CurrencyData::set_NOK_currency(float new_NOK_rate){ //Norwegian rate update
    this->NOK_rate = new_NOK_rate;
}
void CurrencyData::set_SEK_currency(float new_SEK_rate){ //Sweden rate update
    this->SEK_rate = new_SEK_rate;
}
void CurrencyData::set_DKK_currency(float new_DKK_rate){ //Denmark rate update
    this->DKK_rate = new_DKK_rate;
}
void CurrencyData::set_GBP_currency(float new_GBP_rate){ //Denmark rate update
    this->GBP_rate = new_GBP_rate;
}
void CurrencyData::set_EUR_currency(float new_EUR_rate){ //Denmark rate update
    this->EUR_rate = new_EUR_rate;
}


//print rates
void CurrencyData::report_data(){
    cout << "USD rate: " << get_USD_currency() << endl;
    cout << "JPN rate: " << get_JPN_currency() << endl;
    cout << "NOK rate " << get_NOK_currency() << endl;
    cout << "SEK rate: " << get_SEK_currency() << endl;
    cout << "DKK rate: " << get_DKK_currency() << endl;
    cout << "GBP rate " << get_GBP_currency() << endl;
    cout << "EUR rate " << get_EUR_currency() << endl;
}


