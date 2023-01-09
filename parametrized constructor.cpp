#include<iostream>
using namespace std;
class complex
{
    int a,b,c;
    public:

    complex(int, int);/*/constructor/*/

    void printnumbers()
    {
        cout<<"The numbers are:"<<a <<"+" <<b<< "i"<<endl;
    }

};
complex::complex(int x,int y)//This is parametrized constructor.
{                                                                       
    a=x;
    b=y;
    
}
int main()
{
    //Implicit call
 complex c(8,9);

 //Explicit call
 complex b=complex(9,0);

 c.printnumbers();  
 b.printnumbers();

}
