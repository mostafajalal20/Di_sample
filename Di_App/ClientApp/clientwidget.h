#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include "client.h"
namespace Ui {
class ClientWidget;
}

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();
    Client *m_client = nullptr;

private:
    Ui::ClientWidget *ui;
};

#endif // CLIENTWIDGET_H
