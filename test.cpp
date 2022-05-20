#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void performance(int n)//declaration of a function named performance
{
    int counter=0;
    for(int i=0;i<n;i++)//running the loop for counting the no. of iterations
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));//setting the sleep time to 1s
        counter++;
    }
    cout<<counter<<"\n";
}
int main()
{
    int num;
    cout<<"Enter any integral input :"<<"\n";
    cin>>num;//taking the input
    cout<<"My pc's performace : "<<"\n";
    std::thread t1(performance,num);
    t1.join();//joinig of thread
    // system("pause>nul");
    return 0;
}