#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

// to ensure value is updated immediately and visible
atomic <bool> flag[2] = {false, false};
atomic <int> turn = 0;
int count = 0;

void task0() {
    for (int i = 0; i < 1000000; ++i) {
        flag[0] = true;
        turn = 1;
        while (flag[1] && turn == 1); // Busy wait

        // Critical section
        count++;

        // Exit section
        flag[0] = false;
    }
}

void task1() {
    for (int i = 0; i < 1000000; ++i) {
        flag[1] = true;
        turn = 0;
        while (flag[0] && turn == 0); // Busy wait

        // Critical section
        count++;

        // Exit section
        flag[1] = false;
    }
}

int main() {
    thread t1(task0);
    thread t2(task1);

    t1.join();
    t2.join();

    cout << "Count: " << count << endl;
    return 0;
}
