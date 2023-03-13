#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void displayTime() {
        cout << "Time = " << hours << ":" << minutes << ":" << seconds << endl;
    }

    Time addTime(Time t) {
        Time sum;
        sum.seconds = seconds + t.seconds;
        sum.minutes = minutes + t.minutes;
        sum.hours = hours + t.hours;
        if (sum.seconds >= 60) {
            sum.seconds -= 60;
            sum.minutes += 1;
        }
        if (sum.minutes >= 60) {
            sum.minutes -= 60;
            sum.hours += 1;
        }
        return sum;
    }
};

int main() {
    Time time1, time2, time3;

    time1.setTime(5, 35, 45);
    time2.setTime(6, 25, 30);

    time3 = time1.addTime(time2);

    time1.displayTime();
    time2.displayTime();
    time3.displayTime();

    return 0;
}

