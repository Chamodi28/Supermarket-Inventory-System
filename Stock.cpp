#include <iostream>
#include <stdlib.h>
#include "Staff.h"
#include "Stock.h"
#include "Supply.h"

using namespace std;

// ADDING NEW ENTRY FOR A CATEGORY
void Stock :: addEntry()
    {
        system("cls") ;
        cout << "STOCK CATEGORIES \n\n" ;
        cout << "1. Produce - p \n2. Meat & Seafood - m \n3. Grains - g\n4. Bakery Products - b\n5. Frozen Foods - f\n6. Dairy Products - d\n7. Snacks ans Sweets - s\n8. Beverages - e\n9. Health & Beauty - h\n10. Condiments & Spices - c\n11. exit\n" ;
        cout << "\nMaking new entry " ;
        do
        {
            cout << "\nEnter category no : " ; // GET CATEGORY AS INPUT
            cin >> categorynum ;

            int entrynum ;

            switch (categorynum)
            {
            case 1:
            {
                cout << "No of entry need to create under this category : " ;
                cin >> entrynum ;
                enteringitems( producenum , entrynum , produecode , produceArr , produceGramsArr , produceRatailPriceArr , produceDiscountArr ) ;
                producenum = producenum + entrynum ; // INCREASE NUMBER OF ENTRIES UNDER PRODUCE CATEGORY
                break ;
            };
            case 2:
            {
                cout << "No of entry need to create under this category : " ;
                cin >> entrynum ;
                enteringitems(meatSeafoodnum, entrynum , meatSeafoodcode,meatSeafoodArr,meatSeafoodGramsArr,meatSeafoodRetailPriceArr,meatSeafoodDiscountArr) ;
                meatSeafoodnum = meatSeafoodnum + entrynum ;
                break ;
            };
            case 3:
            {
                cout << "No of entry need to create under this category : " ;
                cin >> entrynum ;
                enteringitems(grainnum,entrynum, graincode,grainArr,grainGramsArr,grainRetailPriceArr,grainDiscountArr);
                grainnum = grainnum + entrynum ;
                break ;
            };
            case 4:
            {
                cout << "no of entry need to create under this category : " ;
                cin >> entrynum ;
                enteringitems(bakerynum,entrynum,bakeryCode,bakeryArr,bakeryNoOfItemArr,bakeryRetailPriceArr,bakeryDiscountArr,bakeryImportLocal,bakeryBrand);
                bakerynum = bakerynum + entrynum ;
                break ;
            };
            case 5:
            {
                cout << "No of entry need to create under this category : " ;
                cin >> entrynum ;
                enteringitems(frozennum,entrynum,frozenCode,frozenArr, frozenNoOfItemArr,frozenRetailPriceArr,frozenDiscountArr,frozenImportLocal,frozenBrand);
                frozennum = frozennum + entrynum ;
                break ;
            };
            case 6:
            {
                cout << "No of entry need to create under this category : " ;
                cin >> entrynum ;
                enteringitems(dairynum,entrynum,dairyCode,dairyArr,dairyNoOfItemArr,dairyRetailPriceArr,dairyDiscountArr,dairyImportLocal,dairyBrand);
                dairynum = dairynum + entrynum ;
                break ;
            };
            case 7:
            {
                cout << "No of entry need to create under this category : " ;
                cin >> entrynum ;
                enteringitems (SnacksAndSweetNum , entrynum , snackcode , snacksAndSweetArr , snacksAndSweetNoOfItemArr , snacksAndSweetRatailPriceArr , snacksAndSweetDiscountArr ,snackImportLocal , snackBrand ) ;
                SnacksAndSweetNum = SnacksAndSweetNum + entrynum ;
                break ;
            };
            case 8:
            {
                cout << "No of entry need to create under this category : " ;
                cin >> entrynum ;
                enteringitems(beveragenum,entrynum,beverageCode,beverageArr,beverageNoOfItemArr,beverageRetailPriceArr,beverageDiscountArr,beverageImportLocal,beverageBrand);
                beveragenum = beveragenum + entrynum ;
                break ;
            };
            case 9:
            {
                cout << "No of entry need to create under this category : " ;
                cin >> entrynum ;
                enteringitems(healthBeautynum,entrynum,healthBeautyCode,healthBeautyArr,healthBeautyNoOfItemArr ,healthBeautyRetailPriceArr,healthBeautyDiscountArr,healthBeautyImportLocal,healthBeautyBrand);
                healthBeautynum = healthBeautynum + entrynum ;
                break ;
            };
            case 10:
            {
                cout << "No of entry need to create under this category : " ;
                cin >> entrynum ;
                enteringitems(condimentsSpicesnum,entrynum,condimentsSpicesCode,condimentsSpicesArr,condimentsSpicesNoOfItemArr,condimentsSpicesRetailPriceArr,condimentsSpicesDiscountArr,healthBeautyImportLocal,condimentsSpicesBrand);
                condimentsSpicesnum = condimentsSpicesnum + entrynum ;
                break ;
            };
            case 11: {break ;}
            default :{cout << "Invalid category !!!\n\n" ; break ; };
            }

        }while (categorynum != 11) ;

        cout << "Data entered successfully !!!\n\n" ;
        system("pause") ;
        system("cls") ;
    }

