/*
*File: managestore.cpp
*Author: THAI DOAN NHAT
*Date: 2/6/2023
*Description: program manager drink
*/
# include "managedrink.h"
/*
* Class: _staff
* Description: This function use for setting name and price of student
* Input:id and name and price of _drink
* Output:None
*/
_drink::_drink(string name, double price){
    static uint8_t _id=10;
    this->_id=id;
    id++;
    this->_name= name;
    this->_price=price;
}
uint8_t _drink::get_id(){
    return this->_id;
}
string _drink::get_name(){
    return this->_name
}
void _drink::set_name(string name){
    this->_name=name;
}
double _drink::get_price(){
    return this->_price;
}
void _drink::set_price(double price){
    this->_price=price;
}
/*
* Class: _manage
* Description: This function use for setting databasedrink and numberoftable of class
* Input:databasedrink and numberoftable
* Output:return value
*/
_manage::manage(vector<_drink>databasedrink, uint8_t numberoftable){
    this->databasedrink=databasedrink;
    this->numberoftable=numberoftable;
}
uint8_t _manage::getmunberoftable(){
    return this->numberoftable;
}
void _manage::munberoftable(){
    cout<<"Number Of Table: ";
    cin>>*this->numberoftable;
    this->returnoption = 1;
}
void _manage::adddrink(){
    string _name;
    uint8_t _price;
    uint8_t choose;
    cout<<"         add drink    \n";
    cout<<"Name: ";
    cin>>_name;
    cout<<"Price: ";
    cin>>_price;
    _drink newdrink(name,price);
    this->databasedrink->push_back(newdrink);
    cout<<"1: continue add drink\n";
    cout<<"0: return menu marage \n";
    cin>>choose;
    if (choose=1)
    {
        return adddrink;
    }else{
        return menudrink;
    }
    
}
void _manage::fixdrink(_drink &x, _drink &y){
    string _name;
    int price;
    cout<<"New Name: \n";
    cin>>_name;
    x.set_name.(_name);
    menudrink(x);
    cout<<"New Price: \n";
    cin>>_price;
    y.set_price(_price);
    menudrink(y);
}
void _manage::deletedrink(){
    int id;
    int choose = 3;
    cout<<"     delete drink     ";
    menudrink();
    again:
    if(databasedrink->size() != 0){
        cout<<"delete ID: ";
        cin>>id;
        for(int i = 0; i<databasedrink->size();i++)
        {
            if ((*databasedrink)[i].getID() == id)
            {
                databasedrink->erase(databasedrink->begin()+i);
                menudrink();
                if(databasedrink->size() != 0){
                    cout<<"1. delete more ";
                    cout<<"0. Return menu manage";
                    do{
                        cout<<"Your choose: ";
                        cin>>choose;
                    }while(choose < 0 || choose > 1);
                }else 
                {
                    cout<<"Press 0 to return menu manage";
                    do{
                        cout<<"Your choose: ";
                        cin>>chooe;
                    }while(choose != 0);
                }
                if(choose == 1)goto again;
                else break;
            }
        }
        if(chooe == 3){
            cout<<"ID doesn't exist";
            goto again;
        }
    }
}
void _manage::menudrink(){
    cout<<"    -     MENU    -    \n";
    cout<<"1. add drink\n";
    cout<<"2. fix drink\n";
    cout<<"3. delete drink\n";
    cout<<"4. menu drink\n";
    cout<<"5. numberoftable\n";
    cout<<"6. come back\n";
    do
    {
        cout<<"choosee: \n";
        cin>>this->_option;
    } while (this->_option<0||this->_option>5);
}
void _manage::option(){
    switch (this->_option)
    {
    case 1:
        adddrink(); 
        break;
    case 2:
        fixdrink();
        break;
    case 3:
        deletedrink();
        break;
    case 4:
        cout<<"databasedrink[0].get_name()";
        menudrink();
        break;
    case 5:
        munberoftable();
        break;
    case 6:
        this->returnoption=0;
        break;
    default:
        break;
    }
}
/*
* Class: _staff
* Description: This function uses voids declared in the class _staff
* Input:properties in class _staff
* Output:return value
*/
void _staff::createtable(uint8_t tablenumber){
    databasetable(tablenumber-1).present=true;
    numberofdrink 01((.Name"coca",15).quantity=20);
    databasetable(tablenumber-1).databasedrink.push_back(01);
    databasetable(tablenumber-1).present=true;
    numberofdrink 02((.Name"redbull",20).quantity=20);
    databasetable(tablenumber-1).databasedrink.push_back(02);
    databasetable(tablenumber-1).present=true;
    numberofdrink cafe((.Name"cafe",10).quantity=20);
    databasetable(tablenumber-1).databasedrink.push_back(cafe);
    databasetable(tablenumber-1).present=true;
    numberofdrink milktea((.Name"milktea",25).quantity=20);
    databasetable(tablenumber-1).databasedrink.push_back(milktea);    
}
_steff::_staff(vector<_drink>databasedrink, uint8_t numberoftable){
    for(_drink drink:databasedrink){
        databasedrink.push_back(drink);
    }

    for(uint8_t i=0; i<numberoftable;i++){
        table table;
        table.tablenumber = i;
        table.present = false;
        databasetable.push_back(table);
    }
    cout<<"staff";
    cout<<"table: ";
    for (auto table: databasetable)
    {
        cout<<"| "<<table.tablenumber;
    }cout"\n    status:     ";
    for (auto table:databasetable){
        if (present= true) cout"| x";
        else cout"| o";
    }cout"\nNhap: ";   
}


