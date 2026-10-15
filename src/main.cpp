#include "mainwindow.h"//アプリケーションのメインウィンドウを定義したヘッダーファイルです。

#include <QApplication>//Qtアプリケーション全体を管理するクラスです。画面表示やユーザー操作を処理します。

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow window;//MainWindowクラスのインスタンスを作成し、メインウィンドウを準備します
    window.show();//メインウィンドウを画面に表示します。

    return app.exec();
/*
Qtのイベントループを開始します。これにより、次のような操作を受け付けられるようになります。

マウス操作
キーボード入力
ウィンドウの移動やサイズ変更
ボタンのクリック
アプリケーションが終了すると、app.exec()の結果が返され、プログラムも終了します。
*/
}