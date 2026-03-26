#ifndef Bus_H_
#define Bus_H_

#include<iostream>

using namespace std;

struct Route {
  string from;
  string to;
};

class Bus {
  private:
    int seatCount;
    Route route;

  public:
    Bus(int seatCount, Route route);
    bool startTrip();
};

#endif
