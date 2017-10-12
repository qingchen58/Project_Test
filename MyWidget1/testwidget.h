#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QWidget>
#include<QLabel>

class TestWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TestWidget(QWidget *parent = 0);

signals:

public slots:
private:
    QLabel * m_title;
    QLabel * m_content;
};

#endif // TESTWIDGET_H
