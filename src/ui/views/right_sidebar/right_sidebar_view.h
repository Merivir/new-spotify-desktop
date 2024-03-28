#ifndef RIGHTSIDEBARVIEW_H
#define RIGHTSIDEBARVIEW_H


#include <QScrollArea>
#include <QWidget>
#include <QLineEdit>
#include <QListWidget>

namespace ui
{
namespace views
{

class RightSidebarView : public QWidget
{
    Q_OBJECT
public:
    explicit RightSidebarView(QWidget *parent = nullptr);

private:
    QLineEdit *m_search_edit;
    QListWidget *m_activity_list;
    QScrollArea *m_scroll_area;

signals:
};

} // namespace views
} // namespace ui

#endif // RIGHTSIDEBARVIEW_H
