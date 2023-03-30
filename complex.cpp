#include<iostream>
  using namespace std;
class Complex{
private:
    int r,i;
public:
    Complex(int a, int b)
    {
        r=a;
        i=b;
    }
    void setData(int a,int b)
    {
        r=a;
        i=b;
    }
    void showData()
    {
        cout<<"real part= "<<r<<"imaginary part= "<< i;
    }
    Complex add(Complex C){
        Complex temp(0,0);
        temp.r= r+C.r;
        temp.i= i+C.i;
        return temp;
    }
};
int main()
  {
    Complex  C1(7,9),C2(6,5);   
    C1.showData();
    C2.showData();
    cout<<endl;
  }
