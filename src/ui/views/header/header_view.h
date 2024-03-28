#ifndef HEADERVIEW_H
#define HEADERVIEW_H

#include "src/ui/components/search_bar.h"

#include <QWidget>
#include <QPushButton>
#include <QIcon>

namespace ui
{
namespace views
{

class HeaderView : public QWidget
{
    Q_OBJECT
public:
    explicit HeaderView(QWidget *parent = nullptr);

private:
    ui::components::SearchBar *m_search_bar;
    QPushButton *m_message_button;
    QPushButton *m_notification_button;

    const int width;

    void SetupButton(QPushButton* button, const QIcon& icon);


signals:
};

} // namespace views
} // namespace ui

#endif // HEADERVIEW_H
