#include <vector>
#include <string>

class Screen{
private:
    int screenNumber;
    std::vector<Seat*> seats;

public:
    Screen(int screenNumber) : screenNumber(screenNumber) {}

    ~Screen(){
        for(Seat* s : seats){
            delete s;
        }
    }

    int getScreenNumber() const { return screenNumber; }

    void addSeat(std::string seatNumber, SeatType type){
        seats.push_back(new Seat(seatNumber, type));
    }

    const std::vector<Seat*>& getSeats() const { return seats; }
};