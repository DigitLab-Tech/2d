#pragma once
#ifdef TWOD_PLATFORM_WINDOWS
extern TwoD::App* TwoD::CreateApp();
int main(int argc, char** argv) {
	auto app = TwoD::CreateApp();
	app->run();
	delete app;
}
#endif