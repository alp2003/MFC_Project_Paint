/*
name:Alexander Pekker
id: 321730327
marze: Michael Kiperberg
*/
#pragma once
#include "myshape.h"
class MyEllipse :
	public MyShape
{
public:
	DECLARE_SERIAL(MyEllipse)
	void drawShape(CDC& dc);
	BOOL InArea(int x,int y) const;
};

