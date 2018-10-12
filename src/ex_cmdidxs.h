/* Automatically generated code by create_cmdidxs.vim
 *
 * Table giving the index of the first command in cmdnames[] to lookup
 * based on the first letter of a command.
 */
static const unsigned short cmdidxs1[26] =
{
  /* a */ 0,
  /* b */ 19,
  /* c */ 42,
  /* d */ 103,
  /* e */ 127,
  /* f */ 147,
  /* g */ 163,
  /* h */ 169,
  /* i */ 178,
  /* j */ 196,
  /* k */ 198,
  /* l */ 203,
  /* m */ 261,
  /* n */ 279,
  /* o */ 299,
  /* p */ 311,
  /* q */ 350,
  /* r */ 353,
  /* s */ 372,
  /* t */ 439,
  /* u */ 479,
  /* v */ 490,
  /* w */ 508,
  /* x */ 523,
  /* y */ 532,
  /* z */ 533
};

/*
 * Table giving the index of the first command in cmdnames[] to lookup
 * based on the first 2 letters of a command.
 * Values in cmdidxs2[c1][c2] are relative to cmdidxs1[c1] so that they
 * fit in a byte.
 */
static const unsigned char cmdidxs2[26][26] =
{ /*         a   b   c   d   e   f   g   h   i   j   k   l   m   n   o   p   q   r   s   t   u   v   w   x   y   z */
  /* a */ {  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  5,  6,  0,  0,  0,  7, 15,  0, 16,  0,  0,  0,  0,  0 },
  /* b */ {  2,  0,  0,  4,  5,  7,  0,  0,  0,  0,  0,  8,  9, 10, 11, 12,  0, 13,  0,  0,  0,  0, 22,  0,  0,  0 },
  /* c */ {  3, 10, 12, 14, 16, 18, 21,  0,  0,  0,  0, 29, 33, 36, 42, 51, 53, 54, 55,  0, 57,  0, 60,  0,  0,  0 },
  /* d */ {  0,  0,  0,  0,  0,  0,  0,  0,  6, 17,  0, 18,  0,  0, 19,  0,  0, 21, 22,  0,  0,  0,  0,  0,  0,  0 },
  /* e */ {  1,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  7,  9, 10,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16,  0,  0 },
  /* f */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  9,  0,  0,  0,  0,  0, 15,  0,  0,  0,  0,  0 },
  /* g */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  2,  0,  0,  4,  5,  0,  0,  0,  0 },
  /* h */ {  5,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* i */ {  1,  0,  0,  0,  0,  3,  0,  0,  0,  4,  0,  5,  6,  0,  0,  0,  0,  0, 13,  0, 15,  0,  0,  0,  0,  0 },
  /* j */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0 },
  /* k */ {  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* l */ {  3,  9, 11, 15, 16, 20, 23, 28,  0,  0,  0, 30, 33, 36, 40, 46,  0, 48, 57, 49, 50, 54, 56,  0,  0,  0 },
  /* m */ {  1,  0,  0,  0,  7,  0,  0,  0,  0,  0, 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16 },
  /* n */ {  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  8, 10,  0,  0,  0,  0,  0, 17,  0,  0,  0,  0,  0 },
  /* o */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2,  5,  0,  0,  0,  0,  0,  0,  9,  0, 11,  0,  0,  0 },
  /* p */ {  1,  0,  3,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,  9,  0,  0, 16, 17, 26,  0, 27,  0, 28,  0 },
  /* q */ {  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* r */ {  0,  0,  0,  0,  0,  0,  0,  0, 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 13, 18,  0,  0,  0,  0 },
  /* s */ {  2,  6, 15,  0, 18, 22,  0, 24, 25,  0,  0, 28, 30, 34, 38, 40,  0, 48,  0, 49,  0, 61, 62,  0, 63,  0 },
  /* t */ {  2,  0, 19,  0, 22, 24,  0, 25,  0, 26,  0, 27, 28, 31, 33, 34,  0, 35, 37,  0, 38,  0,  0,  0,  0,  0 },
  /* u */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* v */ {  0,  0,  0,  0,  1,  0,  0,  0,  4,  0,  0,  0,  9, 12,  0,  0,  0,  0, 15,  0, 16,  0,  0,  0,  0,  0 },
  /* w */ {  2,  0,  0,  0,  0,  0,  0,  3,  4,  0,  0,  0,  0,  8,  0,  9, 10,  0, 12,  0, 13, 14,  0,  0,  0,  0 },
  /* x */ {  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  5,  0,  0,  0,  0,  0,  0,  7,  0,  0,  0,  0,  0 },
  /* y */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* z */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 }
};

static const int command_count = 546;
