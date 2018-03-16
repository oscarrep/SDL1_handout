#ifndef __DUMMY_H__
#define __DUMMY_H__

#include <stdio.h>
#include <conio.h>
#include "Module.h"
#include "Globals.h"


class ModuleDummy : public Module
{

	bool Init()
	{

		LOG("DUMMY INNIT");
		return true;

	}

	update_status PreUpdate()
	{

		LOG("DUMMY PREUPDATE");
		return update_status::UPDATE_CONTINUE;

	}

	update_status Update()
	{

		LOG("DUMMY UPDATE");
		return update_status::UPDATE_CONTINUE;

	}

	update_status PostUpdate()
	{

		LOG("DUMMY POSTUPDATE");
		return update_status::UPDATE_CONTINUE;

	}

	bool CleanUp()
	{

		LOG("DUMMY CLEANUP");
		return true;

	}
};


class DummyESC: public Module {


};

#endif // __DUMMY_H__