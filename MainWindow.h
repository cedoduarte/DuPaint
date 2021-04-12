#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
class MainWindow;
}

class QPainter;
class QImage;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;
    void mouseMoveEvent(QMouseEvent *e) override;
    void mouseReleaseEvent(QMouseEvent *e) override;
private slots:
    void on_actionTamanyo_triggered();
    void on_actionColor_triggered();
    void on_actionQuitar_triggered();
private:
    Ui::MainWindow *ui;
    QPainter *mPainter; // pinta
    QImage *mImage;     // imagen
    QPoint mBegin;      // inicio
    QPoint mEnd;        // final
    QColor mColor;      // color
    bool mEnabled;      // activado
    int mSize;          // tamaño
};

#endif // MAINWINDOW_H
