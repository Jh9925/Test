#pragma once

#include "Unit.h"


class warrior :public Unit
{
public:
	warrior();
	warrior(const string& n, const int h);
	~warrior();

	void Atk();

};

