#include <vector>
#include <string>

class Movie{
private:
    std::string title;
    std::string language;
    float duration;

public:
    Movie(std::string title, std::string language, float duration) : title(title), language(language), duration(duration) {}

    std::string getTitle() { return title; }
    std::string getLanguage() { return language; }
    float getDuration() { return duration; }
};