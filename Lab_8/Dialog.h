#pragma once
#include "Vector.h"
using namespace std;

class Dialog :
	public Vector
{
public:
	Dialog(void);//���������� public:
	virtual ~Dialog(void);//����������
	virtual void GetEvent(TEvent& event);//�������� ������� 
	virtual int Execute();//������� ���� ��������� ������� 
	virtual void HandleEvent (TEvent& event); //����������
	virtual void ClearEvent (TEvent& event);//�������� ������� 
	int Valid();//�������� �������� EndState
	void EndExec();//��������� ������� ������ ������� 
protected:	
	int EndState;
};