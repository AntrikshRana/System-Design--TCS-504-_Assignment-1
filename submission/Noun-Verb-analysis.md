# Core Entity Classes

| Class | Data members | Methods | Access modifiers | Knows | Does | Must NOT do |
|-------|--------------|---------|------------------|-------|------|-------------|
| Movie |`string title`<br>`string language`<br>`float duration`|`getTitle()`<br>`getLanguage()`<br>`getDuration()`|`Data: private`<br>`Methods: public`|Title, Language, Duration|Stores information about the movie|Manage seats, bookings, payments|
| Seat | `int seatNumber`<br>`string type` | `getNumber()`<br>`getType()` | `Data: private`<br>`Methods: public` |Seat number, type|Representaion of a physical seat|Booking|
| Screen | `int screenNumber`<br>`vector<Seat> seats` | `getScreenNumber()`<br>`getSeat()`<br>`addSeat()` |`Data: private`<br>`Methods: public`|Screen number, seats|Manages physical seats|Track booking status for the show, payments|
|Cinema|`string name`<br>`vector<Screen> screens`|`getName()`<br>`getScreens()`<br>`addScreens()`|`Data: private`<br>`Methods: public`|Cinema name and screens|Manages screens|Handle payments or bookings|
|Show|`Movie* movie`<br>`Screen* screen`<br>`string startTime`<br>`vector<ShowSeats> showSeats`|`getMovie()`<br>`getStartTime()`<br>`getShowSeats()`<br>`getScreen()`|`Data: private`<br>`Methods: public`|Movie,Screen,Start time,Seats(show specific)|Shows one screening|Manage payments, bookings|
|ShowSeat|`Seat seat`<br>`SeatStatus status`|`getSeat()`<br>`setStatus()`<br>`getStatus()`|`Data: private`<br>`Methods: public`|Seat and it's status (show specific)|Trackes the status of a seat (available/booked)|Booking and payments|
|Customer|`string name`<br>`string phone`|`getName()`<br>`getPhone()`|`Data: private`<br>`Methods: public`|Customer's name, phone number|Stores customer information|Manage bookings and payments|
|Booking|`string bookingId`<br>`Show* show`<br>`vector<ShowSeats*> seats`<br>`double totalAmount`<br>`BookingStatus status`|`getBookingId()`<br>`getShow()`<br>`getSeats()`<br>`getTotalAmount()`<br>`getStatus()`<br>`setStatus()`|`Data: private`<br>`Methods: public`|Booking details|Sotres data about a customer's booking|Print ticket, payment processing|