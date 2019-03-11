/*
* base16-xpc-theme.h
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Mauro (https://cyberpunk.net.ar)
* Template: Mauro <mauro@sdf.org>
*
*/


/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
  "#393939",
  "#d68787",
  "#5f865f",
  "#d8af5f",
  "#85add4",
  "#d7afaf",
  "#87afaf",
  "#d0d0d0",

  "#626262",
  "#d75f87",
  "#87af87",
  "#ffd787",
  "#add4fb",
  "#ffafaf",
  "#87d7d7",
  "#e4e4e4",
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */

unsigned int defaultfg = 7;
unsigned int defaultbg = 0;
static unsigned int defaultcs = 13;
static unsigned int defaultrcs = 0;