// ENTERING ITEMS FOR CATEGORIES - BAKERY PRODUCT , FROZEN , FROZEN , DAIRY PRODUCTS , SNACKS & SWEETS , BEVERAGE , HEALTH & BEAUTY , CONDIMENTS & SPICES
int Stock :: enteringitems( int noOfEntries , int increase , string *code , string *itemName , int *noOfItems , float *price , float *Discount , char *importLocal , string *brand)
    {
        // THIS CODE SEGMENT USE TO CORRECTLY EXICUTE BELOW FOR-LOOP
        // WHEN ENTER DETAILS AT START
        int x = noOfEntries ;
        int w = increase ;
        // WHEN DETAILS ENTER MEANWHILE THE PROGRAM
        if (noOfEntries > 0)
        {
            x = noOfEntries ;
            w = noOfEntries + increase ;
        }

        for (int i = x ; i < w ; i ++ )
            {
                cout << "Enter name of entry : " ;
                cin >> itemName[i] ;
                cout << "No of items : " ;
                cin >> noOfItems[i] ;
                cout << "Item code : " ;
                cin >> code[i] ; // CODE NAME SHOULD START WITH THE RELATENT LETTER SHOWN IN CATEGORY LIST (EX: PRODUCE - "p")
                cout << "Brand name : " ;
                cin >> brand[i] ;
                cout << "Local or imported (l/i): " ;
                cin >> importLocal[i] ;
                cout << "Retail price and discount : " ;
                cin >> price[i] >> Discount[i] ;
            }
    }

// ENTERING ITEMS FOR CATEGORIES - PRODUCE , MEAT & SEAFOOD , GRAINS
int Stock :: enteringitems(int noOfEntries , int increase , string *code , string *itemName , float *grams , float *price , float *Discount )
    {
        // THIS CODE SEGMENT USE TO CORRECTLY EXICUTE BELOW FOR-LOOP
        // WHEN ENTER DETAILS AT START
        int x = noOfEntries ;
        int w = increase ;
        // WHEN DETAILS ENTER MEANWHILE THE PROGRAM
        if (noOfEntries > 0)
        {
            x = noOfEntries ;
            w = noOfEntries + increase ;
        }

        for (int i = x ; i < w ; i ++ )
        {
            cout << "Enter name of entry : " ;
            cin >> itemName[i] ;
            cout << "Amount in kg : " ;
            cin >> grams[i] ;
            cout << "Items code: " ;
            cin >> code[i] ;  // CODE NAME SHOULD START WITH THE RELATENT LETTER SHOWN IN CATEGORY LIST (EX: PRODUCE - "p")
            cout << "Retail price per kg and discount : " ;
            cin >> price[i] >> Discount[i] ;
        }
    }
