/*
Intro to structures
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct FloorHockeyTeam { // structs/classes use capital letter follow the style guide
	string name;
	int wins;
	int losses;
	int ties;
	int totalGoalsFor;
	vector<string> players;
	vector<string> positions;

}; // this is a statement so needs a semicolon

int main() {
	// if structure is in main, its local to main
	
	FloorHockeyTeam team1;
	team1.name = "Kodiaks";
	team1.wins = 10;
	team1.losses = 0;
	team1.ties = 0;
	team1.totalGoalsFor = 37;


	return 0;
}