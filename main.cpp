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

// func for calculating percent
double calculateWinPercent(FloorHockeyTeam& t); //pass structure by ref to avoid making copies

//func for making a floor hockey teams with stats
FloorHockeyTeam makeTeam(string n, int w,int l, int t, int g); // name, wins, losses, ties, goals

//func addTeam
FloorHockeyTeam addTeam(); // returns a new team

int main() {
	// if structure is in main, its local to main
	
	FloorHockeyTeam teams[20]; //can make it an array of 20 teams

	
	teams[0].name = "Kodiaks"; // thingOnTheRight is a member of the ThingOnTheLeft
	teams[0].wins = 10;
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
	cout << "\tWin Percent: " << calculateWinPercent(teams[0]) << endl;

	cout << teams[1].name << " goals for: " << teams[1].totalGoalsFor << endl;
	cout << "\tWin Percent: " << calculateWinPercent(teams[1]) << endl;

	//cout << team1.name << " goals for: " << team1.totalGoalsFor << endl;

	teams[2] = makeTeam("Raptors", 9, 0, 1, 33); // call for the make teams function
	cout << teams[2].name << " goals for: " << teams[2].totalGoalsFor << endl;
	cout << "\tWin Percent: " << calculateWinPercent(teams[2]) << endl;

	return 0;
}

double calculateWinPercent(FloorHockeyTeam& t) {
	
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

FloorHockeyTeam makeTeam(string n, int w,int l, int t, int g) {
	
	FloorHockeyTeam team;
	team.name = n; // OR team = {n, w, l, t, g};
	team.wins = w;
	team.losses = l;
	team.ties = t;
	team.totalGoalsFor = g;

	return team;
}

FloorHockeyTeam addTeam() {
	FloorHockeyTeam team;
	string teamName;

	
	cout << "Team name? ";
	cin >> teamName;

	team = makeTeam(teamName, 0, 0, 0, 0);
	// addTeamMembers(team); 
	return team;
}
