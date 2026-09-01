#include <vector>
#include <string>

class ShowSeat{
private:
    Seat* seat;
    SeatStatus status;

public:
    ShowSeat(Seat* seat, SeatStatus status) : seat(seat), status(status) {}

    Seat* getSeat() const { return seat; }
    void setStatus(SeatStatus status) { this->status = status; }
    SeatStatus getStatus() const { return type; }
};