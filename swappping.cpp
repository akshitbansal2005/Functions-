//Akshit Bansal
//PRN: 23070123013
#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}
int main()
{
    int a=5,b=2;
    swap(&a,&b);
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
    return 0;
}

/*output
value of a is: 2
value of b is: 5
*/
