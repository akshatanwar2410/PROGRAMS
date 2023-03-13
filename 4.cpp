#include <iostream>
using namespace std;
class MyClass 
{
    private:
        int myNum;
    public:
        void setNum(int num) 
{
            myNum = num;
}

        int getNum() 
{
            return myNum;
 		}
};

int main() 
{
    MyClass obj;

   obj.setNum(42);

   cout << "The value of the object's field is: " << obj.getNum() << endl;

    return 0;
}

