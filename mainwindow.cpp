#include "mainwindow.h"

#include <windows.h>

#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(1200,800);

    mainLayout = new QGridLayout(this);
    graph = new VisionGraph(GraphType::graphItem_Fitting,ToolButtonDirection::bottomDirection);
    connect(graph,SIGNAL(signal_PaintFinishedChanged(VisionItem*)),this,SLOT(slotTest(VisionItem*)));
//    graph->setToolButton_Direction(ToolButtonDirection::leftDirection);

    graph->getView()->setViewInfo_Pos(Corner::bottomRight);
    graph->show();
    mainLayout->addWidget(graph);

    QWidget *widget = new QWidget;
    this->setCentralWidget(widget);
    widget->setLayout(mainLayout);

    graph->setStyleSheet(QString::fromUtf8("QWidget{border:1px solid red;}"));


    QPointF p1 = QPointF(100,100);
    QPointF p2 = QPointF(120,200);
    QPointF p3 = QPointF(150,240);
    QPointF p4 = QPointF(200,300);
    QPointF p5 = QPointF(400,500);
    QPointF p6 = QPointF(500,550);
    QList<QPointF> lstP;
    lstP.append(p1);
    lstP.append(p2);
    lstP.append(p3);
    lstP.append(p4);
    lstP.append(p5);
    lstP.append(p6);

//    VisionItem* item = graph->_addChain(lstP);
//    VisionItem* item1 = graph->addLine(QLine(QPoint(100,100),QPoint(300,300)));
//    VisionItem* item = graph->addArc(p1,p2,p3);
//    connect(item,SIGNAL(destroyed(QObject*)),this,SLOT(slotDestoty(QObject*)));

    graph->setViewInfo_Visible(true);
    graph->setViewRegion_Color(Qt::red);
    graph->setViewInfo_Pos(Corner::bottomRight);
//    graph->setViewRegion_Size(1200,800);
//    graph->setViewType(ViewType::singleItem);
}

MainWindow::~MainWindow()
{

}

void MainWindow::slotTest(VisionItem *item)
{
    qDebug()<<item->getType();
}

void MainWindow::slotDestoty(QObject *)
{
    qDebug()<<"delect item";
}
