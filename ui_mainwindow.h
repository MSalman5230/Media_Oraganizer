/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QPushButton *GoBtn1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QPushButton *BrowseBtn3;
    QLabel *label_2;
    QPushButton *BrowseBtn2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit;
    QPushButton *BrowseBtn1;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QProgressBar *progressBar;
    QPushButton *StopBtn1;
    QPushButton *NxtBtn;
    QWidget *page_3;
    QGridLayout *gridLayout_7;
    QLabel *label_5;
    QPushButton *ReturnBtn;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(956, 600);
        MainWindow->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"    border: 1px solid #76797C;\n"
"    background-color: rgb(90, 102, 117);;\n"
"    color: white;\n"
"    padding: 5px;\n"
"    opacity: 200;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: #31363b;\n"
"    selection-background-color:#3daee9;\n"
"    selection-color: #eff0f1;\n"
"    background-clip: border;\n"
"    border-image: none;\n"
"    border: 0px transparent black;\n"
"    outline: 0;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: #3daee9;\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: #3daee9;\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"    spacing: 5px;\n"
"    outline: none;\n"
"    color: #eff0f1;\n"
"    margin-bottom: 2px;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"    color: #76797C;\n"
"}\n"
"\n"
"QCheckBox::indicator,\n"
"QGroupBox::indicator\n"
"{\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"QGroupBox::indicator\n"
"{\n"
"    margin-left: 2px;\n"
"}\n"
"\n"
"QCheckBox::indicato"
                        "r:unchecked\n"
"{\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover,\n"
"QCheckBox::indicator:unchecked:focus,\n"
"QCheckBox::indicator:unchecked:pressed,\n"
"QGroupBox::indicator:unchecked:hover,\n"
"QGroupBox::indicator:unchecked:focus,\n"
"QGroupBox::indicator:unchecked:pressed\n"
"{\n"
"  border: none;\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked_focus.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image: url(:/qss_icons/rc/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover,\n"
"QCheckBox::indicator:checked:focus,\n"
"QCheckBox::indicator:checked:pressed,\n"
"QGroupBox::indicator:checked:hover,\n"
"QGroupBox::indicator:checked:focus,\n"
"QGroupBox::indicator:checked:pressed\n"
"{\n"
"  border: none;\n"
"    image: url(:/qss_icons/rc/checkbox_checked_focus.png);\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:indeterminate\n"
"{\n"
"    image: url(:/qss_icons/rc/checkbox_indeterminate.png);\n"
"}\n"
"\n"
"QC"
                        "heckBox::indicator:indeterminate:focus,\n"
"QCheckBox::indicator:indeterminate:hover,\n"
"QCheckBox::indicator:indeterminate:pressed\n"
"{\n"
"    image: url(:/qss_icons/rc/checkbox_indeterminate_focus.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled,\n"
"QGroupBox::indicator:checked:disabled\n"
"{\n"
"    image: url(:/qss_icons/rc/checkbox_checked_disabled.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled,\n"
"QGroupBox::indicator:unchecked:disabled\n"
"{\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked_disabled.png);\n"
"}\n"
"\n"
"QRadioButton\n"
"{\n"
"    spacing: 5px;\n"
"    outline: none;\n"
"    color: #eff0f1;\n"
"    margin-bottom: 2px;\n"
"}\n"
"\n"
"QRadioButton:disabled\n"
"{\n"
"    color: #76797C;\n"
"}\n"
"QRadioButton::indicator\n"
"{\n"
"    width: 21px;\n"
"    height: 21px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked\n"
"{\n"
"    image: url(:/qss_icons/rc/radio_unchecked.png);\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:unchecked:hover,\n"
"QRadioButton::indi"
                        "cator:unchecked:focus,\n"
