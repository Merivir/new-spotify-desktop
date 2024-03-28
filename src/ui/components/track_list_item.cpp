#include "track_list_item.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

namespace ui
{
namespace components
{


TrackListItem::TrackListItem(QWidget *parent)
    : QWidget(parent)
    , m_song_title_label(new QLabel(this))
    , m_song_artist_label(new QLabel(this))
    , m_album_art_label(new QLabel(this))
{
    this->setFixedSize(180, 150);

    SetupUi();
}

void TrackListItem::SetSongTitle(const QString& title)
{
    m_song_title_label->setText(title);
}

void TrackListItem::SetArtistName(const QString& name)
{
    m_song_artist_label->setText(name);
}

void TrackListItem::SetAlbumArt(const QString& photoPath)
{
    QPixmap albumArt(photoPath);
    if (!albumArt.isNull()) {
        m_album_art_label->setPixmap(albumArt.scaled(m_album_art_label->size(),
                                                     Qt::KeepAspectRatio,
                                                     Qt::SmoothTransformation));
    } else {
        m_album_art_label->setText("Image not found");
    }
}


void TrackListItem::SetupUi()
{
    QHBoxLayout *layout = new QHBoxLayout(this);
    QVBoxLayout *info_layout = new QVBoxLayout();

    info_layout->setSpacing(0);
    info_layout->setContentsMargins(5, 5, 5, 5);

    m_album_art_label->setFixedSize(64, 64);
    m_album_art_label->setScaledContents(true);

    m_song_title_label->setObjectName(QStringLiteral("songTitleLabel"));
    m_song_artist_label->setObjectName(QStringLiteral("artistNameLabel"));

    info_layout->addStretch();
    info_layout->addWidget(m_song_title_label);
    info_layout->addWidget(m_song_artist_label);
    info_layout->addStretch();

    layout->addWidget(m_album_art_label);
    layout->addLayout(info_layout);

    this->setLayout(info_layout);
}


} // components
} // ui
