#include<iostream>
  using namespace std;
   class Cube{
    private:
       int a;
       int vol;
    public:
       Cube(int x){
          a=x;
       }
       void setCube(int x)
       {
          a=x;
       }
       void showCube()
       {
        cout<<"volume of cube "<<a<<endl;
       }
       void calculatecube()
       {
         int v= a*a*a;
         vol=v;
       }
   };
   int main()
  {
    Cube C(7),C1(6);   
    C.showCube();
    C1.showCube();
    cout<<endl;
  }
