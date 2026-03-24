#ifndef Terminal_H_
#define Terminal_H_

#include<iostream>

using namespace std;

class Terminal {
  private:
    string name;
    int peronCount;
    string city;

  public:
    Terminal(string name, int peronCount, string city);
};

#endif
