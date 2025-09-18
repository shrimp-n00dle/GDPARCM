#include <iostream>
#include <thread>
#include <vector>

const int threadCount = 10; //No of threads to create
const int runTime = 1000; //ms

int getThreadNum()
{
    return rand()% threadCount + 0;
}

void testThread()
{
    std::cout << "I am thread: " << getThreadNum() << std::endl;
}

/*References used:
https://madhawapolkotuwa.medium.com/understanding-c-threads-a-complete-guide-7e783b22da6b
https://stackoverflow.com/questions/24220778/simultaneous-threads-in-c-using-thread
*/
int main()
{
    //working behind the scenes
    std::thread myThread(testThread);

    std::vector<std::thread> threads;

    for (int i = 0; i < threadCount; i++)
    {
        threads.push_back(std::thread(testThread));
    }

    for (auto& thread : threads)
    {
        thread.join();
    }



    //wait for the threads to finish before exceuting the lines below
    myThread.join();


    std::cout << "End Main" << std::endl;

    return 0;
}
