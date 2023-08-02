/* -fn option overrides fonts[0]; default X11 font or font set */

static const char *fonts[] = {
"Mononoki Nerd Font Mono:pixelsize=12:antialias=true:autohint=true",
"Noto Emoji:pixelsize=11:antialias=true:autohint=true"
};
static const char *prompt  = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#121212", "#ffffd7" },
	[SchemeSel] = { "#ffffd7", "#121212" },
	[SchemeOut] = { "#ffffd7", "#121212" },
};

static int x_offset = 6; // applies both to left and right
static int y_offset = 6;

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static const char worddelimiters[] = " ";

