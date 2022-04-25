// Even Myren Nybø
// CPSC 306; Spring 2022
// Portfolio Assignment - even_portfolio.cpp
// .h file for CurrencyData, will take care of data

#include "Currency_Calc.h"
#include "CurrencyData.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

float convert_USD_to_new(string old_currency, string new_currency, float amount_in) {
    float old_cur = amount_in;
    if (old_currency == "USD" && new_currency == "NOK") {
        float curr_rate = CurrencyData.get_USD_rate();
        float new_amount = old_cur * curr_rate;
        return new_amount;
    }
    else if (old_currency == "USD" && new_currency == "JPN"){
        float old_cur = amount_in;
        float jpn_cur_rate = CurrencyData.get_JPN_currency_rate;
        float new_amount = (old_cur * CurrencyData.get_USD_currency_rate) / jpn_cur_rate;
        return new_amount;
    }
    else if (old_currency == "USD" && new_currency == "SEK"){

        float sek_cur_rate = CurrencyData.get_SEK_currency_rate;
        float new_currency = (old_cur * CurrencyData.get_USD_currency_rate) / sek_cur_rate;
        return new_currency;
    }

    else if (old_currency == "USD" && new_currency == "GPD") {

        float gbp_cur_rate = CurrencyData.get_GPG_currency_rate;
        float  new_currency = (old_cur * CurrencyData.get_USD_currency_rate) / CurrencyData.gbp_cur_rate;

        return new_currency;
    }
    else if (old_currency == "USD" && new_currency == "EUR"){
        float eu_cur_rate = CurrencyData.get_EUR_currency_rate;
        float new_currency = (old_cur * CurrencyData.get_USD_currency_rate) / CurrencyData.eur_cur_rate;
        return new_currency;}
    else if (old_currency == "USD" && new_currency == "DKK") {
        float new_currency = (amount_in * CurrencyData.get_USD_currency_rate) / CurrencyData.get_DKK_currency_rate;;
        return new_currency;
    }else{
        cout << "we don’t have your new currency yet." << endl;
        return 0.0;
    }
}


float convert_JPN_to_new(string old_currency, string new_currency, float amount_in) {
    if (old_currency == "JPN" && new_currency == "NOK") {
        float curr_rate = CurrencyData.get_JPN_rate();
        float new_amount = amount_in * curr_rate;
        return new_amount;
    }
    else if (old_currency == "JPN" && new_currency == "USD"){
        float new_amount = (amount_in * CurrencyData.get_JPN_currency_rate) / CurrencyData.get_USD_currency_rate;
        return new_amount;
    }
    else if (old_currency == "JPN" && new_currency == "SEK"){
        float new_currency = (amount_in * CurrencyData.get_JPN_currency_rate) / CurrencyData.get_SEK_currency_rate;
        return new_currency;
    }

    else if (old_currency == "JPN" && new_currency == "GBP") {

        float  new_currency = (amount_in * CurrencyData.get_JPN_currency_rate) / CurrencyData.get_GBP_currency_rate;
        return new_currency;
    }
    else if (old_currency == "JPN" && new_currency == "EUR"){
        float new_currency = (amount_in * CurrencyData.get_JPN_currency_rate) / CurrencyData.get_EUR_currency_rate;;
        return new_currency;}
    else if (old_currency == "JPN" && new_currency == "DKK") {
        float new_currency = (amount_in * CurrencyData.get_JPN_currency_rate) / CurrencyData.get_DKK_currency_rate;;
        return new_currency;
    }else{
        cout << "we don’t have your new currency yet." << endl;
        return 0.0;
    }

}

float convert_SEK_to_new(string old_currency, string new_currency, float amount_in) {
    if (old_currency == "SEK" && new_currency == "NOK") {
        float curr_rate = CurrencyData.get_SEK_rate();
        float new_amount = amount_in * curr_rate;
        return new_amount;
    }
    else if (old_currency == "SEK" && new_currency == "USD"){
        float new_amount = (amount_in * CurrencyData.get_SEK_currency_rate) / CurrencyData.get_USD_currency_rate;
        return new_amount;
    }
    else if (old_currency == "SEK" && new_currency == "JPN"){
        float new_currency = (amount_in * CurrencyData.get_SEK_currency_rate) / CurrencyData.get_JPN_currency_rate;
        return new_currency;
    }

    else if (old_currency == "SEK" && new_currency == "GBP") {

        float  new_currency = (amount_in * CurrencyData.get_SEK_currency_rate) / CurrencyData.get_GBP_currency_rate;
        return new_currency;
    }
    else if (old_currency == "SEK" && new_currency == "EUR"){
        float new_currency = (amount_in * CurrencyData.get_SEK_currency_rate) / CurrencyData.get_EUR_currency_rate;;
        return new_currency;}
    else if (old_currency == "SEK" && new_currency == "DKK") {
        float new_currency = (amount_in * CurrencyData.get_SEK_currency_rate) / CurrencyData.get_DKK_currency_rate;;
        return new_currency;
    }else{
        cout << "we don’t have your new currency yet." << endl;
        return 0.0;
    }

}

