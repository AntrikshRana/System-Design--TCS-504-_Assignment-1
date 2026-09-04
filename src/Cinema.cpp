#include <string>
#include <vector>

class Cinema{
private:
    std::string name;
    std::vector<Screen*> screens;

public:
    Cinema(std::string name) : name(name) {}

    ~Cinema(){
        for(Screen* s : screens){
                delete s;
        }
    }

    std::string getName() const { return name; }

    void addScreen(Screen* screen){
        screens.push_back(screen);
    }

    const std::vector<Screen*>& getScreens() const { return screens; }
};