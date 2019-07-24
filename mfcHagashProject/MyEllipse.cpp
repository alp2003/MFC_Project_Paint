#include "StdAfx.h"
#include "MyEllipse.h"

IMPLEMENT_SERIAL(MyEllipse,MyShape,1)



void MyEllipse::drawShape(CDC& dc)
{
	dc.Ellipse(begin.x,begin.y,end.x,end.y);

}

BOOL MyEllipse::InArea(int x,int y) const
{
	double xRadius = (end.x - begin.x) / 2.0;
	double yRadius = (begin.y - end.y) / 2.0;
	double xCentre = begin.x + xRadius;
	double yCentre = end.y + yRadius;
	double result;
	result = pow((x - xCentre),2.0)/pow(xRadius,2.0) + pow(y- yCentre,2.0)/pow(yRadius,2.0);
	return  (BOOL)(result <= 1.0);
}