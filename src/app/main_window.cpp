#include "main_window.h"

#include <QLabel>
#include <QVBoxLayout>

#include "src/ui/views/header/header_view.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget* central_widget = new QWidget(this);

    m_central_area_view = new ui::views::CentralAreaView(this);
    m_right_sidebar_view = new ui::views::RightSidebarView(this);

    QHBoxLayout* center_right_layout = new QHBoxLayout();
    center_right_layout->addWidget(m_central_area_view);
   // center_right_layout->addStretch(1);
    center_right_layout->addWidget(m_right_sidebar_view);

    QVBoxLayout* center_with_header_layout = new QVBoxLayout();
    m_header_view = new ui::views::HeaderView(this);
    center_with_header_layout->addWidget(m_header_view);
    center_with_header_layout->addLayout(center_right_layout);

    QHBoxLayout* top_layout = new QHBoxLayout();
    m_left_sidebar_view = new ui::views::LeftSidebarView(this);
    top_layout->addWidget(m_left_sidebar_view);
    top_layout->addLayout(center_with_header_layout);


    QVBoxLayout* main_layout = new QVBoxLayout(central_widget);
    m_footer_view = new ui::views::FooterView(this);

    main_layout->addLayout(top_layout);
    //main_layout->addStretch(1);
    main_layout->addWidget(m_footer_view);    

    setCentralWidget(central_widget);
}

MainWindow::~MainWindow() {}
