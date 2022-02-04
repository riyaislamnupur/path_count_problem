#include<iostream>
using namespace std;
int numberOfPaths(int a, int b)
{
    if(a == 1 || b == 1)
        return 1;
    return numberOfPaths(a - 1, b) + numberOfPaths(a, b - 1);

}
int main()
{
    cout<< numberOfPaths(5,6);
    return 0;
}
