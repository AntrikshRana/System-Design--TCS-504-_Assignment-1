#include <vector>
#include <string>

enum class SeatType { SILVER, GOLD, PLATINUM };

inline double priceForSeatType(SeatType type){
    switch(type){
        case SeatType::SILVER : return 150.0;
        case SeatType::GOLD : return 250.0;
        case SeatType::PLATINUM : return 400.0;
    }
    return 0.0;
}

inline std::string seatTypeToString(SeatType type){
    switch(type){
        case SeatType::SILVER : return "SILVER";
        case SeatType::GOLD : return "GOLD";
        case SeatType::PLATINUM : return "PLATINUM";
    }
    return "UNKNOWM";
}

class Seat{
private:
    std::string seatNumber;
    SeatType type;

public:
    Seat(std::string seatNumber, SeatType type) :
        seatNumber(seatNumber),type(type) {}

    std::string getScreenNumber() const { return seatNumber; }
    SeatType getType() const { return type; }
};