static const char norm_fg[] = "#c2c8c9";
static const char norm_bg[] = "#0b2327";
static const char norm_border[] = "#485a5d";

static const char sel_fg[] = "#c2c8c9";
static const char sel_bg[] = "#19a7c6";
static const char sel_border[] = "#c2c8c9";

static const char urg_fg[] = "#c2c8c9";
static const char urg_bg[] = "#3ab3c5";
static const char urg_border[] = "#3ab3c5";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
