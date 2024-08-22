//sneha diwan
//entc B2
//23070123126
//experiment 9
#include <iostream>
using namespace std;
int main ()
{
    int var=150;
    // declare pointer c=variable
    int *ptr;
    //note that data type of ptr and var must be same
    ptr =&var;
    //assign the address of variable of a variable to a pointer 
    cout<<"Value at ptr=" << ptr <<  "\n";
    cout<<"Value at var=" << var <<  "\n";
    cout<<"Value at *ptr=" << *ptr <<  "\n";
    return 0;
}
/*
Output 
Value at ptr=0x7ffd1b072f84
Value at var=150
Value at *ptr=150
 
 


=== Code Execution Successful ===


*/
