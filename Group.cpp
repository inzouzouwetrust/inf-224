#include "Group.h"
#include <iostream>

using namespace std;

void Group::print(ostream & s) const {
  s << "The group " << getName() << " has the following media: " << endl;
  for (auto it : *this){
    it->print(s);
  }

}
