#include <iostream>
#include <stdlib.h>
#include "Staff.h"
#include "Stock.h"
#include "Supply.h"

using namespace std;

// ADDING NEW MEMBER - CAN ACCESS ONLY TO OWNER
void Staff ::  addMember()
    {
        system("cls") ;
        int addMem ;
        cout << "1. Add manager \n2. Add cashier \n3. Add floor worker \n\n" ;
        cout << "Enter no : " ;
        cin >> addMem ;
        switch (addMem)
        {
        case 1:
            {
            noOfManagers = noOfManagers + 1 ;
            cin.ignore() ;
            cout << "enter manager name : " ;
            getline(cin,managerNameandDtae[(noOfManagers-1)*2]) ;
            cout << "enter joined date  : " ;
            cin >> managerNameandDtae[(noOfManagers*2)-1] ;
            cout << "enter user name of manager and password : "; // USER NAME OF MANAGER SHOULD START WITH "m"
            cin >> managerUserNameAndPasswordArr[(noOfManagers-1)*2] >> managerUserNameAndPasswordArr[(noOfManagers*2)-1] ;
            break ;
            }
         case 2:
            {
            noOfCashiers = noOfCashiers + 1 ;
            cin.ignore() ;
            cout << "enter cashier name : " ;
            getline(cin,cashierNameandDtae[(noOfCashiers-1)*2] ) ;
            cout << "enter joined date  : " ;
            cin >> cashierNameandDtae[(noOfCashiers*2)-1] ;
            cout << "enter user name of cashier and password : "; // USER NAME OF CASHIER SHOULD START WITH "c"
            cin >> cashierUserNameAndPasswordArr[(noOfCashiers-1)*2] >> cashierUserNameAndPasswordArr[(noOfCashiers*2)-1] ;
            break ;
            }
        case 3:
            {
            noOfFloorWorkers = noOfFloorWorkers + 1 ;
            cin.ignore() ;
            cout << "enter floor worker name : \n" ;
            getline(cin,floorWorkerNameandDtae[(noOfFloorWorkers-1)*2]) ;
            cout << "enter joined date       : " ;
            cin >> floorWorkerNameandDtae[(noOfFloorWorkers*2)-1] ;
            cout << "enter user name of floor worker and password : ";  // USER NAME OF FLOOR WORKER SHOULD START WITH "f"
            cin >> floorWorkerUserNameAndPasswordArr[(noOfFloorWorkers-1)*2] >> floorWorkerUserNameAndPasswordArr[(noOfFloorWorkers*2)-1] ;
            break ;
            }
        }
        cout << "\nNew member has entered successfully !!! \n\n " ;
        system("pause") ;
        system("cls") ;
    }

// REMOVING MEMBER - CAN ACCESS ONLY TO OWNER
void Staff :: removeMember()
    {
        system("cls") ;
        int removemem ;
        string remMem ;
        cout << "1. Remove manager \n2. Remove cashier \n3. Remove floor worker \n\n" ;
        cout << "Enter no : " ;
        cin >> removemem ;
        switch (removemem)
        {
        case 1:
            {
            cin.ignore() ;
            cout << "enter user name of manager need to remove : " ;
            cin >> remMem ;
            for (int i = 0 ; i < noOfManagers*2 ; i = i +2)
            {
                if (managerUserNameAndPasswordArr[i] == remMem)
                {
                    // REMOVE DETAILS OF REMOVED MEMBER
                    managerUserNameAndPasswordArr[i] = " " ;
                    managerUserNameAndPasswordArr[i+1] = " " ;
                    managerNameandDtae[i] = " " ;
                    managerNameandDtae[i+1] = " " ;
                    noOfManagers -- ; // REDUCE NO OF MANAGERS
                }
            }
            break ;
            }
         case 2:
            {
            cin.ignore() ;
            cout << "enter user name of cashier need to remove : " ;
            cin >> remMem ;
            for (int i = 0 ; i < noOfCashiers*2 ; i = i +2)
            {
                if (cashierUserNameAndPasswordArr[i] == remMem)
                {
                    cashierUserNameAndPasswordArr[i] = " " ;
                    cashierUserNameAndPasswordArr[i+1] = " " ;
                    cashierNameandDtae[i] = " " ;
                    cashierNameandDtae[i+1] = " " ;
                    noOfCashiers -- ;
                }
            }
            break ;
            }
        case 3:
            {
            cin.ignore() ;
            cout << "enter user name of floor worker need to remove : " ;
            cin >> remMem ;
            for (int i = 0 ; i < noOfFloorWorkers*2 ; i = i +2)
            {
                if (floorWorkerUserNameAndPasswordArr[i] == remMem)
                {
                    floorWorkerUserNameAndPasswordArr[i] = " " ;
                    floorWorkerUserNameAndPasswordArr[i+1] = " " ;
                    floorWorkerNameandDtae[i] = " " ;
                    floorWorkerNameandDtae[i+1] = " " ;
                    noOfFloorWorkers -- ;
                }
            }
            break ;
            }
        }
        cout << "\nMember has removed successfully !!! \n\n" ;
        system("pause") ;
        system("cls") ;
    }

