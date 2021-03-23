#include <iostream>
#include <thread>

static bool s_finished = false;

// Performs on another thread of execution 

void dowork()
{	
	using namespace std::literals::chrono_literals;

	std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;

	while(!s_finished)
	{
	std::cout << "working..... \n";
	std::this_thread::sleep_for(1s);
	}
}

int main()
{
	std::thread worker(dowork);	// Starts another thread until we wait for the thread to exit 

	std::cin.get();
	s_finished = true;

	worker.join();  // Wait for it to join
	std::cout << "Finished " << std::endl;
	std::cin.get();
}