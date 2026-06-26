#include "Login.h"

using namespace CampusBookingSystem;

[STAThreadAttribute]

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Login());

	return 0;
}

