// COMP2811 Coursework 1: Quake class

#include <stdexcept>
#include "quake.hpp"

using namespace std;


Quake::Quake(const string& tm, double lat, double lon, double dep, double mag):
  time(tm), latitude(lat), longitude(lon), depth(dep), magnitude(mag)
{
  // Check depth not negative
  if (depth<0){
    throw invalid_argument("Invalid argument: Depth cannot be negative");
  }
  // Chech magnitude not negative
  if (magnitude<0){
    throw invalid_argument("Invalid argument: Magnitute cannot be negative");
  }
  // Check latitude in valid range (-90 to 90)
  if (latitude<-90 || latitude >90){
    throw invalid_argument("Invalid argument: Latitude not within valid range");
  }
  //Check longitude in valid range (-180 to 180)
  if (longitude<-180 || longitude >180){
    throw invalid_argument("Invalid argument: Longitude not within valid range");
  }
}


ostream& operator<<(ostream& out, const Quake& quake)
{
  return out << "Time: " << quake.getTime()
             << "\nLatitude: " << quake.getLatitude() << " deg"
             << "\nLongitude: " << quake.getLongitude() << " deg"
             << "\nDepth: " << quake.getDepth() << " km"
             << "\nMagnitude: " << quake.getMagnitude() << endl;
}
