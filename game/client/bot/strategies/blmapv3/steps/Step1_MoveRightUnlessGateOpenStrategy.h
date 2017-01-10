#ifndef STEP1_MOVERIGHTUNLESSGATEOPENSTRATEGY_H
#define STEP1_MOVERIGHTUNLESSGATEOPENSTRATEGY_H

#include "../../BotStrategy.h"

class Step1_MoveRightUnlessGateOpenStrategy : public BotStrategy {
public:

	Step1_MoveRightUnlessGateOpenStrategy(CGameClient* client);

	void execute(CControls* controls);

private:

	const static int GATE_X_POS = 1408;

	const static int N_JUMPS = 3;
	const static int X_POS_TO_JUMP[N_JUMPS];

};

#endif /* STEP1_MOVERIGHTUNLESSGATEOPENSTRATEGY_H */
