/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Terminus:size=8"
};
static const char *prompt      = "$";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	               /*     fg         bg       */
	[SchemeNorm] = { "#f9f1a5", "#000000" },
	[SchemeSel] = { "#000000", "#ba3232" },
	[SchemeOut] = { "#000000", "#f9f1a5" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
