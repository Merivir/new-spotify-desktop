#include "footer_view.h"

#include <QLabel>
#include <QHBoxLayout>

namespace ui
{
namespace views
{

FooterView::FooterView(QWidget *parent)
    : QWidget{parent}
    , m_track_list_item(new ui::components::TrackListItem(this))
    , m_music_player_control(new ui::components::MusicPlayerControl(this))
    , m_media_control(new ui::components::MediaControlWidget(this))
{
    this->setAttribute(Qt::WA_StyledBackground, true);
    this->setStyleSheet("FooterView {border: 2px solid black;}");

    m_track_list_item->SetSongTitle("Song Title");
    m_track_list_item->SetArtistName("Artist");
    m_track_list_item->SetAlbumArt("/home/merivirabyan/new-spotify-desktop/resources/album.jpg");

    QHBoxLayout* layout = new QHBoxLayout(this);

    layout->addWidget(m_track_list_item);
    layout->addWidget(m_music_player_control);
    layout->addWidget(m_media_control);

    this->setLayout(layout);

}

} // namespace views
} // namespace ui
