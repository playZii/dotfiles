const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b2327", /* black   */
  [1] = "#3ab3c5", /* red     */
  [2] = "#19a7c6", /* green   */
  [3] = "#0d8db4", /* yellow  */
  [4] = "#0277aa", /* blue    */
  [5] = "#1574aa", /* magenta */
  [6] = "#0764aa", /* cyan    */
  [7] = "#c2c8c9", /* white   */

  /* 8 bright colors */
  [8]  = "#485a5d",  /* black   */
  [9]  = "#3ab3c5",  /* red     */
  [10] = "#19a7c6", /* green   */
  [11] = "#0d8db4", /* yellow  */
  [12] = "#0277aa", /* blue    */
  [13] = "#1574aa", /* magenta */
  [14] = "#0764aa", /* cyan    */
  [15] = "#c2c8c9", /* white   */

  /* special colors */
  [256] = "#0b2327", /* background */
  [257] = "#c2c8c9", /* foreground */
  [258] = "#c2c8c9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
