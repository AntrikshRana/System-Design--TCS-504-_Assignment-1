#include <iostream>
#include <string>
using namespace std;

class TicketPrinter{
public:
    void print(const Booking& booking) const {
        cout<<"\n=====================TICKET=====================\n";
        cout<<"Booking ID : "<<booking.getBookingId()<<"\n";
        
    }
};