#include "ChessboardModel.h"

ChessboardModel::ChessboardModel()
{
    m_pRedChariot1 = new ChariotChesspieceModel(Color::red, "Chariot1", QStringLiteral("車"), 1, 10);
    m_pRedChariot2 = new ChariotChesspieceModel(Color::red, "Chariot2", QStringLiteral("車"), 9, 10);
    m_pRedHorse1 = new HorseChesspieceModel(Color::red, "Horse1", QStringLiteral("馬"), 2, 10);
    m_pRedHorse2 = new HorseChesspieceModel(Color::red, "Horse2", QStringLiteral("馬"), 8, 10);
    m_pRedCannon1 = new CannonChesspieceModel(Color::red, "Cannon1", QStringLiteral("砲"), 2, 8);
    m_pRedCannon2 = new CannonChesspieceModel(Color::red, "Cannon2", QStringLiteral("砲"), 8, 8);
    m_pRedElephant1 = new ElephantChesspieceModel(Color::red, "Elephant1", QStringLiteral("相"), 3, 10);
    m_pRedElephant2 = new ElephantChesspieceModel(Color::red, "Elephant2", QStringLiteral("相"), 7, 10);
    m_pRedGuard1 = new GuardChesspieceModel(Color::red, "Guard1", QStringLiteral("仕"), 4, 10);
    m_pRedGuard2 = new GuardChesspieceModel(Color::red, "Guard2", QStringLiteral("仕"), 6, 10);
    m_pRedKing = new KingChesspieceModel(Color::red, "King", QStringLiteral("帅"), 5, 10);
    m_pRedPawn1 = new PawnChesspieceModel(Color::red, "Pawn1", QStringLiteral("兵"), 1, 7);
    m_pRedPawn2 = new PawnChesspieceModel(Color::red, "Pawn2", QStringLiteral("兵"), 3, 7);
    m_pRedPawn3 = new PawnChesspieceModel(Color::red, "Pawn3", QStringLiteral("兵"), 5, 7);
    m_pRedPawn4 = new PawnChesspieceModel(Color::red, "Pawn4", QStringLiteral("兵"), 7, 7);
    m_pRedPawn5 = new PawnChesspieceModel(Color::red, "Pawn5", QStringLiteral("兵"), 9, 7);

    m_pBlackChariot1 = new ChariotChesspieceModel(Color::black, "Chariot1", QStringLiteral("車"), 1, 1);
    m_pBlackChariot2 = new ChariotChesspieceModel(Color::black, "Chariot2", QStringLiteral("車"), 9, 1);
    m_pBlackHorse1 = new HorseChesspieceModel(Color::black, "Horse1", QStringLiteral("馬"), 2, 1);
    m_pBlackHorse2 = new HorseChesspieceModel(Color::black, "Horse2", QStringLiteral("馬"), 8, 1);
    m_pBlackCannon1 = new CannonChesspieceModel(Color::black, "Cannon1", QStringLiteral("炮"), 2, 3);
    m_pBlackCannon2 = new CannonChesspieceModel(Color::black, "Cannon2", QStringLiteral("炮"), 8, 3);
    m_pBlackElephant1 = new ElephantChesspieceModel(Color::black, "Elephant1", QStringLiteral("象"), 3, 1);
    m_pBlackElephant2 = new ElephantChesspieceModel(Color::black, "Elephant2", QStringLiteral("象"), 7, 1);
    m_pBlackGuard1 = new GuardChesspieceModel(Color::black, "Guard1", QStringLiteral("士"), 4, 1);
    m_pBlackGuard2 = new GuardChesspieceModel(Color::black, "Guard2", QStringLiteral("士"), 6, 1);
    m_pBlackKing = new KingChesspieceModel(Color::black, "King", QStringLiteral("将"), 5, 1);
    m_pBlackPawn1 = new PawnChesspieceModel(Color::black, "Pawn1", QStringLiteral("卒"), 1, 4);
    m_pBlackPawn2 = new PawnChesspieceModel(Color::black, "Pawn2", QStringLiteral("卒"), 3, 4);
    m_pBlackPawn3 = new PawnChesspieceModel(Color::black, "Pawn3", QStringLiteral("卒"), 5, 4);
    m_pBlackPawn4 = new PawnChesspieceModel(Color::black, "Pawn4", QStringLiteral("卒"), 7, 4);
    m_pBlackPawn5 = new PawnChesspieceModel(Color::black, "Pawn5", QStringLiteral("卒"), 9, 4);
}

QSet<ChesspieceModel *> ChessboardModel::getAllChesspieces()
{
    QSet<ChesspieceModel *> redSet = getAllRedChesspieces();
    QSet<ChesspieceModel *> blackSet = getAllBlackChesspieces();

    QSet<ChesspieceModel *> result;
    foreach (ChesspieceModel *red, redSet) {
        result.insert(red);
    }
    foreach (ChesspieceModel *black, blackSet) {
        result.insert(black);
    }

    return result;
}

QSet<ChesspieceModel *> ChessboardModel::getAllRedChesspieces()
{
    QSet<ChesspieceModel *> result;
    result.insert(m_pRedChariot1);
    result.insert(m_pRedChariot2);
    result.insert(m_pRedHorse1);
    result.insert(m_pRedHorse2);
    result.insert(m_pRedCannon1);
    result.insert(m_pRedCannon2);
    result.insert(m_pRedElephant1);
    result.insert(m_pRedElephant2);
    result.insert(m_pRedGuard1);
    result.insert(m_pRedGuard2);
    result.insert(m_pRedKing);
    result.insert(m_pRedPawn1);
    result.insert(m_pRedPawn2);
    result.insert(m_pRedPawn3);
    result.insert(m_pRedPawn4);
    result.insert(m_pRedPawn5);

    return result;
}

QSet<ChesspieceModel *> ChessboardModel::getAllBlackChesspieces()
{
    QSet<ChesspieceModel *> result;
    result.insert(m_pBlackChariot1);
    result.insert(m_pBlackChariot2);
    result.insert(m_pBlackHorse1);
    result.insert(m_pBlackHorse2);
    result.insert(m_pBlackCannon1);
    result.insert(m_pBlackCannon2);
    result.insert(m_pBlackElephant1);
    result.insert(m_pBlackElephant2);
    result.insert(m_pBlackGuard1);
    result.insert(m_pBlackGuard2);
    result.insert(m_pBlackKing);
    result.insert(m_pBlackPawn1);
    result.insert(m_pBlackPawn2);
    result.insert(m_pBlackPawn3);
    result.insert(m_pBlackPawn4);
    result.insert(m_pBlackPawn5);

    return result;
}
