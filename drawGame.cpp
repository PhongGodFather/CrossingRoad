void Game::drawMenu()
{
	
	//for (int i = 40; i > 0; i--) // hehe for fun
	//	drawBox(i, i, ScreenWidth - 1 - i, ScreenHeight - 1 - i, bgColor | FG_BLUE);
	
	short hoverCol = bgColor | FG_RED, defaultCol = bgColor | FG_CYAN;
	Animation test = deerAnimatorRight;
	int xTest = 20, yTest =34;
	int movCount = Sleep_time;
	
	while (state == mainMenu)
	{
		drawBorder();
		drawPicture(ScreenWidth/2 - title.getWidth() / 1.5, 1, title, bgColor | FG_DARK_MAGENTA);
		drawPicture(50, 20, car1, bgColor | FG_RED); // bruh
		drawPicture(30, 15, snowFlake, bgColor | FG_BLUE);
		drawPicture(110, 17, christmasTree, bgColor | FG_DARK_GREEN);
		drawPicture(113, 16, star, bgColor | FG_DARK_YELLOW);
		drawPicture(70, 38, snow, bgColor | FG_DARK_BLUE);
		drawPicture(125, 12, bell, bgColor | FG_DARK_YELLOW);
		drawBox(ScreenWidth / 2 - 27, title.getHeight() + 3, 17, 14, bgColor | FG_BLUE);
		drawButton(70, 30, L"Nhấn W,A,S,D để di chuyển và ENTER để chọn lựa chọn", bgColor | FG_DARK_BLUE);
		if (counter == 1)
			drawButton(ScreenWidth / 2 - 25, title.getHeight() + 4, L"PLAY GAME", hoverCol);
		else
			drawButton(ScreenWidth / 2 - 25, title.getHeight() + 4, L"PLAY GAME", defaultCol);

		if (counter == 2)
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 7, L"OPTION", hoverCol);
		else
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 7, L"OPTION", defaultCol);

		if (counter == 3)
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 10, L"CREDITS", hoverCol);
		else
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 10, L"CREDITS", defaultCol);

		if (counter == 4)
			drawButton(ScreenWidth / 2 - 25, title.getHeight() + 13, L"QUIT GAME", hoverCol);
		else
			drawButton(ScreenWidth / 2 - 25, title.getHeight() + 13, L"QUIT GAME", defaultCol);
		if (movCount == 0) {
			movCount = Sleep_time;
			xTest++;
			if (xTest + test.getCurFrame().getWidth() >= ScreenWidth) {
				xTest = 20;
			}
		}
		else
			movCount--;
		test.play();
		drawPicture(xTest, yTest, test.getCurFrame(), bgColor | FG_DARK_RED);
		drawConsole(); // remember this
		clearConsole();
	}
	clearConsole();
}
void Game::drawMenuOption()
{
	
	
	Animation test = deerAnimatorRight;
	int xTest = 20, yTest = 30;
	int movCount = Sleep_time;

	short hoverCol = bgColor | FG_RED, defaultCol = bgColor | FG_CYAN;
	while (state == optionMenu)
	{
		drawBorder();
		drawPicture(ScreenWidth / 2 - title.getWidth() / 1.5, 1, title, bgColor | FG_DARK_MAGENTA);
		drawPicture(50, 20, car1, bgColor | FG_RED); // bruh
		drawPicture(30, 15, snowFlake, bgColor | FG_BLUE);
		drawPicture(110, 17, christmasTree, bgColor | FG_DARK_GREEN);
		drawPicture(113, 16, star, bgColor | FG_DARK_YELLOW);
		drawPicture(70, 38, snow, bgColor | FG_DARK_BLUE);
		drawPicture(125, 12, bell, bgColor | FG_DARK_YELLOW);
		drawBox(ScreenWidth / 2 - 27, title.getHeight() + 3, 20, 8, bgColor | FG_BLUE);
		wstring text = (OnMusic) ? L"MUSIC: ON " : L"MUSIC: OFF";
		if (counter == 1)
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 4, text, hoverCol);
		else
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 4, text, defaultCol);

		if (counter == 2)
			drawButton(ScreenWidth / 2 - 25, title.getHeight() + 7, L"BACK TO MENU", hoverCol);
		else
			drawButton(ScreenWidth / 2 - 25, title.getHeight() + 7, L"BACK TO MENU", defaultCol);
		if (movCount == 0) {
			movCount = Sleep_time;
			xTest++;
			if (xTest + test.getCurFrame().getWidth() >= ScreenWidth) {
				xTest = 20;
			}
		}
		else
			movCount--;
		test.play();
		drawPicture(xTest, yTest, test.getCurFrame(), bgColor | FG_DARK_RED);
		drawConsole(); // remember this
		clearConsole();
	}
	clearConsole();
}
void Game::drawMenuCredit()
{
	
	short hoverCol = bgColor | FG_RED, defaultCol = bgColor | FG_DARK_YELLOW;
	Animation test = deerAnimatorRight;
	int xTest = 20, yTest = 34;
	int movCount = Sleep_time;

	const picture temp(vector<wstring>{
		L"21127668 - ĐINH QUANG PHONG",
		L"21127456 - VÕ CAO TRÍ",
		L"21127730 - HOÀNG LÊ CÁT THANH",
		L"21127149 - HUỲNH MINH QUANG"
	});
	while (state == credits)
	{
		drawBorder();
		drawPicture(ScreenWidth / 2 - title.getWidth() / 1.5, 1, title, bgColor | FG_DARK_MAGENTA);
		drawBox(ScreenWidth / 2 - 27, title.getHeight() + 3, temp.getWidth() + 4, temp.getHeight() + 6, bgColor | FG_BLUE);
		drawPicture(50, 20, car1, bgColor | FG_RED); // bruh
		drawPicture(30, 15, snowFlake, bgColor | FG_BLUE);
		drawPicture(115, 17, christmasTree, bgColor | FG_DARK_GREEN);
		drawPicture(118, 16, star, bgColor | FG_DARK_YELLOW);
		drawPicture(70, 38, snow, bgColor | FG_DARK_BLUE);
		drawPicture(125, 12, bell, bgColor | FG_DARK_YELLOW);
		drawButton(ScreenWidth / 2 - 25, title.getHeight() + 4, L"BACK TO MENU", hoverCol);
		drawPicture(ScreenWidth / 2 - 25, title.getHeight() + 8, temp, defaultCol);
		if (movCount == 0) {
			movCount = Sleep_time;
			xTest++;
			if (xTest + test.getCurFrame().getWidth() >= ScreenWidth) {
				xTest = 20;
			}
		}
		else
			movCount--;
		test.play();
		drawPicture(xTest, yTest, test.getCurFrame(), bgColor | FG_DARK_RED);
		drawConsole(); // remember this
		clearConsole();
	}
	clearConsole();
}
void Game::drawMenuPlay()
{
	
	short hoverCol = bgColor | FG_RED, defaultCol = bgColor | FG_CYAN;
	Animation test = deerAnimatorRight;
	int xTest = 20, yTest = 34;
	int movCount = Sleep_time;

	while (state == playMenu)
	{
		drawBorder();
		drawPicture(ScreenWidth / 2 - title.getWidth() / 1.5, 1, title, bgColor | FG_DARK_MAGENTA);
		drawPicture(50, 20, car1, bgColor | FG_RED); // bruh
		drawPicture(30, 15, snowFlake, bgColor | FG_BLUE);
		drawPicture(110, 17, christmasTree, bgColor | FG_DARK_GREEN);
		drawPicture(113, 16, star, bgColor | FG_DARK_YELLOW);
		drawPicture(70, 38, snow, bgColor | FG_DARK_BLUE);
		drawPicture(125, 12, bell, bgColor | FG_DARK_YELLOW);
		drawBox(ScreenWidth / 2 - 27, title.getHeight() + 3, 20, 11, bgColor | FG_BLUE);
		if (counter == 1)
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 4, L"NEW GAME", hoverCol);
		else
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 4, L"NEW GAME", defaultCol);

		if (counter == 2)
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 7, L"LOAD GAME", hoverCol);
		else
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 7, L"LOAD GAME", defaultCol);

		if (counter == 3)
			drawButton(ScreenWidth / 2 - 25, title.getHeight() + 10, L"BACK TO MENU", hoverCol);
		else
			drawButton(ScreenWidth / 2 - 25, title.getHeight() + 10, L"BACK TO MENU", defaultCol);
		if (movCount == 0) {
			movCount = Sleep_time;
			xTest++;
			if (xTest + test.getCurFrame().getWidth() >= ScreenWidth) {
				xTest = 20;
			}
		}
		else
			movCount--;
		test.play();
		drawPicture(xTest, yTest, test.getCurFrame(), bgColor | FG_DARK_RED);

		drawConsole(); // remember this
		clearConsole();
	}
	clearConsole();
}
void Game::drawLoadMenu()
{
	
	int max = 0;
	for (auto i : saveFile)
		if (i.length() > max)
			max = i.length();
	if (max < 12) // the back to menu size
		max = 13;
	
	short hoverCol = bgColor | FG_RED, defaultCol = bgColor | FG_CYAN;
	Animation test = deerAnimatorRight;
	int xTest = 20, yTest = 34;
	int movCount = Sleep_time;

	drawButton(ScreenWidth / 2 - 52, title.getHeight() + 4, L"CHOOSE A SAVE GAME >", bgColor | FG_DARK_CYAN);
	while (state == loadGame)
	{
		drawBox(ScreenWidth / 2 - 27, title.getHeight() + 3, max * 2 - max / 3, saveFile.size() * 3 + 5, bgColor | FG_BLUE);
		drawBorder();
		drawPicture(ScreenWidth / 2 - title.getWidth() / 1.5, 1, title, bgColor | FG_DARK_MAGENTA);
		drawPicture(50, 20, car1, bgColor | FG_RED); // bruh
		drawPicture(30, 15, snowFlake, bgColor | FG_BLUE);
		drawPicture(110, 17, christmasTree, bgColor | FG_DARK_GREEN);
		drawPicture(113, 16, star, bgColor | FG_DARK_YELLOW);
		drawPicture(70, 38, snow, bgColor | FG_DARK_BLUE);
		drawPicture(125, 12, bell, bgColor | FG_DARK_YELLOW);
		if (counter == 1)
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 4, L"BACK TO MENU", hoverCol);
		else
			drawButton(ScreenWidth / 2 - 24, title.getHeight() + 4, L"BACK TO MENU", defaultCol);

		for (int i = 0; i < saveFile.size(); i++)
		{
			wstring temp(saveFile[i].length(), L' ');
			copy(saveFile[i].begin(), saveFile[i].end(), temp.begin());
			if (counter == i + 2)
			{
				drawButton(ScreenWidth / 2 - 24, title.getHeight() + 7 + i * 3, temp, hoverCol);
				index = i;
			}
			else
				drawButton(ScreenWidth / 2 - 24, title.getHeight() + 7 + i * 3, temp, defaultCol);
		}
		if (movCount == 0) {
			movCount = Sleep_time;
			xTest++;
			if (xTest + test.getCurFrame().getWidth() >= ScreenWidth) {
				xTest = 20;
			}
		}
		else
			movCount--;
		test.play();
		drawPicture(xTest, yTest, test.getCurFrame(), bgColor | FG_DARK_RED);

		drawConsole(); // remember this
		clearConsole();
	}
	clearConsole();
}
void Game::drawEditSave()
{
	
	short hoverCol = bgColor | FG_RED, defaultCol = bgColor | FG_CYAN;
	int max = 0;
	for (auto i : saveFile)
		if (i.length() > max)
			max = i.length();
	if (max < 12)
		max = 13;
	Animation test = deerAnimatorRight;
	int xTest = 20, yTest = 34;
	int movCount = Sleep_time;
	
	while (state == editSave)
	{
		drawBorder();
		drawBox(ScreenWidth / 2 - 27, title.getHeight() + 3, max * 2 - max / 3, saveFile.size() * 3 + 5, bgColor | FG_BLUE);
		drawButton(ScreenWidth / 2 - 52, title.getHeight() + 4, L"CHOOSE A SAVE GAME >", bgColor | FG_DARK_CYAN);
		drawPicture(ScreenWidth / 2 - title.getWidth() / 1.5, 1, title, bgColor | FG_DARK_MAGENTA);
		drawPicture(50, 20, car1, bgColor | FG_RED); // bruh
		drawPicture(30, 15, snowFlake, bgColor | FG_BLUE);
		drawPicture(120, 17, christmasTree, bgColor | FG_DARK_GREEN);
		drawPicture(123, 16, star, bgColor | FG_DARK_YELLOW);
		drawPicture(70, 38, snow, bgColor | FG_DARK_BLUE);
		drawPicture(135, 12, bell, bgColor | FG_DARK_YELLOW);
		
		drawButton(ScreenWidth / 2 - 24, title.getHeight() + 4, L"BACK TO MENU", defaultCol);
		for (int i = 0; i < saveFile.size(); i++)
		{
			wstring temp(saveFile[i].length(), L' ');
			copy(saveFile[i].begin(), saveFile[i].end(), temp.begin());
			if (i == index)
				drawButton(ScreenWidth / 2 - 24, title.getHeight() + 7 + i * 3, temp, hoverCol);
			else
				drawButton(ScreenWidth / 2 - 24, title.getHeight() + 7 + i * 3, temp, defaultCol);
		}
		if (counter == 1)
			drawButton(ScreenWidth / 2 + max - 10, title.getHeight() + 7 + index * 3, L"BACK", hoverCol);
		else
			drawButton(ScreenWidth / 2 + max - 10, title.getHeight() + 7 + index * 3, L"BACK", defaultCol);
		if (counter == 2)
			drawButton(ScreenWidth / 2 + max - 10, title.getHeight() + 10 + index * 3, L"DELETE", hoverCol);
		else
			drawButton(ScreenWidth / 2 + max - 10, title.getHeight() + 10 + index * 3, L"DELETE", defaultCol);
		if (counter == 3)
			drawButton(ScreenWidth / 2 + max - 10, title.getHeight() + 13 + index * 3, L"PLAY", hoverCol);
		else
			drawButton(ScreenWidth / 2 + max - 10, title.getHeight() + 13 + index * 3, L"PLAY", defaultCol);
		if (movCount == 0) {
			movCount = Sleep_time;
			xTest++;
			if (xTest + test.getCurFrame().getWidth() >= ScreenWidth) {
				xTest = 20;
			}
		}
		else
			movCount--;
		test.play();
		drawPicture(xTest, yTest, test.getCurFrame(), bgColor | FG_DARK_RED);

		drawConsole(); // remember this
		clearConsole();
	}
	clearConsole();
}
void Game::drawNewGame()
{
	Animation test = deerAnimatorRight;
	int xTest = 20, yTest = 34;
	int movCount = Sleep_time;
	short defaultCol = bgColor | FG_DARK_BLUE;
	while (state == newGame)
	{
		drawBorder();
		drawPicture(ScreenWidth / 2 - title.getWidth() / 1.5, 1, title, bgColor | FG_DARK_MAGENTA);
		drawPicture(50, 20, car1, bgColor | FG_RED); // bruh
		drawPicture(30, 15, snowFlake, bgColor | FG_BLUE);
		drawPicture(110, 17, christmasTree, bgColor | FG_DARK_GREEN);
		drawPicture(113, 16, star, bgColor | FG_DARK_YELLOW);
		drawPicture(70, 38, snow, bgColor | FG_DARK_BLUE);
		drawPicture(125, 12, bell, bgColor | FG_DARK_YELLOW);
		drawString(ScreenWidth / 2 - 23, title.getHeight() + 4, L"ENTER NEW NAME ", defaultCol);
		drawBox(ScreenWidth / 2 - 25, title.getHeight() + 5, 24, 3, defaultCol);
		FillArea(ScreenWidth / 2 - 24, title.getHeight() + 6, L' ', 21, 1, defaultCol);
		drawStringC(ScreenWidth / 2 - 23, title.getHeight() + 6, name, defaultCol);
		if (movCount == 0) {
			movCount = Sleep_time;
			xTest++;
			if (xTest + test.getCurFrame().getWidth() >= ScreenWidth) {
				xTest = 20;
			}
		}
		else
			movCount--;
		test.play();
		drawPicture(xTest, yTest, test.getCurFrame(), bgColor | FG_DARK_RED);

		drawConsole(); // remember this
		clearConsole();
	}
	clearConsole();
}
