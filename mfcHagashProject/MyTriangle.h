#pragma once
#include "MyShape.h"

class MyTriangle: public MyShape{
public:
	DECLARE_SERIAL(MyTriangle)
	void drawShape(CDC& dc);
	BOOL InArea(int x,int y) const;
private:
	CPoint midPoint;
};