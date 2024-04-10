#ifndef STAFF_H_INCLUDED
#define STAFF_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include "Staff.h"
#include "Stock.h"
#include "Supply.h"

using namespace std;

class Staff : public Stock , public Supply
{
private:
    int noOfManagers  ;
    int noOfCashiers  ;
    int noOfFloorWorkers ;

    string OwnerUserName , OwnerPassword ;
    string managerUserNameAndPasswordArr[10] ;
    string managerNameandDtae [10] ;
    string cashierUserNameAndPasswordArr[10] ;
    string cashierNameandDtae [10] ;
    string floorWorkerUserNameAndPasswordArr[10] ;
    string floorWorkerNameandDtae [10] ;

public:
    int ownernum = 0 ;
    int managernum = 0 ;
    int cashiernum = 0 ;
    int floornum = 0 ;
    int stockMenuNo = 0 ;
    int supplynum = 0 ;
    int n = 0 ;
    string tempCashierCode[10] ;
    string tempCashierName[10] ;

    void addMember() ;
    void removeMember() ;
    void displayStaffDetail () const ;
    bool CanAccessStock () ;
    int staffMenu () ;
    int stockMenue(int n) ;
    int supplyMenu () ;
    void OwnerFirstInputData() ;
    int canAddSupply () ;




};






#endif // STAFF_H_INCLUDED
