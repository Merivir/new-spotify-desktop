#ifndef FOOTERVIEW_H
#define FOOTERVIEW_H

#include "src/ui/components/track_list_item.h"
#include "src/ui/components/music_player_control.h"
#include "src/ui/components/media_control_widget.h"

#include <QWidget>

namespace ui
{
namespace views
{

class FooterView : public QWidget
{
    Q_OBJECT
public:
    explicit FooterView(QWidget *parent = nullptr);

private:
    ui::components::TrackListItem *m_track_list_item;
    ui::components::MusicPlayerControl *m_music_player_control;
    ui::components::MediaControlWidget *m_media_control;

signals:
};


} // namespace views
} // namespace ui

#endif // FOOTERVIEW_H
