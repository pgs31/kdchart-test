#include <QApplication>
#include <QMainWindow>
#include <KDChartChart>
#include <KDChartLineDiagram>    
   #include <KDChartWidget>
 
 
using namespace KDChart;

int main(int argc, char** argv)
{
    QApplication app( argc, argv );  
    QMainWindow* w = new QMainWindow();
//    Chart* m_chart = new Chart(w);     
    Widget* widget = new Widget( w );
    w->setCentralWidget(widget);
    widget->addHeaderFooter("foo", HeaderFooter::Header, KDChartEnums::PositionNorth);
    widget->setType(Widget::Plot);
    w->show();
    return app.exec();
}
