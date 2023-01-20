#include <vector>
#include <bits/stdc++.h>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
    map<string, int> scores;
  string totWinner = "";
    for(int i = 0; i< results.size(); i++){
      string winner = competitions[i][!(results[i])];
      scores[winner]+=3;
      totWinner = scores[winner]>scores[totWinner]?winner:totWinner;
    }
  return totWinner;
}