void Stock :: displayStock() const
    {
        cout << "-----DISPLAY STOCK-----\n\n" ;

        cout << "1. PRODUCE\n" ;
        for (int i = 0 ; i < producenum ; i ++)
        {
        cout << "ITEM               : " << produceArr[i] << "\nITEM CODE          : " << produecode[i] << "\nAMOUNT IN kg       : " << produceGramsArr[i] << "\nRETAIL PRICE PER kg: " << produceRatailPriceArr[i] << "\nDISCIUNT           : " << produceDiscountArr[i] << "\n\n" ;
        }
        cout << "\n============================\n2. MEAT & SEAFOOD \n" ;
        for (int i = 0 ; i < meatSeafoodnum ; i ++)
        {
        cout << "ITEM               : " << meatSeafoodArr[i] << "\nITEM CODE          : " << meatSeafoodcode[i] << "\nAMOUNT IN kg       : " << meatSeafoodGramsArr[i] << "\nRETAIL PRICE PER kg: " << meatSeafoodRetailPriceArr[i] << "\nDISCIUNT           : " << meatSeafoodDiscountArr[i] << "\n\n" ;
        }

        cout << "\n============================\n3. GRAINS \n" ;
        for (int i = 0 ; i < grainnum ; i ++)
        {
        cout << "ITEM               : " << grainArr[i] << "\nITEM CODE          : " << graincode[i] << "\nAMOUNT IN kg       : " << grainGramsArr[i] << "\nRETAIL PRICE PER kg: " << grainRetailPriceArr[i] << "\nDISCIUNT           : " << grainDiscountArr[i] << "\n\n" ;
        }
        cout << "\n============================\n4. BAKERY \n" ;
        for (int i = 0 ; i < bakerynum ; i ++)
        {
        cout << "ITEM               : " << bakeryArr[i] <<"\nITEM CODE          : " << bakeryCode[i] << "\nNO OF ITEMS        : "<<  bakeryNoOfItemArr[i] << "\nRETAIL PRICE       : "<< bakeryRetailPriceArr[i] << "\nDISCIUNT           : " << bakeryDiscountArr[i] << "\n"  ;
        cout << "BRAND NAME         : " << bakeryBrand[i] << "\nLOCAL OR IMPORTED  : " << bakeryImportLocal[i] << "\n\n" ;
        }
        cout << "\n============================\n5. FROZEN \n" ;
        for (int i = 0 ; i < frozennum ; i ++)
        {
        cout << "ITEM               : " << frozenArr[i] <<"\nITEM CODE          : " << frozenCode[i] << "\nNO OF ITEMS        : "<<  frozenNoOfItemArr[i] << "\nRETAIL PRICE       : "<< frozenRetailPriceArr[i] << "\nDISCIUNT           : " << frozenDiscountArr[i] << "\n"  ;
        cout << "BRAND NAME         : " << frozenBrand[i] << "\nLOCAL OR IMPORTED  : " << frozenImportLocal[i] << "\n\n" ;
        }
        cout << "\n============================\n6. DAIRY \n" ;
        for (int i = 0 ; i < dairynum ; i ++)
        {
        cout << "ITEM               : " << dairyArr[i] <<"\nITEM CODE          : " << dairyCode[i] << "\nNO OF ITEMS        : "<<  dairyNoOfItemArr[i] << "\nRETAIL PRICE PER kg: "<< dairyRetailPriceArr[i] << "\nDISCIUNT           : " << dairyDiscountArr[i] << "\n"  ;
        cout << "BRAND NAME         : " << dairyBrand[i] << "\nLOCAL OR IMPORTED  : " << dairyImportLocal[i] << "\n\n" ;
        }
        cout << "\n============================\n7. SNAKE\n" ;
        for (int i = 0 ; i < SnacksAndSweetNum ; i ++)
        {
        cout << "ITEM               : " << snacksAndSweetArr[i] <<"\nITEM CODE          : " << snackcode[i] << "\nNO OF ITEMS        : "<<  snacksAndSweetNoOfItemArr[i] << "\nRETAIL PRICE       : "<< snacksAndSweetRatailPriceArr[i] << "\nDISCIUNT           : " << snacksAndSweetDiscountArr[i] << "\n"  ;
        cout << "BRAND NAME         : " << snackBrand[i] << "\nLOCAL OR IMPORTED  : " << snackImportLocal[i] << "\n\n" ;
        }
        cout << "\n============================\n8. BEVERAGE \n" ;
        for (int i = 0 ; i < beveragenum ; i ++)
        {
        cout << "ITEM               : " << beverageArr[i] <<"\nITEM CODE          : " << beverageCode[i] << "\nNO OF ITEMS        : "<<  beverageNoOfItemArr[i] << "\nRETAIL PRICE       : "<< beverageRetailPriceArr[i] << "\nDISCIUNT           : " << beverageDiscountArr[i] << "\n"  ;
        cout << "BRAND NAME         : " << beverageBrand[i] << "\nLOCAL OR IMPORTED  : " << beverageImportLocal[i] << "\n\n" ;
        }
        cout << "\n============================\n9. HEALTH AND BEAUTY \n" ;
        for (int i = 0 ; i < healthBeautynum ; i ++)
        {
        cout << "ITEM               : " << healthBeautyArr[i] <<"\nITEM CODE          : " << healthBeautyCode[i] << "\nNO OF ITEMS        : "<<  healthBeautyNoOfItemArr[i] << "\nRETAIL PRICE       : "<< healthBeautyRetailPriceArr[i] << "\nDISCIUNT           : " << healthBeautyDiscountArr[i] << "\n"  ;
        cout << "BRAND NAME         : " << healthBeautyBrand[i] << "\nLOCAL OR IMPORTED  : " << healthBeautyImportLocal[i] << "\n\n" ;
        }
        cout << "\n============================\n10. CONDIMENTS & SPICES \n" ;
        for (int i = 0 ; i < condimentsSpicesnum ; i ++)
        {
        cout << "ITEM               : " << condimentsSpicesArr[i] <<"\nITEM CODE          : " << condimentsSpicesCode[i] << "\nNO OF ITEMS        : "<<  condimentsSpicesNoOfItemArr[i] << "\nRETAIL PRICE       : "<< condimentsSpicesRetailPriceArr[i] << "\nDISCIUNT           : " << condimentsSpicesDiscountArr[i] << "\n"  ;
        cout << "BRAND NAME         : " << condimentsSpicesBrand[i] << "\nLOCAL OR IMPORTED  : " << condimentsSpicesImportLocal[i] << "\n\n" ;
        }

        system("pause") ;
        system("cls") ;
    }

