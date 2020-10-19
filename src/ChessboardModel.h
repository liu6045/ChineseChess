#ifndef CHESSBOARDMODEL_H
#define CHESSBOARDMODEL_H

#include <QSet>

#include "ChesspieceModel.h"

class ChessboardModel
{
public:
    ChessboardModel();

    QSet<ChesspieceModel*> getAllChesspieces();

private:
    QSet<ChesspieceModel*> getAllRedChesspieces();
    QSet<ChesspieceModel*> getAllBlackChesspieces();

private:
    // red
    ChesspieceModel *m_pRedChariot1;
    ChesspieceModel *m_pRedChariot2;
    ChesspieceModel *m_pRedHorse1;
    ChesspieceModel *m_pRedHorse2;
    ChesspieceModel *m_pRedCannon1;
    ChesspieceModel *m_pRedCannon2;
    ChesspieceModel *m_pRedElephant1;
    ChesspieceModel *m_pRedElephant2;
    ChesspieceModel *m_pRedGuard1;
    ChesspieceModel *m_pRedGuard2;
    ChesspieceModel *m_pRedKing;
    ChesspieceModel *m_pRedPawn1;
    ChesspieceModel *m_pRedPawn2;
    ChesspieceModel *m_pRedPawn3;
    ChesspieceModel *m_pRedPawn4;
    ChesspieceModel *m_pRedPawn5;

    // black
    ChesspieceModel *m_pBlackChariot1;
    ChesspieceModel *m_pBlackChariot2;
    ChesspieceModel *m_pBlackHorse1;
    ChesspieceModel *m_pBlackHorse2;
    ChesspieceModel *m_pBlackCannon1;
    ChesspieceModel *m_pBlackCannon2;
    ChesspieceModel *m_pBlackElephant1;
    ChesspieceModel *m_pBlackElephant2;
    ChesspieceModel *m_pBlackGuard1;
    ChesspieceModel *m_pBlackGuard2;
    ChesspieceModel *m_pBlackKing;
    ChesspieceModel *m_pBlackPawn1;
    ChesspieceModel *m_pBlackPawn2;
    ChesspieceModel *m_pBlackPawn3;
    ChesspieceModel *m_pBlackPawn4;
    ChesspieceModel *m_pBlackPawn5;
};

#endif // CHESSBOARDMODEL_H
