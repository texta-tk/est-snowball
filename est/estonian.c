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
static int r_undouble(struct SN_env * z);
static int r_double(struct SN_env * z);
static int r_finish(struct SN_env * z);
static int r_plural_three_first_cases(struct SN_env * z);
static int r_even_ending(struct SN_env * z);
static int r_case_ending(struct SN_env * z);
static int r_CRV(struct SN_env * z);
static int r_LONGV(struct SN_env * z);
static int r_R2(struct SN_env * z);
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

static const symbol s_3_0[2] = { 'a', 'a' };
static const symbol s_3_1[2] = { 'e', 'e' };
static const symbol s_3_2[2] = { 'i', 'i' };
static const symbol s_3_3[2] = { 'o', 'o' };
static const symbol s_3_4[2] = { 'u', 'u' };
static const symbol s_3_5[4] = { 0xC3, 0xA4, 0xC3, 0xA4 };
static const symbol s_3_6[4] = { 0xC3, 0xB5, 0xC3, 0xB5 };
static const symbol s_3_7[4] = { 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_3_8[4] = { 0xC3, 0xBC, 0xC3, 0xBC };

static const struct among a_3[9] =
{
/*  0 */ { 2, s_3_0, -1, -1, 0},
/*  1 */ { 2, s_3_1, -1, -1, 0},
/*  2 */ { 2, s_3_2, -1, -1, 0},
/*  3 */ { 2, s_3_3, -1, -1, 0},
/*  4 */ { 2, s_3_4, -1, -1, 0},
/*  5 */ { 4, s_3_5, -1, -1, 0},
/*  6 */ { 4, s_3_6, -1, -1, 0},
/*  7 */ { 4, s_3_7, -1, -1, 0},
/*  8 */ { 4, s_3_8, -1, -1, 0}
};

static const symbol s_4_0[2] = { 'g', 'a' };
static const symbol s_4_1[2] = { 'n', 'a' };
static const symbol s_4_2[2] = { 't', 'a' };
static const symbol s_4_3[2] = { 'l', 'e' };
static const symbol s_4_4[3] = { 's', 's', 'e' };
static const symbol s_4_5[2] = { 'n', 'i' };
static const symbol s_4_6[1] = { 'l' };
static const symbol s_4_7[1] = { 's' };
static const symbol s_4_8[2] = { 'k', 's' };
static const symbol s_4_9[2] = { 'l', 't' };
static const symbol s_4_10[2] = { 's', 't' };

static const struct among a_4[11] =
{
/*  0 */ { 2, s_4_0, -1, 1, 0},
/*  1 */ { 2, s_4_1, -1, 1, 0},
/*  2 */ { 2, s_4_2, -1, 1, 0},
/*  3 */ { 2, s_4_3, -1, 1, 0},
/*  4 */ { 3, s_4_4, -1, 1, 0},
/*  5 */ { 2, s_4_5, -1, 1, 0},
/*  6 */ { 1, s_4_6, -1, 1, 0},
/*  7 */ { 1, s_4_7, -1, 1, 0},
/*  8 */ { 2, s_4_8, 7, 1, 0},
/*  9 */ { 2, s_4_9, -1, 1, 0},
/* 10 */ { 2, s_4_10, -1, 1, 0}
};

static const symbol s_5_0[1] = { 'd' };
static const symbol s_5_1[3] = { 'a', 'i', 'd' };
static const symbol s_5_2[3] = { 'e', 'i', 'd' };
static const symbol s_5_3[3] = { 's', 'i', 'd' };
static const symbol s_5_4[2] = { 'd', 'e' };
static const symbol s_5_5[6] = { 'i', 'k', 'k', 'u', 'd', 'e' };
static const symbol s_5_6[3] = { 'i', 'k', 'e' };
static const symbol s_5_7[4] = { 'i', 'k', 'k', 'e' };
static const symbol s_5_8[2] = { 't', 'e' };

static const struct among a_5[9] =
{
/*  0 */ { 1, s_5_0, -1, 6, 0},
/*  1 */ { 3, s_5_1, 0, 3, 0},
/*  2 */ { 3, s_5_2, 0, 4, 0},
/*  3 */ { 3, s_5_3, 0, 2, 0},
/*  4 */ { 2, s_5_4, -1, 5, 0},
/*  5 */ { 6, s_5_5, 4, 1, 0},
/*  6 */ { 3, s_5_6, -1, 1, 0},
/*  7 */ { 4, s_5_7, -1, 1, 0},
/*  8 */ { 2, s_5_8, -1, 5, 0}
};

static const symbol s_6_0[2] = { 'k', 'k' };
static const symbol s_6_1[2] = { 'p', 'p' };
static const symbol s_6_2[2] = { 't', 't' };

static const struct among a_6[3] =
{
/*  0 */ { 2, s_6_0, -1, -1, 0},
/*  1 */ { 2, s_6_1, -1, -1, 0},
/*  2 */ { 2, s_6_2, -1, -1, 0}
};

static const unsigned char g_V1[] = { 17, 65, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 48, 8 };

static const unsigned char g_C[] = { 119, 223, 119, 1 };

static const unsigned char g_RV[] = { 17, 65, 16 };

static const symbol s_0[] = { 'i', 'k' };
static const symbol s_1[] = { 'a' };
static const symbol s_2[] = { 'e' };

static int r_mark_regions(struct SN_env * z) { /* forwardmode */
    z->I[0] = z->l; /* $p1 = <integer expression>, line 33 */
    z->I[1] = z->l; /* $p2 = <integer expression>, line 34 */
    if (out_grouping_U(z, g_V1, 97, 252, 1) < 0) return 0; /* goto */ /* grouping V1, line 36 */
    {    /* gopast */ /* non V1, line 36 */
        int ret = in_grouping_U(z, g_V1, 97, 252, 1);
        if (ret < 0) return 0;
        z->c += ret;
    }
    z->I[0] = z->c; /* setmark p1, line 36 */
    if (out_grouping_U(z, g_V1, 97, 252, 1) < 0) return 0; /* goto */ /* grouping V1, line 37 */
    {    /* gopast */ /* non V1, line 37 */
        int ret = in_grouping_U(z, g_V1, 97, 252, 1);
        if (ret < 0) return 0;
        z->c += ret;
    }
    z->I[1] = z->c; /* setmark p2, line 37 */
    return 1;
}

static int r_R2(struct SN_env * z) { /* backwardmode */
    if (!(z->I[1] <= z->c)) return 0; /* $(<integer expression> <= <integer expression>), line 43 */
    return 1;
}

static int r_even_ending(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 45 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 45 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] != 105) { z->lb = mlimit1; return 0; } /* substring, line 45 */
        among_var = find_among_b(z, a_2, 2);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 45 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 46 */
        case 1:
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((546 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0; /* among, line 47 */
            if (!(find_among_b(z, a_0, 10))) return 0;
            break;
        case 2:
            if (z->c - 1 <= z->lb || z->p[z->c - 1] != 116) return 0; /* among, line 48 */
            if (!(find_among_b(z, a_1, 2))) return 0;
            break;
    }
    {   int ret = slice_del(z); /* delete, line 50 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_LONGV(struct SN_env * z) { /* backwardmode */
    if (!(find_among_b(z, a_3, 9))) return 0; /* among, line 54 */
    return 1;
}

static int r_CRV(struct SN_env * z) { /* backwardmode */
    if (in_grouping_b_U(z, g_C, 98, 122, 0)) return 0; /* grouping C, line 55 */
    if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 55 */
    return 1;
}

static int r_case_ending(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 58 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 58 */
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1577506 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 58 */
        if (!(find_among_b(z, a_4, 11))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 58 */
        z->lb = mlimit1;
    }
    if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 60 */
    {   int ret = slice_del(z); /* delete, line 72 */
        if (ret < 0) return ret;
    }
    z->B[0] = 1; /* set ending_removed, line 73 */
    return 1;
}

static int r_plural_three_first_cases(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 77 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 77 */
        if (z->c <= z->lb || (z->p[z->c - 1] != 100 && z->p[z->c - 1] != 101)) { z->lb = mlimit1; return 0; } /* substring, line 77 */
        among_var = find_among_b(z, a_5, 9);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 77 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 78 */
        case 1:
            {   int ret = slice_from_s(z, 2, s_0); /* <-, line 79 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m2 = z->l - z->c; (void)m2; /* not, line 82 */
                {   int ret = r_LONGV(z); /* call LONGV, line 82 */
                    if (ret == 0) goto lab0;
                    if (ret < 0) return ret;
                }
                return 0;
            lab0:
                z->c = z->l - m2;
            }
            {   int ret = slice_del(z); /* delete, line 82 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 1, s_1); /* <-, line 83 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 1, s_2); /* <-, line 84 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_del(z); /* delete, line 85 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 87 */
            {   int ret = slice_del(z); /* delete, line 87 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_double(struct SN_env * z) { /* backwardmode */
    {   int m_test1 = z->l - z->c; /* test, line 92 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1116160 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0; /* among, line 92 */
        if (!(find_among_b(z, a_6, 3))) return 0;
        z->c = z->l - m_test1;
    }
    return 1;
}

static int r_undouble(struct SN_env * z) { /* backwardmode */
    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
        if (ret < 0) return 0;
        z->c = ret; /* next, line 96 */
    }
    z->ket = z->c; /* [, line 96 */
    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 1); /* hop, line 96 */
        if (ret < 0) return 0;
        z->c = ret;
    }
    z->bra = z->c; /* ], line 96 */
    {   int ret = slice_del(z); /* delete, line 96 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_finish(struct SN_env * z) { /* backwardmode */
    if (in_grouping_b_U(z, g_V1, 97, 252, 0)) return 0; /* grouping V1, line 100 */
    {   int m1 = z->l - z->c; (void)m1; /* and, line 101 */
        {   int ret = r_double(z); /* call double, line 100 */
            if (ret <= 0) return ret;
        }
        z->c = z->l - m1;
        {   int ret = r_undouble(z); /* call undouble, line 101 */
            if (ret <= 0) return ret;
        }
    }
    return 1;
}

extern int H_stem(struct SN_env * z) { /* forwardmode */
    {   int c1 = z->c; /* do, line 109 */
        {   int ret = r_mark_regions(z); /* call mark_regions, line 109 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    z->B[0] = 0; /* unset ending_removed, line 110 */
    z->lb = z->c; z->c = z->l; /* backwards, line 111 */

    {   int m2 = z->l - z->c; (void)m2; /* do, line 112 */
        {   int ret = r_even_ending(z); /* call even_ending, line 112 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    {   int m3 = z->l - z->c; (void)m3; /* do, line 113 */
        {   int ret = r_case_ending(z); /* call case_ending, line 113 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* do, line 115 */
        {   int ret = r_plural_three_first_cases(z); /* call plural_three_first_cases, line 115 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m4;
    }
    {   int m5 = z->l - z->c; (void)m5; /* do, line 116 */
        {   int ret = r_finish(z); /* call finish, line 116 */
            if (ret == 0) goto lab4;
            if (ret < 0) return ret;
        }
    lab4:
        z->c = z->l - m5;
    }
    z->c = z->lb;
    return 1;
}

extern struct SN_env * H_create_env(void) { return SN_create_env(0, 2, 1); }

extern void H_close_env(struct SN_env * z) { SN_close_env(z, 0); }

