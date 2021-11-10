#pragma once
#include "Core.h"

namespace TwoD {
	class TWOD_API App
	{
	public:
		App();
		virtual ~App();
		void run();
	};

	App* CreateApp();


}


