#include <iostream>
#include <stdlib.h>
#include "Staff.h"
#include "Stock.h"
#include "Supply.h"

using namespace std;

int main()
{
    int no = 0 ;
    static int x = 0 ;
    static int y = 0 ;
    static int e = 0 ;
    static int n = 0 ;

    // CREATING OBJECTS FROM THREE CLASSES
    Staff s1 ;
    Stock stock1 ;
    Supply supply1 ;

    // DO-WHILE LOOP EXICUTE UNTILL INPUT IS 4
    do
    {
        if (x == 0)
        {
            s1.OwnerFirstInputData() ; // AT START OWNER ENTER DETAILS OF STAFF
            x++ ;
        }
        else
        {
            cin.ignore() ;
            cout << "-----SUPERMARKET INVENTORT SYSTEM-----\n\n" ;
            cout << "1. STAFF\n2. STOCK \n3. SUPPLY \n4. EXIT\n\n" ;
            cout << "enter no : " ;
            cin >> no ;

            // BASED ON "no" VALUE SELECT WHICH MENU SHOULD EXICUTE
            switch (no)
            {
            case 1 : // STAFF DETAILS
                {
                    system ("cls") ;
                    s1.staffMenu() ;
                    // BASED ON RETURN INTEGER VALUE OF STAFF MENU FOLLOWING FUNCTIONS EXICUTE
                    if (s1.ownernum == 1)
                        s1.addMember() ;
                    if (s1.ownernum == 2)
                        s1.removeMember() ;
                    if (s1.ownernum == 3)
                        s1.displayStaffDetail() ;

                    s1.ownernum = 0 ;
                    break ;
                } ;
            case 2: // STOCK DETAILS
                {
                    if (y == 0)  // AT START STOCK IS EMPTY. THEREFORE OWNER OR MANAGER SHOULD ENTER STOCK
                    {
                        system("cls") ;
                        cout << "Stock is empty\n\n" ;
                        if (s1.CanAccessStock() == true ) // CHECK WHETHER OWNER OR MANAGER
                        {
                            stock1.addEntry() ;
                            y ++ ;
                        }
                        else
                            cout << "You are not able to add new entry !!!\n" ;
                    }
                    else
                    {
                        s1.stockMenue(n) ;
                        // BASED ON RETURN INTEGER VALUE OF STOCK MENU FOLLOWING FUNCTIONS EXICUTE
                        if (s1.stockMenuNo == 1 )
                            stock1.addEntry() ;
                        if (s1.stockMenuNo == 4 )
                            stock1.displayStock() ;
                        if (s1.stockMenuNo == 2)
                            stock1.increaseStock() ;
                        if (s1.stockMenuNo == 3)
                            stock1.decreaseStock() ;
                        if (s1.stockMenuNo == 5)
                        {
                            stock1.billing(n) ;
                            n++ ;
                        }
                        if (s1.stockMenuNo == 6)
                           stock1.transactionDetails (s1.tempCashierName ,s1.tempCashierCode ,stock1.customerName , stock1) ;
                    }
                    break ;
                };
            case 3:  // SUPPLY DETAILS

                {
                    if (e == 0)  // AT START SUPPLY IS EMPTY. THEREFORE OWNER OR MANAGER SHOULD ENTER SUPPLY DETAILS
                    {
                        system("cls") ;
                        cout << "No supply details \n\n" ;
                        if (s1.CanAccessStock() == true )  // CHECK WHETHER OWNER OR MANAGER
                        {
                            supply1.addSupplyDetails () ;
                            e ++ ;
                        }
                        else
                            cout << "You can not add supply details !!!\n" ;
                    }
                    else
                    {
                        s1.supplyMenu() ;
                        // BASED ON RETURN INTEGER VALUE OF SUPPLY MENU FOLLOWING FUNCTIONS EXICUTE
                        if (s1.supplynum == 1)
                            supply1.displaySupplyDetails () ;
                        if (s1.supplynum == 2)
                            if (stock1.increaseStockAfterApprove(supply1)== true)
                            {
                                cout << "stock is approved and added !!!\n\n" ;
                                if (stock1.status == 'l')
                                    supply1.pendingStatusLocal[stock1.approveIndex] = 'a' ; // CHANGING PENDING STAUS TO "APPROVED" - "a"
                                if (stock1.status == 'i')
                                    supply1.pendingStatusImported[stock1.approveIndex] = 'a' ;  // CHANGING PENDING STAUS TO "APPROVED" - "a"
                                system("pause") ;
                                system("cls") ;
                            }
                        if (s1.supplynum == 3)
                            stock1.addEntry() ;
                    }
                    break ;
                };
            }
        }
    }while (no != 4 ) ;

    return 0;
}
