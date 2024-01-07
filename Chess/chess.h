#pragma once
#ifndef CHESS_H
#define CHESS_H

#include <QtWidgets/QMainWindow>
#include "ui_chess.h"

class Chess : public QMainWindow
{
    Q_OBJECT

public:
    Chess(QWidget* parent = nullptr);
    ~Chess();

private:
    Ui::ChessClass ui;
};

#endif // !CHESS_H
