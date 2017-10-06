//
//  main.cpp
//  PRG-3-13-Currency
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,
//  storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_DOLLAR.
//  To get the most up-to-date exchange rates, search the internet using the term
//  "currency exchange rate". If you cannot find the most recent exchange rates, use the
//  following:
//      1 Dollar = 98.93 Yen
//      1 Dollar = 0.74 Euros
//  Format your currency amounts in fixed-point notation, with two decimal places of
//  precision, and be sure the decimal point is always displayed

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float fltDollarsToConvert,
          fltTotalYen,
          fltTotalEuros;
    
    const float FLT_YEN_PER_DOLLAR = 98.93,
                FLT_EURO_PER_DOLLAR = 0.74;
    
    // Set precision for dollar amount, two points
    cout << setprecision(2) << fixed << showpoint;
    
    // Get user inputs
    cout << "Please enter a dollar amount to convert to Yen and Euro amounts: " << endl << "$";
    cin >> fltDollarsToConvert;
    while(!cin || fltDollarsToConvert < 0.0f || fltDollarsToConvert > 1000000.0f)
    {
        cout << "Please enter a dollar amount between $0.00 and $1,000,000.00:";
        cin.clear();
        cin.ignore();
        cin >> fltDollarsToConvert;
    }
    
    // Calculate the converted amount
    fltTotalYen = fltDollarsToConvert * FLT_YEN_PER_DOLLAR;
    fltTotalEuros = fltDollarsToConvert * FLT_EURO_PER_DOLLAR;
    
    // Output result to console
    cout << "$" << fltDollarsToConvert << " is equal to "
         << fltTotalYen << " Yen and "
         << fltTotalEuros << " Euros\n";
    
    return 0;
}



