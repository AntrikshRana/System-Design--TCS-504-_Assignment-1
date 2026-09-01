#include <vector>
#include <string>

enum class SeatType { SILVER, GOLD, PLATINUM };
enum class SeatStatus { AVAILABLE, BOOKED };

class Seat{
private:
    std::string seatNumber;
    SeatType type;

public:
    Seat(std::string seatNumber, SeatType type) : seatNumber(seatNumber),type(type) {}

    std::string getScreenNumber() const { return seatNumber; }
    SeatType getType() const { return type; }
};