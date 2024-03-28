#include "media_control_widget.h"

#include <QHBoxLayout>
#include <QVBoxLayout>

namespace ui {
namespace components {

MediaControlWidget::MediaControlWidget(QWidget *parent)
    : QWidget(parent)
    , m_friends_box(new QComboBox(this))
    , m_next_music_info(new QLabel("Next: Song Title - Artist", this))
    , m_play_next_music(new QPushButton(this))
    , width(25)
{
    SetupUI();
}

void MediaControlWidget::SetupUI()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    QHBoxLayout *next_music_layout = new QHBoxLayout();

    m_friends_box->addItem("Send To a Friend...");

    SetupButton(m_play_next_music, QIcon("/home/merivirabyan/new-spotify-desktop/resources/play_button.png"));

    next_music_layout->addWidget(m_next_music_info);
    next_music_layout->addWidget(m_play_next_music);

    layout->addStretch();
    layout->addWidget(m_friends_box);
    layout->addLayout(next_music_layout);
    layout->addStretch();

    this->setLayout(layout);
}

void MediaControlWidget::SetupButton(QPushButton* button, const QIcon& icon) {
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

} // components
} // ui
