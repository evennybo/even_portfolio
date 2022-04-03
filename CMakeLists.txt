cmake_minimum_required(VERSION 3.21)
project(even_portfolio)

set(CMAKE_CXX_STANDARD 14)

add_executable(even_portfolio main.cpp CurrencyData.cpp CurrencyData.h Currency_Calc.cpp Currency_Calc.h)