"QRadioButton::indicator:unchecked:pressed\n"
"{\n"
"    border: none;\n"
"    outline: none;\n"
"    image: url(:/qss_icons/rc/radio_unchecked_focus.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    border: none;\n"
"    outline: none;\n"
"    image: url(:/qss_icons/rc/radio_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover,\n"
"QRadioButton::indicator:checked:focus,\n"
"QRadioButton::indicator:checked:pressed\n"
"{\n"
"    border: none;\n"
"    outline: none;\n"
"    image: url(:/qss_icons/rc/radio_checked_focus.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:disabled\n"
"{\n"
"    outline: none;\n"
"    image: url(:/qss_icons/rc/radio_checked_disabled.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:disabled\n"
"{\n"
"    image: url(:/qss_icons/rc/radio_unchecked_disabled.png);\n"
"}\n"
"\n"
"\n"
"QMenuBar\n"
"{\n"
"    background-color: #31363b;\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;"
                        "\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    border: 1px solid #76797C;\n"
"    background-color: #3daee9;\n"
"    color: #eff0f1;\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #76797C;\n"
"    color: #eff0f1;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QMenu::icon\n"
"{\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 5px 30px 5px 30px;\n"
"    margin-left: 5px;\n"
"    border: 1px solid transparent; /* reserve space for selection border */\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"QMenu::separator {\n"
"    height: 2px;\n"
"    background: lightblue;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QMenu::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"\n"
"/* non-exclusive indicator = check box style indicator\n"
"   (see QActionGroup::se"
                        "tExclusive) */\n"
"QMenu::indicator:non-exclusive:unchecked {\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QMenu::indicator:non-exclusive:unchecked:selected {\n"
"    image: url(:/qss_icons/rc/checkbox_unchecked_disabled.png);\n"
"}\n"
"\n"
"QMenu::indicator:non-exclusive:checked {\n"
"    image: url(:/qss_icons/rc/checkbox_checked.png);\n"
"}\n"
"\n"
"QMenu::indicator:non-exclusive:checked:selected {\n"
"    image: url(:/qss_icons/rc/checkbox_checked_disabled.png);\n"
"}\n"
"\n"
"/* exclusive indicator = radio button style indicator (see QActionGroup::setExclusive) */\n"
"QMenu::indicator:exclusive:unchecked {\n"
"    image: url(:/qss_icons/rc/radio_unchecked.png);\n"
"}\n"
"\n"
"QMenu::indicator:exclusive:unchecked:selected {\n"
"    image: url(:/qss_icons/rc/radio_unchecked_disabled.png);\n"
"}\n"
"\n"
"QMenu::indicator:exclusive:checked {\n"
"    image: url(:/qss_icons/rc/radio_checked.png);\n"
"}\n"
"\n"
"QMenu::indicator:exclusive:checked:selected {\n"
"    image: url(:/qss_i"
                        "cons/rc/radio_checked_disabled.png);\n"
"}\n"
"\n"
"QMenu::right-arrow {\n"
"    margin: 5px;\n"
"    image: url(:/qss_icons/rc/right_arrow.png)\n"
"}\n"
"\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #454545;\n"
"    background-color: #31363b;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    alternate-background-color: #31363b;\n"
"    color: #eff0f1;\n"
"    border: 1px solid 3A3939;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QWidget:focus, QMenuBar:focus\n"
"{\n"
"    border: 1px solid #3daee9;\n"
"}\n"
"\n"
"QTabWidget:focus, QCheckBox:focus, QRadioButton:focus, QSlider:focus\n"
"{\n"
"    border: none;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: #232629;\n"
"    padding: 5px;\n"
"    border-style: solid;\n"
"    border: 1px solid #76797C;\n"
"    border-radius: 2px;\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    border:1px solid #76797C;\n"
"    border-radius: 2px;\n"
"    margin-top: 20px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-pos"
                        "ition: top center;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 10px;\n"
"}\n"
"\n"
"QAbstractScrollArea\n"
"{\n"
"    border-radius: 2px;\n"
"    border: 1px solid #76797C;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QScrollBar:horizontal\n"
"{\n"
"    height: 15px;\n"
"    margin: 3px 15px 3px 15px;\n"
"    border: 1px transparent #2A2929;\n"
"    border-radius: 4px;\n"
"    background-color: #2A2929;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    background-color: #605F5F;\n"
"    min-width: 5px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal\n"
"{\n"
"    margin: 0px 3px 0px 3px;\n"
"    border-image: url(:/qss_icons/rc/right_arrow_disabled.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal\n"
"{\n"
"    margin: 0px 3px 0px 3px;\n"
"    border-image: url(:/qss_icons/rc/left_arrow_disabled.png);\n"
"    height: "
                        "10px;\n"
"    width: 10px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal:hover,QScrollBar::add-line:horizontal:on\n"
"{\n"
"    border-image: url(:/qss_icons/rc/right_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:horizontal:hover, QScrollBar::sub-line:horizontal:on\n"
"{\n"
"    border-image: url(:/qss_icons/rc/left_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:horizontal, QScrollBar::down-arrow:horizontal\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background-color: #2A2929;\n"
"    width: 15px;\n"
"    margin: 15px 3px 15px 3px;\n"
"    border: 1px transpa"
                        "rent #2A2929;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background-color: #605F5F;\n"
"    min-height: 5px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    margin: 3px 0px 3px 0px;\n"
"    border-image: url(:/qss_icons/rc/up_arrow_disabled.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"    margin: 3px 0px 3px 0px;\n"
"    border-image: url(:/qss_icons/rc/down_arrow_disabled.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical:hover,QScrollBar::sub-line:vertical:on\n"
"{\n"
"\n"
"    border-image: url(:/qss_icons/rc/up_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical:hover,"
                        " QScrollBar::add-line:vertical:on\n"
"{\n"
"    border-image: url(:/qss_icons/rc/down_arrow.png);\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #232629;\n"
"    color: #eff0f1;\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #232629;;\n"
"    color: #eff0f1;\n"
"    border-radius: 2px;\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: #76797C;\n"
"    color: #eff0f1;\n"
"    padding: 5px;\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"QSizeGrip {\n"
"    image: url(:/qss_icons/rc/sizegrip.png);\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"\n"
"QMainWin"
                        "dow::separator\n"
"{\n"
"    background-color: #31363b;\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    spacing: 2px;\n"
"    border: 1px dashed #76797C;\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: #787876;\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #76797C;\n"
"    spacing: 2px;\n"
"}\n"
"\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 1px;\n"
"    background-color: #76797C;\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"\n"
"QFrame\n"
"{\n"
"    border-radius: 2px;\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"QFrame[frameShape=\"0\"]\n"
"{\n"
"    border-radius: 2px;\n"
"    border: 1px transparent #76797C;\n"
"}\n"
"\n"
"QStackedWidget\n"
"{\n"
"    border: 1px transparent black;\n"
"}\n"
"\n"
"QToolBar {\n"
"    border: 1px transparent #393838;\n"
"    background: 1px solid #31363b;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QToolBar::handle:horizontal {\n"
""
                        "    image: url(:/qss_icons/rc/Hmovetoolbar.png);\n"
"}\n"
"QToolBar::handle:vertical {\n"
"    image: url(:/qss_icons/rc/Vmovetoolbar.png);\n"
"}\n"
"QToolBar::separator:horizontal {\n"
"    image: url(:/qss_icons/rc/Hsepartoolbar.png);\n"
"}\n"
"QToolBar::separator:vertical {\n"
"    image: url(:/qss_icons/rc/Vsepartoolbars.png);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: #31363b;\n"
"    border-width: 1px;\n"
"    border-color: #76797C;\n"
"    border-style: solid;\n"
"    padding: 5px;\n"
"    border-radius: 2px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"    background-color: #31363b;\n"
"    border-width: 1px;\n"
"    border-color: #454545;\n"
"    border-style: solid;\n"
"    padding-top: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    border-radius: 2px;\n"
"    color: #454545;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    background-color: #3daee9;\n"
"    color: white;\n"
"}\n"
"\n"
"QPush"
                        "Button:pressed\n"
"{\n"
"    background-color: #3daee9;\n"
"    padding-top: -15px;\n"
"    padding-bottom: -17px;\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #3daee9;\n"
"    border-style: solid;\n"
"    border: 1px solid #76797C;\n"
"    border-radius: 2px;\n"
"    padding: 5px;\n"
"    min-width: 75px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"    background-color: #76797C;\n"
"    border-color: #6A6969;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover,QAbstractSpinBox:hover,QLineEdit:hover,QTextEdit:hover,QPlainTextEdit:hover,QAbstractView:hover,QTreeView:hover\n"
"{\n"
"    border: 1px solid #3daee9;\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    selection-background-color: #4a4a4a;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    background-color: #232629;\n"
"    border-radius: 2px;\n"
"    border: 1px solid #76797C;\n"
"    selection-background-color: #3daee9;\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
""
                        "    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 0px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(:/qss_icons/rc/down_arrow_disabled.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on, QComboBox::down-arrow:hover,\n"
"QComboBox::down-arrow:focus\n"
"{\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"QAbstractSpinBox {\n"
"    padding: 5px;\n"
"    border: 1px solid #76797C;\n"
"    background-color: #232629;\n"
"    color: #eff0f1;\n"
"    border-radius: 2px;\n"
"    min-width: 75px;\n"
"}\n"
"\n"
"QAbstractSpinBox:up-button\n"
"{\n"
"    background-color: transparent;\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: center right;\n"
"}\n"
"\n"
"QAbstractSpinBox:down-button\n"
"{\n"
"    background-color: transparent;\n"
"    subcontrol-origin:"
                        " border;\n"
"    subcontrol-position: center left;\n"
"}\n"
"\n"
"QAbstractSpinBox::up-arrow,QAbstractSpinBox::up-arrow:disabled,QAbstractSpinBox::up-arrow:off {\n"
"    image: url(:/qss_icons/rc/up_arrow_disabled.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
"QAbstractSpinBox::up-arrow:hover\n"
"{\n"
"    image: url(:/qss_icons/rc/up_arrow.png);\n"
"}\n"
"\n"
"\n"
"QAbstractSpinBox::down-arrow,QAbstractSpinBox::down-arrow:disabled,QAbstractSpinBox::down-arrow:off\n"
"{\n"
"    image: url(:/qss_icons/rc/down_arrow_disabled.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
"QAbstractSpinBox::down-arrow:hover\n"
"{\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"\n"
"QLabel\n"
"{\n"
"    border: 0px solid black;\n"
"}\n"
"\n"
"QTabWidget{\n"
"    border: 0px transparent black;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #76797C;\n"
"    padding: 5px;\n"
"    margin: 1px;\n"
"}\n"
"\n"
"QTabBar\n"
"{\n"
"    qproperty-drawBase: 0;\n"
"    left: 5px; /* move to"
                        " the right by 5px */\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QTabBar:focus\n"
"{\n"
"    border: 0px transparent black;\n"
"}\n"
"\n"
"QTabBar::close-button  {\n"
"    image: url(:/qss_icons/rc/close.png);\n"
"    background: transparent;\n"
"}\n"
"\n"
"QTabBar::close-button:hover\n"
"{\n"
"    image: url(:/qss_icons/rc/close-hover.png);\n"
"    background: transparent;\n"
"}\n"
"\n"
"QTabBar::close-button:pressed {\n"
"    image: url(:/qss_icons/rc/close-pressed.png);\n"
"    background: transparent;\n"
"}\n"
"\n"
"/* TOP TABS */\n"
"QTabBar::tab:top {\n"
"    color: #eff0f1;\n"
"    border: 1px solid #76797C;\n"
"    border-bottom: 1px transparent black;\n"
"    background-color: #31363b;\n"
"    padding: 5px;\n"
"    min-width: 50px;\n"
"    border-top-left-radius: 2px;\n"
"    border-top-right-radius: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: #54575B;\n"
"    border: 1px solid #76797C;\n"
"    border-bottom: 1px transparent black;\n"
"}\n"
"\n"
""
                        "QTabBar::tab:top:!selected:hover {\n"
"    background-color: #3daee9;\n"
"}\n"
"\n"
"/* BOTTOM TABS */\n"
"QTabBar::tab:bottom {\n"
"    color: #eff0f1;\n"
"    border: 1px solid #76797C;\n"
"    border-top: 1px transparent black;\n"
"    background-color: #31363b;\n"
"    padding: 5px;\n"
"    border-bottom-left-radius: 2px;\n"
"    border-bottom-right-radius: 2px;\n"
"    min-width: 50px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: #54575B;\n"
"    border: 1px solid #76797C;\n"
"    border-top: 1px transparent black;\n"
"    border-bottom-left-radius: 2px;\n"
"    border-bottom-right-radius: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected:hover {\n"
"    background-color: #3daee9;\n"
"}\n"
"\n"
"/* LEFT TABS */\n"
"QTabBar::tab:left {\n"
"    color: #eff0f1;\n"
"    border: 1px solid #76797C;\n"
"    border-left: 1px transparent black;\n"
"    background-color: #31363b;\n"
"    padding: 5px;\n"
"    border-top-right-radius: 2px;\n"
"    border-bottom"
                        "-right-radius: 2px;\n"
"    min-height: 50px;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: #54575B;\n"
"    border: 1px solid #76797C;\n"
"    border-left: 1px transparent black;\n"
"    border-top-right-radius: 2px;\n"
"    border-bottom-right-radius: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected:hover {\n"
"    background-color: #3daee9;\n"
"}\n"
"\n"
"\n"
"/* RIGHT TABS */\n"
"QTabBar::tab:right {\n"
"    color: #eff0f1;\n"
"    border: 1px solid #76797C;\n"
"    border-right: 1px transparent black;\n"
"    background-color: #31363b;\n"
"    padding: 5px;\n"
"    border-top-left-radius: 2px;\n"
"    border-bottom-left-radius: 2px;\n"
"    min-height: 50px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: #54575B;\n"
"    border: 1px transparent #76797C;\n"
"    border-right: 1px transparent black;\n"
"    border-top-left-radius: 0px;\n"
"    border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:r"
                        "ight:!selected:hover {\n"
"    background-color: #3daee9;\n"
"}\n"
"\n"
"QTabBar QToolButton::right-arrow:enabled {\n"
"     image: url(:/qss_icons/rc/right_arrow.png);\n"
" }\n"
"\n"
" QTabBar QToolButton::left-arrow:enabled {\n"
"     image: url(:/qss_icons/rc/left_arrow.png);\n"
" }\n"
"\n"
"QTabBar QToolButton::right-arrow:disabled {\n"
"     image: url(:/qss_icons/rc/right_arrow_disabled.png);\n"
" }\n"
"\n"
" QTabBar QToolButton::left-arrow:disabled {\n"
"     image: url(:/qss_icons/rc/left_arrow_disabled.png);\n"
" }\n"
"\n"
"\n"
"QDockWidget {\n"
"    background: #31363b;\n"
"    border: 1px solid #403F3F;\n"
"    titlebar-close-icon: url(:/qss_icons/rc/close.png);\n"
"    titlebar-normal-icon: url(:/qss_icons/rc/undock.png);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button {\n"
"    border: 1px solid transparent;\n"
"    border-radius: 2px;\n"
"    background: transparent;\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover {\n"
"    background: rgba(255,"
                        " 255, 255, 10);\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed {\n"
"    padding: 1px -1px -1px 1px;\n"
"    background: rgba(255, 255, 255, 10);\n"
"}\n"
"\n"
"QTreeView, QListView\n"
"{\n"
"    border: 1px solid #76797C;\n"
"    background-color: #232629;\n"
"}\n"
"\n"
"QTreeView:branch:selected, QTreeView:branch:hover\n"
"{\n"
"    background: url(:/qss_icons/rc/transparent.png);\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:!adjoins-item {\n"
"    border-image: url(:/qss_icons/rc/transparent.png);\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:adjoins-item {\n"
"    border-image: url(:/qss_icons/rc/transparent.png);\n"
"}\n"
"\n"
"QTreeView::branch:!has-children:!has-siblings:adjoins-item {\n"
"    border-image: url(:/qss_icons/rc/transparent.png);\n"
"}\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings {\n"
"    image: url(:/qss_icons/rc/branch_closed.png);\n"
"}\n"
"\n"
"QTreeView::branch:open:has-child"
                        "ren:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings  {\n"
"    image: url(:/qss_icons/rc/branch_open.png);\n"
"}\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed:hover,\n"
"QTreeView::branch:closed:has-children:has-siblings:hover {\n"
"    image: url(:/qss_icons/rc/branch_closed-on.png);\n"
"    }\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings:hover,\n"
"QTreeView::branch:open:has-children:has-siblings:hover  {\n"
"    image: url(:/qss_icons/rc/branch_open-on.png);\n"
"    }\n"
"\n"
"QListView::item:!selected:hover, QListView::item:!selected:hover, QTreeView::item:!selected:hover  {\n"
"    background: rgba(0, 0, 0, 0);\n"
"    outline: 0;\n"
"    color: #eff0f1\n"
"}\n"
"\n"
"QListView::item:selected:hover, QListView::item:selected:hover, QTreeView::item:selected:hover  {\n"
"    background: #3daee9;\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    border: 1px solid #565a5e;\n"
"    height: 4px;\n"
"    background: #565a5e;\n"
"    margin:"
                        " 0px;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #232629;\n"
"    border: 1px solid #565a5e;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: -8px 0;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid #565a5e;\n"
"    width: 4px;\n"
"    background: #565a5e;\n"
"    margin: 0px;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #232629;\n"
"    border: 1px solid #565a5e;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    margin: 0 -8px;\n"
"    border-radius: 9px;\n"
"}\n"
"\n"
"QToolButton {\n"
"    background-color: transparent;\n"
"    border: 1px transparent #76797C;\n"
"    border-radius: 2px;\n"
"    margin: 3px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QToolButton[popupMode=\"1\"] { /* only for MenuButtonPopup */\n"
" padding-right: 20px; /* make way for the popup button */\n"
" border: 1px #76797C;\n"
" border-radius: 5px;\n"
"}\n"
"\n"
"QToolButton[popupMode=\"2\""
                        "] { /* only for InstantPopup */\n"
" padding-right: 10px; /* make way for the popup button */\n"
" border: 1px #76797C;\n"
"}\n"
"\n"
"\n"
"QToolButton:hover, QToolButton::menu-button:hover {\n"
"    background-color: transparent;\n"
"    border: 1px solid #3daee9;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QToolButton:checked, QToolButton:pressed,\n"
"        QToolButton::menu-button:pressed {\n"
"    background-color: #3daee9;\n"
"    border: 1px solid #3daee9;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* the subcontrol below is used only in the InstantPopup or DelayedPopup mode */\n"
"QToolButton::menu-indicator {\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"    top: -7px; left: -2px; /* shift it a bit */\n"
"}\n"
"\n"
"/* the subcontrols below are used only in the MenuButtonPopup mode */\n"
"QToolButton::menu-button {\n"
"    border: 1px transparent #76797C;\n"
"    border-top-right-radius: 6px;\n"
"    border-bottom-right-radius: 6px;\n"
"    /* 16px width + 4px for border = 20px allocated above */\n"
"   "
                        " width: 16px;\n"
"    outline: none;\n"
"}\n"
"\n"
"QToolButton::menu-arrow {\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"QToolButton::menu-arrow:open {\n"
"    border: 1px solid #76797C;\n"
"}\n"
"\n"
"QPushButton::menu-indicator  {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"    left: 8px;\n"
"}\n"
"\n"
"QTableView\n"
"{\n"
"    border: 1px solid #76797C;\n"
"    gridline-color: #31363b;\n"
"    background-color: #232629;\n"
"}\n"
"\n"
"\n"
"QTableView, QHeaderView\n"
"{\n"
"    border-radius: 0px;\n"
"}\n"
"\n"
"QTableView::item:pressed, QListView::item:pressed, QTreeView::item:pressed  {\n"
"    background: #3daee9;\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"QTableView::item:selected:active, QTreeView::item:selected:active, QListView::item:selected:active  {\n"
"    background: #3daee9;\n"
"    color: #eff0f1;\n"
"}\n"
"\n"
"\n"
"QHeaderView\n"
"{\n"
"    background-color: #31363b;\n"
"    border: 1px transparent;\n"
"    border-radius: 0px;\n"
"    "
                        "margin: 0px;\n"
"    padding: 0px;\n"
"\n"
"}\n"
"\n"
"QHeaderView::section  {\n"
"    background-color: #31363b;\n"
"    color: #eff0f1;\n"
"    padding: 5px;\n"
"    border: 1px solid #76797C;\n"
"    border-radius: 0px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QHeaderView::section::vertical::first, QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #76797C;\n"
"}\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: transparent;\n"
"}\n"
"\n"
"QHeaderView::section::horizontal::first, QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 1px solid #76797C;\n"
"}\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: transparent;\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
" {\n"
"    color: white;\n"
"    background-color: #334e5e;\n"
" }\n"
"\n"
" /* style the sort indicator */\n"
"QHeaderView::down-arrow {\n"
"    image: url(:/qss_icons/rc/down_arrow.png);\n"
"}\n"
"\n"
"QHeaderView::up-arrow {\n"
"    image: url(:/qss_icons/rc/u"
                        "p_arrow.png);\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section {\n"
"    background-color: #31363b;\n"
"    border: 1px transparent #76797C;\n"
"    border-radius: 0px;\n"
"}\n"
"\n"
"QToolBox  {\n"
"    padding: 5px;\n"
"    border: 1px transparent black;\n"
"}\n"
"\n"
"QToolBox::tab {\n"
"    color: #eff0f1;\n"
"    background-color: #31363b;\n"
"    border: 1px solid #76797C;\n"
"    border-bottom: 1px transparent #31363b;\n"
"    border-top-left-radius: 5px;\n"
"    border-top-right-radius: 5px;\n"
"}\n"
"\n"
"QToolBox::tab:selected { /* italicize selected tabs */\n"
"    font: italic;\n"
"    background-color: #31363b;\n"
"    border-color: #3daee9;\n"
" }\n"
"\n"
"QStatusBar::item {\n"
"    border: 0px transparent dark;\n"
" }\n"
"\n"
"\n"
"QFrame[height=\"3\"], QFrame[width=\"3\"] {\n"
"    background-color: #76797C;\n"
"}\n"
"\n"
"\n"
"QSplitter::handle {\n"
"    border: 1px dashed #76797C;\n"
"}\n"
"\n"
"QSplitter::handle:hover {\n"
"    background-color: #787876;\n"
"    border: 1px solid #76797C;\n"
""
                        "}\n"
"\n"
"QSplitter::handle:horizontal {\n"
"    width: 1px;\n"
"}\n"
"\n"
"QSplitter::handle:vertical {\n"
"    height: 1px;\n"
"}\n"
"\n"
"QProgressBar {\n"
"    border: 1px solid #76797C;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #05B8CC;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        GoBtn1 = new QPushButton(page);
        GoBtn1->setObjectName(QStringLiteral("GoBtn1"));
        GoBtn1->setMinimumSize(QSize(60, 95));

        gridLayout_2->addWidget(GoBtn1, 6, 1, 1, 1);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        BrowseBtn3 = new QPushButton(groupBox);
        BrowseBtn3->setObjectName(QStringLiteral("BrowseBtn3"));

        gridLayout_4->addWidget(BrowseBtn3, 3, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        BrowseBtn2 = new QPushButton(groupBox);
        BrowseBtn2->setObjectName(QStringLiteral("BrowseBtn2"));

        gridLayout_4->addWidget(BrowseBtn2, 0, 2, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_4->addWidget(lineEdit_2, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 3, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_4->addWidget(lineEdit_3, 3, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 2);

        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(300, 16777215));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        radioButton = new QRadioButton(groupBox_3);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_3->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setChecked(true);

        gridLayout_3->addWidget(radioButton_2, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 6, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Proxima Nova Semibold"));
        font.setPointSize(43);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:#3daee9;"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_5->addWidget(lineEdit, 0, 0, 1, 1);

        BrowseBtn1 = new QPushButton(groupBox_2);
        BrowseBtn1->setObjectName(QStringLiteral("BrowseBtn1"));

        gridLayout_5->addWidget(BrowseBtn1, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(page_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 2);

        progressBar = new QProgressBar(page_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(0, 50));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 0, 1, 2);

        StopBtn1 = new QPushButton(page_2);
        StopBtn1->setObjectName(QStringLiteral("StopBtn1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StopBtn1->sizePolicy().hasHeightForWidth());
        StopBtn1->setSizePolicy(sizePolicy);
        StopBtn1->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(StopBtn1, 2, 0, 1, 1);

        NxtBtn = new QPushButton(page_2);
        NxtBtn->setObjectName(QStringLiteral("NxtBtn"));
        NxtBtn->setEnabled(true);
        sizePolicy.setHeightForWidth(NxtBtn->sizePolicy().hasHeightForWidth());
        NxtBtn->setSizePolicy(sizePolicy);
        NxtBtn->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(NxtBtn, 2, 1, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_7 = new QGridLayout(page_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setPointSize(15);
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("\n"
"color:#3daee9;"));

        gridLayout_7->addWidget(label_5, 1, 1, 1, 1);

        ReturnBtn = new QPushButton(page_3);
        ReturnBtn->setObjectName(QStringLiteral("ReturnBtn"));
        ReturnBtn->setMinimumSize(QSize(60, 60));

        gridLayout_7->addWidget(ReturnBtn, 5, 2, 1, 1);

        label_4 = new QLabel(page_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setPointSize(50);
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color: #3daee9;"));
        label_4->setWordWrap(false);

        gridLayout_7->addWidget(label_4, 0, 1, 1, 1);

        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_7->addWidget(label_6, 2, 1, 1, 1);

        stackedWidget->addWidget(page_3);

        gridLayout_6->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        GoBtn1->setText(QApplication::translate("MainWindow", "GO", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Collection Location", nullptr));
        BrowseBtn3->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TV Show", nullptr));
        BrowseBtn2->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Movies", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Create Folder for New TV Shows", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "Yes", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "No", nullptr));
        label->setText(QApplication::translate("MainWindow", "Media Organizer", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Source Location", nullptr));
        BrowseBtn1->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        StopBtn1->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        NxtBtn->setText(QApplication::translate("MainWindow", "Next", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "                                            Files have been Moved\n"
"                                            For More info check Log.txt\n"
"                                            Press Return Home to go Start Page\n"
"\n"
"", nullptr));
        ReturnBtn->setText(QApplication::translate("MainWindow", "Return Home", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Completed", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"By LordXavier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
