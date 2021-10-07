#include <iostream>
#include <string>
using namespace std;

struct timeOfDay{
  short Hour;
  short Minute;
  short Second;
};

struct appDate{
  short dayOfMonth;
  short month;
  int year;
};

struct event{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
};

//task 1 program 1
event* init_event(){
  event* temp = new event;
  temp->eventName = "My Birthday!";
  temp->isUrgent = true;
  temp->eventTime.Hour = 12;
  temp->eventTime.Minute = 35;
  temp->eventTime.Second = 26;
  temp->eventDate.dayOfMonth = 20;
  temp->eventDate.month = 4;
  temp->eventDate.year = 2020;
  return temp;
}

int main(){
  return 0;
}