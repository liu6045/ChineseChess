#ifndef CHESSPIECEMODEL_H
#define CHESSPIECEMODEL_H

#include <QString>

#include "types.h"

class ChessboardModel;

class ChesspieceModel
{
public:
    ChesspieceModel(Color color, const QString &name, const QString &chineseName);

    bool move(ChessboardModel &board, int destX, int destY);

    virtual bool canMove(const ChessboardModel &board, int destX, int destY) = 0;
    void doMove(ChessboardModel &board, int destX, int destY);

    void setDeath();

    int x() const;

    int y() const;

    void setPos(int x, int y);

    bool alive() const;
    void setAlive(bool alive);

    QString name() const;

    QString chineseName() const;

    Color color() const;

private:
    int m_x;
    int m_y;

    Color m_color;
    bool m_alive;

    QString m_name;
    QString m_chineseName;
};

class JuChesspieceModel : public ChesspieceModel {
public:
    JuChesspieceModel(Color color, const QString &name, const QString &chineseName);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class MaChesspieceModel : public ChesspieceModel {
public:
    MaChesspieceModel(Color color, const QString &name, const QString &chineseName);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class PaoChesspieceModel : public ChesspieceModel {
public:
    PaoChesspieceModel(Color color, const QString &name, const QString &chineseName);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class XiangChesspieceModel : public ChesspieceModel {
public:
    XiangChesspieceModel(Color color, const QString &name, const QString &chineseName);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class ShiChesspieceModel : public ChesspieceModel {
public:
    ShiChesspieceModel(Color color, const QString &name, const QString &chineseName);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class JiangChesspieceModel : public ChesspieceModel {
public:
    JiangChesspieceModel(Color color, const QString &name, const QString &chineseName);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class ZuChesspieceModel : public ChesspieceModel {
public:
    ZuChesspieceModel(Color color, const QString &name, const QString &chineseName);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

#endif // CHESSPIECEMODEL_H
