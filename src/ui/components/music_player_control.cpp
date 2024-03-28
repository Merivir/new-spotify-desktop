#include "music_player_control.h"

#include <QHBoxLayout>

namespace ui {
namespace components {

MusicPlayerControl::MusicPlayerControl(QWidget *parent)
    : QWidget(parent)
    , m_current_time_label(new QLabel("0:00", this))
    , m_total_time_label(new QLabel("0:00", this))
    , m_progress_slider(new QSlider(Qt::Horizontal, this))
    , m_play_button(new QPushButton(this))
    , m_next_button(new QPushButton(this))
    , m_previous_button(new QPushButton(this))
    , m_shuffle_button(new QPushButton(this))
    , m_repeat_button(new QPushButton(this))
    , width(25)
    , height(25)
{
    SetupUi();
}

void MusicPlayerControl::SetupUi()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    QHBoxLayout *button_layout = new QHBoxLayout();
    QHBoxLayout *slider_layout = new QHBoxLayout();

    button_layout->setSpacing(5);
    button_layout->setContentsMargins(0, 0, 0, 0);

    m_progress_slider->setRange(0, 100);
    m_progress_slider->setValue(0);

    const QSize iconSize(width, width);

    SetupButton(m_play_button, QIcon("/home/merivirabyan/new-spotify-desktop/resources/play_music.png"), iconSize);
    SetupButton(m_next_button, QIcon("/home/merivirabyan/new-spotify-desktop/resources/next_music.png"), iconSize);
    SetupButton(m_previous_button, QIcon("/home/merivirabyan/new-spotify-desktop/resources/previous_music.png"), iconSize);
    SetupButton(m_shuffle_button, QIcon("/home/merivirabyan/new-spotify-desktop/resources/shuffle_music.png"), iconSize);
    SetupButton(m_repeat_button, QIcon("/home/merivirabyan/new-spotify-desktop/resources/repeat_once_music.png"), iconSize);

    slider_layout->addWidget(m_current_time_label);
    slider_layout->addWidget(m_progress_slider);
    slider_layout->addWidget(m_total_time_label);

    button_layout->addWidget(m_shuffle_button);
    button_layout->addWidget(m_previous_button);
    button_layout->addWidget(m_play_button);
    button_layout->addWidget(m_next_button);
    button_layout->addWidget(m_repeat_button);

    layout->addStretch();
    layout->addLayout(button_layout);
    layout->addLayout(slider_layout);
    layout->addStretch();

    setLayout(layout);
}

void MusicPlayerControl::SetupButton(QPushButton* button, const QIcon& icon, const QSize& iconSize) {
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
