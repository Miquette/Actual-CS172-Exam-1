#ifndef PLAYLIST_H_
#define PLAYLIST_H_


#include <iostream>
#include <string>
#include "Song.h"
using namespace std;

//defines a class where a playlist of songs can be created
class Playlist
{
private:
	//set a static variable for max songs, original number of songs in the playlist, the name of the playlist
	//and an array which will hold the playlists
	static const int MAX_SONGS = 15;
	int numSongs = 0;
	string name;
	Song songarray[MAX_SONGS];
public:
	//constructor for the playlist
	Playlist(string myname)
	{
		name = myname;
	}

	//retreives name of playlist
	string getname()
	{
		return name;
	}

	//returns true when at least one song of this genre is present
	bool hasGenre(string genre)
	{
		if (genre == "Rock & Roll" || genre == "Folk" || genre == "Electronic" || genre == "Pop")
		{
			return true;
		}
		else
		{
			cout << "Invalid genre for this playlist. The song must be Pop, Rock & Roll, Folk, or Electronic." << endl;
			return false;
		}
	}

	//Add new song to the playlist
	void addSong(Song song)
	{
		if (numSongs < MAX_SONGS)
		{
			songarray[numSongs] = song;
			numSongs++;
		}
	}

	//How many songs in this playlist
	int numberofSongs()
	{
		return numSongs;
	}

	//Play a song, or return song title in this case
	string playSong(int songNumber)
	{
		return songarray[songNumber].gettitle();
	}

};

#endif //PLAYLIST_H_