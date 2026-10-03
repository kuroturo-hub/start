#include <iostream>

int main()
{
    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];
    int n=1;

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    for(std::string food : foods){
        std::cout << n << ". " << food << '\n';
        n++;
    }

    return 0;
}