/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionquit;
    QWidget *centralwidget;
    QWidget *timezone;
    QVBoxLayout *verticalLayout;
    QLabel *server_name;
    QLabel *date;
    QLabel *time;
    QWidget *progress;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *progress_vertical;
    QProgressBar *progressBar;
    QHBoxLayout *progess_state_box;
    QLabel *DatabaseConnection;
    QFrame *line;
    QLabel *ClientConnection;
    QFrame *line_2;
    QLabel *Crawling;
    QFrame *line_3;
    QLabel *Report;
    QWidget *server_info;
    QVBoxLayout *verticalLayout_3;
    QLabel *server_info_text;
    QScrollArea *server_info_content;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QWidget *run_time_widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *run_time_val;
    QLabel *run_time_text;
    QWidget *hour_crawl_widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *hour_crawl_text;
    QLabel *hour_crawl_val;
    QWidget *begin_time_widget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *begin_time_text;
    QLabel *begin_time_val;
    QWidget *day_crawl_widget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *day_crawl_text;
    QLabel *day_crawl_val;
    QWidget *failure_rate_widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *failure_rate_text;
    QLabel *failure_rate_val;
    QWidget *failure_cnt_widget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *failure_cnt_text;
    QLabel *failure_cnt_val;
    QWidget *total_cnt_widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *total_cnt_text;
    QLabel *total_cnt_val;
    QWidget *speed_widget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *speed_text;
    QLabel *speed_val;
    QWidget *workload;
    QVBoxLayout *verticalLayout_7;
    QLabel *workload_text;
    QScrollArea *workload_content;
    QWidget *workload_grid;
    QGridLayout *gridLayout_4;
    QProgressBar *clientA_state;
    QProgressBar *clientB_state;
    QProgressBar *clientC_state;
    QLabel *clientA_val;
    QLabel *clientB_val;
    QLabel *clientC_val;
    QWidget *website;
    QVBoxLayout *verticalLayout_8;
    QLabel *website_text;
    QScrollArea *website_info_content;
    QWidget *website_info_grid;
    QGridLayout *gridLayout_2;
    QWidget *ptt_widget;
    QHBoxLayout *horizontalLayout_12;
    QLabel *ptt_name;
    QLabel *ptt_crawled_count;
    QLabel *ptt_failed_count;
    QLabel *ptt_crawled_time;
    QWidget *yahoo_widget;
    QHBoxLayout *horizontalLayout_17;
    QLabel *yahoo_name;
    QLabel *yahoo_crawled_count;
    QLabel *yahoo_failure_count;
    QLabel *yahoo_crawled_time;
    QWidget *ettoday_widget;
    QHBoxLayout *horizontalLayout_15;
    QLabel *ettoday_website_name;
    QLabel *ettoday_crawled_count;
    QLabel *ettoday_failure_count;
    QLabel *ettoday_crawled_time;
    QWidget *category_widget;
    QHBoxLayout *horizontalLayout_11;
    QLabel *category_website_name;
    QLabel *category_crawled_count;
    QLabel *category_failure_count;
    QLabel *category_crawled_time;
    QWidget *client;
    QVBoxLayout *verticalLayout_9;
    QLabel *clien_text;
    QScrollArea *client_content;
    QWidget *client_grid;
    QGridLayout *gridLayout_3;
    QWidget *client2_widget;
    QHBoxLayout *horizontalLayout_20;
    QLabel *client2_name;
    QLabel *client2_state;
    QPushButton *client2_switch;
    QLabel *client2_crawled_count;
    QLabel *client2_failure_count;
    QLabel *client2_crawled_time;
    QLabel *client2_begin_time;
    QWidget *client_text_widget;
    QHBoxLayout *horizontalLayout_18;
    QLabel *client_name_text;
    QLabel *client_state_text;
    QLabel *client_switch_text;
    QLabel *client_crawl_cnt_text;
    QLabel *client_failure_cnt_text;
    QLabel *client_crawled_time_text;
    QLabel *client_begin_time_text;
    QWidget *client3_widget;
    QHBoxLayout *horizontalLayout_21;
    QLabel *client3_name;
    QLabel *client3_state;
    QPushButton *client3_switch;
    QLabel *client3_crawled_count;
    QLabel *client3_failure_count;
    QLabel *client3_crawled_time;
    QLabel *client3_begin_time;
    QWidget *client1_widget;
    QHBoxLayout *horizontalLayout_19;
    QLabel *client1_name;
    QLabel *client1_state;
    QPushButton *client1_switch;
    QLabel *client1_crawled_count;
    QLabel *client1_failure_count;
    QLabel *client1_crawled_time;
    QLabel *client1_begin_time;
    QMenuBar *menubar;
    QMenu *menuOption;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionquit = new QAction(MainWindow);
        actionquit->setObjectName(QStringLiteral("actionquit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));
        timezone = new QWidget(centralwidget);
        timezone->setObjectName(QStringLiteral("timezone"));
        timezone->setGeometry(QRect(20, 20, 391, 191));
        timezone->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        verticalLayout = new QVBoxLayout(timezone);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        server_name = new QLabel(timezone);
        server_name->setObjectName(QStringLiteral("server_name"));
        QFont font;
        font.setPointSize(24);
        server_name->setFont(font);
        server_name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(server_name);

        date = new QLabel(timezone);
        date->setObjectName(QStringLiteral("date"));
        QFont font1;
        font1.setPointSize(17);
        date->setFont(font1);
        date->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(date);

        time = new QLabel(timezone);
        time->setObjectName(QStringLiteral("time"));
        QFont font2;
        font2.setPointSize(22);
        time->setFont(font2);
        time->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(time);

        progress = new QWidget(centralwidget);
        progress->setObjectName(QStringLiteral("progress"));
        progress->setGeometry(QRect(430, 20, 831, 191));
        progress->setAutoFillBackground(false);
        progress->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        horizontalLayout = new QHBoxLayout(progress);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        progress_vertical = new QVBoxLayout();
        progress_vertical->setObjectName(QStringLiteral("progress_vertical"));
        progressBar = new QProgressBar(progress);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        progress_vertical->addWidget(progressBar);

        progess_state_box = new QHBoxLayout();
        progess_state_box->setObjectName(QStringLiteral("progess_state_box"));
        DatabaseConnection = new QLabel(progress);
        DatabaseConnection->setObjectName(QStringLiteral("DatabaseConnection"));
        QFont font3;
        font3.setPointSize(15);
        DatabaseConnection->setFont(font3);
        DatabaseConnection->setStyleSheet(QStringLiteral("color: rgb(239, 41, 41)"));
        DatabaseConnection->setAlignment(Qt::AlignCenter);

        progess_state_box->addWidget(DatabaseConnection);

        line = new QFrame(progress);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        progess_state_box->addWidget(line);

        ClientConnection = new QLabel(progress);
        ClientConnection->setObjectName(QStringLiteral("ClientConnection"));
        ClientConnection->setFont(font3);
        ClientConnection->setStyleSheet(QStringLiteral("color: rgb(239, 41, 41)"));
        ClientConnection->setAlignment(Qt::AlignCenter);

        progess_state_box->addWidget(ClientConnection);

        line_2 = new QFrame(progress);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        progess_state_box->addWidget(line_2);

        Crawling = new QLabel(progress);
        Crawling->setObjectName(QStringLiteral("Crawling"));
        QFont font4;
        font4.setPointSize(16);
        Crawling->setFont(font4);
        Crawling->setStyleSheet(QStringLiteral("color: rgb(239, 41, 41)"));
        Crawling->setAlignment(Qt::AlignCenter);

        progess_state_box->addWidget(Crawling);

        line_3 = new QFrame(progress);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        progess_state_box->addWidget(line_3);

        Report = new QLabel(progress);
        Report->setObjectName(QStringLiteral("Report"));
        Report->setFont(font4);
        Report->setStyleSheet(QStringLiteral("color: rgb(239, 41, 41)"));
        Report->setAlignment(Qt::AlignCenter);

        progess_state_box->addWidget(Report);


        progress_vertical->addLayout(progess_state_box);


        horizontalLayout->addLayout(progress_vertical);

        server_info = new QWidget(centralwidget);
        server_info->setObjectName(QStringLiteral("server_info"));
        server_info->setGeometry(QRect(20, 230, 611, 201));
        sizePolicy.setHeightForWidth(server_info->sizePolicy().hasHeightForWidth());
        server_info->setSizePolicy(sizePolicy);
        server_info->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        verticalLayout_3 = new QVBoxLayout(server_info);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        server_info_text = new QLabel(server_info);
        server_info_text->setObjectName(QStringLiteral("server_info_text"));
        QFont font5;
        font5.setPointSize(19);
        server_info_text->setFont(font5);
        server_info_text->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(server_info_text);

        server_info_content = new QScrollArea(server_info);
        server_info_content->setObjectName(QStringLiteral("server_info_content"));
        server_info_content->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 577, 460));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        run_time_widget = new QWidget(scrollAreaWidgetContents);
        run_time_widget->setObjectName(QStringLiteral("run_time_widget"));
        run_time_widget->setMinimumSize(QSize(0, 50));
        run_time_widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(run_time_widget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        run_time_val = new QLabel(run_time_widget);
        run_time_val->setObjectName(QStringLiteral("run_time_val"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(run_time_val->sizePolicy().hasHeightForWidth());
        run_time_val->setSizePolicy(sizePolicy2);
        run_time_val->setFont(font1);
        run_time_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        run_time_val->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(run_time_val);

        run_time_text = new QLabel(run_time_widget);
        run_time_text->setObjectName(QStringLiteral("run_time_text"));
        sizePolicy2.setHeightForWidth(run_time_text->sizePolicy().hasHeightForWidth());
        run_time_text->setSizePolicy(sizePolicy2);
        run_time_text->setFont(font1);
        run_time_text->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        run_time_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(run_time_text);


        gridLayout->addWidget(run_time_widget, 2, 0, 1, 1);

        hour_crawl_widget = new QWidget(scrollAreaWidgetContents);
        hour_crawl_widget->setObjectName(QStringLiteral("hour_crawl_widget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(hour_crawl_widget->sizePolicy().hasHeightForWidth());
        hour_crawl_widget->setSizePolicy(sizePolicy3);
        hour_crawl_widget->setMinimumSize(QSize(0, 50));
        hour_crawl_widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_6 = new QHBoxLayout(hour_crawl_widget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(1, 1, 1, 1);
        hour_crawl_text = new QLabel(hour_crawl_widget);
        hour_crawl_text->setObjectName(QStringLiteral("hour_crawl_text"));
        sizePolicy2.setHeightForWidth(hour_crawl_text->sizePolicy().hasHeightForWidth());
        hour_crawl_text->setSizePolicy(sizePolicy2);
        hour_crawl_text->setFont(font1);
        hour_crawl_text->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        hour_crawl_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(hour_crawl_text);

        hour_crawl_val = new QLabel(hour_crawl_widget);
        hour_crawl_val->setObjectName(QStringLiteral("hour_crawl_val"));
        sizePolicy2.setHeightForWidth(hour_crawl_val->sizePolicy().hasHeightForWidth());
        hour_crawl_val->setSizePolicy(sizePolicy2);
        hour_crawl_val->setFont(font1);
        hour_crawl_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        hour_crawl_val->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(hour_crawl_val);


        gridLayout->addWidget(hour_crawl_widget, 6, 0, 1, 1);

        begin_time_widget = new QWidget(scrollAreaWidgetContents);
        begin_time_widget->setObjectName(QStringLiteral("begin_time_widget"));
        begin_time_widget->setMinimumSize(QSize(0, 50));
        begin_time_widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_9 = new QHBoxLayout(begin_time_widget);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(1, 1, 1, 1);
        begin_time_text = new QLabel(begin_time_widget);
        begin_time_text->setObjectName(QStringLiteral("begin_time_text"));
        sizePolicy2.setHeightForWidth(begin_time_text->sizePolicy().hasHeightForWidth());
        begin_time_text->setSizePolicy(sizePolicy2);
        begin_time_text->setFont(font1);
        begin_time_text->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        begin_time_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(begin_time_text);

        begin_time_val = new QLabel(begin_time_widget);
        begin_time_val->setObjectName(QStringLiteral("begin_time_val"));
        sizePolicy2.setHeightForWidth(begin_time_val->sizePolicy().hasHeightForWidth());
        begin_time_val->setSizePolicy(sizePolicy2);
        begin_time_val->setFont(font1);
        begin_time_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        begin_time_val->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(begin_time_val);


        gridLayout->addWidget(begin_time_widget, 1, 0, 1, 1);

        day_crawl_widget = new QWidget(scrollAreaWidgetContents);
        day_crawl_widget->setObjectName(QStringLiteral("day_crawl_widget"));
        sizePolicy3.setHeightForWidth(day_crawl_widget->sizePolicy().hasHeightForWidth());
        day_crawl_widget->setSizePolicy(sizePolicy3);
        day_crawl_widget->setMinimumSize(QSize(0, 50));
        day_crawl_widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_7 = new QHBoxLayout(day_crawl_widget);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(1, 1, 1, 1);
        day_crawl_text = new QLabel(day_crawl_widget);
        day_crawl_text->setObjectName(QStringLiteral("day_crawl_text"));
        sizePolicy2.setHeightForWidth(day_crawl_text->sizePolicy().hasHeightForWidth());
        day_crawl_text->setSizePolicy(sizePolicy2);
        day_crawl_text->setFont(font1);
        day_crawl_text->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        day_crawl_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(day_crawl_text);

        day_crawl_val = new QLabel(day_crawl_widget);
        day_crawl_val->setObjectName(QStringLiteral("day_crawl_val"));
        sizePolicy2.setHeightForWidth(day_crawl_val->sizePolicy().hasHeightForWidth());
        day_crawl_val->setSizePolicy(sizePolicy2);
        day_crawl_val->setFont(font1);
        day_crawl_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        day_crawl_val->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(day_crawl_val);


        gridLayout->addWidget(day_crawl_widget, 7, 0, 1, 1);

        failure_rate_widget = new QWidget(scrollAreaWidgetContents);
        failure_rate_widget->setObjectName(QStringLiteral("failure_rate_widget"));
        failure_rate_widget->setMinimumSize(QSize(0, 50));
        failure_rate_widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_5 = new QHBoxLayout(failure_rate_widget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        failure_rate_text = new QLabel(failure_rate_widget);
        failure_rate_text->setObjectName(QStringLiteral("failure_rate_text"));
        sizePolicy2.setHeightForWidth(failure_rate_text->sizePolicy().hasHeightForWidth());
        failure_rate_text->setSizePolicy(sizePolicy2);
        failure_rate_text->setFont(font1);
        failure_rate_text->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        failure_rate_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(failure_rate_text);

        failure_rate_val = new QLabel(failure_rate_widget);
        failure_rate_val->setObjectName(QStringLiteral("failure_rate_val"));
        sizePolicy2.setHeightForWidth(failure_rate_val->sizePolicy().hasHeightForWidth());
        failure_rate_val->setSizePolicy(sizePolicy2);
        failure_rate_val->setFont(font1);
        failure_rate_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        failure_rate_val->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(failure_rate_val);


        gridLayout->addWidget(failure_rate_widget, 4, 0, 1, 1);

        failure_cnt_widget = new QWidget(scrollAreaWidgetContents);
        failure_cnt_widget->setObjectName(QStringLiteral("failure_cnt_widget"));
        failure_cnt_widget->setMinimumSize(QSize(0, 50));
        failure_cnt_widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_8 = new QHBoxLayout(failure_cnt_widget);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(1, 1, 1, 1);
        failure_cnt_text = new QLabel(failure_cnt_widget);
        failure_cnt_text->setObjectName(QStringLiteral("failure_cnt_text"));
        sizePolicy2.setHeightForWidth(failure_cnt_text->sizePolicy().hasHeightForWidth());
        failure_cnt_text->setSizePolicy(sizePolicy2);
        failure_cnt_text->setFont(font1);
        failure_cnt_text->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        failure_cnt_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(failure_cnt_text);

        failure_cnt_val = new QLabel(failure_cnt_widget);
        failure_cnt_val->setObjectName(QStringLiteral("failure_cnt_val"));
        sizePolicy2.setHeightForWidth(failure_cnt_val->sizePolicy().hasHeightForWidth());
        failure_cnt_val->setSizePolicy(sizePolicy2);
        failure_cnt_val->setFont(font1);
        failure_cnt_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        failure_cnt_val->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(failure_cnt_val);


        gridLayout->addWidget(failure_cnt_widget, 3, 0, 1, 1);

        total_cnt_widget = new QWidget(scrollAreaWidgetContents);
        total_cnt_widget->setObjectName(QStringLiteral("total_cnt_widget"));
        total_cnt_widget->setMinimumSize(QSize(0, 50));
        total_cnt_widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(total_cnt_widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(1, -1, -1, -1);
        total_cnt_text = new QLabel(total_cnt_widget);
        total_cnt_text->setObjectName(QStringLiteral("total_cnt_text"));
        sizePolicy2.setHeightForWidth(total_cnt_text->sizePolicy().hasHeightForWidth());
        total_cnt_text->setSizePolicy(sizePolicy2);
        total_cnt_text->setFont(font1);
        total_cnt_text->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        total_cnt_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(total_cnt_text);

        total_cnt_val = new QLabel(total_cnt_widget);
        total_cnt_val->setObjectName(QStringLiteral("total_cnt_val"));
        sizePolicy2.setHeightForWidth(total_cnt_val->sizePolicy().hasHeightForWidth());
        total_cnt_val->setSizePolicy(sizePolicy2);
        total_cnt_val->setFont(font1);
        total_cnt_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        total_cnt_val->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(total_cnt_val);


        gridLayout->addWidget(total_cnt_widget, 0, 0, 1, 1);

        speed_widget = new QWidget(scrollAreaWidgetContents);
        speed_widget->setObjectName(QStringLiteral("speed_widget"));
        speed_widget->setMinimumSize(QSize(0, 50));
        speed_widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_10 = new QHBoxLayout(speed_widget);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(1, 1, 1, 1);
        speed_text = new QLabel(speed_widget);
        speed_text->setObjectName(QStringLiteral("speed_text"));
        sizePolicy2.setHeightForWidth(speed_text->sizePolicy().hasHeightForWidth());
        speed_text->setSizePolicy(sizePolicy2);
        speed_text->setFont(font1);
        speed_text->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        speed_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(speed_text);

        speed_val = new QLabel(speed_widget);
        speed_val->setObjectName(QStringLiteral("speed_val"));
        sizePolicy2.setHeightForWidth(speed_val->sizePolicy().hasHeightForWidth());
        speed_val->setSizePolicy(sizePolicy2);
        speed_val->setFont(font1);
        speed_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        speed_val->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(speed_val);


        gridLayout->addWidget(speed_widget, 5, 0, 1, 1);

        server_info_content->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(server_info_content);

        workload = new QWidget(centralwidget);
        workload->setObjectName(QStringLiteral("workload"));
        workload->setGeometry(QRect(20, 450, 611, 201));
        workload->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        verticalLayout_7 = new QVBoxLayout(workload);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        workload_text = new QLabel(workload);
        workload_text->setObjectName(QStringLiteral("workload_text"));
        workload_text->setFont(font5);
        workload_text->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(workload_text);

        workload_content = new QScrollArea(workload);
        workload_content->setObjectName(QStringLiteral("workload_content"));
        workload_content->setWidgetResizable(true);
        workload_grid = new QWidget();
        workload_grid->setObjectName(QStringLiteral("workload_grid"));
        workload_grid->setGeometry(QRect(0, 0, 591, 146));
        gridLayout_4 = new QGridLayout(workload_grid);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        clientA_state = new QProgressBar(workload_grid);
        clientA_state->setObjectName(QStringLiteral("clientA_state"));
        clientA_state->setMinimumSize(QSize(100, 0));
        clientA_state->setValue(0);
        clientA_state->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(clientA_state, 0, 0, 1, 1);

        clientB_state = new QProgressBar(workload_grid);
        clientB_state->setObjectName(QStringLiteral("clientB_state"));
        clientB_state->setMinimumSize(QSize(100, 0));
        clientB_state->setValue(0);
        clientB_state->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(clientB_state, 0, 1, 1, 1);

        clientC_state = new QProgressBar(workload_grid);
        clientC_state->setObjectName(QStringLiteral("clientC_state"));
        clientC_state->setMinimumSize(QSize(100, 0));
        clientC_state->setValue(0);
        clientC_state->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(clientC_state, 0, 2, 1, 1);

        clientA_val = new QLabel(workload_grid);
        clientA_val->setObjectName(QStringLiteral("clientA_val"));
        clientA_val->setMinimumSize(QSize(0, 20));
        clientA_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        clientA_val->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(clientA_val, 1, 0, 1, 1);

        clientB_val = new QLabel(workload_grid);
        clientB_val->setObjectName(QStringLiteral("clientB_val"));
        clientB_val->setMinimumSize(QSize(0, 20));
        clientB_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        clientB_val->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(clientB_val, 1, 1, 1, 1);

        clientC_val = new QLabel(workload_grid);
        clientC_val->setObjectName(QStringLiteral("clientC_val"));
        sizePolicy1.setHeightForWidth(clientC_val->sizePolicy().hasHeightForWidth());
        clientC_val->setSizePolicy(sizePolicy1);
        clientC_val->setMinimumSize(QSize(0, 20));
        clientC_val->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        clientC_val->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(clientC_val, 1, 2, 1, 1);

        workload_content->setWidget(workload_grid);

        verticalLayout_7->addWidget(workload_content);

        website = new QWidget(centralwidget);
        website->setObjectName(QStringLiteral("website"));
        website->setGeometry(QRect(650, 230, 611, 201));
        website->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        verticalLayout_8 = new QVBoxLayout(website);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        website_text = new QLabel(website);
        website_text->setObjectName(QStringLiteral("website_text"));
        website_text->setFont(font5);
        website_text->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(website_text);

        website_info_content = new QScrollArea(website);
        website_info_content->setObjectName(QStringLiteral("website_info_content"));
        website_info_content->setWidgetResizable(true);
        website_info_grid = new QWidget();
        website_info_grid->setObjectName(QStringLiteral("website_info_grid"));
        website_info_grid->setGeometry(QRect(0, 0, 782, 236));
        gridLayout_2 = new QGridLayout(website_info_grid);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ptt_widget = new QWidget(website_info_grid);
        ptt_widget->setObjectName(QStringLiteral("ptt_widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ptt_widget->sizePolicy().hasHeightForWidth());
        ptt_widget->setSizePolicy(sizePolicy4);
        ptt_widget->setMinimumSize(QSize(0, 50));
        horizontalLayout_12 = new QHBoxLayout(ptt_widget);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(1, 1, 1, 1);
        ptt_name = new QLabel(ptt_widget);
        ptt_name->setObjectName(QStringLiteral("ptt_name"));
        ptt_name->setMinimumSize(QSize(182, 0));
        ptt_name->setFont(font1);
        ptt_name->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        ptt_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(ptt_name);

        ptt_crawled_count = new QLabel(ptt_widget);
        ptt_crawled_count->setObjectName(QStringLiteral("ptt_crawled_count"));
        ptt_crawled_count->setMinimumSize(QSize(182, 0));
        ptt_crawled_count->setFont(font1);
        ptt_crawled_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        ptt_crawled_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(ptt_crawled_count);

        ptt_failed_count = new QLabel(ptt_widget);
        ptt_failed_count->setObjectName(QStringLiteral("ptt_failed_count"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(ptt_failed_count->sizePolicy().hasHeightForWidth());
        ptt_failed_count->setSizePolicy(sizePolicy5);
        ptt_failed_count->setMinimumSize(QSize(182, 0));
        ptt_failed_count->setFont(font1);
        ptt_failed_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        ptt_failed_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(ptt_failed_count);

        ptt_crawled_time = new QLabel(ptt_widget);
        ptt_crawled_time->setObjectName(QStringLiteral("ptt_crawled_time"));
        ptt_crawled_time->setMinimumSize(QSize(182, 0));
        ptt_crawled_time->setFont(font1);
        ptt_crawled_time->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        ptt_crawled_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(ptt_crawled_time);


        gridLayout_2->addWidget(ptt_widget, 2, 0, 1, 1);

        yahoo_widget = new QWidget(website_info_grid);
        yahoo_widget->setObjectName(QStringLiteral("yahoo_widget"));
        sizePolicy4.setHeightForWidth(yahoo_widget->sizePolicy().hasHeightForWidth());
        yahoo_widget->setSizePolicy(sizePolicy4);
        yahoo_widget->setMinimumSize(QSize(0, 50));
        horizontalLayout_17 = new QHBoxLayout(yahoo_widget);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(1, 1, 1, 1);
        yahoo_name = new QLabel(yahoo_widget);
        yahoo_name->setObjectName(QStringLiteral("yahoo_name"));
        sizePolicy1.setHeightForWidth(yahoo_name->sizePolicy().hasHeightForWidth());
        yahoo_name->setSizePolicy(sizePolicy1);
        yahoo_name->setMinimumSize(QSize(182, 0));
        yahoo_name->setFont(font1);
        yahoo_name->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        yahoo_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(yahoo_name);

        yahoo_crawled_count = new QLabel(yahoo_widget);
        yahoo_crawled_count->setObjectName(QStringLiteral("yahoo_crawled_count"));
        sizePolicy5.setHeightForWidth(yahoo_crawled_count->sizePolicy().hasHeightForWidth());
        yahoo_crawled_count->setSizePolicy(sizePolicy5);
        yahoo_crawled_count->setMinimumSize(QSize(182, 0));
        yahoo_crawled_count->setFont(font1);
        yahoo_crawled_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        yahoo_crawled_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(yahoo_crawled_count);

        yahoo_failure_count = new QLabel(yahoo_widget);
        yahoo_failure_count->setObjectName(QStringLiteral("yahoo_failure_count"));
        sizePolicy5.setHeightForWidth(yahoo_failure_count->sizePolicy().hasHeightForWidth());
        yahoo_failure_count->setSizePolicy(sizePolicy5);
        yahoo_failure_count->setMinimumSize(QSize(182, 0));
        yahoo_failure_count->setFont(font1);
        yahoo_failure_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        yahoo_failure_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(yahoo_failure_count);

        yahoo_crawled_time = new QLabel(yahoo_widget);
        yahoo_crawled_time->setObjectName(QStringLiteral("yahoo_crawled_time"));
        yahoo_crawled_time->setMinimumSize(QSize(182, 0));
        yahoo_crawled_time->setFont(font1);
        yahoo_crawled_time->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        yahoo_crawled_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(yahoo_crawled_time);


        gridLayout_2->addWidget(yahoo_widget, 1, 0, 1, 1);

        ettoday_widget = new QWidget(website_info_grid);
        ettoday_widget->setObjectName(QStringLiteral("ettoday_widget"));
        sizePolicy4.setHeightForWidth(ettoday_widget->sizePolicy().hasHeightForWidth());
        ettoday_widget->setSizePolicy(sizePolicy4);
        ettoday_widget->setMinimumSize(QSize(0, 50));
        horizontalLayout_15 = new QHBoxLayout(ettoday_widget);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(1, 1, 1, 1);
        ettoday_website_name = new QLabel(ettoday_widget);
        ettoday_website_name->setObjectName(QStringLiteral("ettoday_website_name"));
        ettoday_website_name->setMinimumSize(QSize(182, 0));
        ettoday_website_name->setFont(font1);
        ettoday_website_name->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        ettoday_website_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(ettoday_website_name);

        ettoday_crawled_count = new QLabel(ettoday_widget);
        ettoday_crawled_count->setObjectName(QStringLiteral("ettoday_crawled_count"));
        ettoday_crawled_count->setMinimumSize(QSize(182, 0));
        ettoday_crawled_count->setFont(font1);
        ettoday_crawled_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        ettoday_crawled_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(ettoday_crawled_count);

        ettoday_failure_count = new QLabel(ettoday_widget);
        ettoday_failure_count->setObjectName(QStringLiteral("ettoday_failure_count"));
        sizePolicy5.setHeightForWidth(ettoday_failure_count->sizePolicy().hasHeightForWidth());
        ettoday_failure_count->setSizePolicy(sizePolicy5);
        ettoday_failure_count->setMinimumSize(QSize(182, 0));
        ettoday_failure_count->setFont(font1);
        ettoday_failure_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        ettoday_failure_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(ettoday_failure_count);

        ettoday_crawled_time = new QLabel(ettoday_widget);
        ettoday_crawled_time->setObjectName(QStringLiteral("ettoday_crawled_time"));
        ettoday_crawled_time->setMinimumSize(QSize(182, 0));
        ettoday_crawled_time->setFont(font1);
        ettoday_crawled_time->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        ettoday_crawled_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(ettoday_crawled_time);


        gridLayout_2->addWidget(ettoday_widget, 3, 0, 1, 1);

        category_widget = new QWidget(website_info_grid);
        category_widget->setObjectName(QStringLiteral("category_widget"));
        sizePolicy4.setHeightForWidth(category_widget->sizePolicy().hasHeightForWidth());
        category_widget->setSizePolicy(sizePolicy4);
        category_widget->setMinimumSize(QSize(0, 50));
        horizontalLayout_11 = new QHBoxLayout(category_widget);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        category_website_name = new QLabel(category_widget);
        category_website_name->setObjectName(QStringLiteral("category_website_name"));
        sizePolicy5.setHeightForWidth(category_website_name->sizePolicy().hasHeightForWidth());
        category_website_name->setSizePolicy(sizePolicy5);
        category_website_name->setMinimumSize(QSize(182, 0));
        category_website_name->setFont(font1);
        category_website_name->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        category_website_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(category_website_name);

        category_crawled_count = new QLabel(category_widget);
        category_crawled_count->setObjectName(QStringLiteral("category_crawled_count"));
        sizePolicy5.setHeightForWidth(category_crawled_count->sizePolicy().hasHeightForWidth());
        category_crawled_count->setSizePolicy(sizePolicy5);
        category_crawled_count->setMinimumSize(QSize(182, 0));
        category_crawled_count->setFont(font1);
        category_crawled_count->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        category_crawled_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(category_crawled_count);

        category_failure_count = new QLabel(category_widget);
        category_failure_count->setObjectName(QStringLiteral("category_failure_count"));
        category_failure_count->setMinimumSize(QSize(182, 0));
        category_failure_count->setFont(font1);
        category_failure_count->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        category_failure_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(category_failure_count);

        category_crawled_time = new QLabel(category_widget);
        category_crawled_time->setObjectName(QStringLiteral("category_crawled_time"));
        sizePolicy5.setHeightForWidth(category_crawled_time->sizePolicy().hasHeightForWidth());
        category_crawled_time->setSizePolicy(sizePolicy5);
        category_crawled_time->setMinimumSize(QSize(182, 0));
        category_crawled_time->setFont(font1);
        category_crawled_time->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        category_crawled_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(category_crawled_time);


        gridLayout_2->addWidget(category_widget, 0, 0, 1, 1);

        website_info_content->setWidget(website_info_grid);

        verticalLayout_8->addWidget(website_info_content);

        client = new QWidget(centralwidget);
        client->setObjectName(QStringLiteral("client"));
        client->setGeometry(QRect(650, 450, 611, 201));
        client->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        verticalLayout_9 = new QVBoxLayout(client);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        clien_text = new QLabel(client);
        clien_text->setObjectName(QStringLiteral("clien_text"));
        clien_text->setFont(font5);
        clien_text->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(clien_text);

        client_content = new QScrollArea(client);
        client_content->setObjectName(QStringLiteral("client_content"));
        client_content->setWidgetResizable(true);
        client_grid = new QWidget();
        client_grid->setObjectName(QStringLiteral("client_grid"));
        client_grid->setGeometry(QRect(0, 0, 1346, 236));
        gridLayout_3 = new QGridLayout(client_grid);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        client2_widget = new QWidget(client_grid);
        client2_widget->setObjectName(QStringLiteral("client2_widget"));
        sizePolicy4.setHeightForWidth(client2_widget->sizePolicy().hasHeightForWidth());
        client2_widget->setSizePolicy(sizePolicy4);
        client2_widget->setMinimumSize(QSize(0, 50));
        horizontalLayout_20 = new QHBoxLayout(client2_widget);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(1, 1, 1, 1);
        client2_name = new QLabel(client2_widget);
        client2_name->setObjectName(QStringLiteral("client2_name"));
        client2_name->setMinimumSize(QSize(182, 0));
        client2_name->setFont(font1);
        client2_name->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client2_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(client2_name);

        client2_state = new QLabel(client2_widget);
        client2_state->setObjectName(QStringLiteral("client2_state"));
        client2_state->setMinimumSize(QSize(182, 0));
        client2_state->setFont(font1);
        client2_state->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client2_state->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(client2_state);

        client2_switch = new QPushButton(client2_widget);
        client2_switch->setObjectName(QStringLiteral("client2_switch"));
        client2_switch->setMinimumSize(QSize(182, 30));

        horizontalLayout_20->addWidget(client2_switch);

        client2_crawled_count = new QLabel(client2_widget);
        client2_crawled_count->setObjectName(QStringLiteral("client2_crawled_count"));
        sizePolicy5.setHeightForWidth(client2_crawled_count->sizePolicy().hasHeightForWidth());
        client2_crawled_count->setSizePolicy(sizePolicy5);
        client2_crawled_count->setMinimumSize(QSize(182, 0));
        client2_crawled_count->setFont(font1);
        client2_crawled_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client2_crawled_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(client2_crawled_count);

        client2_failure_count = new QLabel(client2_widget);
        client2_failure_count->setObjectName(QStringLiteral("client2_failure_count"));
        sizePolicy5.setHeightForWidth(client2_failure_count->sizePolicy().hasHeightForWidth());
        client2_failure_count->setSizePolicy(sizePolicy5);
        client2_failure_count->setMinimumSize(QSize(182, 0));
        client2_failure_count->setFont(font1);
        client2_failure_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client2_failure_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(client2_failure_count);

        client2_crawled_time = new QLabel(client2_widget);
        client2_crawled_time->setObjectName(QStringLiteral("client2_crawled_time"));
        client2_crawled_time->setMinimumSize(QSize(182, 0));
        client2_crawled_time->setFont(font1);
        client2_crawled_time->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client2_crawled_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(client2_crawled_time);

        client2_begin_time = new QLabel(client2_widget);
        client2_begin_time->setObjectName(QStringLiteral("client2_begin_time"));
        client2_begin_time->setMinimumSize(QSize(182, 0));
        client2_begin_time->setFont(font1);
        client2_begin_time->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client2_begin_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(client2_begin_time);


        gridLayout_3->addWidget(client2_widget, 2, 0, 1, 1);

        client_text_widget = new QWidget(client_grid);
        client_text_widget->setObjectName(QStringLiteral("client_text_widget"));
        sizePolicy4.setHeightForWidth(client_text_widget->sizePolicy().hasHeightForWidth());
        client_text_widget->setSizePolicy(sizePolicy4);
        client_text_widget->setMinimumSize(QSize(0, 50));
        horizontalLayout_18 = new QHBoxLayout(client_text_widget);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        client_name_text = new QLabel(client_text_widget);
        client_name_text->setObjectName(QStringLiteral("client_name_text"));
        client_name_text->setMinimumSize(QSize(182, 0));
        client_name_text->setFont(font1);
        client_name_text->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        client_name_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(client_name_text);

        client_state_text = new QLabel(client_text_widget);
        client_state_text->setObjectName(QStringLiteral("client_state_text"));
        client_state_text->setMinimumSize(QSize(182, 0));
        client_state_text->setFont(font1);
        client_state_text->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        client_state_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(client_state_text);

        client_switch_text = new QLabel(client_text_widget);
        client_switch_text->setObjectName(QStringLiteral("client_switch_text"));
        client_switch_text->setMinimumSize(QSize(182, 0));
        client_switch_text->setFont(font1);
        client_switch_text->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        client_switch_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(client_switch_text);

        client_crawl_cnt_text = new QLabel(client_text_widget);
        client_crawl_cnt_text->setObjectName(QStringLiteral("client_crawl_cnt_text"));
        sizePolicy5.setHeightForWidth(client_crawl_cnt_text->sizePolicy().hasHeightForWidth());
        client_crawl_cnt_text->setSizePolicy(sizePolicy5);
        client_crawl_cnt_text->setMinimumSize(QSize(182, 0));
        client_crawl_cnt_text->setFont(font1);
        client_crawl_cnt_text->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        client_crawl_cnt_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(client_crawl_cnt_text);

        client_failure_cnt_text = new QLabel(client_text_widget);
        client_failure_cnt_text->setObjectName(QStringLiteral("client_failure_cnt_text"));
        client_failure_cnt_text->setMinimumSize(QSize(182, 0));
        client_failure_cnt_text->setFont(font1);
        client_failure_cnt_text->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        client_failure_cnt_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(client_failure_cnt_text);

        client_crawled_time_text = new QLabel(client_text_widget);
        client_crawled_time_text->setObjectName(QStringLiteral("client_crawled_time_text"));
        sizePolicy5.setHeightForWidth(client_crawled_time_text->sizePolicy().hasHeightForWidth());
        client_crawled_time_text->setSizePolicy(sizePolicy5);
        client_crawled_time_text->setMinimumSize(QSize(182, 0));
        client_crawled_time_text->setFont(font1);
        client_crawled_time_text->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        client_crawled_time_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(client_crawled_time_text);

        client_begin_time_text = new QLabel(client_text_widget);
        client_begin_time_text->setObjectName(QStringLiteral("client_begin_time_text"));
        sizePolicy5.setHeightForWidth(client_begin_time_text->sizePolicy().hasHeightForWidth());
        client_begin_time_text->setSizePolicy(sizePolicy5);
        client_begin_time_text->setMinimumSize(QSize(182, 0));
        client_begin_time_text->setFont(font1);
        client_begin_time_text->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        client_begin_time_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(client_begin_time_text);


        gridLayout_3->addWidget(client_text_widget, 0, 0, 1, 1);

        client3_widget = new QWidget(client_grid);
        client3_widget->setObjectName(QStringLiteral("client3_widget"));
        sizePolicy4.setHeightForWidth(client3_widget->sizePolicy().hasHeightForWidth());
        client3_widget->setSizePolicy(sizePolicy4);
        client3_widget->setMinimumSize(QSize(0, 50));
        horizontalLayout_21 = new QHBoxLayout(client3_widget);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(1, 1, 1, 1);
        client3_name = new QLabel(client3_widget);
        client3_name->setObjectName(QStringLiteral("client3_name"));
        client3_name->setMinimumSize(QSize(182, 0));
        client3_name->setFont(font1);
        client3_name->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client3_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(client3_name);

        client3_state = new QLabel(client3_widget);
        client3_state->setObjectName(QStringLiteral("client3_state"));
        client3_state->setMinimumSize(QSize(182, 0));
        client3_state->setFont(font1);
        client3_state->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client3_state->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(client3_state);

        client3_switch = new QPushButton(client3_widget);
        client3_switch->setObjectName(QStringLiteral("client3_switch"));
        client3_switch->setMinimumSize(QSize(182, 30));

        horizontalLayout_21->addWidget(client3_switch);

        client3_crawled_count = new QLabel(client3_widget);
        client3_crawled_count->setObjectName(QStringLiteral("client3_crawled_count"));
        sizePolicy5.setHeightForWidth(client3_crawled_count->sizePolicy().hasHeightForWidth());
        client3_crawled_count->setSizePolicy(sizePolicy5);
        client3_crawled_count->setMinimumSize(QSize(182, 0));
        client3_crawled_count->setFont(font1);
        client3_crawled_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client3_crawled_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(client3_crawled_count);

        client3_failure_count = new QLabel(client3_widget);
        client3_failure_count->setObjectName(QStringLiteral("client3_failure_count"));
        sizePolicy5.setHeightForWidth(client3_failure_count->sizePolicy().hasHeightForWidth());
        client3_failure_count->setSizePolicy(sizePolicy5);
        client3_failure_count->setMinimumSize(QSize(182, 0));
        client3_failure_count->setFont(font1);
        client3_failure_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client3_failure_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(client3_failure_count);

        client3_crawled_time = new QLabel(client3_widget);
        client3_crawled_time->setObjectName(QStringLiteral("client3_crawled_time"));
        client3_crawled_time->setMinimumSize(QSize(182, 0));
        client3_crawled_time->setFont(font1);
        client3_crawled_time->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client3_crawled_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(client3_crawled_time);

        client3_begin_time = new QLabel(client3_widget);
        client3_begin_time->setObjectName(QStringLiteral("client3_begin_time"));
        client3_begin_time->setMinimumSize(QSize(182, 0));
        client3_begin_time->setFont(font1);
        client3_begin_time->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client3_begin_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(client3_begin_time);


        gridLayout_3->addWidget(client3_widget, 3, 0, 1, 1);

        client1_widget = new QWidget(client_grid);
        client1_widget->setObjectName(QStringLiteral("client1_widget"));
        sizePolicy4.setHeightForWidth(client1_widget->sizePolicy().hasHeightForWidth());
        client1_widget->setSizePolicy(sizePolicy4);
        client1_widget->setMinimumSize(QSize(0, 50));
        horizontalLayout_19 = new QHBoxLayout(client1_widget);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(1, 1, 1, 1);
        client1_name = new QLabel(client1_widget);
        client1_name->setObjectName(QStringLiteral("client1_name"));
        client1_name->setMinimumSize(QSize(182, 0));
        client1_name->setFont(font1);
        client1_name->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client1_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(client1_name);

        client1_state = new QLabel(client1_widget);
        client1_state->setObjectName(QStringLiteral("client1_state"));
        client1_state->setMinimumSize(QSize(182, 0));
        client1_state->setFont(font1);
        client1_state->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client1_state->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(client1_state);

        client1_switch = new QPushButton(client1_widget);
        client1_switch->setObjectName(QStringLiteral("client1_switch"));
        client1_switch->setMinimumSize(QSize(182, 30));

        horizontalLayout_19->addWidget(client1_switch);

        client1_crawled_count = new QLabel(client1_widget);
        client1_crawled_count->setObjectName(QStringLiteral("client1_crawled_count"));
        sizePolicy5.setHeightForWidth(client1_crawled_count->sizePolicy().hasHeightForWidth());
        client1_crawled_count->setSizePolicy(sizePolicy5);
        client1_crawled_count->setMinimumSize(QSize(182, 0));
        client1_crawled_count->setFont(font1);
        client1_crawled_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client1_crawled_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(client1_crawled_count);

        client1_failure_count = new QLabel(client1_widget);
        client1_failure_count->setObjectName(QStringLiteral("client1_failure_count"));
        sizePolicy5.setHeightForWidth(client1_failure_count->sizePolicy().hasHeightForWidth());
        client1_failure_count->setSizePolicy(sizePolicy5);
        client1_failure_count->setMinimumSize(QSize(182, 0));
        client1_failure_count->setFont(font1);
        client1_failure_count->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client1_failure_count->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(client1_failure_count);

        client1_crawled_time = new QLabel(client1_widget);
        client1_crawled_time->setObjectName(QStringLiteral("client1_crawled_time"));
        client1_crawled_time->setMinimumSize(QSize(182, 0));
        client1_crawled_time->setFont(font1);
        client1_crawled_time->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client1_crawled_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(client1_crawled_time);

        client1_begin_time = new QLabel(client1_widget);
        client1_begin_time->setObjectName(QStringLiteral("client1_begin_time"));
        client1_begin_time->setMinimumSize(QSize(182, 0));
        client1_begin_time->setFont(font1);
        client1_begin_time->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        client1_begin_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(client1_begin_time);


        gridLayout_3->addWidget(client1_widget, 1, 0, 1, 1);

        client_content->setWidget(client_grid);

        verticalLayout_9->addWidget(client_content);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 22));
        menuOption = new QMenu(menubar);
        menuOption->setObjectName(QStringLiteral("menuOption"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOption->menuAction());
        menuOption->addAction(actionquit);

        retranslateUi(MainWindow);
        QObject::connect(actionquit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionquit->setText(QApplication::translate("MainWindow", "quit", Q_NULLPTR));
        server_name->setText(QApplication::translate("MainWindow", "Server", Q_NULLPTR));
        date->setText(QApplication::translate("MainWindow", "Mon, May 31, 2020", Q_NULLPTR));
        time->setText(QApplication::translate("MainWindow", "14 : 50", Q_NULLPTR));
        DatabaseConnection->setText(QApplication::translate("MainWindow", "Database Connection", Q_NULLPTR));
        ClientConnection->setText(QApplication::translate("MainWindow", "Client Connection", Q_NULLPTR));
        Crawling->setText(QApplication::translate("MainWindow", "Crawling", Q_NULLPTR));
        Report->setText(QApplication::translate("MainWindow", "Report", Q_NULLPTR));
        server_info_text->setText(QApplication::translate("MainWindow", "Server Info", Q_NULLPTR));
        run_time_val->setText(QApplication::translate("MainWindow", "Run Time :", Q_NULLPTR));
        run_time_text->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        hour_crawl_text->setText(QApplication::translate("MainWindow", "Hour Crawled Count :", Q_NULLPTR));
        hour_crawl_val->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        begin_time_text->setText(QApplication::translate("MainWindow", "Begin Time : ", Q_NULLPTR));
        begin_time_val->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        day_crawl_text->setText(QApplication::translate("MainWindow", "Day Crawled Count :", Q_NULLPTR));
        day_crawl_val->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        failure_rate_text->setText(QApplication::translate("MainWindow", "Failure Rate :", Q_NULLPTR));
        failure_rate_val->setText(QApplication::translate("MainWindow", "0.000", Q_NULLPTR));
        failure_cnt_text->setText(QApplication::translate("MainWindow", "Failure Count :", Q_NULLPTR));
        failure_cnt_val->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        total_cnt_text->setText(QApplication::translate("MainWindow", "Total Count :", Q_NULLPTR));
        total_cnt_val->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        speed_text->setText(QApplication::translate("MainWindow", "Speed (per minute) :", Q_NULLPTR));
        speed_val->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        workload_text->setText(QApplication::translate("MainWindow", "Workload", Q_NULLPTR));
        clientA_val->setText(QApplication::translate("MainWindow", "client A", Q_NULLPTR));
        clientB_val->setText(QApplication::translate("MainWindow", "client B", Q_NULLPTR));
        clientC_val->setText(QApplication::translate("MainWindow", "client C", Q_NULLPTR));
        website_text->setText(QApplication::translate("MainWindow", "Website Info", Q_NULLPTR));
        ptt_name->setText(QApplication::translate("MainWindow", "Ptt", Q_NULLPTR));
        ptt_crawled_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        ptt_failed_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        ptt_crawled_time->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        yahoo_name->setText(QApplication::translate("MainWindow", "Yahoo News", Q_NULLPTR));
        yahoo_crawled_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        yahoo_failure_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        yahoo_crawled_time->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        ettoday_website_name->setText(QApplication::translate("MainWindow", "Ettoday", Q_NULLPTR));
        ettoday_crawled_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        ettoday_failure_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        ettoday_crawled_time->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        category_website_name->setText(QApplication::translate("MainWindow", "Website Name", Q_NULLPTR));
        category_crawled_count->setText(QApplication::translate("MainWindow", "Crawled Count", Q_NULLPTR));
        category_failure_count->setText(QApplication::translate("MainWindow", "Failure Count", Q_NULLPTR));
        category_crawled_time->setText(QApplication::translate("MainWindow", "Crawled Time", Q_NULLPTR));
        clien_text->setText(QApplication::translate("MainWindow", "Client Info", Q_NULLPTR));
        client2_name->setText(QApplication::translate("MainWindow", "Client B", Q_NULLPTR));
        client2_state->setText(QApplication::translate("MainWindow", "Suspended", Q_NULLPTR));
        client2_switch->setText(QApplication::translate("MainWindow", "Suspend / Resume", Q_NULLPTR));
        client2_crawled_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        client2_failure_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        client2_crawled_time->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        client2_begin_time->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        client_name_text->setText(QApplication::translate("MainWindow", "Client Name", Q_NULLPTR));
        client_state_text->setText(QApplication::translate("MainWindow", "State", Q_NULLPTR));
        client_switch_text->setText(QApplication::translate("MainWindow", "Switch", Q_NULLPTR));
        client_crawl_cnt_text->setText(QApplication::translate("MainWindow", "Crawled Count", Q_NULLPTR));
        client_failure_cnt_text->setText(QApplication::translate("MainWindow", "Failure Count", Q_NULLPTR));
        client_crawled_time_text->setText(QApplication::translate("MainWindow", "Crawled Time", Q_NULLPTR));
        client_begin_time_text->setText(QApplication::translate("MainWindow", "Begin Time", Q_NULLPTR));
        client3_name->setText(QApplication::translate("MainWindow", "Client C", Q_NULLPTR));
        client3_state->setText(QApplication::translate("MainWindow", "Stopped", Q_NULLPTR));
        client3_switch->setText(QApplication::translate("MainWindow", "Suspend / Resume", Q_NULLPTR));
        client3_crawled_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        client3_failure_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        client3_crawled_time->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        client3_begin_time->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        client1_name->setText(QApplication::translate("MainWindow", "Client A", Q_NULLPTR));
        client1_state->setText(QApplication::translate("MainWindow", "Running", Q_NULLPTR));
        client1_switch->setText(QApplication::translate("MainWindow", "Suspend / Resume", Q_NULLPTR));
        client1_crawled_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        client1_failure_count->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        client1_crawled_time->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        client1_begin_time->setText(QApplication::translate("MainWindow", "0 : 00 : 00", Q_NULLPTR));
        menuOption->setTitle(QApplication::translate("MainWindow", "Option", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
