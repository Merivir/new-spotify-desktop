#ifndef MUSICCARD_H
#define MUSICCARD_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

namespace ui {
namespace components {

class MusicCard : public QWidget
{
    Q_OBJECT
public:
    explicit MusicCard(const QString &title, const QPixmap &artwork, QWidget *parent = nullptr);

private:
    QLabel *m_title_label;
    QLabel *m_artwork_label;

    void SetupUi(const QString &title, const QPixmap &artwork);

};

}// components
} // ui

#endif // MUSICCARD_H