void _staff::menu(){
    cout<<"Table "<<this->createtable<<":";
    cout<<"1. oder\n";
    cout<<"2. Add drink\n";
    cout<<"3. delete drink\n";
    cout<<"4. bill\n";
    //cout<<"0. Back to Table Status\n";
    do{
        cout<<"Enter your choose: ";
        cin>>this->chooseoption;
    }while(this->chooseoption<0 || this->chooseoption>5 );
}
void _staff::option(uint8_t option){
    cout<<"choose: \n";
    cin>>option;
    switch (this->chooseOption)
    {
        case 1:
            oder(databasetable[tablenumber-1]);
            break;
        case 2:
            adddrink(databasetable[tablenumber-1]);
            break;
        case 3:
            deletedrink(databasetable[tablenumber-1]);
            break;
        case 4:
           bill(databasetable[tablenumber-1]);
            break;
        default:
            break;
    }
}
void _staff::oder(table tablenumber){
    cout<<"Id\t\tName\t\tPrice (vnd)\t\tQuantity\n";
    cout<<_drink.get_id()<<"\t\t"<<_drink.get_name()<<"\t\t"\
    <<_drink.get_price()<<"\t\t\t"<<_drink.get_quantity();
}
void _staff::add(table &table){
    int quantity;
    int id;
    cout<<"add drink\n";
    _manage::menudrink();
    cout<<"Choose: \n";
    cin>>id;
    for(auto table.databasemunberofdrink)
    {
        if(_drink.get_id() == id)
        {
            cout<<"You choose "<<_drink.get_name();
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            _drink newdrink(id,_drink.get_name(),_drink.get_price(),quantity);
            table.databasemunberofdrink.push_back(newdrink);
            this->bill(table);
        }
    }
}
void _staff::delete(table &table){
    int id;
    int choose = 3;
    cout<<"     delete drink    \n";
    this->bill(table);
    if(table.databasemunberofdrink.size() != 0){
        cout<<"delete ID: ";
        cin>>id;
        for(int i = 0; i < table.databasemunberofdrink.size();i++)
        {
            if (table.databasemunberofdrink[i].get_id() == id)
            {
                /*delect drink in bill*/
                table.databasemunberofdrink.erase( table.databasemunberofdrink.begin()+i);
                this->bill(table);
                /*After delecting, check size of bill */
                if(table.databasemunberofdrink.size() != 0){
                    cout<<"1. Continue delete\n";
                    cout<<"0. Return Staff Menu\n";
                    do{
                        cout<<"Your choose: ";
                        cin>>choose;
                    }while(choose < 0 || choose > 1);
                }else 
                {
                    cout<<"Press 0 to return Staff Menu\n";
                    do{
                        cout<<"Your choose: ";
                        cin>>choose;
                    }while(choose != 0);
                }
            }
        }
    }
}
void _staff::bill(table table){
    int choose;
    if(table.databasemunberofdrink.size() == 0)
    cout<<"List Is Empty!!!\n";
    else
    {
        int i = 0;
        cout<<"List Of drink\n";
        cout<<"Number\t\tId\t\tName\t\tPrice (vnd)\t\tQuantity\n";
       for(auto table.databasemunberofdrink)
       {
            i++;
            cout<<i<<"\t\t"<<_drink.get_id()<<"\t\t"<<_drink.get_name()\
            <<"\t\t"<<_drink.get_price()<<"\t\t\t"<<_drink.get_quantity();
       }
    }
}
