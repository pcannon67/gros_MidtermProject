#ifndef pfMap_h
#define pfMap_h

#include "class_node.h"
#include <map>
#include <array>

class pfMap {
private:
  int width;   // number of nodes in horizontal direction
  int height;  // number of nodes in vertical direction


  std::map< std::array<int,2>, pfNode > nodes ;

public:
  // constructor to initialise the map with random nodes
  pfMap(int w, int h);

  void SetWidth(int w) ;
  void SetHeight(int h) ;

  int GetWidth(){ return width; }
  int GetHeigth(){ return height; }
  int GetNnodes(){ return width * height ; }

  // prints the map to std::cout
  int PrintMap();

};




#endif