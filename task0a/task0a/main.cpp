#include "module1.h"
#include "module2.h"
#include <iostream>

namespace Peter
{
    std::string getMyName()
    {
        std::string name = "Peter";
        return name;
    }
}


int main(int argc, char** argv)
{
    using std::cout; // чтобы не писать std
	cout << "Hello world!" << "\n";

	std::cout << Module1::getMyName() << "\n";
	std::cout <<  Module2::getMyName() << "\n";

    {
        using namespace Module1;
        std::cout << getMyName() << "\n"; // (A)
        std::cout << Module2::getMyName() << "\n";
    }
    {
        using namespace Module2; // (B)
        std::cout << getMyName() << "\n"; // COMPILATION ERROR (C)
    }
    {
        using Module2::getMyName;
        std::cout << getMyName() << "\n"; // (D)
    }

    {
        std::cout << Peter::getMyName();
    }
}