#include "left_sidebar_view.h"

#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace views
{

LeftSidebarView::LeftSidebarView(QWidget *parent)
    : QWidget{parent}
    , m_all_playlist(new ui::components::AllPlaylistWidget())
    , m_user_metainfo(new ui::components::UserMetaInfoWidget("Username", QPixmap("/home/merivirabyan/new-spotify-desktop/resources/user_avatar.png"),
                                                             24, 73, 1200, this))
    , m_header_widget(new ui::components::HeaderWidget())
    , m_tab_widget(new QTabWidget(this))
{

    this->setAttribute(Qt::WA_StyledBackground, true);
    this->setStyleSheet("LeftSidebarView {border: 2px solid black;}");

    QVBoxLayout* layout = new QVBoxLayout(this);

    QWidget *artistsTab = new QWidget();
    QWidget *songsTab = new QWidget();

    layout->addWidget(m_header_widget);
    layout->addWidget(m_user_metainfo);
    m_tab_widget->addTab(m_all_playlist, tr("Playlists"));
    m_tab_widget->addTab(artistsTab, tr("Artists"));
    m_tab_widget->addTab(songsTab, tr("Songs"));

    layout->addWidget(m_tab_widget);
    this->setLayout(layout);
}

} // namespace views
} // namespace ui
