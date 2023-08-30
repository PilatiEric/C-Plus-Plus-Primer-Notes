//This main() is just to make sure there are no errors
    #include <iostream>
    using namespace std;

    //Function Prototypes
    void NameAddress();
    void Furlongs();
    void TheMice();
    void TheyRun();
    void AgeInMonths();
    void CelsToFahr();
    void LightToAU();
    void Time();


//Main Method
    int main()
    {
        NameAddress();
        Furlongs();
        TheMice();
        TheyRun();
        AgeInMonths();
        CelsToFahr();
        LightToAU();
        Time();
        return 0;
    }
/*
---------------------------Chapter 2 Review----------------------------------

1) Functions
2) Gives access to the iostream preprocessor
3) Allows the use of the std library
4) cout << "Hello, World" << endl;
5) int cheeses;
6) cheeses = 32;
7) cin >> cheeses;
8) cout << "We have " << cheeses << " variety of cheese."
9) a) The function takes in a double and returns an int
   b) The function takes in an int and doesn't return anything
   c) The function doesn't take in anything and returns an int
10) The keyword "return" has to be used whenever a function is indicated to return anything but type void
11) It means that access to the namespace std has not been granted
    Ways to solve:
    a) Place "using namespace std;" within the main()
    b) Place "using std::cout" within the main()
    c) Use std::cout
*/

//-----------------------Chapter 2 Exercises----------------------------

//1)
    void NameAddress()
    {
        cout << "My name is Princess Doughnut the Queen Anne Chonk" << endl;
        cout << "I live at 1234 Some Place Street Street Avenue Boulavard of Broken Dreams Circle Way" << endl << endl;
    }

//2)
    void Furlongs()
    {
        int FurlongsDis;
        cout << "Please provide a distance in furlongs: ";
        cin >> FurlongsDis;
        FurlongsDis /= 220;
        cout << "That is a total of " << FurlongsDis << " yards." << endl << endl;
    }

//3)
    void TheMice()
    {
        cout << "Three blind mice" << endl;
        cout << "Three blind mice" << endl;
    }

    void TheyRun ()
    {
        cout << "See how they run" << endl;
        cout << "See how they run" << endl << endl;
    }
//4)
    void AgeInMonths()
    {
        int Age;
        int Months;
        cout << "Enter your age: ";
        cin >> Age;
        Months = Age * 12;
        cout << "Your age in months is " << Months << "." << endl << endl;
    }
//5)
    void CelsToFahr()
    {
        double Fahrenheit;
        double Celsius;
        cout << "Please enter a celsius value: ";
        cin >> Celsius;
        Fahrenheit = (Celsius * 9 / 5) + 32;
        cout << Celsius << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit" << endl << endl;
    }
//6)
    void LightToAU()
    {
        double lightyears;
        double AstroUnits;
        cout << "Enter the number of lighyears: ";
        cin >> lightyears;
        AstroUnits = lightyears * 63240;
        cout << lightyears << " light years = " << AstroUnits << " astronomical units." << endl << endl;
    }
//7)
    void Time ()
    {
        int hours;
        int minutes;
        cout << "Enter the number of hours: ";
        cin >> hours;
        cout << "Enter the number of minutes: ";
        cin >> minutes;
        cout << "Time: " << hours << ":" << minutes << endl << endl;
    }