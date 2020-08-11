#include "People.hpp"
#include <string>
#include <vector>
#include <iostream>
//Shorten the string identifier name
std::string Person::Name_Input(std::string First_name,std::string Middle_name,std::string Surname){
std::string Fullname;
//Let's create the name vector
using V = std::vector<std::string>; //Aliasing string vector as V
// Input  Instruction  for name
std::cout<< "Please input your Surname"<< std::endl;
std::cout<<"Warning: Please do not add spaces in between the name, just tap enter to type in the other names"<<std::endl;
std::getline(std::cin, Surname);
std::cout<< "Please input your First name"<< std::endl;
std::cout<<"Warning: Please do not add spaces in between the name, just tap enter to type in the other names"<<std::endl;
std::getline(std::cin, First_name);
std::cout<< "Please input your Middle name"<< std::endl;
std::cout<<"Warning: Please do not add spaces in between the name, just tap enter to type in the other names"<<std::endl;
std::getline(std::cin, Middle_name);
// Initializing a vector to hold the full names of the individual
Fullname = Surname + " " + First_name + " " + Middle_name;
// Output Instruction  for name
return Fullname;
}
std::string SUBJECT(){
    //Initialize subject variable
    std::string Subject;



}
