#include <vector>

class PriceCalculator{
public:
    double calculate(const std::vector<ShowSeat*& seats) const {
        double total = 0.0;

        for(Showseat* s : seats){
            total += priceForSeatType(s->getSeat()->getType()); 
        }
        return total;
    }
};