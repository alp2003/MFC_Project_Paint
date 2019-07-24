#pragma once
#include "myrectangle.h"
class MySquare :
	public MyRectangle
{
public:
	DECLARE_SERIAL(MySquare)
	void drawShape(CDC& dc);
	BOOL InArea(int x,int y) const;
};

