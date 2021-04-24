#include "clientwidget.h"
#include "ui_clientwidget.h"
#include "socketlibrary.h"
#include <QDebug>
#include <boost/di.hpp>
#include <boost/di/extension/providers/runtime_provider.hpp>
namespace di = boost::di;

ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);
    di::extension::runtime_injector injector;
    SocketLibrary::initialReader(injector);
    qDebug() << QString::fromStdString(injector.create<Client>().foo());
    //qDebug() << QString::fromStdString(m_client->foo());
    qDebug() << "null obj";
}

ClientWidget::~ClientWidget()
{
    delete ui;
}
