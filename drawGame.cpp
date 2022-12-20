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

void Game::drawGame()
{
	
	// what about using the damn stack and queue to pop and delete stuff
	while (state == playGame)
	{
		int countCar = 0, countTruck = 0, countBird = 0, countDeer = 0;
		// counting stuff
		for (auto i : obstacleList)
		{
			if (i->getName() == "Car") countCar++;
			else if (i->getName() == "Bird") countBird++;
			else if (i->getName() == "Deer") countDeer++;
			else countTruck++;
		}
		drawBorder();
		updatePosObject();

		if (!updatePosPlayer(MOVING))
			break;
		MOVING = ' '; // avoid further moving

		wstring hearts = L"";
		for (int i = 0; i < player->getHealth() / 10; i++)
			hearts += L'♥';
		drawButton(ScreenWidth - offset_box + 2, 30, L"W,A,S,D để di chuyển");
		drawButton(ScreenWidth - offset_box + 2, 35, L"ESC để pause game");

		drawButton(ScreenWidth - offset_box + 5, 1, L"MÁU: " + hearts + L" ", bgColor | FG_GREEN);
		drawButton(ScreenWidth - offset_box + 5, 4, L"MÀN CHƠI: " + to_wstring(player->getLevel()) + L" ", bgColor | FG_GREEN);

		drawButton(ScreenWidth - offset_box + 5, 7, L"SỐ XE HƠI: " + to_wstring(countCar) + L" ", bgColor | FG_GREEN);
		drawButton(ScreenWidth - offset_box + 5, 10, L"SỐ XE TẢI: " + to_wstring(countTruck) + L" ", bgColor | FG_GREEN);
		drawButton(ScreenWidth - offset_box + 5, 13, L"SỐ CHIM: " + to_wstring(countBird) + L" ", bgColor | FG_GREEN);
		drawButton(ScreenWidth - offset_box + 5, 16, L"SỐ NAI: " + to_wstring(countDeer) + L" ", bgColor | FG_GREEN);
		drawButton(ScreenWidth - offset_box + 5, 19, L"SỐ ĐÈN: " + to_wstring(lights.size()) + L" ", bgColor | FG_GREEN);

		// draw lines
		FillArea(1, 4, L'━', ScreenWidth - offset_box - 1, 1, bgColor | FG_DARK_GREEN);
		FillArea(1, 9, L'━', ScreenWidth - offset_box - 1, 1, bgColor | FG_DARK_GREEN);
		FillArea(1, 14, L'━', ScreenWidth - offset_box - 1, 1, bgColor | FG_DARK_GREEN);
		FillArea(1, 19, L'━', ScreenWidth - offset_box - 1, 1, bgColor | FG_DARK_GREEN);
		FillArea(1, 24, L'━', ScreenWidth - offset_box - 1, 1, bgColor | FG_DARK_GREEN);
		FillArea(1, 29, L'━', ScreenWidth - offset_box - 1, 1, bgColor | FG_DARK_GREEN);
		FillArea(1, 34, L'━', ScreenWidth - offset_box - 1, 1, bgColor | FG_DARK_GREEN);
		FillArea(1, 39, L'━', ScreenWidth - offset_box - 1, 1, bgColor | FG_DARK_GREEN);

		// draw box and bla bla
		drawBox(ScreenWidth - 30, 0, 30, ScreenHeight, bgColor | FG_DARK_CYAN);
		FillArea(ScreenWidth - 29, 22, L'━', 28, 1, bgColor | FG_DARK_CYAN); // draw a line
		addChar(ScreenWidth - 30, 22, L'┣', bgColor | FG_DARK_CYAN);
		addChar(ScreenWidth - 1, 22, L'┫', bgColor | FG_CYAN);

		drawObject();
		drawPlayer();

		for (auto i : obstacleList)
		{
			if (player->isImpact(i))
			{
				playHitSound();
				if (player->isDead()) goto game_over;

				FillArea(player->x, player->y, L' ', player->curImg().getWidth(), player->curImg().getHeight(), bgColor);
				drawPicture(player->x, player->y, explosion, bgColor | FG_DARK_RED);

				drawConsole(); // the main thing we need
				Sleep(1000); // hehe lol :33
				FillArea(player->x, player->y, L' ', player->curImg().getWidth(), player->curImg().getHeight(), bgColor);
				FillArea(player->x, player->y, L' ', explosion.getWidth(), explosion.getHeight(), bgColor);

				player->y = ScreenHeight - player->curImg().getHeight() - 1;
				player->x = (ScreenWidth - offset_box) / 2 - player->curImg().getWidth();
				break;
			}
		}
		drawConsole(); // the main thing we need
		
	}
game_over:
	clearConsole();
	if (player->isDead())
	{
		// clear up RAM
		for (auto i : obstacleList)
			delete i;
		obstacleList.clear();
		for (auto i : lights)
			delete i;
		lights.clear();

		state = lose;
		drawGameDead();
	}
}
void Game::drawGameWin()
{
	Animation dance = manAnimator;
	Animation dance1 = dancingAnimator;
	while (state == win)
	{
		dance.play();
		dance1.play();
		FillArea(1, 1, L' ', ScreenWidth - offset_box - 1, ScreenHeight - 2, bgColor);
		drawString((ScreenWidth - offset_box) / 2 - tomb.getWidth() - 5, ScreenHeight / 2, L"YOU WON THE GAME, PRESS ENTER TO RETURN ... ", bgColor | FG_BLUE);
		drawPicture(50, 3, winGame, bgColor | FG_DARK_RED);
		
		drawPicture(100, 40, dance.getCurFrame(), bgColor | FG_DARK_RED);
		drawPicture(100, 35, dance1.getCurFrame(), bgColor | FG_DARK_RED);
		drawConsole();
	}
	clearConsole();
}
void Game::drawGameDead()
{
	Animation dance = manAnimator;
	while (state == lose)
	{
		dance.play();

		FillArea(1, 1, L' ', ScreenWidth - offset_box - 1, ScreenHeight - 2, bgColor);
		drawPicture(20, 3, endGame, bgColor | FG_DARK_RED);
		drawPicture((ScreenWidth - offset_box) / 2 - tomb.getWidth(), ScreenHeight / 2 - tomb.getHeight(), tomb, bgColor | FG_DARK_GREY);
		drawString((ScreenWidth - offset_box) / 2 - tomb.getWidth() - 5, ScreenHeight / 2, L"PRESS ENTER TO RETURN TO MENU ... ", bgColor | FG_BLUE);
		drawPicture((ScreenWidth - offset_box) / 2 - tomb.getWidth(), ScreenHeight / 2 + 3, ded_man, bgColor | FG_DARK_GREY);
		drawPicture(100, 40, dance.getCurFrame(), bgColor | FG_DARK_RED);
		drawConsole();
	}
	clearConsole();
}
