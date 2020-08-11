#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include "time_file.hpp"
#include "People.hpp"

int main()
{
Person P;
std::string First_name;
std::string Middle_name;
std::string Surname;
auto start = std::chrono::system_clock::now();
auto NAME = P.Name_Input( First_name, Middle_name, Surname);
std::cout<< NAME<< std::endl;
 return 0;
}



