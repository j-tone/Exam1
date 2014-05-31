#include "Movie.h"

Movie::Movie(string Title, string Genre, int Showtime){
	title = Title;
	genre = Genre;
	showtime = Showtime;
}

string Movie::GetTitle() const{
	return title;
}
string Movie::GetGenre() const{
	return genre;
}
int Movie::GetShowtime() const{
	return showtime;
}