float convert_GBP_to_new(string old_currency, string new_currency, float amount_in) {
    if (old_currency == "GBP" && new_currency == "NOK") {
        float curr_rate = CurrencyData.get_GBP_rate();
        float new_amount = amount_in * curr_rate;
        return new_amount;
    } else if (old_currency == "GBP" && new_currency == "USD") {
        float new_amount = (amount_in * CurrencyData.get_GBP_currency_rate) / CurrencyData.get_USD_currency_rate;
        return new_amount;
    } else if (old_currency == "GBP" && new_currency == "JPN") {
        float new_currency = (amount_in * CurrencyData.get_GBP_currency_rate) / CurrencyData.get_JPN_currency_rate;
        return new_currency;
    } else if (old_currency == "GBP" && new_currency == "SEK") {
        float new_currency = (amount_in * CurrencyData.get_GBP_currency_rate) / CurrencyData.get_SEK_currency_rate;
        return new_currency;
    } else if (old_currency == "GBP" && new_currency == "EUR") {
        float new_currency = (amount_in * CurrencyData.get_GBP_currency_rate) / CurrencyData.get_EUR_currency_rate;;
        return new_currency;
    }else if (old_currency == "GBP" && new_currency == "DKK") {
        float new_currency = (amount_in * CurrencyData.get_GBP_currency_rate) / CurrencyData.get_DKK_currency_rate;;
        return new_currency;
    }else {
        cout << "we don’t have your new currency yet." << endl;
        return 0.0;
    }
}

float convert_EUR_to_new(string old_currency, string new_currency, float amount_in) {
    if (old_currency == "EUR" && new_currency == "NOK") {
        float curr_rate = CurrencyData.get_EUR_rate();
        float new_amount = amount_in * curr_rate;
        return new_amount;
    } else if (old_currency == "EUR" && new_currency == "USD") {
        float new_amount = (amount_in * CurrencyData.get_EUR_currency_rate) / CurrencyData.get_USD_currency_rate;
        return new_amount;
    } else if (old_currency == "EUR" && new_currency == "JPN") {
        float new_currency = (amount_in * CurrencyData.get_EUR_currency_rate) / CurrencyData.get_JPN_currency_rate;
        return new_currency;
    } else if (old_currency == "EUR" && new_currency == "SEK") {

        float new_currency = (amount_in * CurrencyData.get_EUR_currency_rate) / CurrencyData.get_SEK_currency_rate;
        return new_currency;
    } else if (old_currency == "EUR" && new_currency == "GBP") {
        float new_currency = (amount_in * CurrencyData.get_EUR_currency_rate) / CurrencyData.get_GBP_currency_rate;;
        return new_currency;
    }
    else if (old_currency == "EUR" && new_currency == "DKK") {
        float new_currency = (amount_in * CurrencyData.get_EUR_currency_rate) / CurrencyData.get_DKK_currency_rate;;
        return new_currency;
    }else {
        cout << "we don’t have your new currency yet." << endl;
        return 0.0;
    }
}

float convert_DKK_to_new(string old_currency, string new_currency, float amount_in) {
    if (old_currency == "DKK" && new_currency == "NOK") {
        float curr_rate = CurrencyData.get_DKK_rate();
        float new_amount = amount_in * curr_rate;
        return new_amount;
    } else if (old_currency == "DKK" && new_currency == "USD") {
        float new_amount = (amount_in * CurrencyData.get_DKK_currency_rate) / CurrencyData.get_USD_currency_rate;
        return new_amount;
    } else if (old_currency == "DKK" && new_currency == "JPN") {
        float new_currency = (amount_in * CurrencyData.get_DKK_currency_rate) / CurrencyData.get_JPN_currency_rate;
        return new_currency;
    } else if (old_currency == "DKK" && new_currency == "SEK") {

        float new_currency = (amount_in * CurrencyData.get_DKK_currency_rate) / CurrencyData.get_SEK_currency_rate;
        return new_currency;
    } else if (old_currency == "DKK" && new_currency == "EUR") {
        float new_currency = (amount_in * CurrencyData.get_DKK_currency_rate) / CurrencyData.get_EUR_currency_rate;;
        return new_currency;
    }
    else if (old_currency == "DKK" && new_currency == "GBP") {
        float new_currency = (amount_in * CurrencyData.get_DKK_currency_rate) / CurrencyData.get_GBP_currency_rate;;
        return new_currency;
    }
    else {
        cout << "we don’t have your new currency yet." << endl;
        return 0.0;
    }
}


float Nok_to_new_cur(string old_currency, string new_currency, float amount_in) {

    if (old_currency == "NOK" && new_currency == "USD") {
        float new_currency = amount_in / CurrencyData.get_USD_currency_rate;
        return new_currency;
    } else if (old_currency == "NOK" && new_currency == "JPN") {
        float new_currency = amount_in / CurrencyData.get_JPN_currency_rate;
        return new_currency;
    } else if (old_currency == "NOK" && new_currency == "SEK") {
        float sek_cur_rate = CurrencyData.get_SEK_currency_rate;
        float new_currency = amount_in / sek_cur_rate;
        return new_currency;
    } else if (old_currency == "NOK" && new_currency == "GPD") {
        float new_currency = amount_in / CurrencyData.get_USD_currency_rate;
        return new_currency;
    } else if (old_currency == "NOK" && new_currency == "EU") {
        float new_currency = amount_in / CurrencyData.get_EU_currency_rate;
        return new_currency;
    } else {
        cout << "We don’t have your new currency yet." << endl;
    }

}