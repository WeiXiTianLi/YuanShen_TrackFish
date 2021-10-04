#pragma once

#include <QtWidgets/QWidget>
#include "ui_YuanShen_TrackFish.h"

class YuanShen_TrackFish : public QWidget
{
    Q_OBJECT

public:
    YuanShen_TrackFish(QWidget *parent = Q_NULLPTR);

private:
    Ui::YuanShen_TrackFishClass ui;

private:
	QPoint m_Press;
	QPoint m_Move;
	bool leftBtnClk = false;

	//HWND ysHandle;
	//RECT ysRect;
private:
	void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	//void paintEvent(QPaintEvent *);

	//void syncToYuanShen();
	//void syncToThis();

private slots:
	//void StartMove();

};
