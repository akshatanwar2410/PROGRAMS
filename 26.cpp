#include <iostream>

using namespace std;

class Rectangle {
   private:
      int length;
      int breadth;

   public:
      Rectangle(int l=1, int b=1) {
         length = l;
         breadth = b;
      }

      int area() {
         return length * breadth;
      }
};

int main() {
   Rectangle r1(10, 5);
   cout << "Area of rectangle r1 is: " << r1.area() << endl;

   Rectangle r2(7);
   cout << "Area of rectangle r2 is: " << r2.area() << endl;

   Rectangle r3;
   cout << "Area of rectangle r3 is: " << r3.area() << endl;

   return 0;
}

