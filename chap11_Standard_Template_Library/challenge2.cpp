#include <iostream>
#include <list>
#include <iomanip>
#include <string>
#include <limits>

class Song{
     friend std::ostream &operator <<(std::ostream &os ,const Song &s);
     std::string name;
     std::string artist;
     int rating;

public:
     Song() = default;
     Song(std::string name,std::string artist,int rating)
          : name{name}, artist{artist},rating{rating} {};

     std::string get_name() const{
          return name;
     }
     std::string get_artist() const{
          return artist;
     }
     int get_rating() const{
          return rating;
     }

};

void display_menu(){
     std::cout<<"\nF - Play First Song"<<std::endl;
}
int main(){

     return 0;
}