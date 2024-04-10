#ifndef SUPPLY_H_INCLUDED
#define SUPPLY_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include "Staff.h"
#include "Stock.h"
#include "Supply.h"
using namespace std;

// BASE CLASS :- SUPPLY CLASE
class Supply
{
private:
    // 10 SHIPMENTS CAN ADD
    char vehicleType [10] ;
    string vehicleRegiNo [10] ;
    string factoryFamName [10] ;
    string dateOfDepartureLocal [10] ;
    string dateOfArrivalLocal [10] ;
    string shipNo [10] ;
    string countryOrigin [10] ;
    string arriveHarbour [10] ;
    string arriveStore [10] ;

public:

    string itemCodeLocal [10] ;
    float itemQuantityLocal [10] ;
    string itemCodeImported [10] ;
    float itemQuantityImported [10] ;

    char pendingStatusLocal [10] ;
    char pendingStatusImported [10] ;
    int shipmentLocal = 0 , shipmentInternational = 0  , totalShipmentLocal = 0 , totalShipmentInter = 0  ;
    void addSupplyDetails () ;
    void displaySupplyDetails () ;

};


#endif // SUPPLY_H_INCLUDED

