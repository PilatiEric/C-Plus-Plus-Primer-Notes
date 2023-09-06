#include <iostream>
#include <climits>             //Allows functions that show data type limits
#define ZERO 0                 //Makes "ZERO" the symbol for the 0 value     

//Function Prototypes
void TypeLimit();
void UnsignedTypes();



    using namespace std;


int main()
{
    TypeLimit();
    UnsignedTypes();
    return 0;
}


void TypeLimit()
{
    int n_int = INT_MAX;                  //These all show the maximum number for the particular int type
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LONG_LONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl << endl;
}

void UnsignedTypes()
{
    //Unsigned version of int types start the limit of the numbers from 0
    //This effectively doubles how high of a number an int type can hold
    unsigned short change;
    unsigned int rovert;
    unsigned quarterback; //This is the same as "unsigned int quarterback"
    unsigned long gone;
    unsigned long long lang_lang;


    short sam = SHRT_MAX;         //Initialize the variable to the max value
    unsigned short sue = sam;
    cout << "Sam has " << sam << " dollars and Sue has " << sue <<
            " dollars deposited." << endl <<
            "Add $1 to each account." << endl << "Now ";
    sam += 1;
    sue += 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue <<
            " dollars deposited. \nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue <<
            " dollars deposited." << endl <<
            "Take $1 from each account." << endl << "Now ";
    sam -= 1;
    sue -= 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue <<
            " dollars deposited." << endl << "Lucky Sue!" << endl << endl;
}