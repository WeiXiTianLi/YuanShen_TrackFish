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
};
