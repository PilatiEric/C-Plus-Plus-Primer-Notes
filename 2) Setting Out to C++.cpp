
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
    return 0;                               //Terminate main(),
}                                           //End of function body





//----------------------------------The Functions Header as an Interface------------------------------------------

/*The header can also be written as follows:
int main(void);  
The (void) is an explicit way of saying the function takes no arguments

If main() is not given a return statement, it will act as though it end with the following:
return 0;
This implicit return ONLY works with main()
*/




//----------------------------------The C++ Preprocessor and the iostream File
/*If your program is to use the usual C++ input or output facilities it needs these two lines:
  #include <iostream>
  using namespace std;
*/