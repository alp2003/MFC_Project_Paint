/*
name:Alexander Pekker
id: 321730327
marze: Michael Kiperberg
*/
#pragma once
#include "myshape.h"
class MyRoundedRect :
	public MyShape
{
public:
	DECLARE_SERIAL(MyRoundedRect)
	void drawShape(CDC& dc);
	BOOL InArea(int x,int y) const;
};
