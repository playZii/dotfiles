const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#141021", /* black   */
  [1] = "#6554aa", /* red     */
  [2] = "#8766aa", /* green   */
  [3] = "#a093a6", /* yellow  */
  [4] = "#a96395", /* blue    */
  [5] = "#ac3b63", /* magenta */
  [6] = "#b46b7e", /* cyan    */
  [7] = "#c4c3c7", /* white   */

  /* 8 bright colors */
  [8]  = "#4e4b58",  /* black   */
  [9]  = "#6554aa",  /* red     */
  [10] = "#8766aa", /* green   */
  [11] = "#a093a6", /* yellow  */
  [12] = "#a96395", /* blue    */
  [13] = "#ac3b63", /* magenta */
  [14] = "#b46b7e", /* cyan    */
  [15] = "#c4c3c7", /* white   */

  /* special colors */
  [256] = "#141021", /* background */
  [257] = "#c4c3c7", /* foreground */
  [258] = "#c4c3c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
