#include<iostream>
using namespace std;

//Encapsulation
class marvellous
{
    //Access specifier (By default private)
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

    cout<<mobj1.no1<<"\n";

    mobj1.fun();
    mobj2.fun();

    mobj1.gun();




    return 0;

}