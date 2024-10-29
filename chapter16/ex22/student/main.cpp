#include <iostream>

#include <fstream>

#include <string>

#include <iomanip>

using namespace std;

const int NO_OF_CANDIDATES = 6;

const int NO_OF_REGIONS = 4;

void printHeading();

void initialize(int vbRegion[][NO_OF_REGIONS], int tVotes[],

int noOfRows);

void getCandidatesName(ifstream& inp, string cNames[],

int noOfRows);

void sortCandidatesName(string cNames[], int noOfRows);

int binSearch(string cNames[], int noOfRows, string name);

void processVotes(ifstream& inp, string cNames[],

int vbRegion[][NO_OF_REGIONS],

int noOfRows);

void addRegionsVote(int vbRegion[][NO_OF_REGIONS],

int tVotes[], int noOfRows);

void printResults(string cNames[],

int vbRegion[][NO_OF_REGIONS],

int tVotes[], int noOfRows);

int main()

{

//Declare variables; Step 1

string candidatesName[NO_OF_CANDIDATES];

int votesByRegion[NO_OF_CANDIDATES][NO_OF_REGIONS];

int totalVotes[NO_OF_CANDIDATES];

ifstream infile;

infile.open("candData.txt"); //Step 2

if (!infile) //Step 3

{

cout << "Input file (candData.txt) does "

<< "not exit." << endl;

return 1;

}

getCandidatesName(infile, candidatesName,

NO_OF_CANDIDATES); //Step 4

sortCandidatesName(candidatesName,

NO_OF_CANDIDATES); //Step 5

infile.close(); //Step 6

infile.clear(); //Step 6

infile.open("voteData.txt"); //Step 7

if (!infile) //Step 8

{

cout << "Input file (voteData.txt) does"

<< "not exist." << endl;
    return 1;

}

initialize(votesByRegion, totalVotes,

NO_OF_CANDIDATES); //Step 9

processVotes(infile, candidatesName,

votesByRegion, NO_OF_CANDIDATES); //Step 10

addRegionsVote(votesByRegion, totalVotes,

NO_OF_CANDIDATES); //Step 11

printHeading(); //Step 12

printResults(candidatesName,votesByRegion,

totalVotes, NO_OF_CANDIDATES); //Step 13

return 0;

}