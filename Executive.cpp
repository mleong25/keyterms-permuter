#include "Executive.h"

void Executive::init() {
  string input;
  do {
    cout << "\t-> ";
    getline(std::cin, input);
    if (!input.empty()) {
      m_base.push_back(input);
    }
  } while (!input.empty());

  cout << "Generating keyterms with " << m_base.size() << " base words: ";
  for (vector<string>::iterator t = m_base.begin(); t != m_base.end(); ++t) {
    cout << *t << " ";
  }
  cout << "\n";

  writeFile();
  cout << "\nComplete! Open results.txt to view your your results.\n";
}

void Executive::writeFile() {
  ofstream resultsFile;
  resultsFile.open("results.txt");
  cout << "\nGenerating your keyterms...";
  generatePermutations(m_base, 0, m_base.size() - 1, resultsFile);
  resultsFile.close();
}

// Function to store permutations of string 
// 1. Base set of strings
// 2. Starting index of the base
// 3. Ending index of the base 
void Executive::generatePermutations(vector<string> base, int start, int end, ofstream &stream) {
  // Base case 
  if (start == end) {
    for (vector<string>::iterator t = base.begin(); t != base.end(); ++t) {
      stream << *t << " ";
    }
    stream << endl;
  } else { 
    // Permutations made 
    for (int i = start; i <= end; i++) { 
      // Swapping done 
      swap(base[start], base[i]); 

      // Recursion called 
      generatePermutations(base, start+1, end, stream); 

      //backtrack 
      swap(base[start], base[i]); 
    } 
  } 
} 

Executive::Executive() {
}