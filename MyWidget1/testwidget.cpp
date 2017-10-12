#include "testwidget.h"
#include<QVBoxLayout>

TestWidget::TestWidget(QWidget *parent) : QWidget(parent)
{
    m_title = new QLabel(this);
    m_content = new QLabel(this);

    m_title->setText(tr("hello qt!"));
    m_content->setText(tr("Poor Choice!"));

    QVBoxLayout *l = new QVBoxLayout;
    l->addWidget(m_title);
    l->addWidget(m_content);
    this->setLayout(l);
}