// DISPLAY DETAILS OF STAFFF
void Staff :: displayStaffDetail () const
    {
        system("cls") ;
        cout << "-----STAFF DETAILS-----\n" ;
        cout << "===================================== \n" ;
        cout << "Manager details \n" ;
        for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
        {
            if ( managerUserNameAndPasswordArr[i] != " ")
            {
                cout << "Full name   : " << managerNameandDtae[i]  << endl ;
                cout << "Joined date : " << managerNameandDtae[i+1] << endl ;
                cout << "User name   : " << managerUserNameAndPasswordArr[i] << endl ;
                cout << "Password    : " << managerUserNameAndPasswordArr[i+1] << endl ;
            }
        }
        cout << "\nCASHIER DETAILS \n" ;
        for (int i = 0 ; i < noOfCashiers*2 ; i = i + 2)
        {
            if ( cashierUserNameAndPasswordArr[i] != " ")
            {
                cout << "Full name   : " << cashierNameandDtae[i]  << endl ;
                cout << "Joined date : " << cashierNameandDtae[i+1] << endl ;
                cout << "User name   : " << cashierUserNameAndPasswordArr[i] << endl ;
                cout << "Password    : " << cashierUserNameAndPasswordArr[i+1] << endl ;
            }
        }
        cout << "\nFLOOR WORKER DETAILS \n" ;
        for (int i = 0 ; i < noOfFloorWorkers*2 ; i = i + 2)
        {
            if ( floorWorkerUserNameAndPasswordArr[i] != " ")
            {
                cout << "Full name   : " << floorWorkerNameandDtae[i]  << endl ;
                cout << "Joined date : " << floorWorkerNameandDtae[i+1] << endl ;
                cout << "User name   : " << floorWorkerUserNameAndPasswordArr[i] << endl ;
                cout << "Password    : " << floorWorkerUserNameAndPasswordArr[i+1] << endl ;
            }
        }
        cout << "===================================== \n" ;
        system("pause") ;
        system("cls") ;
    }

// CHECK WHETHER ENTERD USER NAME IS MATCH WITH STAFF USER NAMES
bool Staff :: CanAccessStock ()
    {
        string tempStockUserName , tempStockPassword;
        cout << "Enter user name and password to add entries in stock : " ;
        cin >> tempStockUserName >> tempStockPassword ;
        for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
        {
            if (tempStockUserName== OwnerUserName && tempStockPassword==OwnerPassword)
                return true ;
            else if (tempStockUserName == managerUserNameAndPasswordArr[i] && tempStockPassword == managerUserNameAndPasswordArr[i+1] )
                return true ;
            else
                return false ;
        }
    }

// OWNER AND MANAGER ONLY HAVE ACCESS TO THE STAFF MENU
int Staff :: staffMenu ()
    {
        int a ;
        cout << "1. Owner \n2. Manager " << endl ;
        cout << "\nEnter no : " ;
        cin >> a ;
        switch (a)
        {
        case 1:
            {
                system("cls") ;
                string tempOwnerUsername , tempOwnerPassword ;
                cout << "enter owner user name and password to access staff data: " ;
                cin >> tempOwnerUsername >> tempOwnerPassword ;
                // IF ENTERED USER NAME & PASSWORD IS MATCH WITH OWNER DATA SHOW LIST OF FUNCTIONS THAT CAN DO TO OWNWER
                if (tempOwnerUsername==OwnerUserName && tempOwnerPassword==OwnerPassword)
                {
                    system("cls") ;
                    cout << "1. add a member \n2. remove a member \n3. display staff details \n" ;
                    cout << "\nenter no : " ;
                    cin >> ownernum ;
                }
                else
                {
                    system("cls") ;
                    cout << "invalid owner data !!!" << endl ;
                }
                return ownernum ;
                break ;
            }
        case 2:
            {
                system("cls") ;
                string tempManagerUsername , tempManagerPassword ;
                cout << "enter manager user name and password to access staff data : " ;
                cin >> tempManagerUsername >> tempManagerPassword ;
                 // IF ENTERED MANAGER NAME & PASSWORD IS MATCH WITH MANAGER DATA SHOW LIST OF FUNCTIONS THAT CAN DO TO MANAGER
                for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
                {
                    if (tempManagerUsername==managerUserNameAndPasswordArr[i] && tempManagerPassword==managerUserNameAndPasswordArr[i+1])
                    {
                        system("cls") ;
                        cout << "1. display staff details  \n\n" ;
                        cout << "enter no : " ;
                        cin >> managernum ;
                        if (managernum == 1)
                            displayStaffDetail() ;
                    }
                    else
                    {
                        system("cls") ;
                        cout << "invalid manager data !!!\n" << endl ;
                        break ;
                    }
                }
                break ;
            };

        }
    }

