#include <windows.h>

int main() {
	if (!LockWorkStation()) {
		return GetLastError();
	}
	return 0;
}