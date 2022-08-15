#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

class Executive {
private:
  vector<string> m_base;
  vector<string> results;
public:
  Executive();
  void init();
  void writeFile();
  void generatePermutations(vector<string> base, int start, int end, ofstream &stream);
};
#endif