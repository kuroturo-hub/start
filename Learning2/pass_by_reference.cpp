#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
	std::string x = "Kool-Aid";
	std::string y = "Water";

	swap(x, y);

	std::cout << "X: " << x << '\n';
	std::cout << "Y: " << y << '\n';

    return 0;
}
void swap(std::string &x, std::string &y){        //if we use memory addresss even if we wont need to return anything and it will also change in main code :)
	std::string temp;                           //I KNOW I AM AMAZING !!!!
	temp = x;                                   //Passinng by reference
	x = y;
	y = temp;
}