#include <bits/stdc++.h>
#include <iostream>
#include <ostream>

using namespace std;

void explorePairs(){
  pair<int, int> p = {1, 3};

  cout << p.first << " " << p.second <<endl;

  pair<int, pair<int, int>> pp = {1, {12,33}};

  cout << pp.second.second << " " << pp.first << endl;

}
