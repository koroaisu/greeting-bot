//このファイルでは、ウィンドウを表すクラスを宣言する
#ifndef MAINWINDOW_H
#define MAINWINDOW_H //MAINWINDOW_H がまだ定義されていない場合だけ、以下のコードを読み込みます。同じヘッダーファイルが複数回読み込まれることによる重複定義を防ぐための仕組みです。これをインクルードガードと呼びます。

#include <QMainWindow> //Qt の QMainWindow クラスを使用するために、必要なヘッダーファイルを読み込みます。QMainWindow は、メニューバーやツールバー、ステータスバーなどを持つメインウィンドウを作成するためのクラスです。

class MainWindow : public QMainWindow //MainWindow クラスを定義します。QMainWindow クラスを継承して、独自のウィンドウクラスを作成します。
{
public: //public アクセス指定子の下に、クラスのメンバ関数や変数を宣言します。public メンバは、クラスの外部からアクセス可能です。
    explicit MainWindow(QWidget *parent = nullptr);
    /*
    explicit：意図しない型変換を防ぎます
    QWidget *parent：親ウィジェットへのポインタです
    = nullptr：親ウィジェットを指定しない場合の初期値です
    */
};

#endif // MAINWINDOW_H
/*#ifndef に対応する終了部分です。
コメント MAINWINDOW_H は、どの条件に対応しているかを分かりやすくするためのものです。*/