
// mfcHagashProjectDlg.h : header file
//
/*
name:Alexander Pekker
id: 321730327
marze: Michael Kiperberg
*/
#pragma once
#include <vector>
#include <stack>
#include "MyShape.h"



#include "MyLine.h"
#include "MyRectangle.h"
#include "MyEllipse.h"
#include "MyTriangle.h"
#include "MyRoundedRect.h"
#include "MySquare.h"

#include "afxcolorbutton.h"
#include "afxwin.h"

// CmfcHagashProjectDlg dialog
class CmfcHagashProjectDlg : public CDialogEx
{
// Construction
	
public:
	enum Fig{Line,Rectangle,Ellipse,Triangle,RoundRectangle,Square};
	Fig currFigure;
	CmfcHagashProjectDlg(CWnd* pParent = NULL);	// standard constructor
	virtual ~CmfcHagashProjectDlg();
	CStatusBar m_stat;
	CMenu* p_menu;
	CToolTipCtrl m_tool;
// Dialog Data
	enum { IDD = IDD_MFCHAGASHPROJECT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CToolBar m_myToolBar;
	CTypedPtrArray< CObArray, MyShape*> shapes,redo;
	MyShape *shapePtr;
	bool isPressed;
	bool isErased;
	bool isSelected;
	MyShape *selectShape;
	CPoint start,end;
	int penWidth;
	CBrush brush;
	bool m_ischangeCL;
	bool m_ischangeCL2;
	bool m_ispenWidth;
	bool deleteOBJ;
	int indexSaver;
	bool m_isErased;
public:
	afx_msg void OnAboutAboutpaint();
	
	afx_msg void OnFileExit();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnFileNew32771();
	afx_msg void OnEditUndo32775();
	afx_msg void OnEditRedo32776();
	afx_msg void OnIdiEditUndo();
	afx_msg void OnIdiEditRedo();
	afx_msg void OnFileSave32772();
	afx_msg void OnFileLoad();
	afx_msg void OnIdiFileLoad();
	COLORREF m_selectCL;
	afx_msg void OnBnClickedMfccolorbutton2();
	CMFCColorButton m_colorCTRL;
	afx_msg void OnShapesLine();
	afx_msg void OnShapesRectangle();
	afx_msg void OnShapesEllipse();
	CMFCColorButton m_colorCtrl2;
	COLORREF m_selectCL2;
	afx_msg void OnBnClickedMfccolorbutton3();
	afx_msg void OnIdiShapeLine();
	afx_msg void OnIdiShapeRect();
	afx_msg void OnIdiShapeEllipse();
	afx_msg void OnIdiClearfile();
	afx_msg void OnOptionsEditfgcolor();
	afx_msg void OnOptionsEditbgcolor();
	CComboBox m_comboCtrl;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnPenwidthSize1();
	afx_msg void OnPenwidthSize2();
	afx_msg void OnPenwidthLarge();
	afx_msg void OnIdiFileSave();
	afx_msg void OnIdiShapeTria();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnShapesTriangle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg void OnInitMenu(CMenu* pMenu);
	afx_msg void OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnIdiShapeRoundedr();
	afx_msg BOOL OnToolTipText(UINT, NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnShapesRoundrect();

	CStatic m_staticPic;
	afx_msg void OnIdiShapeSquare();
	afx_msg void OnShapesSquare();
	afx_msg void OnButtonRec();
	afx_msg void OnEditEraseshape();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnButtonBgcolor();
	afx_msg void OnButtonFgcolor();
};
