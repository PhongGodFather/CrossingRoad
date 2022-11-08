#pragma once
#ifndef PICTURE
#define PICTURE
#include <iostream>
#include <vector>
using namespace std;
// for game state
enum GameState { mainMenu, playMenu, optionMenu, loadGame, playGame, pauseMenu, exitGame };
enum MovingDir { left_, right_, up_, down_, idle_ };

class picture
{
public:
    vector<string> image;
    int width, height;
    picture() {}
    picture(vector<string> temp)
    {
        image = temp;
        height = temp.size();
        width = 0;
        for (auto i : temp)
            if (i.size() > width)
                width = i.size();
    }
};
void color(int backgroundColor, int text_color)
{
    int wColor = backgroundColor * 16 + text_color; // 16*16 + 0
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
void moveToXY(int x, int y)
{
    COORD cursor;
    cursor.X = x;
    cursor.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursor);
}
void display_img(picture k, int x, int y, int backgroundColor, int TextColor)
{
    color(backgroundColor, TextColor);
    for (int i = 0; i < k.height; i++)
    {
        moveToXY(x, y + i);
        cout << k.image[i];
    }
}
void updatePos(picture image, int x, int y)
{
    for (int i = 0; i < image.height; i++)
    {
        for (int j = 0; j < image.width; j++)
        {
            moveToXY(x + j, y + i);
            cout << " ";
        }
    }
}
class Position // to be inherited by manything
{
public:
    int x, y;
    Position() {}
    Position(int xPos, int yPos)
    {
        x = xPos;
        y = yPos;
    }
};

class Animation : public Position
{
    int track, cooldown, max_cooldown;
    int backColor, textColor;
    MovingDir direction;

public:
    vector<picture> frames;
    Animation() {}
    Animation(vector<picture> list, int duration, Position posXY, int backgroundColor, int TextColor, MovingDir dir = idle_)
    {
        frames = list;
        max_cooldown = duration;
        cooldown = 0;
        x = posXY.x;
        y = posXY.y;
        backColor = backgroundColor;
        textColor = TextColor;
        track = 0;
        direction = dir;
    }
    void play()
    {
        if (cooldown == 0)
        {
            if (direction == right_)
            {
                x++;
                updatePos(frames[track], x - 1, y);
                if (x + frames[track].width > 120)
                    x = 0;
            }
            if (direction == left_)
            {
                x--;
                updatePos(frames[track], x + 1, y);
                if (x < 0)
                    x = 120;
            }
            if (direction == up_)
            {
                y--;
                updatePos(frames[track], x, y + 1);
                if (y < 0)
                    y = 20;
            }
            if (direction == down_)
            {
                y++;
                updatePos(frames[track], x, y - 1);
                if (y + getCurFrame().width > 40)
                    y = 0;
            }
            cooldown = max_cooldown;
            if (track < frames.size())
            {
                display_img(frames[track], x, y, backColor, textColor);
                track++;
                if (track == frames.size())
                    track = 0;
            }
        }
        else
            cooldown--;
    }
    picture getCurFrame() { return frames[track]; }
};
// this is how we made model or initialized things
// special type of animation
const picture car1(vector<string>{
    "   ____",
    "__/_|__\\----__",
    "|(+)-------(+)|"});

const picture car2(vector<string>{
    "   ____",
    "__/_|__\\----__",
    "|(x)-------(x)|"});

const vector<picture> carAnim{ car1, car2 };

const picture nguoi1(vector<string>{
    "(x) ",
    "/|\\",
    "/ \\"});

const picture ship1(vector<string>{
    "     //     ______[_]======   ______",
    "____[T]____|__|     |________/     /",
    "\\_________________________________/ "});

const picture intro1(vector<string>{
    " __        __",
    "/  \\______/  \\",
    "| (.)     (.)|",
    "|  ________  |",
    "|            |",
    "\\____________/"});

const picture intro2(vector<string>{
    " __        __",
    "/  \\______/  \\",
    "| (.)     (.)|",
    "|  ________  |",
    "|    \\__/    |",
    "\\____________/"});

const vector<picture> introAnim{ intro1, intro2 };

const picture carAttack2(vector<string>{
    "  ==={MG]___",
    " ____/__|__\\__",
    "|(x)=======(x)|"});

const picture bullet1(vector<string>{">=>"});

const picture octo2(vector<string>{
    "  ________ ",
    " /        \\",
    " | __  __ |",
    " \\        /",
    " /        \\",
    "/~/\\~/\\~/\\~\\"});

const picture octo1(vector<string>{
    "  ________ ",
    " /        \\",
    " | ()  () |",
    " \\        /",
    " /        \\",
    "/_/\\_/\\_/\\_\\"});

const vector<picture> octoAnim{ octo1, octo2 };

const picture pum1(vector<string>{
    "  ___________ || ___________ ",
    " /           \\||/           \\",
    "/             \\/             \\",
    "|       /\\          /\\       |",
    "|      /__\\        /__\\      |",
    "|             /\\             |",
    "|            /__\\            |",
    "|    _________    _______    |",
    "\\    \\   __   \\__/ __   /    /",
    " \\    \\_/  \\______/  \\_/    /",
    "   ------------------------"});

const picture pum2(vector<string>{
    "  ___________ || ___________ ",
    " /           \\||/           \\",
    "/             \\/             \\",
    "|       /\\          /\\       |",
    "|      /__\\        /__\\      |",
    "|             /\\             |",
    "|            /__\\            |",
    "|    \\                 /     |",
    "\\     -----------------      /",
    " \\      \\/        \\/        /",
    "   ------------------------"});

const vector<picture> pumAnim{ pum1, pum2 };

const picture m1(vector < string>{
    " (X)  ",
    " /|\\ ",
    "/ | \\",
    " / \\  ",
    "/   \\ "
});
const picture m2(vector<string>{
    " (X)  ",
    " /|\\ ",
    " \\| \\  ",
    "  |\\  ",
    " /  |  "
});
const picture m3(vector<string>{
    "  (X) ",
    "  /|\\   ",
    " / |/",
    "  / \\",
    " |   \\ "
});
const vector<picture> man{ m1,m2,m3 };

const picture title(vector<string>{
    " _____                   _                                    _ ",
        "/  __ \\                 (_)                                  | |",
        "| /  \\/_ __ ___  ___ ___ _ _ __   __ _    _ __ ___   __ _  __| |",
        "| |   | '__/ _ \\/ __/ __| | '_ \\ / _` |  | '__/ _ \\ / _` |/ _` |",
        "| \\__/\\ | | (_) \\__ \\__ \\ | | | | (_| |  | | | (_) | (_| | (_| |",
        " \\____/_|  \\___/|___/___/_|_| |_|\\__, |  |_|  \\___/ \\__,_|\\__,_|",
        "                                  __/ |                        ",
        "                                 |___/                         "
});
const vector<picture> t{ title };
#endif
