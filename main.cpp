# include <graphics.h>
# include <conio.h>

int main() {
	HWND hWnd = initgraph(640, 480);
	SetWindowText(hWnd, L"º½Ð¡ÅÂµÄ»æÍ¼³ÌÐò");
	setbkcolor(WHITE);
	cleardevice();

	while (1) {
		ExMessage message;
		getmessage(&message, EX_MOUSE);
		if (message.lbutton) {
			int x = message.x;
			int y = message.y;
			setcolor(BLACK);
			setfillcolor(BLACK);
			fillcircle(x, y, 10);
		}
	}

	return 0;
}