#include <iostream>

enum class TrafficLight {Red, Yellow, Green};

std::string to_string(TrafficLight light){
  switch(light){
    case TrafficLight::Red: return "red";
    case TrafficLight::Yellow: return "yellow";
    case TrafficLight::Green: return "green";
  }
  return "unknown";
}
int main(){
  TrafficLight current = TrafficLight::Red;
  std::string color = to_string(current);
  if (current == TrafficLight::Red){
    std::cout << "Current traffic light: " << color << "\nStop !!" << '\n';
  }
  int colorNumber = static_cast<int>(current);
  std::cout << "Current color enum id " << colorNumber << '\n';
}