// CHECK ENTERED ITEM IS AVAILABLE ALREADY. IF AVAILABLE DO INCREMENT OR DECREMENT BASED ON SIGN OF LAST ARGUMENT OF THE FUNCTION
// IF SIGN IS 1 :- DO INCREMENT
// ID SIGN IS -1 :- DO DECREMENT
// THIS FUNCTION IS FOR CATEGORIES WHOSE QUENTITY MEASURE USING NO OF ITEMS
void Stock :: checkTempCode(string temp , int length , string *codeArr , int *itemNumbers , int sign )
    {
        int no , increment ;
        for (int i = 0 ; i < length ; i ++)
        {
            if (codeArr[i] == temp)
            {
                no = i ;
                cout << "No of items need to add : " ;
                cin >> increment ;
                itemNumbers[no] = itemNumbers[no] + (increment*sign) ; // BASED ON SIGN DO INCREMENT OR DECREMENT
                cout << "Number of items has increased successfully !!!" ;
                system("pause") ;
                system("cls") ;
            }
        }
    }

// CHECK ENTERED ITEM IS AVAILABLE ALREADY. IF AVAILABLE DO INCREMENT OR DECREMENT BASED ON SIGN OF LAST ARGUMENT OF THE FUNCTION
// IF SIGN IS 1 :- DO INCREMENT
// ID SIGN IS -1 :- DO DECREMENT
// THIS FUNCTION IS FOR CATEGORIES WHOSE QUENTITY MEASURE IN GRAMS
void Stock :: checkTempCode(string temp , int length , string *codeArr , float *amount , int sign )
    {
        int no ;
        float increment ;

        for (int i = 0 ; i < length ; i ++)
        {
            if (codeArr[i] == temp)
            {
                no = i ;
                cout << "No of items need to add : " ;
                cin >> increment ;
                amount[no] = amount[no] + (increment*sign) ;  // BASED ON SIGN DO INCREMENT OR DECREMENT
                cout << "Amount(kg) has increased successfully !!!" ;
                system("pause") ;
                system("cls") ;
            }
        }
    }

// INCREASE QUANTITY OF AVAILABLE STOCK
void Stock :: increaseStock()
    {
        int  itemPosition;
        string tempCode ;
        cout << "Enter code name of the item need to increase stock : " ;
        cin >> tempCode ;
        switch (tempCode[0])
        {
        // USING FUNCTION OVERLOADING RELAVENT FUNCTION IS SELECTED
        case 'p':{checkTempCode(tempCode , producenum , produecode , produceGramsArr , 1) ; break ;};
        case 'm':{checkTempCode(tempCode , meatSeafoodnum , meatSeafoodcode , meatSeafoodGramsArr, 1 ) ; break ;};
        case 'g':{checkTempCode(tempCode , grainnum , graincode , grainGramsArr, 1 ) ; break ;};
        case 'b':{checkTempCode(tempCode , bakerynum , bakeryCode , bakeryNoOfItemArr, 1 ) ; break ;};
        case 'f':{checkTempCode(tempCode , frozennum , frozenCode , frozenNoOfItemArr, 1 ) ; break ;};
        case 'd':{checkTempCode(tempCode , dairynum , dairyCode , dairyNoOfItemArr, 1 ) ; break ;};
        case 's':{checkTempCode(tempCode , SnacksAndSweetNum , snackcode , snacksAndSweetNoOfItemArr ,1) ; break ;};
        case 'e':{checkTempCode(tempCode , beveragenum , beverageCode , beverageNoOfItemArr, 1 ) ; break ;};
        case 'h':{checkTempCode(tempCode , healthBeautynum , healthBeautyCode , healthBeautyNoOfItemArr, 1 ) ; break ;};
        case 'c':{checkTempCode(tempCode , condimentsSpicesnum , condimentsSpicesCode , condimentsSpicesNoOfItemArr, 1 ) ; break ;};
        default :{cout << "Invalid code !!!" ; break ;};
        }
        system("pause") ;
        system("cls") ;
    }

// DECREASE QUANTITY OF AVAILABLE STOCK
void Stock :: decreaseStock()
    {
        string tempCode ;
        cout << "Enter code name of the item need to decrease stock : " ;
        cin >> tempCode ;

        // USING FUNCTION OVERLOADING RELAVENT FUNCTION IS SELECTED
        switch (tempCode[0])
        {case 'p':{checkTempCode(tempCode , producenum , produecode , produceGramsArr , -1) ; break ;};
        case 'm':{checkTempCode(tempCode , meatSeafoodnum , meatSeafoodcode , meatSeafoodGramsArr, -1 ) ; break ;};
        case 'g':{checkTempCode(tempCode , grainnum , graincode , grainGramsArr, -1 ) ; break ;};
        case 'b':{checkTempCode(tempCode , bakerynum , bakeryCode , bakeryNoOfItemArr, -1 ) ; break ;};
        case 'f':{checkTempCode(tempCode , frozennum , frozenCode , frozenNoOfItemArr, -1 ) ; break ;};
        case 'd':{checkTempCode(tempCode , dairynum , dairyCode , dairyNoOfItemArr, -1 ) ; break ;};
        case 's':{checkTempCode(tempCode , SnacksAndSweetNum , snackcode , snacksAndSweetNoOfItemArr ,-1) ; break ;};
        case 'e':{checkTempCode(tempCode , beveragenum , beverageCode , beverageNoOfItemArr, -1 ) ; break ;};
        case 'h':{checkTempCode(tempCode , healthBeautynum , healthBeautyCode , healthBeautyNoOfItemArr, -1 ) ; break ;};
        case 'c':{checkTempCode(tempCode , condimentsSpicesnum , condimentsSpicesCode , condimentsSpicesNoOfItemArr, -1 ) ; break ;};
        default :{cout << "Invalid code !!!" ; break ;};
        }
        system("pause") ;
        system("cls") ;
    }

