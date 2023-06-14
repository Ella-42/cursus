/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_logger.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 03:45:25 by lpeeters          #+#    #+#             */
/*   Updated: 2023/06/14 06:21:16 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <ncurses.h>

int	main(void)
{
	char	*key_name;

	initscr();            // Initialize the ncurses library
	cbreak();             // Disable line buffering (receive input immediately)
	noecho();             // Disable echoing of input characters
	keypad(stdscr, TRUE); // Enable special key handling
	printw("What key would you like to convert into it's key code value?\n");
	refresh(); // Refresh the screen to display the message
	int keycode = wgetch(stdscr); // Read a single character from standard input
	endwin(); // End the ncurses mode
	switch (keycode)
	{
	case KEY_UP:
		key_name = "Up arrow";
		break ;
	case KEY_DOWN:
		key_name = "Down arrow";
		break ;
	case KEY_LEFT:
		key_name = "Left arrow";
		break ;
	case KEY_RIGHT:
		key_name = "Right arrow";
		break ;
	case KEY_HOME:
		key_name = "Home";
		break ;
	case KEY_PPAGE:
		key_name = "Page Up";
		break ;
	case KEY_NPAGE:
		key_name = "Page Down";
		break ;
	case KEY_END:
		key_name = "End";
		break ;
	case KEY_DC:
		key_name = "Delete";
		break ;
	case KEY_BACKSPACE:
		key_name = "Delete (Backspace)";
		break ;
	case 27:
		key_name = "Escape";
		break ;
	case 10:
		key_name = "Enter";
		break ;
	case 9:
		key_name = "Tab";
		break ;
	case 32:
		key_name = "Space";
		break ;
	default:
		key_name = NULL;
		break ;
	}
	if (key_name == NULL)
		printf("Key: %c\n", keycode);
	else
		printf("Key: %s\n", key_name);
	printf("Keycode: %d\n", keycode);
	return (0);
}
