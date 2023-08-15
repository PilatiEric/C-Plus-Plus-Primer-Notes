//This main() is just to make sure there are no errors
    #include <iostream>
    using namespace std;

    //Function Prototypes
    int NameAddress();
    int Furlongs();
    int TheMice();
    int TheyRun();


//Main Method
    int main()
    {
        NameAddress();
        Furlongs();
        TheMice();
        TheyRun();
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
    int NameAddress()
    {
        cout << "My name is Princess Doughnut the Queen Anne Chonk" << endl;
        cout << "I live at 1234 Some Place Street Street Avenue Boulavard of Broken Dreams Circle Way" << endl << endl;
        return 0;
    }

//2)
    int Furlongs()
    {
        int FurlongsDis;
        cout << "Please provide a distance in furlongs: ";
        cin >> FurlongsDis;
        FurlongsDis /= 220;
        cout << "That is a total of " << FurlongsDis << " yards." << endl << endl;
        return 0;
    }

//3)
    int TheMice()
    {
        cout << "Three blind mice" << endl;
        cout << "Three blind mice" << endl;
        return 0;
    }

    int TheyRun ()
    {
        cout << "See how they run" << endl;
        cout << "See how they run" << endl << endl;
        return 0;
    }