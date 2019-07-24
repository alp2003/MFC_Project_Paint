#include "stdafx.h"
#include "MyTriangle.h"

IMPLEMENT_SERIAL(MyTriangle,MyShape,1)

	

void MyTriangle::drawShape(CDC& dc)
{
	
	midPoint.y=end.y;
	midPoint.x=begin.x- (end.x - begin.x); 

	CPoint arr[3]={begin,midPoint,end};
	
	dc.Polygon(arr,3);
}

BOOL  MyTriangle::InArea(int x,int y) const
{
	int as_x = x-begin.x;
	int as_y = y-begin.y;

	bool s_ab = (midPoint.x-begin.x)*as_y-(midPoint.y-begin.y)*as_x > 0;

	if((end.x-begin.x)*as_y-(end.y-begin.y)*as_x > 0 == s_ab) return FALSE;

	if((end.x-midPoint.x)*(y-midPoint.y)-(end.y-midPoint.y)*(x-midPoint.x) > 0 != s_ab) return FALSE;

	return TRUE;
}