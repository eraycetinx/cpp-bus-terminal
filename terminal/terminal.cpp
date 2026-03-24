#include <iostream>
#include "terminal.hpp"

using namespace std;

Terminal::Terminal(string name, int peronCount, string city) {
  this->name = name;
  this->peronCount = peronCount;
  this->city = city;
}
