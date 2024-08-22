//sneha diwan
//entc B2
//23070123126
//experiment 9
#include <iostream>
using namespace std;
int main()
{
    int *p ,b=10;
    p = &b ;
    cout <<*p << "  " << b << endl <<p <<"  "<< &b<<endl;
    p++;
    cout<<"After increment:" <<p<<endl;
    float *n, a=8.923;
    n=&a;
    cout<< endl<<*n<<"  "<<a<<endl<<n<<"  "<<&a<<endl;
    n++;
    cout<<" After increment" <<n <<endl;
    char *ch, c(10);
    c='#';
    ch=&c;
    cout<< endl<< (void*)ch<<"  "<<endl;
    ch++;
    cout<<" After increment:" << (void*)ch<<endl;
    return 0;
}
/*
Output 
10  10
0x7fff87491b84  0x7fff87491b84
After increment:0x7fff87491b88

8.923  8.923
0x7fff87491b80  0x7fff87491b80
 After increment0x7fff87491b84

0x7fff87491b7f  
 After increment:0x7fff87491b80
 


=== Code Execution Successful ===


*/
