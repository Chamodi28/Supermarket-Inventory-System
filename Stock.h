#ifndef STOCK_H_INCLUDED
#define STOCK_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include "Staff.h"
#include "Stock.h"
#include "Supply.h"

using namespace std;

class Stock : public Supply
{
private:

    int producenum = 0 , SnacksAndSweetNum = 0  , meatSeafoodnum = 0 , grainnum = 0 , bakerynum = 0 , frozennum = 0 , dairynum = 0 , beveragenum = 0 , healthBeautynum = 0 , condimentsSpicesnum = 0  ;

    string produceArr[10] ; float produceRatailPriceArr [10] ; float produceDiscountArr [10] ;
    string meatSeafoodArr [10] ; float  meatSeafoodRetailPriceArr [10] ; float  meatSeafoodDiscountArr [10] ;
    string grainArr [10] ; float  grainRetailPriceArr [10] ; float  grainDiscountArr [10] ;
    string snacksAndSweetArr[10] ; float snacksAndSweetRatailPriceArr [10] ;float snacksAndSweetDiscountArr [10] ;char snackImportLocal [10] ;string snackBrand [10] ;
    string bakeryArr [10] ;float bakeryRetailPriceArr [10] ;float bakeryDiscountArr [10] ;char bakeryImportLocal [10] ;string bakeryBrand [10] ;
    string frozenArr [10] ;float frozenRetailPriceArr [10] ;float frozenDiscountArr [10] ;char frozenImportLocal [10] ;string frozenBrand [10] ;
    string dairyArr [10] ;float dairyRetailPriceArr [10] ;float dairyDiscountArr [10] ;char dairyImportLocal [10] ;string dairyBrand [10] ;
    string  beverageArr [10] ;float  beverageRetailPriceArr [10] ;float  beverageDiscountArr [10] ;char  beverageImportLocal [10] ;string  beverageBrand [10] ;
    string healthBeautyArr [10] ;float healthBeautyRetailPriceArr [10] ;float healthBeautyDiscountArr [10] ;char healthBeautyImportLocal [10] ;string healthBeautyBrand [10] ;
    string condimentsSpicesArr [10] ;float condimentsSpicesRetailPriceArr [10] ;float condimentsSpicesDiscountArr [10] ;char condimentsSpicesImportLocal [10] ;string condimentsSpicesBrand [10] ;


public:
    int approveIndex = 0 ;
    int categorynum = 0 ;
    char status ;

    string produecode[10] ;string meatSeafoodcode [10] ;string graincode [10] ;string snackcode[10] ; string bakeryCode [10] ;string frozenCode [10] ;string dairyCode [10] ;string  beverageCode [10] ;string healthBeautyCode [10] ;string condimentsSpicesCode [10] ;
    float produceGramsArr [10] ; float meatSeafoodGramsArr [10] ; float grainGramsArr [10] ;int snacksAndSweetNoOfItemArr [10] ;int bakeryNoOfItemArr [10] ;int frozenNoOfItemArr [10] ;int dairyNoOfItemArr [10] ;int  beverageNoOfItemArr [10] ;int healthBeautyNoOfItemArr [10] ;int condimentsSpicesNoOfItemArr [10] ;

    string tempCode[10] ;
    float tempQuantity ;

    string customerName[10] ;
    string customerCode[10][10] ;
    float customerQuantity[10][10] ;
    float customerPrice [10][10] ;
    float customerDiscount [10][10] ;

    void addEntry() ;
    int enteringitems( int noOfEntries , int increase , string *code , string *itemName , int *noOfItems , float *price , float *Discount , char *importLocal , string *brand) ;
    int enteringitems(int noOfEntries , int increase , string *code , string *itemName , float *grams , float *price , float *Discount ) ;
    void displayStock() const ;
    void checkTempCode(string temp , int length , string *codeArr , int *itemNumbers , int sign ) ;
    void checkTempCode(string temp , int length , string *codeArr , float *amount , int sign ) ;
    void increaseStock() ;
    void decreaseStock() ;

    bool increaseStockAfterApprove (Supply supply2) ;
    void increaseSt ( char te , int s) ;
    void findArr (char te) ;

    void billing(int n  )  ;
    void haveItemReduceStock (string a , float b, int n , int i );
    void transactionDetails (string *cashiername , string *cashiercode , string *customername , Stock ss2 ) ;


};


#endif // STOCK_H_INCLUDED
