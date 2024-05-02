#include<iostream>
using namespace std;
class car{
    public:
     int doors;
     void color(){
        cout<<"Red is the color of this car";

     }
     void totall_Doors()
     {
        cout<<"This car tottal doors :"<<doors;
     }
    
};
int main()
{
    car obj;
    obj.doors=4;
    
    obj.color();
    //obj.doors();


}