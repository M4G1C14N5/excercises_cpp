/*
 * Author: Thomas Tsangou 
 * Course: CSCI-136
 * Instructor: 
 * Assignment:  Lab10A
 * instruction: 

*/
#include <iostream>
#include <cmath>
using namespace std;

// define datatype(class) for storing time 
class Time{
public:
    int h; // for number of hours 
    int m; // for number of minutes 
};

// print out time in HH:MM format
void printTime(Time time) {
    cout << "Time: " << time.h << ":" << time.m << endl;
}

//Part A
// 1st function should return the number of minutes from 0:00AM until time.
int minutesSinceMidnight(Time time){
    int total = (60*time.h)+time.m;
    return total;
}
// 2nd function receive two Time arguments earlier and later and report how many minutes separate the two moments
int minutesUntil(Time earlier, Time later){
    int minE = (60*earlier.h)+earlier.m;
    int minL = (60*later.h)+later.m;
    int total = minL-minE;
    return total;

}

// Part B 
// create and return a new moment of time that is min minutes after time0
Time addMinutes(Time time0, int min){
    return {time0.h + (time0.m + min)/60, (time0.m + min)%60};
}

// Let's add new datatypes
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER}; // Enum types work as sets of named values.
                                                       // A variable of type Genre can assume 
                                                       // any of the values listed in the curly braces
// Movie datatype
// includes title, genre, and duration 
class Movie { 
public: 
    string title;    // 
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};
// timeslot datatype
class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

// to print out the movie
void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

// Part C
void printTimeSlot(TimeSlot ts){
    Time endingTime = addMinutes(ts.startTime, ts.movie.duration);
    printMovie(ts.movie);
    cout << "[starts at " << ts.startTime.h <<  ":" << ts.startTime.m << ", ends by " << endingTime.h << ":" << endingTime.m << "]" << endl;
}

// Part D
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot nextTimeSlot;
    nextTimeSlot.startTime = addMinutes(ts.startTime, ts.movie.duration);
    nextTimeSlot.movie = nextMovie;
    return nextTimeSlot;
}

// part E
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    // Determine which time slot is earlier
    int time_diff = minutesUntil(ts1.startTime, ts2.startTime);
    if (time_diff > 0){         //ts1 is earlier, ts2 is later
        return ts1.movie.duration >time_diff;
    }
    // Otherwise (time_diff < 0), meaning ts1 is later, ts2 is earlier
    return ts2.movie.duration > -time_diff;
}




int main(){

    // Part C
    // to test printTimeSlot
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    
    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}};
    
    /*
    // Part A
    // to test minutesSinceMidnight function 
    Time now;   // creates a new variable (or object) with time datatype
    now.h; // assigns hours field 
    now.m; // assigns its minutes field 
    cout << "Enter hours: ";
    cin >> now.h;
    cout << "Enter minutes: ";
    cin >> now.m;
    
    printTime(now);
    cout << "Minutes since midnight: " << minutesSinceMidnight(now) << endl;
    
    // Part A
    // to test minutesUntil function 
    Time earlier;
    earlier.h;
    earlier.m;
    
    Time later;
    later.h;
    later.m;
    
    cout << "Enter hours for starting time: ";
    cin >> earlier.h;
    cout << "Enter minutes for starting time: ";
    cin >> earlier.m;
    
    cout << "Enter hours for ending time: ";
    cin >> later.h;
    cout << "Enter minutes for ending time: ";
    cin >> later.m;
    
    cout << "starting ";
    printTime(earlier);
    cout << "ending ";
    printTime(later);
    
    cout << "Minutes passed: " << minutesUntil(earlier,later);
    
    // Part B
    // to test addMinutes
    Time time;
    time.h;
    time.m;
    int minAdded;
    cout << "Enter hours: ";
    cin >> time.h;
    cout << "Enter minutes: ";
    cin >> time.m;
    cout << "How many minutes do you want to add";
    cin >> minAdded;
    
    cout << "The new time is " << addMinutes(time,minAdded);
    
   */
}


