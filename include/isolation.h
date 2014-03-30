#include "../include/stdafx.h"

//Include guard
#ifndef ISOLATION_H
#define ISOLATION_H

void find_squares(cv::Mat image, std::vector<std::vector<cv::Point> >& squares, int threshold);
int find_cards(cv::Mat input, std::vector<Card>* cards);
void find_symbol(Card *card);

#endif