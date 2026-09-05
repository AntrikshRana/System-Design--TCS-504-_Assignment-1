#include <string>
#include <vector>

class Show{
private:
    Movie* movie;
    Screen* screen;
    std::string startTime;
    std::vector<ShowSeat*> seats;

public:
    Show(Movie* movie, Screen* screen, std::string startTime){
        this->movie = movie;
        this->screen = screen;
        this->startTime = startTime;
        for(Seat* seat : )
    }


};