// STOCK RELATED ACTIVITIES
int Staff :: stockMenue(int n)
    {
        system("cls") ;
        int a ;
        cout << "1. Make a new entry \n2. Increase stock \n3. Reduce stock \n4. Display stock \n5. Billing \n6. Display transactions" << endl ;
        cout << "Enter no : " ;
        cin >> a ;
        switch (a)
        {
        case 1 :
            {
                // MANGER OR OWNER CAN MAKE NEW ENTRY
                system("cls") ;
                string tempUsername , tempPassword ;
                cout << "enter owner/manager name and password to add new stock entry : " ;
                cin >> tempUsername >> tempPassword ;
                // CHECK ENTERED DATA AND STAFF DATA ARE SAME
                for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
                {
                    if (tempUsername== OwnerUserName && tempPassword==OwnerPassword)
                        stockMenuNo = 1 ;
                    else if (tempUsername == managerUserNameAndPasswordArr[i] && tempPassword == managerUserNameAndPasswordArr[i+1] )
                        stockMenuNo = 1 ;
                    else
                    {
                        system("cls") ;
                        cout << "invalid owner data !!!" << endl ;
                    }
                }
                return stockMenuNo ;
                break ;
            };
        case 2:
        {
          // ALL STAFF CAN INCREASE AVAILABLE STOCK
          system("cls") ;
          string tempUsername , tempPassword ;
          cout << "enter user name and password to increase stock : " ;
          cin >> tempUsername >> tempPassword ;
          // CHECK ENTERED DATA AND STAFF DATA ARE SAME
          if (tempUsername == OwnerUserName && tempPassword == OwnerPassword)
                stockMenuNo = 2 ;
          else if (tempUsername[0] == 'm')
          {
              for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
              {
                 if (tempUsername == managerUserNameAndPasswordArr[i] && tempPassword == managerUserNameAndPasswordArr[i+1] )
                    stockMenuNo = 2 ;
              }
          }
          else if (tempUsername[0] == 'c')
          {
              for (int i = 0 ; i < noOfCashiers*2 ; i = i + 2)
              {
                 if (tempUsername == cashierUserNameAndPasswordArr[i] && tempPassword == cashierUserNameAndPasswordArr[i+1] )
                    stockMenuNo = 2 ;
              }
          }
          else if (tempUsername[0] == 'f')
          {
              for (int i = 0 ; i < noOfFloorWorkers*2 ; i = i + 2)
              {
                 if (tempUsername == floorWorkerUserNameAndPasswordArr[i] && tempPassword == floorWorkerUserNameAndPasswordArr[i+1] )
                    stockMenuNo = 2 ;
              }
          }
          else
          {
                system("cls") ;
                cout << "invalid user data !!!" << endl ;
          }
          return stockMenuNo ;
          break ;
        };
        case 3:
        {
        // OWNER , MANAGER & CASHIER CAN REDUCE STOCK
          system("cls") ;
          string tempUsername , tempPassword ;
          cout << "enter user name and password to decrease stock : " ;
          cin >> tempUsername >> tempPassword ;
          // CHECK ENTERED DATA AND STAFF DATA ARE SAME
          if (tempUsername == OwnerUserName && tempPassword == OwnerPassword)
                stockMenuNo = 3 ;
          else if (tempUsername[0] == 'm')
          {
              for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
              {
                 if (tempUsername == managerUserNameAndPasswordArr[i] && tempPassword == managerUserNameAndPasswordArr[i+1] )
                    stockMenuNo = 3 ;
              }
          }
          else if (tempUsername[0] == 'c')
          {
              for (int i = 0 ; i < noOfCashiers*2 ; i = i + 2)
              {
                 if (tempUsername == cashierUserNameAndPasswordArr[i] && tempPassword == cashierUserNameAndPasswordArr[i+1] )
                    stockMenuNo = 3 ;
              }
          }
          else
          {
                system("cls") ;
                cout << "invalid user data !!!" << endl ;
          }
          return stockMenuNo ;
          break ;
        };
        case 4:
            {
                // DISPLAY STOCK FUNCTION CAN ACCESS ONLY TO OWNER & MANAGER
                system("cls") ;
                string tempUsername , tempPassword ;
                cout << "enter owner user name and password to display stock : " ;
                cin >> tempUsername >> tempPassword ;
                for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
                {
                    if (tempUsername== OwnerUserName && tempPassword==OwnerPassword)
                        stockMenuNo = 4 ;
                    else if (tempUsername == managerUserNameAndPasswordArr[i] && tempPassword == managerUserNameAndPasswordArr[i+1] )
                        stockMenuNo = 4 ;
                    else
                    {
                        system("cls") ;
                        cout << "invalid owner data !!!" << endl ;
                    }
                }
                return stockMenuNo ;
                break ;
            };
        case 5:
            {
                // BILLING CAN DO ONLY TO CASHIER
          system("cls") ;
          string tempUsername , tempPassword ;
          cout << "enter user name and password to bill : " ;
          cin >> tempUsername >> tempPassword ;

          if (tempUsername[0] == 'c')
          {
              for (int i = 0 ; i < noOfCashiers*2 ; i = i + 2)
              {
                 if (tempUsername == cashierUserNameAndPasswordArr[i] && tempPassword == cashierUserNameAndPasswordArr[i+1] )
                    stockMenuNo = 5 ;
                    // THIS ASSIGNMENT IS DONE TO GET DETAILS OF CASHIER WHO DID BILLING
                    tempCashierCode[n] = cashierUserNameAndPasswordArr[i] ;
                    tempCashierName[n] = cashierNameandDtae[i] ;
              }
          }
          else
          {
                system("cls") ;
                cout << "invalid user data !!!" << endl ;
          }
          return stockMenuNo ;
          break ;

            };
        case 6 :
            {
                // DISPLAY TANSACTION DETAILS CAN ACCESS ONLY OWNER AND MANAGER
                system("cls") ;
                string tempUsername , tempPassword ;
                cout << "enter owner/manager name and password to display transactions : " ;
                cin >> tempUsername >> tempPassword ;
                for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
                {
                    if (tempUsername== OwnerUserName && tempPassword==OwnerPassword)
                        stockMenuNo = 6 ;
                    else if (tempUsername == managerUserNameAndPasswordArr[i] && tempPassword == managerUserNameAndPasswordArr[i+1] )
                        stockMenuNo = 6 ;
                    else
                    {
                        system("cls") ;
                        cout << "invalid user data !!!" << endl ;
                    }
                }
                return stockMenuNo ;
                break ;
            };
        }
    }