// INCREASE STOCK AFTER APPROVE
void Stock :: increaseSt ( char te , int s )
{
    switch(te)
    {
        case 'p' :{produceGramsArr[s] = produceGramsArr[s] + tempQuantity ; break ;};
        case 'm' :{meatSeafoodGramsArr[s] = meatSeafoodGramsArr[s] + tempQuantity ; break ;};
        case 'g' :{grainGramsArr[s] = grainGramsArr[s] + tempQuantity ; break ;};
        case 'b' :{bakeryNoOfItemArr[s] = bakeryNoOfItemArr[s] + tempQuantity ; break ;};
        case 'f' :{frozenNoOfItemArr[s] = frozenNoOfItemArr[s] + tempQuantity ; break ;};
        case 'd' :{dairyNoOfItemArr[s] = dairyNoOfItemArr[s] + tempQuantity ; break ;};
        case 's' :{snacksAndSweetNoOfItemArr[s] = snacksAndSweetNoOfItemArr[s] + tempQuantity ; break ;};
        case 'e' :{beverageNoOfItemArr[s] = beverageNoOfItemArr[s] + tempQuantity ; break ;};
        case 'h' :{healthBeautyNoOfItemArr[s] = healthBeautyNoOfItemArr[s] + tempQuantity ; break ;};
        case 'c' :{condimentsSpicesNoOfItemArr[s] = condimentsSpicesNoOfItemArr[s] + tempQuantity ; break ;};
        default :{cout << "Invalid code !!!" ; break ;};
    }
}

