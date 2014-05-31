#ifndef MOVIE_H_
#define MOVIE_H_

#include <string>
using namespace std;

class Movie{
private:
	string title;
	string genre;
	int showtime;
public:
	Movie(){};
	Movie(string Title, string Genre, int Showtime);
	string GetTitle() const;
	string GetGenre() const;
	int GetShowtime() const;
};

#endif