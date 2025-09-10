// sample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>

static bool s_Finished = false;

void TestThread()
{
    std::cout << "Hello from thread!" << std::endl;
}

//void DoWork()
//{
//
//    std::cout << "Started thread id= " << std::this_thread::get_id() << std::endl;
//
//
//    while (!s_Finished)
//    {
//        std::cout << "Working..\n";
//    }
//}

int main()
{
    //int  x = 0;
    //x = x + 100;
    //std::cout << "X: " << x << std::endl;

    std::thread myThread(TestThread);

    myThread.join();
    //std::thread worker(DoWork);

    //std::cin.get();

    //s_Finished = true;

    //worker.join();
    //std::cout << "Finished" << std::endl;
    //std::cout << "Started thread id= " << std::this_thread::get_id() << std::endl;


    ////removing this would just close the program agad without rlly seeing the printed Finish
    //std::cin.get();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
