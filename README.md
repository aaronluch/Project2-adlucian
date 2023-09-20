# CS2240 Project 1 - Aaron Luciano
*9/11/2023*

* **What each of the 5+ attributes represent**<br />
  * `rowid`: A unique integer indicating row in source data<br />
  *  `track`: Title of song track from data set<br />
  *  `album`: Title of album from respective song in the data set<br />
  *  `artist`: Name or names of artist(s) who the track was written by<br />
  *  `release`: String containing the year, month and day the track was release to spotify on<br />
  *  `genre`: The genre of the music from the respective track<br /> &nbsp;&nbsp;*note: genre is preassigned by spotify 
upon downloading each song / the playlists csv*<br />
  *  `duration`: Total duration of the track in milliseconds<br />
<br />
* **Where you got the data from**<br />
  * The data was all accumulated from my own personal playlists on spotify. They were not all one large playlist, 
but rather I had to convert the multiple CSV files into one general CSV file called "merged-playlists.csv" 
through the use of windows' built in terminal. To acquire all the CSV files, I used https://exportify.net, 
more information on the website.<br />
<br />

* **Why you chose that data set**<br />
  * I chose to use this data set because I knew immediately that it had more than 1000 entries, as well as a wide
variety of songs and data types to utilize; things such as release dates, genres, artists etc.<br />
<br />

* **How the rows are ordered by default**<br />
  * By default, the rows are ordered in ascending order starting at row 1 through the use of `rowid`. 
You can also consider this as "Track 1" among the combined playlists.<br />
<br />

* **How you know your functions work correctly**<br />
  * Upon completing, the output displays the size of the vector--that being it prints "Size of Vector: 1030 songs". 
This allows you to see that all pieces of the CSV file were parsed properly and read into the vector accordingly.
<br /><br />Additionally, I wrote tests for the individual functions, as well as the getters and setters which are 
declared in main. If they were to not complete, then the program would terminate.<br />
<br />

* **Why you chose that calculation for your data set**<br />
  * I chose a few different calculations for my data set, those being to calculate the total duration of all songs,
the average duration of all songs, as well as the average year of release. I primarily chose to do these because I
found it interesting and wanted to know *myself* what these pieces of information were and figured implementing them
would be a good choice for the viewer as well for easier understanding of the dataset rather than primarily millisecond
formats.<br />
<br />

* **Additional Sources**<br />
  * I utilized the assert statements given both in the example code and found here: https://en.cppreference.com/w/cpp/error/assert
  * Used static_cast from documentation found here: https://en.cppreference.com/w/cpp/language/static_cast

