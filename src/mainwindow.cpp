#include "mainwindow.h"

#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // 1. 部品を作る
    auto *languageBox = new QComboBox(this);
    auto *greetingButton = new QPushButton("挨拶する", this);
    auto *resultLabel = new QLabel("言語を選んでください", this);

    // 2. 選択肢を追加する
    languageBox->addItem("日本語");
    languageBox->addItem("English");
    languageBox->addItem("Français");

    // 3. レイアウトを作る
    auto *layout = new QVBoxLayout;
    layout->addWidget(languageBox);
    layout->addWidget(greetingButton);
    layout->addWidget(resultLabel);

    // 4. 部品を配置する領域を作る
    auto *central = new QWidget(this);
    central->setLayout(layout);
    setCentralWidget(central);

    // 5. ボタンが押されたときの処理
    connect(greetingButton, &QPushButton::clicked,
            this, [languageBox, resultLabel]() {
        const QString language = languageBox->currentText();

        if (language == "日本語") {
            resultLabel->setText("こんにちは！");
        } else if (language == "English") {
            resultLabel->setText("Hello!");
        } else if (language == "Français") {
            resultLabel->setText("Bonjour !");
        }
    });

    // 6. ウィンドウの設定
    setWindowTitle("Greeting Bot");
    resize(350, 200);
}