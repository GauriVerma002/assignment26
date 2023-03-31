#include<iostream>
  using namespace std;
  class Counter{
    private:
     int count;    //for multiple object we take count as static 
    public:
      Counter()
      {
        count=0;
      }  
      void inc_counter()
      {
        count++;
      } 
      int getcount()
      {
        return count;
      }

  };
  int main()
  {
    Counter C;
    cout<<"Before Counter function ";
    cout<<C.getcount();
    C.inc_counter();
    cout<<"\n After Counter funtion ";
    cout<<C.getcount();
    return 0;
  }
