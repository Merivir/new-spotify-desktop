#ifndef LEFTSIDEBARVIEW_H
#define LEFTSIDEBARVIEW_H

#include "src/ui/components/all_playlist_widget.h"
#include "src/ui/components/user_meta_info_widget.h"
#include "src/ui/components/header_widget.h"

#include <QWidget>
#include <QTabWidget>

namespace ui
{
namespace views
{

class LeftSidebarView : public QWidget
{
    Q_OBJECT
public:
    explicit LeftSidebarView(QWidget *parent = nullptr);

private:
    ui::components::AllPlaylistWidget *m_all_playlist;
    ui::components::UserMetaInfoWidget *m_user_metainfo;
    ui::components::HeaderWidget *m_header_widget;
    QTabWidget *m_tab_widget;

signals:
};

} // namespace views
} // namespace ui

#endif // LEFTSIDEBARVIEW_H
