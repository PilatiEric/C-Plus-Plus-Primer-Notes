
//-------------------------------------------------------------Chapter 2: Setting Out to C++------------------------------------------------------------------------------





//---------------------------------Features of the main() Function------------------------------------------------------

// This function displays a message

#include <iostream>                         //A PREPROCESSOR directive

int main()                                  //function header (Takes in arguments)
{                                           //Start of function body
    using namespace std;                    //Make definitions visible
    cout << "Come up and C++ some time.";   //Message
    cout << endl;                           //Start a new line
    cout << "You won't regret it!" << endl; //More output
                                            //Terminate main(),
                                            //End of function body





//----------------------------------The Functions Header as an Interface------------------------------------------

//The header can also be written as follows:
int main(void);  
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
-Example:
*/
   cout << "This is a \n thing.";
/*
-Output:
   -"This is a
      thing."
*/
   return 0;
}

