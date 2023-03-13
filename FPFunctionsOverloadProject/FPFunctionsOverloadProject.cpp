#include <iostream>

using namespace std;

// int (int, int)
//int Amount(int a, int b);
//float Amount(float a, float b);
//double Amount(double a, double b);
//long long Amount(long long a, long long b);
//int Amount(int a, float b);
//float Amount(float a, int b);
//int Amount(double a, int b);
//float Amount(long long a, float b);

//template <typename T>
//T Amount(T a, T b);
// int Amount(int a, int b);
// float Amount(float a, float b);
// double Amount(double a, double b);

template <typename T1, typename T2>
auto Amount(T1 a, T2 b)
{
    return a + b;
}


int Amount(int a, int b, int c);

int main()
{
    std::cout << Amount(10, 20) << "\n";
    std::cout << Amount<int, int>(10, 20) << "\n";

    std::cout << Amount(10, 20.34f) << "\n";
    std::cout << Amount<int, float>(10, 20.34f) << "\n";

    int n = 123;
    double x = 23.98;

    std::cout << Amount(n, x) << "\n";
    std::cout << Amount<int, double>(n, x) << "\n";
}

int Amount(int a, int b)
{
    return a + b;
}

int Amount(int a, int b, int c)
{
    return a + b + c;
}

float Amount(float a, float b)
{
    return a + b;
}

//template <typename T>
//T Amount(T a, T b)
//{
//    return a + b;
//}