// INCREASE STOCK AFTER APPROVE - CHECK ABILITY OF INCREASING STOCK
bool Stock :: increaseStockAfterApprove (Supply supply2)
{
    string temp ;

    cout << "Enter item code to approve and add to stock : " ;
    cin >> temp ;
    cout << "Enter item is local or imported (l/i): " ;
    cin >> status ; // THIS INPUT USE TO SELECT CORRECT ARRAY (LOCAL OR IMPORTED)

    switch (temp[0])
    {
    case 'p':
        {
            for (int i = 0 ; i < producenum ; i ++)
            {
                for (int j = 0 ; j < 10 ; j ++ )
                {
                    // CHECK ENTERED CODE IS AVAILABLE ALREADY AND WHETHER THE STATUS OF SHIPMENT IS PENDING (p)
                    if (produecode[i] == supply2.itemCodeLocal[j] && supply2.pendingStatusLocal[j] == 'p')
                    {
                        tempQuantity =  supply2.itemQuantityLocal[j] ;
                        increaseSt (temp[0] , i ) ;
                        approveIndex = j ; // THIS INPUT USE TO UPDATE STATUS OF THE SHIPMENT TO "APPROVED" (a)
                        return true ;
                    }
                }
            }
            break ;
        };
        case 'm':
        {
            for (int i = 0 ; i < meatSeafoodnum ; i ++)
            {
                for (int j = 0 ; j < 10 ; j ++ )
                {
                    if (meatSeafoodcode[i] == supply2.itemCodeLocal[j] && supply2.pendingStatusLocal[j] == 'p' )
                    {
                        tempQuantity =  supply2.itemQuantityLocal[j] ;
                        increaseSt (temp[0] , i ) ;
                        approveIndex = j ;
                        return true ;
                    }
                }
            }
            break ;
        };
        case 'g':
        {
            for (int i = 0 ; i < grainnum ; i ++)
            {
                for (int j = 0 ; j < 10 ; j ++ )
                {
                    if (graincode[i] == supply2.itemCodeLocal[j] && supply2.pendingStatusLocal[j] == 'p'  )
                    {
                        tempQuantity =  supply2.itemQuantityLocal[j] ;
                        increaseSt (temp[0] , i ) ;
                        approveIndex = j ;
                        return true ;
                    }
                }
            }
            break ;
        };
        case 'b':
        {
            for (int i = 0 ; i < bakerynum ; i ++)
            {
                for (int j = 0 ; j < 10 ; j ++ )
                {
                    if (bakeryCode[i] == supply2.itemCodeLocal[j] || (bakeryCode[i] == supply2.itemCodeImported[j]) )
                    {
                        // THIS CATEGORY HAS BOTH LOCAL AND IMPORTED ITEMS. THEREFORE CHECK IN BOTH ARRAYS
                        if (supply2.pendingStatusLocal[j] == 'p' || supply2.pendingStatusImported[j] == 'p' )
                        {
                            if (status == 'l')
                                {tempQuantity =  supply2.itemQuantityLocal[j] ;}
                            if (status == 'i')
                                {tempQuantity =  supply2.itemQuantityImported[j] ;}
                        increaseSt (temp[0] , i ) ;
                        approveIndex = j ;
                        return true ;
                        }
                    }
                }
            }
            break ;
        };
        case 'f':
        {
            for (int i = 0 ; i < frozennum ; i ++)
            {
                for (int j = 0 ; j < 10 ; j ++ )
                {
                    if (frozenCode[i] == supply2.itemCodeLocal[j] || (frozenCode[i] == supply2.itemCodeImported[j]) )
                    {
                        if (supply2.pendingStatusLocal[j] == 'p' || supply2.pendingStatusImported[j] == 'p' )
                        {
                            if (status == 'l')
                                {tempQuantity =  supply2.itemQuantityLocal[j] ;}
                            if (status == 'i')
                                {tempQuantity =  supply2.itemQuantityImported[j] ;}
                        increaseSt (temp[0] , i ) ;
                        approveIndex = j ;
                        return true ;
                        }
                    }
                }
            }
            break ;
        };
        case 'd':
        {
            for (int i = 0 ; i < dairynum ; i ++)
            {
                for (int j = 0 ; j < 10 ; j ++ )
                {
                    if (dairyCode[i] == supply2.itemCodeLocal[j] || (dairyCode[i] == supply2.itemCodeImported[j]))
                    {
                        if (supply2.pendingStatusLocal[j] == 'p' || supply2.pendingStatusImported[j] == 'p' )
                        {
                            if (status == 'l')
                                {tempQuantity =  supply2.itemQuantityLocal[j] ;}
                            if (status == 'i')
                                {tempQuantity =  supply2.itemQuantityImported[j] ;}
                        increaseSt (temp[0] , i ) ;
                        approveIndex = j ;
                        return true ;
                        }
                    }
                }
            }
            break ;
        };
        case 's':
        {
            for (int i = 0 ; i < SnacksAndSweetNum ; i ++)
            {
                for (int j = 0 ; j < 10 ; j ++ )
                {
                    if (snackcode[i] == supply2.itemCodeLocal[j] || (snackcode[i] == supply2.itemCodeImported[j])  )
                    {
                        if (supply2.pendingStatusLocal[j] == 'p' || supply2.pendingStatusImported[j] == 'p' )
                        {
                            if (status == 'l')
                                {tempQuantity =  supply2.itemQuantityLocal[j] ;}
                            if (status == 'i')
                                {tempQuantity =  supply2.itemQuantityImported[j] ;}
                        increaseSt (temp[0] , i ) ;
                        approveIndex = j ;
                        return true ;
                        }
                    }
                }
            }
            break ;
        };
        case 'e':
        {
            for (int i = 0 ; i < beveragenum ; i ++)
            {
                for (int j = 0 ; j < 10 ; j ++ )
                {
                    if (beverageCode[i] == supply2.itemCodeLocal[j] || (beverageCode[i] == supply2.itemCodeImported[j])  )
                    {
                        if (supply2.pendingStatusLocal[j] == 'p' || supply2.pendingStatusImported[j] == 'p' )
                        {
                            if (status == 'l')
                                {tempQuantity =  supply2.itemQuantityLocal[j] ;}
                            if (status == 'i')
                                {tempQuantity =  supply2.itemQuantityImported[j] ;}
                        increaseSt (temp[0] , i ) ;
                        approveIndex = j ;
                        return true ;
                        }
                    }
                }
            }
            break ;
        };
        case 'h':
        {
            for (int i = 0 ; i < healthBeautynum ; i ++)
            {
                for (int j = 0 ; j < 10 ; j ++ )
                {
                    if (healthBeautyCode[i] == supply2.itemCodeLocal[j] || (healthBeautyCode[i] == supply2.itemCodeImported[j])  )
                    {
                        if (supply2.pendingStatusLocal[j] == 'p' || supply2.pendingStatusImported[j] == 'p' )
                        {
                            if (status == 'l')
                                {tempQuantity =  supply2.itemQuantityLocal[j] ;}
                            if (status == 'i')
                                {tempQuantity =  supply2.itemQuantityImported[j] ;}
                        increaseSt (temp[0] , i ) ;
                        approveIndex = j ;
                        return true ;
                        }
                    }
                }
            }
            break ;
        };
        case 'c':
        {
            for (int i = 0 ; i < condimentsSpicesnum ; i ++)
            {
                for (int j = 0 ; j < 10 ; j ++ )
                {
                    if (condimentsSpicesCode[i] == supply2.itemCodeLocal[j] || (condimentsSpicesCode[i] == supply2.itemCodeImported[j]) )
                    {
                        if (supply2.pendingStatusLocal[j] == 'p' || supply2.pendingStatusImported[j] == 'p' )
                        {
                            if (status == 'l')
                                {tempQuantity =  supply2.itemQuantityLocal[j] ;}
                            if (status == 'i')
                                {tempQuantity =  supply2.itemQuantityImported[j] ;}
                        increaseSt (temp[0] , i ) ;
                        approveIndex = j ;
                        return true ;
                        }
                    }
                }
            }
            break ;
        };
        default : {cout << "Invalid item code !!!"; break;};
    }
}