// AT THE BEGINING OWNER ENTER DETAILS OF STAFF
void Staff :: OwnerFirstInputData()
    {
        cout << "Owner enter user name and password : " ;
        cin >> OwnerUserName >> OwnerPassword ;
        system("cls") ;

        cout << "Owner input staff data\n\n" ;
        // AT LEAST ONE MANGER IS ESSENTIAL TO RUN THE PROGRAM
        cout << "enter no of managers in the staff : " ;
        cin >> noOfManagers ;
        for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
        {
            cin.ignore() ;
            cout << "enter manager name : " ;
            getline(cin,managerNameandDtae[i]) ;
            cout << "enter joined date : " ;
            cin >> managerNameandDtae[i+1] ;
            cout << "enter user name of manager " << (i/2)+1 << " and password : ";  // USER NAME OF MANAGER SHOULD START WITH "m"
            cin >> managerUserNameAndPasswordArr[i] >> managerUserNameAndPasswordArr[i+1] ;
        }

        cout << "\nenter no of cashiers in the staff : " ;
        cin >> noOfCashiers ;
        for (int i = 0 ; i < noOfCashiers*2  ; i = i + 2)
        {
            cin.ignore() ;
            cout << "enter cashier name : " ;
            getline(cin,cashierNameandDtae[i]) ;
            cout << "enter joined date : " ;
            cin >> cashierNameandDtae[i+1] ;
            cout << "enter user name of cashier " << (i/2)+1 << " and password : ";  // USER NAME OF MANAGER SHOULD START WITH "c"
            cin >> cashierUserNameAndPasswordArr[i] >> cashierUserNameAndPasswordArr[i+1] ;
        }

        cout << "\nenter no of floorWorkers in the staff : " ;
        cin >> noOfFloorWorkers ;
        for (int i = 0 ; i < noOfFloorWorkers*2  ; i = i + 2)
        {
            cin.ignore() ;
            cout << "enter floorWorker name : " ;
            getline(cin,floorWorkerNameandDtae[i]) ;
            cout << "enter joined date : " ;
            cin >> floorWorkerNameandDtae[i+1] ;
            cout << "enter user name of floorWorker " << (i/2)+1 << " and password : ";  // USER NAME OF MANAGER SHOULD START WITH "f"
            cin >> floorWorkerUserNameAndPasswordArr[i] >> floorWorkerUserNameAndPasswordArr[i+1] ;
        }
        cout << "\nStaff data has entered successfully !!! \n\n" ;
        system("pause") ;
        system("cls") ;
    }

