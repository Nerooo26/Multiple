//Create a program that computes for the distance
//Input Speed and time
//I -> speed and time                variables -> speed and time 
//P -> distance = speed * time       variable -> distance 
//O -> distance

//compile -> g++ exer2.cpp -o exer2
//run -> ./exer2

#include <iostream>
using namespace std;

int main()
{
    //declare the varible
    float speed, time, distance;
    cout << "Program to compute for the Distance given Speed and Time\n";
    cout << "--------------------------------------------------------\n";
    cout << "Please enter speed: ";
    cin >> speed;
    cout << "Please enter time: ";
    cin >> time;
    distance = speed * time;
    cout << "\nThe distance is: " << distance << endl; 
    return 0;
}
