#include  <iostream>
#include <string>

class UpiPayment : public Payment{
private:
    std::string upiId;

public:
    UpiPayment(std::string upiId) : upiId(upiId) {}

    bool pay(double amount) override {
        if(upiId.empty()){
            std::cout<<"Invalid UPI id.\n";
            return false;
        }
        std::cout<<"Charged Rs. "<<amount<<"to"<<upiId<<"...\n";
        std::cout<<"Payment Success? ";
        
        // Manually checking because no proper gateway implemented.
        int choice; std::cin>>choice;

        if(choice == 1){
            std::cout<<"Rs."<<amount<<" paid successfully!\n";
            return true;
        }

        std::cout<<"Payment Failed!\n";
        return false;
    }
};

class CardPayment : public Payment{
private:
    std::string cardNumber;
    std::string expiryDate;

public:
    CardPayment(std::string cardNumber, std::string expiryDate) :
        cardNumber(cardNumber), expiryDate(expiryDate) {}

    bool pay(double amount) override {
        if(cardNumber.size()<12 || expiryDate.empty()){
            std::cout<<"Invalid card details.\n";
            return false;
        }
        std::cout<<"Charged Rs. "<<amount<<"to"<<cardNumber<<"...\n";
        std::cout<<"Payment Success? ";
        
        // Manually checking because no proper gateway implemented.
        int choice; std::cin>>choice;

        if(choice == 1){
            std::cout<<"Rs."<<amount<<" paid successfully!\n";
            return true;
        }

        std::cout<<"Payment Failed!\n";
        return false;
    }
};

class CashPayment : public Payment{
public:
    bool pay(double amount) override{
        std::cout<<"Rs. "<<amount<<" collected at the counter!\n";
        return true;
    }
    
};