#include <iostream>
#include <thread>


int x = 0;


void printX()
{
	std::cout << "X: " << x << std::endl;
}
void testThread()
{
	x = 1;

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	std::cout << "hi" << std::endl;
	printX();
}

int main()
{
	//working behind the scenes
	std::thread myThread(testThread);

	x = 100;
	std::cout << "From main" << std::endl;
	printX();

	//will show what they have once you called the method to join in!
	myThread.join();

	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	//di na hinintay ni main so exit nalang but still works behind the scenes
	//myThread.detach();

	std::cout << "End Main" << std::endl;

	return 0;
}