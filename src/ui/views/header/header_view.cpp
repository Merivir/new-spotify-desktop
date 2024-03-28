#include "header_view.h"

#include <QLabel>
#include <QHBoxLayout>

namespace ui
{
namespace views
{

HeaderView::HeaderView(QWidget *parent)
    : QWidget{parent}
    , m_search_bar(new ui::components::SearchBar(this))
    , m_message_button(new QPushButton(this))
    , m_notification_button(new QPushButton(this))
    , width(25)
{
    this->setAttribute(Qt::WA_StyledBackground, true);
    this->setStyleSheet("HeaderView {border: 2px solid black; background-color: red}");

    QHBoxLayout* layout = new QHBoxLayout(this);

    SetupButton(m_message_button, QIcon("/home/merivirabyan/new-spotify-desktop/resources/message.png"));
    SetupButton(m_notification_button, QIcon("/home/merivirabyan/new-spotify-desktop/resources/bell.png"));

    layout->addWidget(m_search_bar);
    layout->addWidget(m_message_button);
    layout->addWidget(m_notification_button);

    this->setLayout(layout);
}

void HeaderView::SetupButton(QPushButton* button, const QIcon& icon) {
    const QSize iconSize(width, width);
    button->setIcon(icon);
    button->setIconSize(iconSize);
    button->setFixedSize(iconSize);
    button->setStyleSheet(
        "QPushButton {"
        "background-color: transparent;"
        "border: none;"
        "}"
    );
}


} // namespace views
} // namespace ui
