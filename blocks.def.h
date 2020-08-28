//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
  {"",  "cat /tmp/recordingicon 2>/dev/null",     0,     9},
  {"",  "nettraf",            1,                  16},
  {"",  "torrent",            20,                 7},
/*  {"",  "music",              0,                  11}, */
  {"",  "muttwiz",            180,                12},
  {"",  "pacpackages",        0,                  8},
  {"",  "news",               0,                  6},
  {"",  "memory",             10,                 14},
  {"",  "cpu",                10,                 18},
  {"",  "gpu",                10,                 20},
  {"",  "weather",            18000,              5},
  {"",  "pulsevol",           0,                  10},
  {"",  "clock",              1,                  1},
};

//Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
