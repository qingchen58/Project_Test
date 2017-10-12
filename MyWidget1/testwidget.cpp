#include "testwidget.h"
#include<QVBoxLayout>

TestWidget::TestWidget(QWidget *parent) : QWidget(parent)
{
    m_title = new QLabel(this);
    m_title->setText(tr("hello qt!"));

    QVBoxLayout *l = new QVBoxLayout;
    l->addWidget(m_title);
    this->setLayout(l);
}
