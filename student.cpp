 #include<iostream>
  using namespace std;
  class Student{
    private:
     int marks;
     char grades;    
    public:
      Student(int x,char y)
      {
        marks=x;
        grades=y;
      }  
     
      void showDate()
      {
        cout<<"student marks ="<<marks<<"grades ="<<grades;
      }

  };
  int main()
  {
    Student D(95,'A');
    D.showDate();
    return 0;
  }
