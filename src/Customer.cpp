#include <string>

class Customer{
private:
    std::string name;
    std::string phone;

public:
    std::string getName() { return name; }
    std::string getPhone() { return phone; }
};