//I affirm that all code given below was written solely by me, Miquette Orren,
// and that any help I received adhered to the rules stated for this exam.
///////////////////////////////////
//Miquette Orren
//CS 172
//Exam 1 Playlist
//////////////////////////////////

#include <iostream>
#include <string>
#include "Song.h"
#include "Playlist.h"
using namespace std;


int main()
{
	//creating a song list
	static int numsongs = 10;
	Song songs[] = 
	{
		Song("Elevation", "Rock & Roll", "U2"),
		Song("More Than a Feeling", "Rock & Roll", "Boston"),
		Song("Money for Nothing", "Rock & Roll", "Dire Straits"),
		Song("Midnight Bottle", "Pop", "Colbie Caillat"),
		Song("I'm Ready - EP", "Pop", "AJR"),
		Song("This Girl", "Electronic", "Kungs"),
		Song("Summit", "Electronic", "Skrillex"),
		Song("This is Gospel", "Electronic", "Panic! At the Disco" ),
		Song("windows", "Folk", "Lewis Watson"),
		Song("Rocky Mountain High", "Folk", "John Denver")
	};

	//Make the playlist
	Playlist playlist("iRandomMusic");
	for (int i = 0; i < numsongs; i++)
		playlist.addSong(songs[i]);

	int errors = 0;

	//Does the playlist have the correct number of songs?
	if (numsongs != playlist.numberofSongs())
	{
		errors++;
		cout << "error: not counting songs correctly" << endl;
	}

	//Check the genre of one song
	if (playlist.playSong(2) == "")
	{
		errors++;
		cout << "error: genre of the third song is incorrect" << endl;
	}

	//checks to see if songs are within the bounds
	if (playlist.playSong(11) != "")
	{
		errors++;
		cout << "error: index out of range, not handled correctly" << endl;
	}

	//Checks for a genre
	if (!playlist.hasGenre("Folk"))
	{
		errors++;
		cout << "error: search for genre is incorrect" << endl;
	}

	if (errors == 0)
		cout << "Passed" << endl;
	else
		cout << "Errors: " << errors << endl;

	return errors;

	return 0;
}