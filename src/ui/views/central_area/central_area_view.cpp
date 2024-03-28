#include "central_area_view.h"

#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace views
{

CentralAreaView::CentralAreaView(QWidget *parent)
    : QWidget{parent}
    , width(25)
{
    this->setAttribute(Qt::WA_StyledBackground, true);
    this->setStyleSheet("CentralAreaView {border: 2px solid black;}");

    QVBoxLayout *layout = new QVBoxLayout();

    QHBoxLayout *button_layout = new QHBoxLayout();

    m_previous_window = new QPushButton();
    m_next_window = new QPushButton();

    SetupButton(m_previous_window, QIcon("/home/merivirabyan/new-spotify-desktop/resources/previous.png"));
    SetupButton(m_next_window, QIcon("/home/merivirabyan/new-spotify-desktop/resources/next.png"));

    button_layout->addWidget(m_previous_window);
    button_layout->addWidget(m_next_window);
    button_layout->addStretch();


    layout->addLayout(button_layout);

    components::SongPlaylistWidget* playlist1 = new components::SongPlaylistWidget("Title of the section", this);
    layout->addWidget(playlist1);

    components::SongPlaylistWidget* playlist2 = new components::SongPlaylistWidget("Title of the section", this);
    layout->addWidget(playlist2);

    this->setLayout(layout);
}

void CentralAreaView::SetupButton(QPushButton* button, const QIcon& icon) {
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

}
}
