#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>

#include "src/ui/views/header/header_view.h"
#include "src/ui/views/left_sidebar/left_sidebar_view.h"
#include "src/ui/views/central_area/central_area_view.h"
#include "src/ui/views/right_sidebar/right_sidebar_view.h"
#include "src/ui/views/footer/footer_view.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    ui::views::HeaderView* m_header_view;
    ui::views::LeftSidebarView* m_left_sidebar_view;
    ui::views::CentralAreaView* m_central_area_view;
    ui::views::RightSidebarView* m_right_sidebar_view;
    ui::views::FooterView* m_footer_view;

};
#endif // MAIN_WINDOW_H
