#include "right_sidebar_view.h"

#include "src/ui/components/friend_activity_widget.h"

#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace views
{

RightSidebarView::RightSidebarView(QWidget *parent)
    : QWidget{parent}
{

    this->setAttribute(Qt::WA_StyledBackground, true);
    this->setStyleSheet("RightSidebarView {border: 2px solid black;}");

    QVBoxLayout* layout = new QVBoxLayout(this);

    m_search_edit = new QLineEdit(this);
    m_search_edit->setPlaceholderText("Filter");
    m_search_edit->addAction(QIcon("/home/merivirabyan/new-spotify-desktop/resources/search.png"), QLineEdit::LeadingPosition);
    layout->addWidget(m_search_edit);

    m_scroll_area = new QScrollArea(this);
    m_scroll_area->setWidgetResizable(true);
    m_scroll_area->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);

    QWidget* activityContainer = new QWidget();
    QVBoxLayout* activityLayout = new QVBoxLayout(activityContainer);

    QPixmap user_avatar("/home/merivirabyan/new-spotify-desktop/resources/user_avatar.png");

    for (int i = 0; i < 5; ++i) {
        ui::components::FriendActivityWidget* activityWidget = new ui::components::FriendActivityWidget(
            "Friend user",
            "Song Title - Artist Name",
            user_avatar,
            activityContainer);
        activityLayout->addWidget(activityWidget);
    }

    activityLayout->addStretch();
    activityContainer->setLayout(activityLayout);
    m_scroll_area->setWidget(activityContainer);

    layout->addWidget(m_scroll_area);
    setLayout(layout);
}

} // namespace views
} // namespace ui
