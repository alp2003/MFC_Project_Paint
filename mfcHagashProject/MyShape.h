#pragma once
#include <cmath>

class MyShape :public CObject
{
public:
	DECLARE_SERIAL(MyShape)
	MyShape();
	virtual ~MyShape();
	void setBegin(CPoint point);
	void setEnd(CPoint point);
	CPoint getBegin()const;
	CPoint getEnd()const;
	virtual void drawShape(CDC& dc);
	virtual void draw(CDC& dc);
	void setForeGround(COLORREF& color);
	void setBackGround(COLORREF& color);
	void setPenWidth(int penWd);
	COLORREF getForeGround();
	COLORREF getBackGround();
	void Serialize(CArchive& ar);
	virtual BOOL InArea(int,int) const;
	const MyShape & operator= (const MyShape&);
	int getPenWidth();
protected:
	CPoint begin,end;
	COLORREF foreGroundCL,BackGroundCL;
	int penWidth;
};

