#include<iostream>
#include<vector>
using namespace std;

int main()
{
   
   
    //Method = 1
    vector<int> num={1,2,3,4};
      
      cout <<"Show the num vector  elements :" ;

        for(int i: num)
        {
            cout<<i<<" ";

        }
    
    cout<<"\n";
    // Method =2

vector<int> exm{1,2,3,4};
      
      cout <<"Show the num vector  elements :" ;

        for(int i: exm)
        {
            cout<<i<<" ";

        }
    
    cout<<"\n";
    //Method = 3
    vector<int> sum(5,12);
      cout <<"Show the sum vector  elements :" ;
        for(int i:sum)
        {
            cout<<i<<" ";

        }
}