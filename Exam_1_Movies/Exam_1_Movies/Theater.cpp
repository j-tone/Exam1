#include "Theater.h"
#include "Movie.h"
using namespace std;

Theater::Theater(string Name, string Phone){
	theatername = Name;
	phonenumber = Phone;
	moviestack = 0;
}

void Theater::AddMovie(Movie &Movie){
		movies[moviestack] = Movie;
		moviestack++;
}

string Theater::GetMovieForHour(int hour) const{
	if (hour < 0){
		return "";
	}
	else{
		for (int j = hour; j < 24; j++){
			for (int i = 0; i < 24; i++){
				if (j == movies[i].GetShowtime())
					return movies[i].GetTitle();
			}
		}
	}
	return "";
}

int Theater::GetShowTimeForGenre(string Genre) const{
	for (int i = 0; i < 11; i++){
		if (Genre == movies[i].GetGenre()){
			return movies[i].GetShowtime();
		}
	}
	return (-1);
}

int Theater::GetPopcornPrice() const{
	return 60;
}

int Theater::GetCokePrice() const{
	return 30;
}
