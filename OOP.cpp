#include<iostream>
using namespace std;

class airthmatic
{
    public:
        int no1;
        int no2;

        airthmatic()        //Default Constructor
        {
            no1 = 0;
            no2 = 0;
        }

        airthmatic(int value1,int value2)   //Parameterize Constructor
        {
            no1 = value1;
            no2 = value2;
        }

        int addition()      //Addition Behaviour
        {
            int Ans = 0;
            Ans = no1 + no2;
            return Ans;
        }

        int subtraction()
        {
            int Ans = 0;
            Ans = no1 - no2;
            return Ans;
        }

};

int main()
{
    airthmatic aobj(11,10);
    int result = 0;

    result = aobj.addition();
    cout<<"Addition is "<<result<<"\n";

    result = aobj.subtraction();
    cout<<"Subtraction is :"<<result<<"\n";
    
    return 0;
}