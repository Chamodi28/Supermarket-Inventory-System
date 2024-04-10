#include <iostream>
#include <stdlib.h>
#include "Staff.h"
#include "Stock.h"
#include "Supply.h"
using namespace std;

// ADD NEW SHIPMENT DETAILS
void Supply :: addSupplyDetails ()
    {
        // LOCAL SHIPMENT DETAILS
        // WHEN ENTER DETAILS AT START
        int h = 0 ;
        int r = 0 ;
        static int ee = 0 ;
        // WHEN DETAILS ENTER MEANWHILE THE PROGRAM
        if (ee>0)
        {
            h = shipmentLocal ;
        }
        system("cls") ;

        cout << "No of local shipment need to add : " ;
        cin >> shipmentLocal ;
        r = shipmentLocal ;
        for (int i = h ; i < h + r ; i++ )
        {
            cout << "vehicle type (large truck -l , small truck -s , van -v) : " ;
            cin >> vehicleType[i] ;
            cout << "vehicle registration no         : " ;
            cin >> vehicleRegiNo[i] ;
            cout << "code of the transporting item   : " ;
            cin >> itemCodeLocal[i] ;
            cout << "item quantity                   : " ;
            cin >> itemQuantityLocal[i] ;
            cin.ignore() ;
            cout << "name of origin (farm / factory) : " ;
            getline(cin, factoryFamName[i]) ;
            cout << "date of departure from farm     : " ;
            cin >> dateOfDepartureLocal[i] ;
            cout << "date of arrival at supermarket  : " ;
            cin >> dateOfArrivalLocal[i] ;
            pendingStatusLocal[i] = 'p' ;
            cout << endl ;
        }
        ee ++ ;
        totalShipmentLocal = h + r ;

        // INTERNATIONAL SHIPMENT DETAILS
        // WHEN ENTER DETAILS AT START
        h = 0 ;
        r = 0 ;
        static int eee = 0 ;
        // WHEN DETAILS ENTER MEANWHILE THE PROGRAM
        if (eee>0)
        {
            h = shipmentInternational ;
        }
        cout << "No of international shipment need to add : " ;
        cin >> shipmentInternational ;
        r = shipmentInternational ;
        for (int i = h ; i < h+r ; i++ )
        {
            cout << "ship no                        : " ;
            cin >> shipNo[i] ;
            cin.ignore() ;
            cout << "country of origin              : " ;
            getline (cin ,countryOrigin[i] );
            cout << "code of the transporting item  : " ;
            cin >> itemCodeImported[i] ;
            cout << "item quantity                  : " ;
            cin >> itemQuantityImported[i] ;
            cout << "arrival date at local harbour  : " ;
            cin >> arriveHarbour[i] ;
            cout << "date of arrival at supermarket : " ;
            cin >> arriveStore[i] ;
            pendingStatusImported[i] = 'p' ;
            cout << endl ;
        }
        totalShipmentInter = h + r ;
        eee ++ ;
        cout << "Supply details have entered successfully !!! \n\n" ;
        system("pause") ;
        system("cls") ;
    }

// DISPLAY SHIPMENT DETAILS
void Supply :: displaySupplyDetails ()
{
        system("cls") ;
        cout << "SUPPLY DETAILS\nLOCAL\n" ;
        cout << "===================================== \n" ;
        for (int i = 0 ; i < totalShipmentLocal ; i ++)
        {
            if ( vehicleType[i] != ' ')
            {
            cout << "Vehicle type (large truck -l , small truck -s , van -v) : " << vehicleType[i] << endl ;
            cout << "Vehicle registration no         : " << vehicleRegiNo[i] << endl ;
            cout << "Code of the transporting item   : " << itemCodeLocal[i] << endl ;
            cout << "Item quantity                   : " << itemQuantityLocal[i] << endl ;
            cout << "Name of origin (farm / factory) : " << factoryFamName[i] << endl ;
            cout << "Date of departure from farm     : " << dateOfDepartureLocal[i] << endl ;
            cout << "Date of arrival at supermarket  : " << dateOfArrivalLocal[i] << endl ;
            cout << "Status                          : " << pendingStatusLocal[i] << endl  ;
            cout << endl ;
            }
        }
        cout << "===================================== \nINTERNATIONAL \n" ;
        for (int i = 0 ; i < totalShipmentInter ; i ++)
        {
            if ( shipNo[i] != " ")
            {
            cout << "Ship no                        : " << shipNo[i] << endl  ;
            cout << "Country of origin              : " << countryOrigin[i] << endl  ;
            cout << "Code of the transporting item  : " << itemCodeImported[i] << endl  ;
            cout << "Item quantity                  : " << itemQuantityImported[i] << endl  ;
            cout << "Arrival date at local harbour  : " << arriveHarbour[i] << endl  ;
            cout << "Date of arrival at supermarket : " << arriveStore[i] << endl  ;
            cout << "Status                         : " << pendingStatusImported[i] << endl  ;
            cout << endl ;
            }
        }
        cout << "===================================== \n" ;
        system("pause") ;
        system("cls") ;
}

