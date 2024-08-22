//sneha diwan
//entc B2
//23070123126
//experiment 9
#include <iostream>
using namespace std;
int main () 
{
    // dynamically creating array of size=5
    int *ptr=new int[5];
    // initialize the arrat p[] as {10,20,30,40,50}
    for (int i=0;i<5;i++){
        ptr[i]=10*(i+1);

    }
    //printing the values using pointers
    cout<< *ptr << endl;
    cout<< *ptr +1 << endl;
    cout<< *(ptr +1) << endl;   
    cout<< 2[ptr] << endl; 
    cout<< ptr[2] << endl; 
    *ptr++;
    cout<< *ptr;
    return 0;
}
/*
Output 
10
11
20
30
30
20
 
 


=== Code Execution Successful ===


*/
