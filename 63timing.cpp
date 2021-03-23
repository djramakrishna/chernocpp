#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{   
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;
    timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }

    ~timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        float ms = duration.count() * 1000.0f; //duration.count() gives in seconds
        std::cout << "Timer took " << ms << "ms" << std::endl;
    }
};

void func()
{   
    Timer mytimer; 

    for ( int i = 0; i < 100; i++ )
    {
        std::cout << "Hello" << std::endl;
    }
}

int main()
{
    using namespace std::literals::chrono_literals;
    auto start = std::chrono::high_resolution_clock::now();
    //std::this_thread::sleep_for(1s);
    const char* p = "hello";
    std::cout << p[0] << std::endl;
    std::this_thread::sleep_for(1s);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;
    std::cout << duration::count() << "s " << std::endl;

    //Without doing all the stuff like above below is a simpler way
    func();
}   