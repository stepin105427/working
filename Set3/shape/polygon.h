#ifndef __POLYGON_H
#define __POLYGON_H

#include"shape.h"

class Polygon:public IShape {
  int m_sides;
  public:
  Polygon(int);   //no.of sides
};

#endif
