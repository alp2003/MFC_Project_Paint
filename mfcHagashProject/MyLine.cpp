#include "StdAfx.h"
#include "MyLine.h"
IMPLEMENT_SERIAL(MyLine,MyShape,1)



void MyLine::drawShape(CDC& dc)
{
	dc.MoveTo(begin.x,begin.y);
	dc.LineTo(end.x,end.y);

}

BOOL MyLine::InArea(int x,int y) const
{
	float d1 = (float)((end.y-begin.y)*x-(end.x-begin.x)*y+(end.x*begin.y)-(end.y*begin.x));
	float d2 = (float)((end.y-begin.y)*(end.y-begin.y) + (end.x-begin.x)*(end.x-begin.x));
	float dist = abs( d1 ) / sqrt( d2 ) ;
	if( ( dist <= 0 && dist >= -10) || (dist >= 0 && dist <= 10) )
		return TRUE;

	return FALSE;
}