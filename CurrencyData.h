// Even Myren Nybø
// CPSC 306; Spring 2022
// Portfolio Assignment - even_portfolio.cpp
// .h file for CurrencyData, will take care of data

#ifndef EVEN_PORTFOLIO_CURRENCYDATA_H
#define EVEN_PORTFOLIO_CURRENCYDATA_H
#include <iostream>
using namespace std;

class CurrencyData {
public:
    CurrencyData();
    CurrencyData(string, float);
    void report_data();
    //constructors for the getter of currency rate
    float get_USD_currency();
    float get_NOK_currency();
    float get_JPN_currency();
    float get_SEK_currency();
    float get_DKK_currency();
    float get_GBP_currency();
    float get_EUR_currency();


protected:
    //Constructors for the setter
    void set_USD_currency(float USD_rate);
    void set_NOK_currency(float NOK_rate);
    void set_JPN_currency(float JPN_rate);
    void set_SEK_currency(float SEK_rate);
    void set_DKK_currency(float DKK_rate);
    void set_GBP_currency(float GBP_rate);
    void set_EUR_currency(float EUR_rate);

    float USD_rate =  8.9010;
    float NOK_rate =  10.0; //base currency
    float JPN_rate =  0.0692;
    float SEK_rate =  0.9302;
    float DKK_rate =  1.2899;
    float GBP_rate =  11.4710;
    float EUR_rate =  9.6110;

};


#endif //EVEN_PORTFOLIO_CURRENCYDATA_H
