#include "player_score.h"

QPixmap player_score::get_alement(int element)
{
    if (element == 1) return pic1;
    else if (element == 2) return pic2;
    else if (element == 3) return pic3;
    else if (element == 4) return pic4;
    else if (element == 5) return pic5;
    else if (element == 6) return pic6;
    else if (element == 7) return pic7;
    else;
}

void player_score::start_game()
{
    int temp;
    scores = 0;
    temp = rand() % 7 +1;
    element = temp;
    speed = 600;
}

int player_score::get_el()
{
    return element;
}

void player_score::ren()
{
    int temp;
    temp = rand() % 7 + 1;
    element = temp;
}

void player_score::score_up(int item)
{
    scores = scores + 100*item;
    if (speed > 100)
        speed = speed - 10;
}

int player_score::get_speed()
{
    return speed;
}

int player_score::get_scores()
{
    return scores;
}
