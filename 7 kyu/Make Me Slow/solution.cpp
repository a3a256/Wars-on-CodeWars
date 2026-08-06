#include <chrono>

void make_me_slow()
{
    auto now = std::chrono::steady_clock::now;
    using namespace std::chrono_literals;
    auto work_duration = 7s;
    auto start = now();
    long long i = 0;
    while ( (now() - start) <= work_duration)
    {
      i++;
    };
}
