#ifndef SONG_H_
#define SONG_H_


#include <iostream>
#include <string>
using namespace std;

//implement class where song can be initiated
class Song
{
// private variables defined for song class
private:
	string title;
	string genre;
	string artist;

//public files that are actions upon the song
public:

	Song()   //default song
	{}

	//constructor that allows caller to set up songs
	//valid genres are "Rock & Roll", "Pop", "Electronic", and "Folk"
	Song(string Title, string Genre, string Artist)
	{
		title = Title;
		genre = Genre;
		artist = Artist;
	}
	// returns song title
	const string gettitle()
	{
		return title;
	}
	//returns song genre
	const string getgenre()
	{
		return genre;
	}
	//returns song artist
	const string getartist()
	{
		return artist;
	}

	
	// return true if the song is of the genre.
	bool isOfGenre(string genre)
	{
		if (genre == "Rock & Roll" || genre == "Pop" || genre == "Electronic" || genre == "Folk")
		{
			return true;
		}
		else 
		{
			cout << "Invalid genre. Not included in playlist." << endl;
			return false;
		}
	}


};

#endif //SONG_H_