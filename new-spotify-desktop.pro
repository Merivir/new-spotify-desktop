QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/app/main.cpp \
    src/app/main_window.cpp \
    src/ui/components/all_playlist_widget.cpp \
    src/ui/components/friend_activity_widget.cpp \
    src/ui/components/header_widget.cpp \
    src/ui/components/media_control_widget.cpp \
    src/ui/components/music_card.cpp \
    src/ui/components/music_player_control.cpp \
    src/ui/components/search_bar.cpp \
    src/ui/components/single_playlist_widget.cpp \
    src/ui/components/song_playlist_widget.cpp \
    src/ui/components/track_list_item.cpp \
    src/ui/components/user_meta_info_widget.cpp \
    src/ui/views/central_area/central_area_view.cpp \
    src/ui/views/footer/footer_view.cpp \
    src/ui/views/header/header_view.cpp \
    src/ui/views/left_sidebar/left_sidebar_view.cpp \
    src/ui/views/right_sidebar/right_sidebar_view.cpp

HEADERS += \
    src/app/main_window.h \
    src/ui/components/all_playlist_widget.h \
    src/ui/components/friend_activity_widget.h \
    src/ui/components/header_widget.h \
    src/ui/components/media_control_widget.h \
    src/ui/components/music_card.h \
    src/ui/components/music_player_control.h \
    src/ui/components/search_bar.h \
    src/ui/components/single_playlist_widget.h \
    src/ui/components/song_playlist_widget.h \
    src/ui/components/track_list_item.h \
    src/ui/components/user_meta_info_widget.h \
    src/ui/views/central_area/central_area_view.h \
    src/ui/views/footer/footer_view.h \
    src/ui/views/header/header_view.h \
    src/ui/views/left_sidebar/left_sidebar_view.h \
    src/ui/views/right_sidebar/right_sidebar_view.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
