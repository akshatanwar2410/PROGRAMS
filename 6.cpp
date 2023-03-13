#include <iostream>
using namespace std;

class Distance 
{
    private:
        int feet;
        int inches;
    public:
        Distance(int ft, int in) 
{
            feet = ft;
            inches = in;
}

        int getFeet() {
            return feet;
}

        int getInches() {
            return inches;
}

        void setFeet(int ft) {
            feet = ft;
}

        void setInches(int in) {
            inches = in;
}

        Distance add(Distance d) 
{
            int ft = feet + d.feet;
            int in = inches + d.inches;

            if (in >= 12) 
{
                ft += in / 12;
                in %= 12;
}

            return Distance(ft, in);
}
};

int main() 
{
    Distance d1(3, 6);
    Distance d2(2, 10);

    Distance sum = d1.add(d2);
    cout << "The sum is " << sum.getFeet() << " feet " << sum.getInches() << " inches." << endl;

    return 0;
}