// DISPLAY TRANSACTION DETAILS
void Stock :: transactionDetails (string *cashiername , string *cashiercode , string *customername , Stock ss2 )
{
    int u = 0 ;
    cout << "TRANSACTION DETAILS \n========================================\n" ;
    for (int i = 0 ; i < 10 ; i++)
    {
        float finalPrice = 0 ;
        if (cashiername[i] != "\0")
        {
            cout << "Cashier name : " << cashiername[i] << endl ;
            cout << "Cashier user name : " << cashiercode[i] << endl ;
            cout << "Customer name : " << customername[i] << endl ;
            cout << "\nLIST\n" ;
            cout << "CODE     QUANTITY        PRICE(Rs)       DISCOUNT\n" ;
            for (int j = 0 ; j < 10 ; j++ )
            {
                if(ss2.customerQuantity[i][j] > 0 )
                {
                    cout << ss2.customerCode[i][j] << "           " << ss2.customerQuantity[i][j] << "           " << ss2.customerPrice[i][j] << "           " << ss2.customerDiscount[i][j] << endl ;
                    float priceAfterDiscount = ss2.customerPrice[i][j] * ((100 - ss2.customerDiscount[i][j])/100 ) * ss2.customerQuantity[i][j];
                    finalPrice = finalPrice + priceAfterDiscount ;
                }
            }
            cout << "Total price Rs. " << finalPrice ;
            cout << "\n========================================\n" ;
        }
    }
}

