#ifndef BOTSTRATEGY_H
#define BOTSTRATEGY_H

#include <game/gamecore.h>
#include <game/client/components/controls.h>

class BotStrategy {
public:

	BotStrategy(CGameClient* client);

	virtual void execute(CControls* controls) = 0;

protected:

	CGameClient* client;

	bool isFrozen();

	long getNowMillis();

};

#endif /* BOTSTRATEGY_H */