/*
name:Alexander Pekker
id: 321730327
marze: Michael Kiperberg
*/
#pragma once
#include "myshape.h"
class MyRectangle :
	public MyShape
{
public:
	DECLARE_SERIAL(MyRectangle)
	void drawShape(CDC& dc);
	BOOL InArea(int x,int y) const;
};

