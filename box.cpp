 #include<iostream>
  using namespace std;
  class Box{
    private:
     int length;
     int breadth;  
     int height;
     int vol;  
    public:
      Box()
      {
        length=6;
        breadth=5;
        height=7;
      }  
    int volume()
    {
        vol=length*breadth*height;
        return vol;
    }

      void showVolume()
      {
        cout<<"volume of box ="<<vol;
      }

  };
  int main()
  {
    Box B;
    B.volume();
    B.showVolume();
    return 0;
  }
