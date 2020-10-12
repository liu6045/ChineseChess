#ifndef CHESSPIECEMODEL_H
#define CHESSPIECEMODEL_H

#include <QString>

#include "types.h"

class ChessboardModel;

class ChesspieceModel
{
public:
    ChesspieceModel(Color color, const QString &name, const QString &chineseName,
                    int initX, int initY);

    bool move(ChessboardModel &board, int destX, int destY);

    virtual bool canMove(const ChessboardModel &board, int destX, int destY) = 0;
    void doMove(ChessboardModel &board, int destX, int destY);

    void setDeath();

    void reSet();

    int x() const;

    int y() const;

    void setPos(int x, int y);

    bool alive() const;
    void setAlive(bool alive);

    QString name() const;

    QString chineseName() const;

    Color color() const;

private:
    const int m_initX;
    const int m_initY;

    int m_x;
    int m_y;

    Color m_color;
    bool m_alive;

    QString m_name;
    QString m_chineseName;
};

class ChariotChesspieceModel : public ChesspieceModel {
public:
    ChariotChesspieceModel(Color color, const QString &name, const QString &chineseName,
                           int initX, int initY);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class HorseChesspieceModel : public ChesspieceModel {
public:
    HorseChesspieceModel(Color color, const QString &name, const QString &chineseName,
                         int initX, int initY);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class CannonChesspieceModel : public ChesspieceModel {
public:
    CannonChesspieceModel(Color color, const QString &name, const QString &chineseName,
                          int initX, int initY);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class ElephantChesspieceModel : public ChesspieceModel {
public:
    ElephantChesspieceModel(Color color, const QString &name, const QString &chineseName,
                            int initX, int initY);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class GuardChesspieceModel : public ChesspieceModel {
public:
    GuardChesspieceModel(Color color, const QString &name, const QString &chineseName,
                         int initX, int initY);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class KingChesspieceModel : public ChesspieceModel {
public:
    KingChesspieceModel(Color color, const QString &name, const QString &chineseName,
                        int initX, int initY);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

class PawnChesspieceModel : public ChesspieceModel {
public:
    PawnChesspieceModel(Color color, const QString &name, const QString &chineseName,
                        int initX, int initY);

    bool canMove(const ChessboardModel &board, int destX, int destY) override;
};

#endif // CHESSPIECEMODEL_H
