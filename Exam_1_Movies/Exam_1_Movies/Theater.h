#ifndef THEATER_H_
#define THEATER_H_

#include <string>
#include "Movie.h"
using namespace std;

class Theater{
private:
	string theatername;
	string phonenumber;
	Movie movies[11];
	int moviestack;
public:
	Theater(string Name, string Phone);
	void AddMovie(Movie &Movie);
	string GetMovieForHour(int hour) const;
	int GetShowTimeForGenre(string Genre) const;
	int GetPopcornPrice() const;
	int GetCokePrice() const;
};

#endif