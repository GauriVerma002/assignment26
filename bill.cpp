#include<iostream>
 using namespace std;
    class Bill
    {
    public:
    int unit;
    int money;

     void get()
      {
        cout<<"enter the unit";
        cin>>unit;
      }
      void calculateUnit()
      {
        if(unit<100)
           money= unit*1.20;
        else if(unit>=100 && unit<=200)
           money= unit*2;
        else if(unit>200)
           money= unit*3;
      }
      void showunit(){
        cout<<"the money calculated is "<<money;
      }
    };
    int main()
    {
        Bill B;
        B.get();
        B.calculateUnit();
        B.showunit();
    }
