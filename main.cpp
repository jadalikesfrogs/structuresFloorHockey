/*
Intro to structures
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct FloorHockeyTeam { // structs/classes use capital letter follow the style guide
	string name;
	int wins = 0;
	int losses = 0;
	int ties = 0;
	int totalGoalsFor = 0;
	vector<string> players;
	vector<string> positions;

}; // this is a statement so it needs a semicolon

double calculateWinPercent(FloorHockeyTeam& t); //pass structure by ref to avoid making copies

int main() {
	// if structure is in main, its local to main
	
	FloorHockeyTeam teams[20]; //can make it an array of 20 teams

	
	teams[0].name = "Kodiaks"; // thingOnTheRight is a member of the ThingOnTheLeft
	teams[0].losses = 0;
	teams[0].ties = 0;
	teams[0].totalGoalsFor = 37;
	/*team1.wins = 10;
	team1.losses = 0;
	team1.ties = 0;
	team1.totalGoalsFor = 37;
	*/
	teams[1] = {"Dinos", 9, 0, 1, 31};

	// can list them like araay. order matters: FloorHockeyTeam team2 = {"Dinos", 9, 0, 1, 31}; 

	cout << teams[0].name << " goals for: " << teams[0].totalGoalsFor << endl;
	cout << teams[1].name << " goals for: " << teams[1].totalGoalsFor << endl;

	//cout << team1.name << " goals for: " << team1.totalGoalsFor << endl;

	return 0;
}

double calculateWinPercent(FloorHockeyTeam& t){
	
	double teamWinPercent = 0.0;
	int totalGames = t.wins + t.losses + t.ties;

	if (totalGames > 0) {
		teamWinPercent = (t.wins * 100.0) / totalGames;
	}
	else {
		teamWinPercent = 0.0;
	
	}
	return teamWinPercent;
}
