 #include<iostream>
  using namespace std;
  class Date{
    private:
     int day,month,year;    
    public:
      Date()
      {
        day=07;
        month=14;
        year=2000;
      }  
      void setDate(int x,int y, int z)
      {
        day=x;
        month=y;
        year=z;
      }  
      void showDate()
      {
        cout<<"the date is "<<day<<"/"<<month<<"/"<<year;
      }

  };
  int main()
  {
    Date D;
    D.showDate();
    return 0;
  }
