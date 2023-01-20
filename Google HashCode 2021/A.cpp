#include <bits/stdc++.h>

using namespace std;


struct Car {
  int id;
};

// edge
struct InputStreet {
  int B; // intersection (id) at start of street
  int E; // intersection (id) at end of street
  string name;
  int L; // cost (time taken)
};


struct Intersection {
  int id;
};

struct Street {
  struct Intersection start;
  struct Intersection end;
  int L; // cost
  string name;
  // queue of cars
  queue<Car> cars;
};



int main() {
  int D, I, S, V, F;
  // take input
  cin >> D; // Duration of simulation
  cin >> I; // Number of intersections
  cin >> S; // no. of streets
  cin >> V; // no. of cars
  cin >> F; // bonus pts, reach before D

  vector <struct InputStreet> inputStreets;
  vector <struct Intersection> intersections;

  for (int i = 0; i < S; ++i) {
    struct InputStreet street;
    cin >> street.B;
    cin >> street.E;
    cin >> street.name;
    cin >> street.L;
    
    bool flag = true;
    for (auto intersection: intersections) {
      if (intersection.id == street.B) {
        flag = false;
        break;
      }
    }
    if (flag) {
      struct Intersection intersection;
      intersection.id = street.B;
      intersections.push_back(intersection);
    }
    // for E
    for (auto intersection: intersections) {
      if (intersection.id == street.E) {
        flag = false;
        break;
      }
    }
    
    if (flag) {
      struct Intersection intersection;
      intersection.id = street.E;
      intersections.push_back(intersection);
    }

    inputStreets.push_back(street);
  }

  vector <struct Street> streets;

  for (auto street: inputStreets) {
    struct Street modifiedStreet;
    modifiedStreet.L = street.L;
    modifiedStreet.name = street.name;
    // street.B
    if(find(inputStreets.begin(), inputStreets.end(), street.B)!=inputStreets.end())
        modifiedStreet.start = 
    // street.E
    modifiedStreet.end = 
  }
  
  



  return 0;
}

/*
6 4 5 2 1000
2 0 rue-de-londres 1
0 1 rue-d-amsterdam 1
3 1 rue-d-athenes 1
2 3 rue-de-rome 2
1 2 rue-de-moscou 3
4 rue-de-londres rue-d-amsterdam rue-de-moscou rue-de-rome
3 rue-d-athenes rue-de-moscou rue-de-londres
*/