/**
 * Aaron Luciano
 * CS2240
 * Section A
 * 9-20-2023
 * Project 2
 */

#include "Song.h"
using namespace std;

int main(){
    std::vector<Song> songs;

    // Separator for formatting and presentation
    int separatorLength = 42;
    string separator (separatorLength, '-');

    // Read data from file into songs vector
    getDataFromFile(songs);

    // Testing getters and setters functions to verify everything working correctly
    testSongs();

    // Return size of the vector
    cout << "\n" << separator << "\nSize of Vector: " << songs.size()
    << " songs\n"<< separator << endl;

    // Prints total duration of all songs
    cout << "Total Duration of All Songs: " << calculateTotalDuration(songs) << " (ms)" << endl;

    // Converting total duration into hours and minutes
    int durationHours = static_cast<int>(calculateTotalDuration(songs) / 3600000); // ms to hours
    int durationMinutes = static_cast<int>(calculateTotalDuration(songs) % 3600000 / 60000);
    cout << "or\nTotal Duration of All Songs: " << durationHours << " hr " << durationMinutes
    << " min" << endl;

    // Prints average duration of all songs in ms
    cout << separator << "\nAverage Duration: " << averageDuration(songs) << " (ms)\nor" << endl;

    // Converting average duration into xx:xx format (min:sec)
    int minutes = static_cast<int>(averageDuration(songs)) / 60000; // ms to minutes
    int seconds = (static_cast<int>(averageDuration(songs)) % 60000) / 1000; // remaining seconds

    // Prints average duration in xx:xx format
    cout << "Average Duration: " << minutes << ":" <<
    seconds << " (min:sec)\n" << separator << endl;

    // Prints average release year from all songs
    cout << "Average Year of Release: " << getAverageReleaseYears(songs) <<
    "\n" << separator << endl;

    return 0;
}