// CHECK STOCK HAVE SUFFICIENT QUANTITY TO FULFILL CUSTOMER DEMAND. IF SO REDUCE QUANTITY OF STOCK ACCORDING TO CUSTOMER DEMAND
void Stock :: haveItemReduceStock (string a , float b, int n , int i )
{
    switch (a[0])
    {
    case 'p' :
        {
            for (int w = 0 ; w < producenum ; w ++)
            {
                if (a == produecode[w])
                {
                    if (produceGramsArr[w] >= b)
                    {
                        produceGramsArr[w] = produceGramsArr[w] - b ;
                        customerCode[n][i] = a ;
                        customerQuantity[n][i] = b ;
                        customerPrice[n][i] = produceRatailPriceArr[w] ;
                        customerDiscount[n][i] = produceDiscountArr[w] ;
                    }
                    else
                        cout << "no sufficient stock available !!!\n" ;
                }
            }
            break;
        };

    case 'm' :
        {
            for (int w = 0 ; w < meatSeafoodnum ; w ++)
            {
                if (a == meatSeafoodcode[w])
                {
                    if (meatSeafoodGramsArr[w] >= b)
                    {
                        meatSeafoodGramsArr[w] = meatSeafoodGramsArr[w] - b ;
                        // ASSIGN RELAVENT VALUE FOR CUSTOMER ARRAYS IF STOCK IS SUFFICIENT
                        customerCode[n][i] = a ;
                        customerQuantity[n][i] = b ;
                        customerPrice[n][i] = meatSeafoodRetailPriceArr[w] ;
                        customerDiscount[n][i] = meatSeafoodDiscountArr[w] ;
                    }
                    else
                        cout << "no sufficient stock available !!!\n" ;
                }
            }
            break;
        };
    case 'g' :
        {
            for (int w = 0 ; w < grainnum ; w ++)
            {
                if (a == graincode[w])
                {
                    if (grainGramsArr[w] >= b)
                    {
                        grainGramsArr[w] = grainGramsArr[w] - b ;
                        customerCode[n][i] = a ;
                        customerQuantity[n][i] = b ;
                        customerPrice[n][i] = grainRetailPriceArr[w] ;
                        customerDiscount[n][i] = grainDiscountArr[w] ;
                    }
                    else
                        cout << "no sufficient stock available !!!\n" ;
                }
            }
            break;
        };
    case 'b' :
        {
            for (int w = 0 ; w < bakerynum ; w ++)
            {
                if (a == bakeryCode[w])
                {
                    if (bakeryNoOfItemArr[w] >= b)
                    {
                        bakeryNoOfItemArr[w] = bakeryNoOfItemArr[w] - b ;
                        customerCode[n][i] = a ;
                        customerQuantity[n][i] = b ;
                        customerPrice[n][i] = bakeryRetailPriceArr[w] ;
                        customerDiscount[n][i] = bakeryDiscountArr[w] ;
                    }
                    else
                        cout << "no sufficient stock available !!!\n" ;
                }
            }
            break;
        };
    case 'f' :
        {
            for (int w = 0 ; w < frozennum ; w ++)
            {
                if (a == frozenCode[w])
                {
                    if (frozenNoOfItemArr[w] >= b)
                    {
                        frozenNoOfItemArr[w] = frozenNoOfItemArr[w] - b ;
                        customerCode[n][i] = a ;
                        customerQuantity[n][i] = b ;
                        customerPrice[n][i] = frozenRetailPriceArr[w] ;
                        customerDiscount[n][i] = frozenDiscountArr[w] ;
                    }
                    else
                        cout << "no sufficient stock available !!!\n" ;
                }
            }
            break;
        };
    case 'd' :
        {
            for (int w = 0 ; w < dairynum ; w ++)
            {
                if (a == dairyCode[w])
                {
                    if (dairyNoOfItemArr[w] >= b)
                    {
                        dairyNoOfItemArr[w] = dairyNoOfItemArr[w] - b ;
                        customerCode[n][i] = a ;
                        customerQuantity[n][i] = b ;
                        customerPrice[n][i] = dairyRetailPriceArr[w] ;
                        customerDiscount[n][i] = dairyDiscountArr[w] ;
                    }
                    else
                        cout << "no sufficient stock available !!!\n" ;
                }
            }
            break;
        };
    case 's' :
        {
            for (int w = 0 ; w < SnacksAndSweetNum ; w ++)
            {
                if (a == snackcode[w])
                {
                    if (snacksAndSweetNoOfItemArr[w] >= b)
                    {
                        snacksAndSweetNoOfItemArr[w] = snacksAndSweetNoOfItemArr[w] - b ;
                        customerCode[n][i] = a ;
                        customerQuantity[n][i] = b ;
                        customerPrice[n][i] = snacksAndSweetRatailPriceArr[w] ;
                        customerDiscount[n][i] = snacksAndSweetDiscountArr[w] ;
                    }
                    else
                        cout << "no sufficient stock available !!!\n" ;
                }
            }
            break;
        };
    case 'e' :
        {
            for (int w = 0 ; w < beveragenum ; w ++)
            {
                if (a == beverageCode[w])
                {
                    if (beverageNoOfItemArr[w] >= b)
                    {
                        beverageNoOfItemArr[w] = beverageNoOfItemArr[w] - b ;
                        customerCode[n][i] = a ;
                        customerQuantity[n][i] = b ;
                        customerPrice[n][i] = beverageRetailPriceArr[w] ;
                        customerDiscount[n][i] = beverageDiscountArr[w] ;
                    }
                    else
                        cout << "no sufficient stock available !!!\n" ;
                }
            }
            break;
        };
    case 'h' :
        {
            for (int w = 0 ; w < healthBeautynum ; w ++)
            {
                if (a == healthBeautyCode[w])
                {
                    if (healthBeautyNoOfItemArr[w] >= b)
                    {
                        healthBeautyNoOfItemArr[w] = healthBeautyNoOfItemArr[w] - b ;
                        customerCode[n][i] = a ;
                        customerQuantity[n][i] = b ;
                        customerPrice[n][i] = healthBeautyRetailPriceArr[w] ;
                        customerDiscount[n][i] = healthBeautyDiscountArr[w] ;
                    }
                    else
                        cout << "no sufficient stock available !!!\n" ;
                }
            }
            break;
        };
    case 'c' :
        {
            for (int w = 0 ; w < condimentsSpicesnum ; w ++)
            {
                if (a == condimentsSpicesCode[w])
                {
                    if (condimentsSpicesNoOfItemArr[w] >= b)
                    {
                        condimentsSpicesNoOfItemArr[w] = condimentsSpicesNoOfItemArr[w] - b ;
                        customerCode[n][i] = a ;
                        customerQuantity[n][i] = b ;
                        customerPrice[n][i] = condimentsSpicesRetailPriceArr[w] ;
                        customerDiscount[n][i] = condimentsSpicesDiscountArr[w] ;
                    }
                    else
                        cout << "no sufficient stock available !!!\n" ;
                }
            }
            break;
        };
        default : {cout << "invalid data !!!\n" ; break ;} ;
    }
}

// CASHIER DO BILLING
void Stock :: billing(int n )
{
    cin.ignore() ;
    cout << "Enter customer name : " ;
    getline(cin ,customerName[n] );

    int i = 0 ;
    string a  ;
    do
    {
        float b ;
        cout << "Enter item code no : " ;
        cin >> a ;
        cout << "Quantity of items : " ;
        cin >> b ;
        if (a != "0")
            haveItemReduceStock (a , b , n , i ) ;
        i++ ;

    }while (a != "0");
    // TO END BILLING INPUTS OF BOTH ITEM CODE AND ITEM QUANTITY SHOULD BE ZERO
    cout << "Billing is over\n\n" ;
    system("pause") ;
    system("cls") ;
}




