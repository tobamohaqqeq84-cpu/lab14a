//toba Mohaqqeq 
//COMSC-210
//LAb-14 

#include <iostream>
#include <iomanip>
using namespace std;

 class color{
      private:
        int red;
        int green;
        int blue;

      public:
// these are setters
        void setRed(int r) {red = r;}
        void setGreen(int g) {green = g;}
        void setBlue(int b) {blue =b;}

// these are getters
        int getRed() const {return red;}
        int getGreen() const {return green;}
        int getBlue() const {return blue;}

void print() const{
  cout << "Color(R:  " << setw(3) << red << ", G: " << setw(3) << green << ", B: " << setw(3) << blue << ")" << endl;
       
}
}