/* This file was generated automatically by the Snowball to ISO C compiler */
/* http://snowballstem.org/ */

#include "header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int H_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_nu(struct SN_env * z);
static int r_verb(struct SN_env * z);
static int r_substantive(struct SN_env * z);
static int r_degrees(struct SN_env * z);
static int r_i_plural(struct SN_env * z);
static int r_undouble(struct SN_env * z);
static int r_double(struct SN_env * z);
static int r_remove_double_kpt(struct SN_env * z);
static int r_plural_three_first_cases(struct SN_env * z);
static int r_even_ending(struct SN_env * z);
static int r_case_ending(struct SN_env * z);
static int r_LONGV(struct SN_env * z);
static int r_mark_regions(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * H_create_env(void);
extern void H_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_0[2] = { 'g', 'a' };
static const symbol s_0_1[2] = { 'n', 'a' };
static const symbol s_0_2[2] = { 't', 'a' };
static const symbol s_0_3[2] = { 'd', 'e' };
static const symbol s_0_4[3] = { 'i', 'k', 'e' };
static const symbol s_0_5[4] = { 'i', 'k', 'k', 'e' };
static const symbol s_0_6[2] = { 'l', 'e' };
static const symbol s_0_7[3] = { 's', 's', 'e' };
static const symbol s_0_8[2] = { 't', 'e' };
static const symbol s_0_9[2] = { 'n', 'i' };

static const struct among a_0[10] =
{
/*  0 */ { 2, s_0_0, -1, -1, 0},
/*  1 */ { 2, s_0_1, -1, -1, 0},
/*  2 */ { 2, s_0_2, -1, -1, 0},
/*  3 */ { 2, s_0_3, -1, -1, 0},
/*  4 */ { 3, s_0_4, -1, -1, 0},
/*  5 */ { 4, s_0_5, -1, -1, 0},
/*  6 */ { 2, s_0_6, -1, -1, 0},
/*  7 */ { 3, s_0_7, -1, -1, 0},
/*  8 */ { 2, s_0_8, -1, -1, 0},
/*  9 */ { 2, s_0_9, -1, -1, 0}
};

static const symbol s_1_0[2] = { 'l', 't' };
static const symbol s_1_1[2] = { 's', 't' };

static const struct among a_1[2] =
{
/*  0 */ { 2, s_1_0, -1, -1, 0},
/*  1 */ { 2, s_1_1, -1, -1, 0}
};

static const symbol s_2_0[2] = { 'g', 'i' };
static const symbol s_2_1[2] = { 'k', 'i' };

static const struct among a_2[2] =
{
/*  0 */ { 2, s_2_0, -1, 1, 0},
/*  1 */ { 2, s_2_1, -1, 2, 0}
};

static const symbol s_3_0[2] = { 'd', 'a' };
static const symbol s_3_1[2] = { 't', 'a' };
static const symbol s_3_2[1] = { 'b' };
static const symbol s_3_3[3] = { 'v', 'a', 'd' };
static const symbol s_3_4[2] = { 'm', 'e' };
static const symbol s_3_5[4] = { 'a', 'k', 's', 'e' };
static const symbol s_3_6[5] = { 'd', 'a', 'k', 's', 'e' };
static const symbol s_3_7[5] = { 't', 'a', 'k', 's', 'e' };
static const symbol s_3_8[2] = { 't', 'e' };
static const symbol s_3_9[1] = { 'n' };
static const symbol s_3_10[2] = { 'i', 'n' };
static const symbol s_3_11[3] = { 's', 'i', 'n' };
static const symbol s_3_12[3] = { 'd', 'e', 's' };
static const symbol s_3_13[3] = { 't', 'e', 's' };

static const struct among a_3[14] =
{
/*  0 */ { 2, s_3_0, -1, -1, 0},
/*  1 */ { 2, s_3_1, -1, -1, 0},
/*  2 */ { 1, s_3_2, -1, 1, 0},
/*  3 */ { 3, s_3_3, -1, 1, 0},
/*  4 */ { 2, s_3_4, -1, 1, 0},
/*  5 */ { 4, s_3_5, -1, -1, 0},
/*  6 */ { 5, s_3_6, 5, -1, 0},
/*  7 */ { 5, s_3_7, 5, -1, 0},
/*  8 */ { 2, s_3_8, -1, 1, 0},
/*  9 */ { 1, s_3_9, -1, 1, 0},
/* 10 */ { 2, s_3_10, 9, -1, 0},
/* 11 */ { 3, s_3_11, 10, -1, 0},
/* 12 */ { 3, s_3_12, -1, -1, 0},
/* 13 */ { 3, s_3_13, -1, -1, 0}
};

static const symbol s_4_0[2] = { 'a', 'a' };
static const symbol s_4_1[2] = { 'e', 'e' };
static const symbol s_4_2[2] = { 'i', 'i' };
static const symbol s_4_3[2] = { 'o', 'o' };
static const symbol s_4_4[2] = { 'u', 'u' };
static const symbol s_4_5[4] = { 0xC3, 0xA4, 0xC3, 0xA4 };
static const symbol s_4_6[4] = { 0xC3, 0xB5, 0xC3, 0xB5 };
static const symbol s_4_7[4] = { 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_4_8[4] = { 0xC3, 0xBC, 0xC3, 0xBC };

static const struct among a_4[9] =
{
/*  0 */ { 2, s_4_0, -1, -1, 0},
/*  1 */ { 2, s_4_1, -1, -1, 0},
/*  2 */ { 2, s_4_2, -1, -1, 0},
/*  3 */ { 2, s_4_3, -1, -1, 0},
/*  4 */ { 2, s_4_4, -1, -1, 0},
/*  5 */ { 4, s_4_5, -1, -1, 0},
/*  6 */ { 4, s_4_6, -1, -1, 0},
/*  7 */ { 4, s_4_7, -1, -1, 0},
/*  8 */ { 4, s_4_8, -1, -1, 0}
};

static const symbol s_5_0[1] = { 'i' };

static const struct among a_5[1] =
{
/*  0 */ { 1, s_5_0, -1, 1, 0}
};

static const symbol s_6_0[2] = { 'g', 'a' };
static const symbol s_6_1[2] = { 'n', 'a' };
static const symbol s_6_2[2] = { 't', 'a' };
static const symbol s_6_3[2] = { 'l', 'e' };
static const symbol s_6_4[3] = { 's', 's', 'e' };
static const symbol s_6_5[2] = { 'n', 'i' };
static const symbol s_6_6[1] = { 'l' };
static const symbol s_6_7[1] = { 's' };
static const symbol s_6_8[2] = { 'k', 's' };
static const symbol s_6_9[1] = { 't' };
static const symbol s_6_10[2] = { 'l', 't' };
static const symbol s_6_11[2] = { 's', 't' };

static const struct among a_6[12] =
{
/*  0 */ { 2, s_6_0, -1, 1, 0},
/*  1 */ { 2, s_6_1, -1, 1, 0},
/*  2 */ { 2, s_6_2, -1, 1, 0},
/*  3 */ { 2, s_6_3, -1, 1, 0},
/*  4 */ { 3, s_6_4, -1, 1, 0},
/*  5 */ { 2, s_6_5, -1, 1, 0},
/*  6 */ { 1, s_6_6, -1, 1, 0},
/*  7 */ { 1, s_6_7, -1, 1, 0},
/*  8 */ { 2, s_6_8, 7, 1, 0},
/*  9 */ { 1, s_6_9, -1, 1, 0},
/* 10 */ { 2, s_6_10, 9, 1, 0},
/* 11 */ { 2, s_6_11, 9, 1, 0}
};

static const symbol s_7_0[1] = { 'd' };
static const symbol s_7_1[3] = { 'a', 'i', 'd' };
static const symbol s_7_2[3] = { 'e', 'i', 'd' };
static const symbol s_7_3[3] = { 's', 'i', 'd' };
static const symbol s_7_4[2] = { 'd', 'e' };
static const symbol s_7_5[6] = { 'i', 'k', 'k', 'u', 'd', 'e' };
static const symbol s_7_6[3] = { 'i', 'k', 'e' };
static const symbol s_7_7[4] = { 'i', 'k', 'k', 'e' };
static const symbol s_7_8[2] = { 't', 'e' };

static const struct among a_7[9] =
{
/*  0 */ { 1, s_7_0, -1, 7, 0},
/*  1 */ { 3, s_7_1, 0, 3, 0},
/*  2 */ { 3, s_7_2, 0, 4, 0},
/*  3 */ { 3, s_7_3, 0, 2, 0},
/*  4 */ { 2, s_7_4, -1, 6, 0},
/*  5 */ { 6, s_7_5, 4, 1, 0},
/*  6 */ { 3, s_7_6, -1, 1, 0},
/*  7 */ { 4, s_7_7, -1, 1, 0},
/*  8 */ { 2, s_7_8, -1, 5, 0}
};

static const symbol s_8_0[2] = { 'k', 'k' };
static const symbol s_8_1[2] = { 'p', 'p' };
static const symbol s_8_2[2] = { 't', 't' };

static const struct among a_8[3] =
{
/*  0 */ { 2, s_8_0, -1, -1, 0},
/*  1 */ { 2, s_8_1, -1, -1, 0},
/*  2 */ { 2, s_8_2, -1, -1, 0}
};

static const symbol s_9_0[2] = { 'n', 'u' };

static const struct among a_9[1] =
{
/*  0 */ { 2, s_9_0, -1, -1, 0}
};

static const symbol s_10_0[2] = { 'm', 'a' };
static const symbol s_10_1[3] = { 'm', 'a', 'i' };

static const struct among a_10[2] =
{
/*  0 */ { 2, s_10_0, -1, 1, 0},
/*  1 */ { 3, s_10_1, -1, 1, 0}
};

static const unsigned char g_V1[] = { 17, 65, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 48, 8 };

static const unsigned char g_RV[] = { 17, 65, 16 };

static const symbol s_0[] = { 'i', 'k' };
static const symbol s_1[] = { 'a' };
static const symbol s_2[] = { 'e' };
static const symbol s_3[] = { 't' };

static int r_mark_regions(struct SN_env * z) { /* forwardmode */
    z->I[0] = z->l; /* $p1 = <integer expression>, line 38 */
    if (out_grouping_U(z, g_V1, 97, 252, 1) < 0) return 0; /* goto */ /* grouping V1, line 41 */
    {    /* gopast */ /* non V1, line 41 */
        int ret = in_grouping_U(z, g_V1, 97, 252, 1);
        if (ret < 0) return 0;
        z->c += ret;
    }
    z->I[0] = z->c; /* setmark p1, line 41 */
    return 1;
}

static int r_even_ending(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 50 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 50 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] != 105) { z->lb = mlimit1; return 0; } /* substring, line 50 */
        among_var = find_among_b(z, a_2, 2);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 50 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 51 */
        case 1:
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((546 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0; /* among, line 52 */
            if (!(find_among_b(z, a_0, 10))) return 0;
            break;
        case 2:
            if (z->c - 1 <= z->lb || z->p[z->c - 1] != 116) return 0; /* among, line 53 */
            if (!(find_among_b(z, a_1, 2))) return 0;
            break;
    }
    {   int ret = slice_del(z); /* delete, line 55 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_verb(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 62 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 62 */
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((540726 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 62 */
        among_var = find_among_b(z, a_3, 14);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 62 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 63 */
        case 1:
            if (in_grouping_b_U(z, g_V1, 97, 252, 0)) return 0; /* grouping V1, line 64 */
            break;
    }
    {   int ret = slice_del(z); /* delete, line 79 */
        if (ret < 0) return ret;
    }
    z->B[0] = 1; /* set is_verb, line 80 */
    return 1;
}

static int r_LONGV(struct SN_env * z) { /* backwardmode */
    if (!(find_among_b(z, a_4, 9))) return 0; /* among, line 83 */
    return 1;
}

static int r_i_plural(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 86 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 86 */
        if (z->c <= z->lb || z->p[z->c - 1] != 105) { z->lb = mlimit1; return 0; } /* substring, line 86 */
        if (!(find_among_b(z, a_5, 1))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 86 */
        z->lb = mlimit1;
    }
    if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 88 */
    {   int ret = slice_del(z); /* delete, line 90 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_case_ending(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 94 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 94 */
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1577506 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 94 */
        if (!(find_among_b(z, a_6, 12))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 94 */
        z->lb = mlimit1;
    }
    if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 96 */
    {   int ret = slice_del(z); /* delete, line 109 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_plural_three_first_cases(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 115 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 115 */
        if (z->c <= z->lb || (z->p[z->c - 1] != 100 && z->p[z->c - 1] != 101)) { z->lb = mlimit1; return 0; } /* substring, line 115 */
        among_var = find_among_b(z, a_7, 9);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 115 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 116 */
        case 1:
            {   int ret = slice_from_s(z, 2, s_0); /* <-, line 117 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m2 = z->l - z->c; (void)m2; /* not, line 120 */
                {   int ret = r_LONGV(z); /* call LONGV, line 120 */
                    if (ret == 0) goto lab0;
                    if (ret < 0) return ret;
                }
                return 0;
            lab0:
                z->c = z->l - m2;
            }
            {   int ret = slice_del(z); /* delete, line 120 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 1, s_1); /* <-, line 121 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 1, s_2); /* <-, line 122 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int m3 = z->l - z->c; (void)m3; /* or, line 123 */
                {   int m_test4 = z->l - z->c; /* test, line 123 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 4); /* hop, line 123 */
                        if (ret < 0) goto lab2;
                        z->c = ret;
                    }
                    z->c = z->l - m_test4;
                }
                {   int ret = slice_del(z); /* delete, line 123 */
                    if (ret < 0) return ret;
                }
                goto lab1;
            lab2:
                z->c = z->l - m3;
                {   int ret = slice_from_s(z, 1, s_3); /* <-, line 123 */
                    if (ret < 0) return ret;
                }
            }
        lab1:
            break;
        case 6:
            {   int ret = slice_del(z); /* delete, line 124 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 125 */
            {   int ret = slice_del(z); /* delete, line 125 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_double(struct SN_env * z) { /* backwardmode */
    {   int m_test1 = z->l - z->c; /* test, line 130 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1116160 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0; /* among, line 130 */
        if (!(find_among_b(z, a_8, 3))) return 0;
        z->c = z->l - m_test1;
    }
    return 1;
}

static int r_undouble(struct SN_env * z) { /* backwardmode */
    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
        if (ret < 0) return 0;
        z->c = ret; /* next, line 134 */
    }
    z->ket = z->c; /* [, line 134 */
    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 1); /* hop, line 134 */
        if (ret < 0) return 0;
        z->c = ret;
    }
    z->bra = z->c; /* ], line 134 */
    {   int ret = slice_del(z); /* delete, line 134 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_nu(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 138 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 138 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] != 117) { z->lb = mlimit1; return 0; } /* substring, line 138 */
        if (!(find_among_b(z, a_9, 1))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 138 */
        z->lb = mlimit1;
    }
    {   int ret = slice_del(z); /* delete, line 142 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_remove_double_kpt(struct SN_env * z) { /* backwardmode */
    if (in_grouping_b_U(z, g_V1, 97, 252, 0)) return 0; /* grouping V1, line 146 */
    {   int m1 = z->l - z->c; (void)m1; /* and, line 147 */
        {   int ret = r_double(z); /* call double, line 146 */
            if (ret <= 0) return ret;
        }
        z->c = z->l - m1;
        {   int ret = r_undouble(z); /* call undouble, line 147 */
            if (ret <= 0) return ret;
        }
    }
    return 1;
}

static int r_degrees(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 152 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 152 */
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 97 && z->p[z->c - 1] != 105)) { z->lb = mlimit1; return 0; } /* substring, line 152 */
        if (!(find_among_b(z, a_10, 2))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 152 */
        z->lb = mlimit1;
    }
    if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 154 */
    {   int ret = slice_del(z); /* delete, line 154 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_substantive(struct SN_env * z) { /* backwardmode */
    {   int m1 = z->l - z->c; (void)m1; /* do, line 161 */
        {   int ret = r_even_ending(z); /* call even_ending, line 161 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    {   int m2 = z->l - z->c; (void)m2; /* do, line 162 */
        {   int ret = r_case_ending(z); /* call case_ending, line 162 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    {   int m3 = z->l - z->c; (void)m3; /* do, line 167 */
        {   int ret = r_plural_three_first_cases(z); /* call plural_three_first_cases, line 167 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* do, line 168 */
        {   int ret = r_degrees(z); /* call degrees, line 168 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m4;
    }
    {   int m5 = z->l - z->c; (void)m5; /* do, line 169 */
        {   int ret = r_i_plural(z); /* call i_plural, line 169 */
            if (ret == 0) goto lab4;
            if (ret < 0) return ret;
        }
    lab4:
        z->c = z->l - m5;
    }
    {   int m6 = z->l - z->c; (void)m6; /* do, line 170 */
        {   int ret = r_nu(z); /* call nu, line 170 */
            if (ret == 0) goto lab5;
            if (ret < 0) return ret;
        }
    lab5:
        z->c = z->l - m6;
    }
    {   int m7 = z->l - z->c; (void)m7; /* do, line 171 */
        {   int ret = r_remove_double_kpt(z); /* call remove_double_kpt, line 171 */
            if (ret == 0) goto lab6;
            if (ret < 0) return ret;
        }
    lab6:
        z->c = z->l - m7;
    }
    return 1;
}

extern int H_stem(struct SN_env * z) { /* forwardmode */
    {   int c1 = z->c; /* do, line 177 */
        {   int ret = r_mark_regions(z); /* call mark_regions, line 177 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    z->B[0] = 0; /* unset is_verb, line 178 */
    z->lb = z->c; z->c = z->l; /* backwards, line 179 */

    /* do, line 180 */
    {   int ret = r_substantive(z); /* call substantive, line 180 */
        if (ret == 0) goto lab1;
        if (ret < 0) return ret;
    }
lab1:
    z->c = z->lb;
    return 1;
}

extern struct SN_env * H_create_env(void) { return SN_create_env(0, 1, 1); }

extern void H_close_env(struct SN_env * z) { SN_close_env(z, 0); }