// SUPPLY RELATED ACTIVITIES
int Staff :: supplyMenu ()
{
        system("cls") ;
        int a ;
        cout << "1. Display supply details \n2. Approving and adding existing shipment \n3. Approving and adding new shipment \n\n" ;
        cout << "Enter no : " ;
        cin >> a ;
        switch (a)
        {
        case 1:
        {
          // DISPLAY SUPPLY DETAILS - ONLY FOR OWNER & MANAGER
          system("cls") ;
          string tempUsername , tempPassword ;
          cout << "enter owner/manager name and password to display supply details : " ;
          cin >> tempUsername >> tempPassword ;
          if (tempUsername == OwnerUserName && tempPassword == OwnerPassword)
                supplynum = 1 ;
          else if (tempUsername[0] == 'm')
          {
              for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
              {
                 if (tempUsername == managerUserNameAndPasswordArr[i] && tempPassword == managerUserNameAndPasswordArr[i+1] )
                    supplynum = 1 ;
              }
          }
          else
          {
                system("cls") ;
                cout << "invalid user data !!!" << endl ;
          }
          return supplynum ;
          break ;
        };
        case 2:
        {
          // APPROVONG AND ADDING EXISTING STOCK - FOR OWNER , MANAGER & FLOOR WORKER
          system("cls") ;
          string tempUsername , tempPassword ;
          cout << "enter user name and password to approving and adding existing shipment: " ;
          cin >> tempUsername >> tempPassword ;
          if (tempUsername == OwnerUserName && tempPassword == OwnerPassword)
                supplynum = 2 ;
          else if (tempUsername[0] == 'm')
          {
              for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
              {
                 if (tempUsername == managerUserNameAndPasswordArr[i] && tempPassword == managerUserNameAndPasswordArr[i+1] )
                    supplynum = 2 ;
              }
          }
          else if (tempUsername[0] == 'f')
          {
              for (int i = 0 ; i < noOfFloorWorkers*2 ; i = i + 2)
              {
                 if (tempUsername == floorWorkerUserNameAndPasswordArr[i] && tempPassword == floorWorkerUserNameAndPasswordArr[i+1] )
                    supplynum = 2 ;
              }
          }
          else
          {
                system("cls") ;
                cout << "invalid user data !!!" << endl ;
          }
          return supplynum ;
          break ;
        };
        case 3:
            {
                // APPROVONG AND ADDING NEW STOCK - ONLY FOR OWNER & MANAGER
                system("cls") ;
                string tempUsername , tempPassword ;
                cout << "enter user name and password for new approve: " ;
                cin >> tempUsername >> tempPassword ;
                for (int i = 0 ; i < noOfManagers*2 ; i = i + 2)
                {
                    if (tempUsername== OwnerUserName && tempPassword==OwnerPassword)
                        supplynum = 3 ;
                    else if (tempUsername == managerUserNameAndPasswordArr[i] && tempPassword == managerUserNameAndPasswordArr[i+1] )
                        supplynum = 3 ;
                    else
                    {
                        system("cls") ;
                        cout << "invalid user data !!!" << endl ;
                    }
                }
                return supplynum ;
                break ;
            };
        }
}




