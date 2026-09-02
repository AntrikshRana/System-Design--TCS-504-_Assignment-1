#include <string>
#include <vector>

class Booking{
private:
    Customer* customer;
    std::string bookingId;
    Show* show;
    std::vector<ShowSeats*> seats;
    double totalAmount;
    BookingStatus status;

public:

    Booking(Customer* customer, string bookingId, Show* show, std::vector<ShowSeats*> seats, double totalAmount, BookingStatus status){
        this->customer = customer;
        this->bookingId = bookingId;
        this->show = show;
        this->seats = seats;
        this->totalAmount = totalAmount;
        this->status = status;
    }

    ~Booking(){
        for(ShowSeats* s : seats){
            delete s;
        }
    }

    std::string getBookingId() const { return bookingId; }
    Show* getShow() { return show; }
    const std::vector <ShowSeats*>& getSeats() const { return seats; }
    double getTotalAmount() const { return totalAmount; }
    BookingStatus getBookingStatus() { return status; }
};