#include "song_playlist_widget.h"

namespace ui {
namespace components {

SongPlaylistWidget::SongPlaylistWidget(const QString &sectionTitle, QWidget *parent) : QWidget(parent) {
    setupUi(sectionTitle);
}

void SongPlaylistWidget::setupUi(const QString &section_title) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    QHBoxLayout *title_layout = new QHBoxLayout();

    m_title_label = new QLabel(section_title, this);
    m_see_all_button = new QLabel("See All", this);

    title_layout->addWidget(m_title_label);
    title_layout->addStretch(1);
    title_layout->addWidget(m_see_all_button);


    QHBoxLayout *cards_layout = new QHBoxLayout();

    for (int i = 0; i < 5; ++i) {
        QPixmap artwork("/home/merivirabyan/new-spotify-desktop/resources/album.jpg");
        ui::components::MusicCard *songCard = new ui::components::MusicCard("Title", artwork, this);
        songCard->setFixedSize(135, 165);
        songCard->setStyleSheet("border: 1px solid #000000;");
        cards_layout->addWidget(songCard);
    }

    layout->addLayout(title_layout);
    layout->addLayout(cards_layout);
    layout->addStretch(1);

    setLayout(layout);
}

} // namespace components
} // namespace ui
