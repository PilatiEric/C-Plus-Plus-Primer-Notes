
//-------------------------------------------------------------Chapter 2: Setting Out to C++------------------------------------------------------------------------------


//Function Prototype
//NOTE: These are so the Main function can be made aware of the existence of the function
//without having to put all the functions before the main.
int OrangeThings();
int AssignmentStatements();
int MoreStatements();


#include <iostream>
#include <cmath>   

using namespace std;        //Using this globally so I don't have to keep writing it for every single method

//---------------------------------Features of the main() Function------------------------------------------------------

// This function displays a message

                     //A PREPROCESSOR directive

int main()                                 //function header (Takes in arguments)
{                                          //Start of function body
   using namespace std;                    //Make definitions visible
   cout << "Come up and C++ some time.";   //Message
   cout << endl;                           //Start a new line
   cout << "You won't regret it!" << endl; //More output
                                           //Terminate main(),
                                           //End of function body
   OrangeThings();                         //Calling another function
   MoreStatements();
   return 0;                                            
}                                            





//----------------------------------The Functions Header as an Interface------------------------------------------

//The header can also be written as follows:
//int main(void);  
//The (void) is an explicit way of saying the function takes no arguments

/*
If main() is not given a return statement, it will act as though it end with the following:
return 0;
This implicit return ONLY works with main()
*/





//----------------------------------The C++ Preprocessor and the iostream File--------------------------------------
//If your program is to use the usual C++ input or output facilities it needs these two lines:
//   #include <iostream>
//   using namespace std;



//----------------------------------------------Header Filenames----------------------------------------------------
//Files like iostream are called one of two things:
//Include Files - because they are included in other files
//Header Files - They are included at the beginning of a file



//------------------------------------------------Namespaces--------------------------------------------------------
/*using namespace std;
-Classes, functions, and variables that are standard components of C++ compilers are now placed in a namespace called "std"
-Examples:
   -std::cout << "Come up and C++ me some time!";
   -std::cout << std::endl;

-If there were two vendors with a function by the same name, namespace would allow you to indicate which one you want to use
-Examples:
   -Microflop::wanda ("Go dancing?");          Uses Microflop namespace version
   -Piscine::wanda ("a fish named Desire");    Uses the Piscine namespace version

-The "using" directive (as seen above) allows the user to forego the namespace prefix like "std::"
-This can be used to call specific function so you don't have to load the entire namespace in
-Examples:
   -using std::cout;    makes cout available
   -using std::endl;    makes endl available
   -using std::cin;     makes cin available   
*/



//--------------------------------------------C++ Output with cout---------------------------------------------------
/*
-The symbol (<<) is the insertion operator
-Example:
   -cout << "THIS IS A THING!"


//-----------The Manipulator endl---------Subsection----------
-The manipulator endl causes the cursor to move to the beginning of the next line
-Example:
   -cout << "This is ";
   -cout << "really";
   -cout << endl;
   -cout << "stupid"
-Output:
   -This is really
    stupid


//---------The Newline Character-----------Subsection---------
-The new line character (\n) creates a new line
-Considered to be a single character called "newline" character
-Example:
// */
//    cout << "This is a \n thing.";
// /*
// -Output:
//    -"This is a
//       thing."
// */
//    return 0;
// }




//-----------------------------------------------C++ Statements-------------------------------------------------------

//FOR ALL FUNCTIONS, THEY MUST BE CALLED IN THE MAIN AND WRITTEN EITHER BEFORE THE MAIN OR A PROTOTYPE FUNCTION
//DECLARED BEFORE THE MAIN FOR IT TO WORK.

int OrangeThings()
{
   using namespace std;

   int carrots;                     //Declare an integer variable

   carrots = 25;                    //Initialize the variable by adding a value
   cout << "I have ";
   cout << carrots;                 //Call the variable
   cout << " carrots.";
   cout << endl;
   
   carrots = carrots - 1;
   cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
   return 0;
}


//-----------Assignment Statements---------Subsection--------------
//Assigning (or initializing) variable is pretty much the same as in other languages

int AssignmentStatements()
{
int steinway;
int baldwin;
int yamaha;
steinway = 88;

//A value can be assigned to multiple variables at the same time.
baldwin = yamaha = 88;

//Values can be modified
steinway = steinway - 1;
steinway -= 1;
return 0;
}



//-------------------------------------------More C++ Statements---------------------------------------------------
// cin is the equivalent of Input()
//It takes in a users input and can insert that into a variable for storage

int MoreStatements()
{
   using namespace std;

   int carrots;

   cout << "How many carrots do you have? ";
   cin >> carrots;
   cout << "Here's two more. ";
   carrots += 2;
   cout << "Now you have " << carrots << " carrots." << endl; //Concatenates everything together
   return 0;
}





//-----------------------------------------------Functions------------------------------------------------------------

//----------Using a Function that has a Return Value-----------------Subsection-------------

int SquareRoot()
{
   float TheThing = sqrt(6.25);           //This is a function that calculates the square root of the number given
                                          //You already knew this because HOW MANY LANGUAGES HAVE YOU ALREADY STUDIED?!
   double OtherThing = pow(5, 8);         //Takes the first number to the power of the second number
   int AThing = rand();
   cout << TheThing;
   cout << OtherThing;
   cout << AThing;
   return 0;
}

