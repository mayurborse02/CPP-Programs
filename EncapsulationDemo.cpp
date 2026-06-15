//Erroness File

#include<iostream>
using namespace std;

//Encapsulation
class marvellous
{
    //Access specifier
    public:
    int no1,no2;  //Characteristics

    void fun(){   //Behaviour
        cout<<"Inside Fun\n";
    }

    void gun(){   //Behaviour
        cout<<"Inside Gun\n";
    }
};

int main(){

    //Object creation(Instance)
    marvellous mobj1;
    marvellous mobj2;
 
    cout<<sizeof(mobj1)<<"\n";  //8-byte

    cout<<mobj1.no1<<"\n";      //Error

    mobj1.fun();                //Error
    mobj2.fun();                //Error

    mobj1.gun();                //Error




    return 0;

}