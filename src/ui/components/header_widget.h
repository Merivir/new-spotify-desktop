#ifndef HEADERWIDGET_H
#define HEADERWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>

namespace ui {
namespace components {

class HeaderWidget : public QWidget {
    Q_OBJECT
public:
    explicit HeaderWidget(QWidget *parent = nullptr);

private:
    QLabel *m_backgroundLabel;
    QPushButton *m_logoButton;
    void setupUi();
};

} // namespace components
} // namespace ui

#endif // HEADERWIDGET_H
