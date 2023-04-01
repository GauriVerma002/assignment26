#include<iostream>
   using namespace std;
   class StaticCount{
     public:
         static int count;
   
     StaticCount(){
        count=0;
       }
     void counter(){
        count++;
     }
     int showcount(){
        return count;
     }
   };
 int StaticCount::count;
   int main()
   {
    StaticCount s;
    s.counter();
    s.counter();
    s.counter();
    cout<<"the value of count is "<<s.showcount();
    return 0;
   }
