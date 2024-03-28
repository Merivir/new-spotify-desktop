#include "single_playlist_widget.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

namespace ui {
namespace components {

SinglePlaylistWidget::SinglePlaylistWidget(const QString &title, int songs, const QPixmap &artwork, QWidget *parent)
    : QWidget(parent)
{
    SetupUi(title, songs, artwork);
}

void SinglePlaylistWidget::SetupUi(const QString &title, int songs, const QPixmap &artwork)
{
    m_artwork_label = new QLabel(this);
    m_title_label = new QLabel(title, this);
    m_song_count = new QLabel(QString::number(songs), this);

    m_artwork_label->setPixmap(artwork.scaled(64, 64, Qt::KeepAspectRatio, Qt::SmoothTransformation));

    QHBoxLayout *layout = new QHBoxLayout(this);

    QVBoxLayout *info_layout = new QVBoxLayout();
    info_layout->addWidget(m_title_label);
    info_layout->addWidget(m_song_count);

    layout->addWidget(m_artwork_label);
    layout->addLayout(info_layout);

    setLayout(layout);
}


} // components
} // ui
