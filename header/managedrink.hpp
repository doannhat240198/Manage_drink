/*
*File: managedrink.cpp
*Author: THAI DOAN NHAT
*Date: 2/6/2023
*Description: program manager drink
*/
#ifndef __MANAGEDRINK_H
#define __MANAGEDRINK_H
#include<stdio.h>
#include<string>
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
/*Create Class _drink
* Description: create class and scope of access of properties and methods are in class*/
class _drink{
    private:
        string _name;
        double _price;
        uint8_t _id;
        uint8_t _quantity;
    public:
        _drink(string name, double price);
        void set_name(string name);
        string get_name();
        void set_price(double price);
        double get_price();
        uint8_t get_id();
        uint8_t get_quantity();
        void set_quantity(int quantity);
};
/*Create Class _manage
* Description: create class and scope of access of properties and methods are in class*/
class _manage{
    private://access range
        //vector like array can change during the working of the program
        vector<_drink>databasedrink;
        uint8_t munberoftable;
        uint8_t _option;
        //access range
        public:
        uint8_t getmunberoftable();
        bool returnoption;
        void munberoftable();
        void option();
        void adddrink();
        void fixdrink(_drink &x, _drink &y);
        void deletedrink();
        void menudrink();
};
//User-defined data type
typedef struct 
{
    _drink Name;
    uint8_t quantity;
}numberofdrink;
//User-defined data type
typedef struct 
{
    uint8_t tablenumber;
    bool present;
    vector<numberofdrink>databasemunberofdrink;
}table;
/*Create Class _staff
* Description: create class and scope of access of properties and methods are in class*/
class _staff{
    private:
    //vector like array can change during the working of the program
    vector<table>databasetable;
    vector<_drink>databasedrink;
    uint8_t _option
    public:
    void option();
    void oder(table tablenumber);
    void delete(table &table);
    void add(table &table);
    void menu();
    void bill(table table);
    void createtable(uint8_t tablenumber)
        _staff(vector<_drink>databasedrink, uint8_t numberoftable); 
};

#endif
