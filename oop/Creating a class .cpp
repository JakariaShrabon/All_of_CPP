
#include <iostream>
using namespace std;
// Creating a class name "Car"
class Car{
    public: 
        int doors;
        int price ;
          
};
int main()
{
    // creating a object name "obj";

    Car obj;
    //Access the identifiers using '.'
    obj.doors=4;
    //print the acces value 
    cout<<"The tottall number of doors : "<<obj.doors<<endl;
    
}