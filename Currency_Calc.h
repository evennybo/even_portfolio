// Even Myren Nybø
// CPSC 306; Spring 2022
// Portfolio Assignment - even_portfolio.cpp
// .h file for CurrencyData, will take care of data
#include <iostream>
#include <string>
#include "CurrencyData.h"
using namespace std;
#ifndef EVEN_PORTFOLIO_CURRENCY_CALC_H
#define EVEN_PORTFOLIO_CURRENCY_CALC_H


class Currency_Calc {
    Currency_Calc(){};
    Currency_Calc(string, string, float){};

    float get_old_amount(){
        return old_amount;
    }
    float get_new_amount(){
        return new_amount;
    }

protected:


    void set_old_amount(float);
    void Set_new_amount(float);
    void set_currency(float);


private:
    float old_amount;
    float new_amount;
    int old_currency_rate;
    int new_currency_rate;



};


#endif //EVEN_PORTFOLIO_CURRENCY_CALC_H
