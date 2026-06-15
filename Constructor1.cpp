#include<iostream>
using namespace std;

//Encapsulation
class marvellous
{
    //Access specifier 
    public:
    int no1,no2;  //Characteristics

    //Default Constructor
    marvellous()
    {
        cout<<"Inside Default constructor\n";
        no1 = 0;
        no2 = 0;
    }
   
    //Parameterize Constructor
    marvellous(int a,int b)
    {
        cout<<"Inside Parameterize constructor\n";
        no1 = a;
        no2 = b;
    }

    //Copy Constructor
    marvellous(marvellous &ref)
    {
        cout<<"Copy Constructor\n";
        no1 = ref.no1;
        no2 = ref.no2;
    }

    //Destructor
    ~marvellous()
    {
        cout<<"Inside Destructor\n";
    }
};

int main()
{
    cout<<"Inside Main\n";

    marvellous mobj1();       //Default constructor
    marvellous mobj2(11,21);    //Parameterize Constructo
    marvellous mobj3(mobj2) ;    //Copy Constructor

    cout<<"End Of Main\n";

    return 0;

}       //All Destructor gets called