#include <iostream>
#include <thread>

const int threadCount = 10; //No of threads to create
const int runTime = 1000; //ms

int threadNum = 0;

int printThread()
{
    return rand()% threadCount + 0;
}


void testThread()
{
    //and will continously print different things for runTime time
    for (int i = 0; i < threadCount; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(runTime));
        threadNum = printThread();
        std::cout << "I am thread: " <<  threadNum << std::endl;
    }
 
}

int main()
{
    //working behind the scenes
    std::thread myThread(testThread);

    //wait for the threads to finish before exceuting the lines below
    myThread.join();

    std::cout << "End Main" << std::endl;

    return 0;
}
