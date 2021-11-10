#include "TwoD.h"

class Astro : public TwoD::App {
public:
	Astro() {

	}

	~Astro() {

	}
};

TwoD::App* TwoD::CreateApp() {
	return new Astro();
}