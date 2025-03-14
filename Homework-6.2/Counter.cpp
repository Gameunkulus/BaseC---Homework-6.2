
#include <iostream>
#include "Counter.h"
using namespace std;


Counter::Counter(){ this->count = 1; }
Counter::Counter(int count) { this->count = count; };
void Counter::add() { count++;};
void Counter::remove() { count--;}
void Counter::mes() {cout << count << endl;}