#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "visiongraph.h"

#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    VisionGraph *graph;

    QGridLayout* mainLayout;

private:
    QWidget *widget;

    //左侧按钮
    QPushButton *button_moive;
    QPushButton *button_shot;
    QPushButton *button_pictures;
    QPushButton *button_record;
    QPushButton *button_play;
    bool button_moiveIsClicked = false;
    bool button_recordIsClicked = false;

    QGridLayout *layout_label;
    QVBoxLayout *layout_button;
    QCheckBox *cbox;
    QPushButton *button;

    //右测
    QLabel *moive_label;
private slots:
    void slotTest(VisionItem* item);
    void slotDestoty(QObject*);
};

#endif // MAINWINDOW_H
