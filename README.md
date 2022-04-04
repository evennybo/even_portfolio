# even_portfolio
Demo Currency Converter


The application is going to be a currency converter that will send money right from your current bank account to another bank account without caring about the currency you are using. It is a demo for Venmo or the Norwegian application “Vipps”, that makes payments within your friend group easier. It will make payments between you and your international friends easier because you are not in need of dollar bills. It is happening way too many times where I have been out eating or doing activates with my American friends, and I have only paper cash to pay them with or the other way around. It is always a pain when I need to carry money or take out money from the ATM with the extra fees it comes with. Therefore, do I want to create this currency converter that can be used to transfer money, so you will be able to send money on a better rate than others. The audience will be everyone with an international friend, but it is mainly focused on international friend groups that like to go out and do activates together. It will make it easier to plan how much money that will be used and a more accurate currency rate from when you paid to when it gets transferred. 

The application will have a starter question about what currency your current account has, and then you will get access to the rate of your currency. Next up you will get a question about how much money you want to send, for then to ask the currency you are sending it to. From there the application will do its calculations and transfer the money from your account to your friends account, like a regular venmo friend payment. 


The classes I will have been one for the currency rate, with a lot of getters and setters. 
This class will be called: CurrencyData, it will handle all the currency rates, it will read them from an excel document or directly from a webpage and then store them as methods, so we can access these rates. The calculations will be done in the its own class file, but the class will be updated with new currencies every time the excel document is getting updated. The methods will be named for example getNOK standing for (currency Norwegian krone) or setUSD standing for (setting united state dollar).

The other class will be accounts, it will have stored information from different accounts and will make it easy to get the balance and new balance from the transactions. This will be read from “fake” accounts to create a virtual environment that will make it possible to show that it can transfer money from accounts with different currencies.  It will have a login that will make you access the account that shows you the balance, and the class will also have an method that is called, updateAccount; that will make the changes in the account balance and update the two accounts that is doing the transactions. I will use keys to access the data and also to update the data. 

My last class will be working as a calculator, this will be called CurrencyCalc. The methods that will be in this class is: CurrencyConverter, newBalance, 
The currencyConverter will take care of the conversion of money that will be changing the amount you are sending over to another account and change the currency to the person you are sending it to. NewBalance will make a calculation of how much money you will have left on your account and then send the money value over to the updateAccount in the class for the accounts. 


