#include<iostream>
#include "bus.hpp"

const int MIN_SEAT_COUNT = 20;

Bus::Bus(int seatCount, Route route) {
  this->seatCount = seatCount;
  this->route.from = route.from;
  this->route.to = route.to;
};

bool Bus::startTrip() {
  return !(seatCount < MIN_SEAT_COUNT);
};
