
//-------------------------------------------------------------Chapter 2: Setting Out to C++------------------------------------------------------------------------------





// This function displays a message

#include <iostream>                         //A PREPROCESSOR directive

int main()                                  //function header
{                                           //Start of function body
    using namespace std;                    //Make definitions visible
    cout << "Come up and C++ some time.";   //Message
                                            //Cout is the equivalent of Print, Console.Println, Console.Out.Prinln
    cout << endl;                           //Start a new line
    cout << "You won't regret it!" << endl; //More output
    return 0;                               //Terminate main()
}                                           //End of function body

int testing()
{
    using namespace std;
    cout << "This is just a test.";
    return 0;
}
