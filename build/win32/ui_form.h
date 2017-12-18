/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_main;
    QGridLayout *gridLayout;
    QWidget *widget_pic;
    QVBoxLayout *verticalLayout_5;
    QOpenGLWidget *openGLWidget;
    QLineEdit *lineEdit_3;
    QWidget *widget_info;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_devices;
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_search;
    QGroupBox *groupBox_camera_detail;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_url;
    QGroupBox *groupBox_onPic;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_reboot;
    QPushButton *pushButton_save;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(952, 756);
        verticalLayout_4 = new QVBoxLayout(Form);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_title = new QWidget(Form);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        widget_title->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox_3 = new QCheckBox(widget_title);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout->addWidget(checkBox_3);

        checkBox = new QCheckBox(widget_title);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(false);

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget_title);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setEnabled(false);

        horizontalLayout->addWidget(checkBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(widget_title);

        widget_main = new QWidget(Form);
        widget_main->setObjectName(QStringLiteral("widget_main"));
        gridLayout = new QGridLayout(widget_main);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_pic = new QWidget(widget_main);
        widget_pic->setObjectName(QStringLiteral("widget_pic"));
        verticalLayout_5 = new QVBoxLayout(widget_pic);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        openGLWidget = new QOpenGLWidget(widget_pic);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));

        verticalLayout_5->addWidget(openGLWidget);

        lineEdit_3 = new QLineEdit(widget_pic);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_5->addWidget(lineEdit_3);


        gridLayout->addWidget(widget_pic, 0, 1, 1, 1);

        widget_info = new QWidget(widget_main);
        widget_info->setObjectName(QStringLiteral("widget_info"));
        widget_info->setMaximumSize(QSize(200, 16777215));
        verticalLayout_6 = new QVBoxLayout(widget_info);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_devices = new QGroupBox(widget_info);
        groupBox_devices->setObjectName(QStringLiteral("groupBox_devices"));
        groupBox_devices->setMaximumSize(QSize(300, 200));
        QPalette palette;
        QBrush brush(QColor(189, 255, 65, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush);
        QBrush brush1(QColor(125, 73, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush1);
        groupBox_devices->setPalette(palette);
        groupBox_devices->setAutoFillBackground(false);
        horizontalLayout_3 = new QHBoxLayout(groupBox_devices);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        treeWidget = new QTreeWidget(groupBox_devices);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("device_name"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout_3->addWidget(treeWidget);


        verticalLayout_6->addWidget(groupBox_devices);

        pushButton_search = new QPushButton(widget_info);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));

        verticalLayout_6->addWidget(pushButton_search);

        groupBox_camera_detail = new QGroupBox(widget_info);
        groupBox_camera_detail->setObjectName(QStringLiteral("groupBox_camera_detail"));
        groupBox_camera_detail->setMaximumSize(QSize(300, 16777215));
        verticalLayout = new QVBoxLayout(groupBox_camera_detail);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_url = new QLineEdit(groupBox_camera_detail);
        lineEdit_url->setObjectName(QStringLiteral("lineEdit_url"));

        verticalLayout->addWidget(lineEdit_url);


        verticalLayout_6->addWidget(groupBox_camera_detail);

        groupBox_onPic = new QGroupBox(widget_info);
        groupBox_onPic->setObjectName(QStringLiteral("groupBox_onPic"));
        verticalLayout_2 = new QVBoxLayout(groupBox_onPic);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_2 = new QLineEdit(groupBox_onPic);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);


        verticalLayout_6->addWidget(groupBox_onPic);

        groupBox = new QGroupBox(widget_info);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_reboot = new QPushButton(groupBox);
        pushButton_reboot->setObjectName(QStringLiteral("pushButton_reboot"));
        pushButton_reboot->setEnabled(false);

        verticalLayout_3->addWidget(pushButton_reboot);

        pushButton_save = new QPushButton(groupBox);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        verticalLayout_3->addWidget(pushButton_save);


        verticalLayout_6->addWidget(groupBox);


        gridLayout->addWidget(widget_info, 0, 0, 1, 1);


        verticalLayout_4->addWidget(widget_main);

        widget_main->raise();
        widget_title->raise();

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        checkBox_3->setText(QApplication::translate("Form", "show rect", 0));
        checkBox->setText(QApplication::translate("Form", "main frame", 0));
        checkBox_2->setText(QApplication::translate("Form", "sec frame", 0));
        groupBox_devices->setTitle(QApplication::translate("Form", "devices", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QApplication::translate("Form", "qiao xiang lu", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("Form", "192.168.1.1", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("Form", "192.168.1.2", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem->child(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("Form", "test.264", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("Form", "nong lin lu", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QApplication::translate("Form", "test.mp4", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        pushButton_search->setText(QApplication::translate("Form", "search device", 0));
        groupBox_camera_detail->setTitle(QApplication::translate("Form", "url", 0));
        groupBox_onPic->setTitle(QApplication::translate("Form", "points location", 0));
        groupBox->setTitle(QApplication::translate("Form", "function", 0));
        pushButton_reboot->setText(QApplication::translate("Form", "reboot", 0));
        pushButton_save->setText(QApplication::translate("Form", "save", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
