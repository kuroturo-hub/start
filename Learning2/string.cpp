#include <iostream>
int main(){
    std::string name;

    std :: cout << "Enter your name: ";
    std :: getline(std :: cin , name);

    if(name.empty()){
    std :: cout << "You didn't enter your name\n";
    }
    else if(name. length() > 12){
        std :: cout << "Your name can't be over 12 character long\n";
    }
    else{
    std :: cout << "Welcome " << name << '\n';
    }

    name.clear();
    std :: cout << name << '\n';
    
    name = "Prem Singh";
    name.append(" Tomar\n"); 
    std :: cout << name ;
    std :: cout  << name.at(2);

    name.insert(1,"R"); //only takes string that is double quotes
    std :: cout << '\n' << name;

    std::cout << name.find (" ") << '\n'; //FInds the index of first occurence of the string/character. accepts both strings and char
    name.erase(0,5);
    std::cout << name;
 
}

