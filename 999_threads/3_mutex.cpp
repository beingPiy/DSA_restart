
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int count = 0;
mutex lock_count;

void task() {
    for (int i = 0; i < 1000000; ++i) {
        lock_guard<mutex> guard(lock_count);
        count++;
    }
}

int main() {
    thread t1(task);
    thread t2(task);

    t1.join();
    t2.join();

    cout << "Count: " << count << endl;
    return 0;
}
