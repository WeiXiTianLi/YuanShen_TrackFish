#include "YuanShen_TrackFish.h"

#include <QString>
#include <QMouseEvent>
#include <QPropertyAnimation>

YuanShen_TrackFish::YuanShen_TrackFish(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);
	this->setAttribute(Qt::WA_TranslucentBackground, true);

}

void YuanShen_TrackFish::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		m_Press = event->globalPos();
		leftBtnClk = true;
	}
	event->ignore();
}

void YuanShen_TrackFish::mouseReleaseEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		leftBtnClk = false;
	}
	if (event->button() == Qt::RightButton)
	{
		this->close();
	}
	event->ignore();
}

void YuanShen_TrackFish::mouseMoveEvent(QMouseEvent *event)
{
	if (leftBtnClk)
	{
		m_Move = event->globalPos();
		this->move(this->pos() + m_Move - m_Press);
		m_Press = m_Move;
	}
	event->ignore();
	update();
}
