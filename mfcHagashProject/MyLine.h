/*
name:Alexander Pekker
id: 321730327
marze: Michael Kiperberg
*/
#pragma once
#include "myshape.h"
class MyLine :
	public MyShape
{
public:
	DECLARE_SERIAL(MyLine)
	void drawShape(CDC& dc);
	BOOL InArea(int x,int y) const;
	
};

