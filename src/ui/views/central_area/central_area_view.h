#ifndef CENTRALAREAVIEW_H
#define CENTRALAREAVIEW_H

#include "src/ui/components/song_playlist_widget.h"

#include <QWidget>
#include <QPushButton>
#include <QIcon>

namespace ui
{
namespace views
{

class CentralAreaView : public QWidget
{
    Q_OBJECT
public:
    explicit CentralAreaView(QWidget *parent = nullptr);

private:
    QPushButton *m_previous_window;
    QPushButton *m_next_window;
    const int width;

    void SetupButton(QPushButton* button, const QIcon& icon);

signals:
};


} // namespace views
} // namespace ui


#endif // CENTRALAREAVIEW_H
