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
static int r_verb_exceptions(struct SN_env * z);
static int r_substantive(struct SN_env * z);
static int r_degrees(struct SN_env * z);
static int r_i_plural(struct SN_env * z);
static int r_undouble(struct SN_env * z);
static int r_double(struct SN_env * z);
static int r_remove_double_kpt(struct SN_env * z);
static int r_plural_three_first_cases(struct SN_env * z);
static int r_emphasis(struct SN_env * z);
static int r_case_ending(struct SN_env * z);
static int r_special_noun_endings(struct SN_env * z);
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
static const symbol s_0_0[2] = { 'g', 'i' };
static const symbol s_0_1[2] = { 'k', 'i' };

static const struct among a_0[2] =
{
/*  0 */ { 2, s_0_0, -1, 1, 0},
/*  1 */ { 2, s_0_1, -1, 2, 0}
};

static const symbol s_1_0[2] = { 'd', 'a' };
static const symbol s_1_1[4] = { 'm', 'a', 't', 'a' };
static const symbol s_1_2[1] = { 'b' };
static const symbol s_1_3[4] = { 'k', 's', 'i', 'd' };
static const symbol s_1_4[6] = { 'n', 'u', 'k', 's', 'i', 'd' };
static const symbol s_1_5[2] = { 'm', 'e' };
static const symbol s_1_6[4] = { 's', 'i', 'm', 'e' };
static const symbol s_1_7[5] = { 'k', 's', 'i', 'm', 'e' };
static const symbol s_1_8[7] = { 'n', 'u', 'k', 's', 'i', 'm', 'e' };
static const symbol s_1_9[4] = { 'a', 'k', 's', 'e' };
static const symbol s_1_10[5] = { 'd', 'a', 'k', 's', 'e' };
static const symbol s_1_11[5] = { 't', 'a', 'k', 's', 'e' };
static const symbol s_1_12[4] = { 's', 'i', 't', 'e' };
static const symbol s_1_13[5] = { 'k', 's', 'i', 't', 'e' };
static const symbol s_1_14[7] = { 'n', 'u', 'k', 's', 'i', 't', 'e' };
static const symbol s_1_15[1] = { 'n' };
static const symbol s_1_16[3] = { 's', 'i', 'n' };
static const symbol s_1_17[4] = { 'k', 's', 'i', 'n' };
static const symbol s_1_18[6] = { 'n', 'u', 'k', 's', 'i', 'n' };
static const symbol s_1_19[4] = { 'd', 'a', 'k', 's' };
static const symbol s_1_20[4] = { 't', 'a', 'k', 's' };

static const struct among a_1[21] =
{
/*  0 */ { 2, s_1_0, -1, 3, 0},
/*  1 */ { 4, s_1_1, -1, 1, 0},
/*  2 */ { 1, s_1_2, -1, 3, 0},
/*  3 */ { 4, s_1_3, -1, 1, 0},
/*  4 */ { 6, s_1_4, 3, 1, 0},
/*  5 */ { 2, s_1_5, -1, 3, 0},
/*  6 */ { 4, s_1_6, 5, 1, 0},
/*  7 */ { 5, s_1_7, 6, 1, 0},
/*  8 */ { 7, s_1_8, 7, 1, 0},
/*  9 */ { 4, s_1_9, -1, 2, 0},
/* 10 */ { 5, s_1_10, 9, 1, 0},
/* 11 */ { 5, s_1_11, 9, 1, 0},
/* 12 */ { 4, s_1_12, -1, 1, 0},
/* 13 */ { 5, s_1_13, 12, 1, 0},
/* 14 */ { 7, s_1_14, 13, 1, 0},
/* 15 */ { 1, s_1_15, -1, 3, 0},
/* 16 */ { 3, s_1_16, 15, 1, 0},
/* 17 */ { 4, s_1_17, 16, 1, 0},
/* 18 */ { 6, s_1_18, 17, 1, 0},
/* 19 */ { 4, s_1_19, -1, 1, 0},
/* 20 */ { 4, s_1_20, -1, 1, 0}
};

static const symbol s_2_0[2] = { 'a', 'a' };
static const symbol s_2_1[2] = { 'e', 'e' };
static const symbol s_2_2[2] = { 'i', 'i' };
static const symbol s_2_3[2] = { 'o', 'o' };
static const symbol s_2_4[2] = { 'u', 'u' };
static const symbol s_2_5[4] = { 0xC3, 0xA4, 0xC3, 0xA4 };
static const symbol s_2_6[4] = { 0xC3, 0xB5, 0xC3, 0xB5 };
static const symbol s_2_7[4] = { 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_2_8[4] = { 0xC3, 0xBC, 0xC3, 0xBC };

static const struct among a_2[9] =
{
/*  0 */ { 2, s_2_0, -1, -1, 0},
/*  1 */ { 2, s_2_1, -1, -1, 0},
/*  2 */ { 2, s_2_2, -1, -1, 0},
/*  3 */ { 2, s_2_3, -1, -1, 0},
/*  4 */ { 2, s_2_4, -1, -1, 0},
/*  5 */ { 4, s_2_5, -1, -1, 0},
/*  6 */ { 4, s_2_6, -1, -1, 0},
/*  7 */ { 4, s_2_7, -1, -1, 0},
/*  8 */ { 4, s_2_8, -1, -1, 0}
};

static const symbol s_3_0[1] = { 'i' };

static const struct among a_3[1] =
{
/*  0 */ { 1, s_3_0, -1, 1, 0}
};

static const symbol s_4_0[4] = { 'l', 'a', 'n', 'e' };
static const symbol s_4_1[4] = { 'l', 'i', 'n', 'e' };
static const symbol s_4_2[4] = { 'm', 'i', 'n', 'e' };
static const symbol s_4_3[5] = { 'l', 'a', 's', 's', 'e' };
static const symbol s_4_4[5] = { 'l', 'i', 's', 's', 'e' };
static const symbol s_4_5[5] = { 'm', 'i', 's', 's', 'e' };
static const symbol s_4_6[4] = { 'l', 'a', 's', 'i' };
static const symbol s_4_7[4] = { 'l', 'i', 's', 'i' };
static const symbol s_4_8[4] = { 'm', 'i', 's', 'i' };
static const symbol s_4_9[4] = { 'l', 'a', 's', 't' };
static const symbol s_4_10[4] = { 'l', 'i', 's', 't' };
static const symbol s_4_11[4] = { 'm', 'i', 's', 't' };

static const struct among a_4[12] =
{
/*  0 */ { 4, s_4_0, -1, 1, 0},
/*  1 */ { 4, s_4_1, -1, 3, 0},
/*  2 */ { 4, s_4_2, -1, 2, 0},
/*  3 */ { 5, s_4_3, -1, 1, 0},
/*  4 */ { 5, s_4_4, -1, 3, 0},
/*  5 */ { 5, s_4_5, -1, 2, 0},
/*  6 */ { 4, s_4_6, -1, 1, 0},
/*  7 */ { 4, s_4_7, -1, 3, 0},
/*  8 */ { 4, s_4_8, -1, 2, 0},
/*  9 */ { 4, s_4_9, -1, 1, 0},
/* 10 */ { 4, s_4_10, -1, 3, 0},
/* 11 */ { 4, s_4_11, -1, 2, 0}
};

static const symbol s_5_0[2] = { 'g', 'a' };
static const symbol s_5_1[2] = { 't', 'a' };
static const symbol s_5_2[2] = { 'l', 'e' };
static const symbol s_5_3[3] = { 's', 's', 'e' };
static const symbol s_5_4[1] = { 'l' };
static const symbol s_5_5[1] = { 's' };
static const symbol s_5_6[2] = { 'k', 's' };
static const symbol s_5_7[1] = { 't' };
static const symbol s_5_8[2] = { 'l', 't' };
static const symbol s_5_9[2] = { 's', 't' };

static const struct among a_5[10] =
{
/*  0 */ { 2, s_5_0, -1, 1, 0},
/*  1 */ { 2, s_5_1, -1, 1, 0},
/*  2 */ { 2, s_5_2, -1, 1, 0},
/*  3 */ { 3, s_5_3, -1, 1, 0},
/*  4 */ { 1, s_5_4, -1, 1, 0},
/*  5 */ { 1, s_5_5, -1, 1, 0},
/*  6 */ { 2, s_5_6, 5, 1, 0},
/*  7 */ { 1, s_5_7, -1, 1, 0},
/*  8 */ { 2, s_5_8, 7, 1, 0},
/*  9 */ { 2, s_5_9, 7, 1, 0}
};

static const symbol s_6_0[1] = { 'd' };
static const symbol s_6_1[3] = { 's', 'i', 'd' };
static const symbol s_6_2[2] = { 'd', 'e' };
static const symbol s_6_3[6] = { 'i', 'k', 'k', 'u', 'd', 'e' };
static const symbol s_6_4[3] = { 'i', 'k', 'e' };
static const symbol s_6_5[4] = { 'i', 'k', 'k', 'e' };
static const symbol s_6_6[2] = { 't', 'e' };

static const struct among a_6[7] =
{
/*  0 */ { 1, s_6_0, -1, 4, 0},
/*  1 */ { 3, s_6_1, 0, 2, 0},
/*  2 */ { 2, s_6_2, -1, 4, 0},
/*  3 */ { 6, s_6_3, 2, 1, 0},
/*  4 */ { 3, s_6_4, -1, 1, 0},
/*  5 */ { 4, s_6_5, -1, 1, 0},
/*  6 */ { 2, s_6_6, -1, 3, 0}
};

static const symbol s_7_0[2] = { 'k', 'k' };
static const symbol s_7_1[2] = { 'p', 'p' };
static const symbol s_7_2[2] = { 't', 't' };

static const struct among a_7[3] =
{
/*  0 */ { 2, s_7_0, -1, -1, 0},
/*  1 */ { 2, s_7_1, -1, -1, 0},
/*  2 */ { 2, s_7_2, -1, -1, 0}
};

static const symbol s_8_0[2] = { 'v', 'a' };
static const symbol s_8_1[2] = { 'd', 'u' };
static const symbol s_8_2[2] = { 'n', 'u' };
static const symbol s_8_3[2] = { 't', 'u' };

static const struct among a_8[4] =
{
/*  0 */ { 2, s_8_0, -1, -1, 0},
/*  1 */ { 2, s_8_1, -1, -1, 0},
/*  2 */ { 2, s_8_2, -1, -1, 0},
/*  3 */ { 2, s_8_3, -1, -1, 0}
};

static const symbol s_9_0[2] = { 'm', 'a' };
static const symbol s_9_1[3] = { 'm', 'a', 'i' };
static const symbol s_9_2[1] = { 'm' };

static const struct among a_9[3] =
{
/*  0 */ { 2, s_9_0, -1, 2, 0},
/*  1 */ { 3, s_9_1, -1, 1, 0},
/*  2 */ { 1, s_9_2, -1, 1, 0}
};

static const symbol s_10_0[4] = { 'j', 'o', 'o', 'b' };
static const symbol s_10_1[4] = { 'j', 'o', 'o', 'd' };
static const symbol s_10_2[8] = { 'j', 'o', 'o', 'd', 'a', 'k', 's', 'e' };
static const symbol s_10_3[5] = { 'j', 'o', 'o', 'm', 'a' };
static const symbol s_10_4[7] = { 'j', 'o', 'o', 'm', 'a', 't', 'a' };
static const symbol s_10_5[5] = { 'j', 'o', 'o', 'm', 'e' };
static const symbol s_10_6[4] = { 'j', 'o', 'o', 'n' };
static const symbol s_10_7[5] = { 'j', 'o', 'o', 't', 'e' };
static const symbol s_10_8[6] = { 'j', 'o', 'o', 'v', 'a', 'd' };
static const symbol s_10_9[4] = { 'j', 'u', 'u', 'a' };
static const symbol s_10_10[7] = { 'j', 'u', 'u', 'a', 'k', 's', 'e' };
static const symbol s_10_11[4] = { 'j', 0xC3, 0xA4, 'i' };
static const symbol s_10_12[5] = { 'j', 0xC3, 0xA4, 'i', 'd' };
static const symbol s_10_13[6] = { 'j', 0xC3, 0xA4, 'i', 'm', 'e' };
static const symbol s_10_14[5] = { 'j', 0xC3, 0xA4, 'i', 'n' };
static const symbol s_10_15[6] = { 'j', 0xC3, 0xA4, 'i', 't', 'e' };
static const symbol s_10_16[6] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'b' };
static const symbol s_10_17[6] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'd' };
static const symbol s_10_18[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'd', 'a' };
static const symbol s_10_19[10] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'd', 'a', 'k', 's', 'e' };
static const symbol s_10_20[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'd', 'i' };
static const symbol s_10_21[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'k', 's' };
static const symbol s_10_22[9] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'k', 's', 'i', 'd' };
static const symbol s_10_23[10] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_24[9] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'k', 's', 'i', 'n' };
static const symbol s_10_25[10] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'k', 's', 'i', 't', 'e' };
static const symbol s_10_26[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'm', 'a' };
static const symbol s_10_27[9] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'm', 'a', 't', 'a' };
static const symbol s_10_28[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'm', 'e' };
static const symbol s_10_29[6] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'n' };
static const symbol s_10_30[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 't', 'e' };
static const symbol s_10_31[8] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'v', 'a', 'd' };
static const symbol s_10_32[4] = { 'j', 0xC3, 0xB5, 'i' };
static const symbol s_10_33[5] = { 'j', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_10_34[6] = { 'j', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_10_35[5] = { 'j', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_10_36[6] = { 'j', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_10_37[4] = { 'k', 'e', 'e', 'b' };
static const symbol s_10_38[4] = { 'k', 'e', 'e', 'd' };
static const symbol s_10_39[8] = { 'k', 'e', 'e', 'd', 'a', 'k', 's', 'e' };
static const symbol s_10_40[5] = { 'k', 'e', 'e', 'k', 's' };
static const symbol s_10_41[7] = { 'k', 'e', 'e', 'k', 's', 'i', 'd' };
static const symbol s_10_42[8] = { 'k', 'e', 'e', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_43[7] = { 'k', 'e', 'e', 'k', 's', 'i', 'n' };
static const symbol s_10_44[8] = { 'k', 'e', 'e', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_45[5] = { 'k', 'e', 'e', 'm', 'a' };
static const symbol s_10_46[7] = { 'k', 'e', 'e', 'm', 'a', 't', 'a' };
static const symbol s_10_47[5] = { 'k', 'e', 'e', 'm', 'e' };
static const symbol s_10_48[4] = { 'k', 'e', 'e', 'n' };
static const symbol s_10_49[4] = { 'k', 'e', 'e', 's' };
static const symbol s_10_50[5] = { 'k', 'e', 'e', 't', 'a' };
static const symbol s_10_51[5] = { 'k', 'e', 'e', 't', 'e' };
static const symbol s_10_52[6] = { 'k', 'e', 'e', 'v', 'a', 'd' };
static const symbol s_10_53[5] = { 'k', 0xC3, 0xA4, 'i', 'a' };
static const symbol s_10_54[8] = { 'k', 0xC3, 0xA4, 'i', 'a', 'k', 's', 'e' };
static const symbol s_10_55[5] = { 'k', 0xC3, 0xA4, 'i', 'b' };
static const symbol s_10_56[5] = { 'k', 0xC3, 0xA4, 'i', 'd' };
static const symbol s_10_57[6] = { 'k', 0xC3, 0xA4, 'i', 'd', 'i' };
static const symbol s_10_58[6] = { 'k', 0xC3, 0xA4, 'i', 'k', 's' };
static const symbol s_10_59[8] = { 'k', 0xC3, 0xA4, 'i', 'k', 's', 'i', 'd' };
static const symbol s_10_60[9] = { 'k', 0xC3, 0xA4, 'i', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_61[8] = { 'k', 0xC3, 0xA4, 'i', 'k', 's', 'i', 'n' };
static const symbol s_10_62[9] = { 'k', 0xC3, 0xA4, 'i', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_63[6] = { 'k', 0xC3, 0xA4, 'i', 'm', 'a' };
static const symbol s_10_64[8] = { 'k', 0xC3, 0xA4, 'i', 'm', 'a', 't', 'a' };
static const symbol s_10_65[6] = { 'k', 0xC3, 0xA4, 'i', 'm', 'e' };
static const symbol s_10_66[5] = { 'k', 0xC3, 0xA4, 'i', 'n' };
static const symbol s_10_67[5] = { 'k', 0xC3, 0xA4, 'i', 's' };
static const symbol s_10_68[6] = { 'k', 0xC3, 0xA4, 'i', 't', 'e' };
static const symbol s_10_69[7] = { 'k', 0xC3, 0xA4, 'i', 'v', 'a', 'd' };
static const symbol s_10_70[4] = { 'l', 'a', 'o', 'b' };
static const symbol s_10_71[4] = { 'l', 'a', 'o', 'd' };
static const symbol s_10_72[5] = { 'l', 'a', 'o', 'k', 's' };
static const symbol s_10_73[7] = { 'l', 'a', 'o', 'k', 's', 'i', 'd' };
static const symbol s_10_74[8] = { 'l', 'a', 'o', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_75[7] = { 'l', 'a', 'o', 'k', 's', 'i', 'n' };
static const symbol s_10_76[8] = { 'l', 'a', 'o', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_77[5] = { 'l', 'a', 'o', 'm', 'e' };
static const symbol s_10_78[4] = { 'l', 'a', 'o', 'n' };
static const symbol s_10_79[5] = { 'l', 'a', 'o', 't', 'e' };
static const symbol s_10_80[6] = { 'l', 'a', 'o', 'v', 'a', 'd' };
static const symbol s_10_81[4] = { 'l', 'o', 'e', 'b' };
static const symbol s_10_82[4] = { 'l', 'o', 'e', 'd' };
static const symbol s_10_83[5] = { 'l', 'o', 'e', 'k', 's' };
static const symbol s_10_84[7] = { 'l', 'o', 'e', 'k', 's', 'i', 'd' };
static const symbol s_10_85[8] = { 'l', 'o', 'e', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_86[7] = { 'l', 'o', 'e', 'k', 's', 'i', 'n' };
static const symbol s_10_87[8] = { 'l', 'o', 'e', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_88[5] = { 'l', 'o', 'e', 'm', 'e' };
static const symbol s_10_89[4] = { 'l', 'o', 'e', 'n' };
static const symbol s_10_90[5] = { 'l', 'o', 'e', 't', 'e' };
static const symbol s_10_91[6] = { 'l', 'o', 'e', 'v', 'a', 'd' };
static const symbol s_10_92[4] = { 'l', 'o', 'o', 'b' };
static const symbol s_10_93[4] = { 'l', 'o', 'o', 'd' };
static const symbol s_10_94[5] = { 'l', 'o', 'o', 'd', 'i' };
static const symbol s_10_95[5] = { 'l', 'o', 'o', 'k', 's' };
static const symbol s_10_96[7] = { 'l', 'o', 'o', 'k', 's', 'i', 'd' };
static const symbol s_10_97[8] = { 'l', 'o', 'o', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_98[7] = { 'l', 'o', 'o', 'k', 's', 'i', 'n' };
static const symbol s_10_99[8] = { 'l', 'o', 'o', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_100[5] = { 'l', 'o', 'o', 'm', 'a' };
static const symbol s_10_101[7] = { 'l', 'o', 'o', 'm', 'a', 't', 'a' };
static const symbol s_10_102[5] = { 'l', 'o', 'o', 'm', 'e' };
static const symbol s_10_103[4] = { 'l', 'o', 'o', 'n' };
static const symbol s_10_104[5] = { 'l', 'o', 'o', 't', 'e' };
static const symbol s_10_105[6] = { 'l', 'o', 'o', 'v', 'a', 'd' };
static const symbol s_10_106[4] = { 'l', 'u', 'u', 'a' };
static const symbol s_10_107[7] = { 'l', 'u', 'u', 'a', 'k', 's', 'e' };
static const symbol s_10_108[4] = { 'l', 0xC3, 0xB5, 'i' };
static const symbol s_10_109[5] = { 'l', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_10_110[6] = { 'l', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_10_111[5] = { 'l', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_10_112[6] = { 'l', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_10_113[6] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'b' };
static const symbol s_10_114[6] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'd' };
static const symbol s_10_115[10] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'a', 'k', 's', 'e' };
static const symbol s_10_116[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'i' };
static const symbol s_10_117[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's' };
static const symbol s_10_118[9] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'd' };
static const symbol s_10_119[10] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_120[9] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'n' };
static const symbol s_10_121[10] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 't', 'e' };
static const symbol s_10_122[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'a' };
static const symbol s_10_123[9] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'a', 't', 'a' };
static const symbol s_10_124[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'e' };
static const symbol s_10_125[6] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'n' };
static const symbol s_10_126[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 't', 'e' };
static const symbol s_10_127[8] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'v', 'a', 'd' };
static const symbol s_10_128[6] = { 'l', 0xC3, 0xBC, 0xC3, 0xBC, 'a' };
static const symbol s_10_129[9] = { 'l', 0xC3, 0xBC, 0xC3, 0xBC, 'a', 'k', 's', 'e' };
static const symbol s_10_130[6] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'a' };
static const symbol s_10_131[9] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'a', 'k', 's', 'e' };
static const symbol s_10_132[6] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'b' };
static const symbol s_10_133[6] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'd' };
static const symbol s_10_134[7] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'd', 'i' };
static const symbol s_10_135[7] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'k', 's' };
static const symbol s_10_136[9] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'k', 's', 'i', 'd' };
static const symbol s_10_137[10] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_138[9] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'k', 's', 'i', 'n' };
static const symbol s_10_139[10] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'k', 's', 'i', 't', 'e' };
static const symbol s_10_140[7] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'm', 'a' };
static const symbol s_10_141[9] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'm', 'a', 't', 'a' };
static const symbol s_10_142[7] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'm', 'e' };
static const symbol s_10_143[6] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'n' };
static const symbol s_10_144[6] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 's' };
static const symbol s_10_145[7] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 't', 'e' };
static const symbol s_10_146[8] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'v', 'a', 'd' };
static const symbol s_10_147[5] = { 'n', 0xC3, 0xA4, 'e', 'b' };
static const symbol s_10_148[5] = { 'n', 0xC3, 0xA4, 'e', 'd' };
static const symbol s_10_149[6] = { 'n', 0xC3, 0xA4, 'e', 'k', 's' };
static const symbol s_10_150[8] = { 'n', 0xC3, 0xA4, 'e', 'k', 's', 'i', 'd' };
static const symbol s_10_151[9] = { 'n', 0xC3, 0xA4, 'e', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_152[8] = { 'n', 0xC3, 0xA4, 'e', 'k', 's', 'i', 'n' };
static const symbol s_10_153[9] = { 'n', 0xC3, 0xA4, 'e', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_154[6] = { 'n', 0xC3, 0xA4, 'e', 'm', 'e' };
static const symbol s_10_155[5] = { 'n', 0xC3, 0xA4, 'e', 'n' };
static const symbol s_10_156[6] = { 'n', 0xC3, 0xA4, 'e', 't', 'e' };
static const symbol s_10_157[7] = { 'n', 0xC3, 0xA4, 'e', 'v', 'a', 'd' };
static const symbol s_10_158[7] = { 'n', 0xC3, 0xA4, 'g', 'e', 'm', 'a' };
static const symbol s_10_159[9] = { 'n', 0xC3, 0xA4, 'g', 'e', 'm', 'a', 't', 'a' };
static const symbol s_10_160[5] = { 'n', 0xC3, 0xA4, 'h', 'a' };
static const symbol s_10_161[8] = { 'n', 0xC3, 0xA4, 'h', 'a', 'k', 's', 'e' };
static const symbol s_10_162[6] = { 'n', 0xC3, 0xA4, 'h', 't', 'i' };
static const symbol s_10_163[5] = { 'p', 0xC3, 0xB5, 'e', 'b' };
static const symbol s_10_164[5] = { 'p', 0xC3, 0xB5, 'e', 'd' };
static const symbol s_10_165[6] = { 'p', 0xC3, 0xB5, 'e', 'k', 's' };
static const symbol s_10_166[8] = { 'p', 0xC3, 0xB5, 'e', 'k', 's', 'i', 'd' };
static const symbol s_10_167[9] = { 'p', 0xC3, 0xB5, 'e', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_168[8] = { 'p', 0xC3, 0xB5, 'e', 'k', 's', 'i', 'n' };
static const symbol s_10_169[9] = { 'p', 0xC3, 0xB5, 'e', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_170[6] = { 'p', 0xC3, 0xB5, 'e', 'm', 'e' };
static const symbol s_10_171[5] = { 'p', 0xC3, 0xB5, 'e', 'n' };
static const symbol s_10_172[6] = { 'p', 0xC3, 0xB5, 'e', 't', 'e' };
static const symbol s_10_173[7] = { 'p', 0xC3, 0xB5, 'e', 'v', 'a', 'd' };
static const symbol s_10_174[4] = { 's', 'a', 'a', 'b' };
static const symbol s_10_175[4] = { 's', 'a', 'a', 'd' };
static const symbol s_10_176[5] = { 's', 'a', 'a', 'd', 'a' };
static const symbol s_10_177[8] = { 's', 'a', 'a', 'd', 'a', 'k', 's', 'e' };
static const symbol s_10_178[5] = { 's', 'a', 'a', 'd', 'i' };
static const symbol s_10_179[5] = { 's', 'a', 'a', 'k', 's' };
static const symbol s_10_180[7] = { 's', 'a', 'a', 'k', 's', 'i', 'd' };
static const symbol s_10_181[8] = { 's', 'a', 'a', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_182[7] = { 's', 'a', 'a', 'k', 's', 'i', 'n' };
static const symbol s_10_183[8] = { 's', 'a', 'a', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_184[5] = { 's', 'a', 'a', 'm', 'a' };
static const symbol s_10_185[7] = { 's', 'a', 'a', 'm', 'a', 't', 'a' };
static const symbol s_10_186[5] = { 's', 'a', 'a', 'm', 'e' };
static const symbol s_10_187[4] = { 's', 'a', 'a', 'n' };
static const symbol s_10_188[5] = { 's', 'a', 'a', 't', 'e' };
static const symbol s_10_189[6] = { 's', 'a', 'a', 'v', 'a', 'd' };
static const symbol s_10_190[3] = { 's', 'a', 'i' };
static const symbol s_10_191[4] = { 's', 'a', 'i', 'd' };
static const symbol s_10_192[5] = { 's', 'a', 'i', 'm', 'e' };
static const symbol s_10_193[4] = { 's', 'a', 'i', 'n' };
static const symbol s_10_194[5] = { 's', 'a', 'i', 't', 'e' };
static const symbol s_10_195[4] = { 's', 0xC3, 0xB5, 'i' };
static const symbol s_10_196[5] = { 's', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_10_197[6] = { 's', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_10_198[5] = { 's', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_10_199[6] = { 's', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_10_200[6] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'b' };
static const symbol s_10_201[6] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'd' };
static const symbol s_10_202[10] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'a', 'k', 's', 'e' };
static const symbol s_10_203[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'i' };
static const symbol s_10_204[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's' };
static const symbol s_10_205[9] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'd' };
static const symbol s_10_206[10] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_207[9] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'n' };
static const symbol s_10_208[10] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 't', 'e' };
static const symbol s_10_209[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'a' };
static const symbol s_10_210[9] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'a', 't', 'a' };
static const symbol s_10_211[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'e' };
static const symbol s_10_212[6] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'n' };
static const symbol s_10_213[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 't', 'e' };
static const symbol s_10_214[8] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'v', 'a', 'd' };
static const symbol s_10_215[6] = { 's', 0xC3, 0xBC, 0xC3, 0xBC, 'a' };
static const symbol s_10_216[9] = { 's', 0xC3, 0xBC, 0xC3, 0xBC, 'a', 'k', 's', 'e' };
static const symbol s_10_217[4] = { 't', 'e', 'e', 'b' };
static const symbol s_10_218[4] = { 't', 'e', 'e', 'd' };
static const symbol s_10_219[5] = { 't', 'e', 'e', 'k', 's' };
static const symbol s_10_220[7] = { 't', 'e', 'e', 'k', 's', 'i', 'd' };
static const symbol s_10_221[8] = { 't', 'e', 'e', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_222[7] = { 't', 'e', 'e', 'k', 's', 'i', 'n' };
static const symbol s_10_223[8] = { 't', 'e', 'e', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_224[5] = { 't', 'e', 'e', 'm', 'e' };
static const symbol s_10_225[4] = { 't', 'e', 'e', 'n' };
static const symbol s_10_226[5] = { 't', 'e', 'e', 't', 'e' };
static const symbol s_10_227[6] = { 't', 'e', 'e', 'v', 'a', 'd' };
static const symbol s_10_228[6] = { 't', 'e', 'g', 'e', 'm', 'a' };
static const symbol s_10_229[8] = { 't', 'e', 'g', 'e', 'm', 'a', 't', 'a' };
static const symbol s_10_230[4] = { 't', 'e', 'h', 'a' };
static const symbol s_10_231[7] = { 't', 'e', 'h', 'a', 'k', 's', 'e' };
static const symbol s_10_232[5] = { 't', 'e', 'h', 't', 'i' };
static const symbol s_10_233[4] = { 't', 'o', 'o', 'b' };
static const symbol s_10_234[4] = { 't', 'o', 'o', 'd' };
static const symbol s_10_235[5] = { 't', 'o', 'o', 'd', 'i' };
static const symbol s_10_236[5] = { 't', 'o', 'o', 'k', 's' };
static const symbol s_10_237[7] = { 't', 'o', 'o', 'k', 's', 'i', 'd' };
static const symbol s_10_238[8] = { 't', 'o', 'o', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_239[7] = { 't', 'o', 'o', 'k', 's', 'i', 'n' };
static const symbol s_10_240[8] = { 't', 'o', 'o', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_241[5] = { 't', 'o', 'o', 'm', 'a' };
static const symbol s_10_242[7] = { 't', 'o', 'o', 'm', 'a', 't', 'a' };
static const symbol s_10_243[5] = { 't', 'o', 'o', 'm', 'e' };
static const symbol s_10_244[4] = { 't', 'o', 'o', 'n' };
static const symbol s_10_245[5] = { 't', 'o', 'o', 't', 'e' };
static const symbol s_10_246[6] = { 't', 'o', 'o', 'v', 'a', 'd' };
static const symbol s_10_247[4] = { 't', 'u', 'u', 'a' };
static const symbol s_10_248[7] = { 't', 'u', 'u', 'a', 'k', 's', 'e' };
static const symbol s_10_249[4] = { 't', 0xC3, 0xB5, 'i' };
static const symbol s_10_250[5] = { 't', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_10_251[6] = { 't', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_10_252[5] = { 't', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_10_253[6] = { 't', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_10_254[4] = { 'v', 'i', 'i', 'a' };
static const symbol s_10_255[7] = { 'v', 'i', 'i', 'a', 'k', 's', 'e' };
static const symbol s_10_256[4] = { 'v', 'i', 'i', 'b' };
static const symbol s_10_257[4] = { 'v', 'i', 'i', 'd' };
static const symbol s_10_258[5] = { 'v', 'i', 'i', 'd', 'i' };
static const symbol s_10_259[5] = { 'v', 'i', 'i', 'k', 's' };
static const symbol s_10_260[7] = { 'v', 'i', 'i', 'k', 's', 'i', 'd' };
static const symbol s_10_261[8] = { 'v', 'i', 'i', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_262[7] = { 'v', 'i', 'i', 'k', 's', 'i', 'n' };
static const symbol s_10_263[8] = { 'v', 'i', 'i', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_264[5] = { 'v', 'i', 'i', 'm', 'a' };
static const symbol s_10_265[7] = { 'v', 'i', 'i', 'm', 'a', 't', 'a' };
static const symbol s_10_266[5] = { 'v', 'i', 'i', 'm', 'e' };
static const symbol s_10_267[4] = { 'v', 'i', 'i', 'n' };
static const symbol s_10_268[7] = { 'v', 'i', 'i', 's', 'i', 'm', 'e' };
static const symbol s_10_269[6] = { 'v', 'i', 'i', 's', 'i', 'n' };
static const symbol s_10_270[7] = { 'v', 'i', 'i', 's', 'i', 't', 'e' };
static const symbol s_10_271[5] = { 'v', 'i', 'i', 't', 'e' };
static const symbol s_10_272[6] = { 'v', 'i', 'i', 'v', 'a', 'd' };
static const symbol s_10_273[5] = { 'v', 0xC3, 0xB5, 'i', 'b' };
static const symbol s_10_274[5] = { 'v', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_10_275[6] = { 'v', 0xC3, 0xB5, 'i', 'd', 'a' };
static const symbol s_10_276[9] = { 'v', 0xC3, 0xB5, 'i', 'd', 'a', 'k', 's', 'e' };
static const symbol s_10_277[6] = { 'v', 0xC3, 0xB5, 'i', 'd', 'i' };
static const symbol s_10_278[6] = { 'v', 0xC3, 0xB5, 'i', 'k', 's' };
static const symbol s_10_279[8] = { 'v', 0xC3, 0xB5, 'i', 'k', 's', 'i', 'd' };
static const symbol s_10_280[9] = { 'v', 0xC3, 0xB5, 'i', 'k', 's', 'i', 'm', 'e' };
static const symbol s_10_281[8] = { 'v', 0xC3, 0xB5, 'i', 'k', 's', 'i', 'n' };
static const symbol s_10_282[9] = { 'v', 0xC3, 0xB5, 'i', 'k', 's', 'i', 't', 'e' };
static const symbol s_10_283[6] = { 'v', 0xC3, 0xB5, 'i', 'm', 'a' };
static const symbol s_10_284[8] = { 'v', 0xC3, 0xB5, 'i', 'm', 'a', 't', 'a' };
static const symbol s_10_285[6] = { 'v', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_10_286[5] = { 'v', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_10_287[5] = { 'v', 0xC3, 0xB5, 'i', 's' };
static const symbol s_10_288[6] = { 'v', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_10_289[7] = { 'v', 0xC3, 0xB5, 'i', 'v', 'a', 'd' };

static const struct among a_10[290] =
{
/*  0 */ { 4, s_10_0, -1, 1, 0},
/*  1 */ { 4, s_10_1, -1, 1, 0},
/*  2 */ { 8, s_10_2, 1, 1, 0},
/*  3 */ { 5, s_10_3, -1, 1, 0},
/*  4 */ { 7, s_10_4, 3, 1, 0},
/*  5 */ { 5, s_10_5, -1, 1, 0},
/*  6 */ { 4, s_10_6, -1, 1, 0},
/*  7 */ { 5, s_10_7, -1, 1, 0},
/*  8 */ { 6, s_10_8, -1, 1, 0},
/*  9 */ { 4, s_10_9, -1, 1, 0},
/* 10 */ { 7, s_10_10, 9, 1, 0},
/* 11 */ { 4, s_10_11, -1, 12, 0},
/* 12 */ { 5, s_10_12, 11, 12, 0},
/* 13 */ { 6, s_10_13, 11, 12, 0},
/* 14 */ { 5, s_10_14, 11, 12, 0},
/* 15 */ { 6, s_10_15, 11, 12, 0},
/* 16 */ { 6, s_10_16, -1, 12, 0},
/* 17 */ { 6, s_10_17, -1, 12, 0},
/* 18 */ { 7, s_10_18, 17, 12, 0},
/* 19 */ { 10, s_10_19, 18, 12, 0},
/* 20 */ { 7, s_10_20, 17, 12, 0},
/* 21 */ { 7, s_10_21, -1, 12, 0},
/* 22 */ { 9, s_10_22, 21, 12, 0},
/* 23 */ { 10, s_10_23, 21, 12, 0},
/* 24 */ { 9, s_10_24, 21, 12, 0},
/* 25 */ { 10, s_10_25, 21, 12, 0},
/* 26 */ { 7, s_10_26, -1, 12, 0},
/* 27 */ { 9, s_10_27, 26, 12, 0},
/* 28 */ { 7, s_10_28, -1, 12, 0},
/* 29 */ { 6, s_10_29, -1, 12, 0},
/* 30 */ { 7, s_10_30, -1, 12, 0},
/* 31 */ { 8, s_10_31, -1, 12, 0},
/* 32 */ { 4, s_10_32, -1, 1, 0},
/* 33 */ { 5, s_10_33, 32, 1, 0},
/* 34 */ { 6, s_10_34, 32, 1, 0},
/* 35 */ { 5, s_10_35, 32, 1, 0},
/* 36 */ { 6, s_10_36, 32, 1, 0},
/* 37 */ { 4, s_10_37, -1, 4, 0},
/* 38 */ { 4, s_10_38, -1, 4, 0},
/* 39 */ { 8, s_10_39, 38, 4, 0},
/* 40 */ { 5, s_10_40, -1, 4, 0},
/* 41 */ { 7, s_10_41, 40, 4, 0},
/* 42 */ { 8, s_10_42, 40, 4, 0},
/* 43 */ { 7, s_10_43, 40, 4, 0},
/* 44 */ { 8, s_10_44, 40, 4, 0},
/* 45 */ { 5, s_10_45, -1, 4, 0},
/* 46 */ { 7, s_10_46, 45, 4, 0},
/* 47 */ { 5, s_10_47, -1, 4, 0},
/* 48 */ { 4, s_10_48, -1, 4, 0},
/* 49 */ { 4, s_10_49, -1, 4, 0},
/* 50 */ { 5, s_10_50, -1, 4, 0},
/* 51 */ { 5, s_10_51, -1, 4, 0},
/* 52 */ { 6, s_10_52, -1, 4, 0},
/* 53 */ { 5, s_10_53, -1, 8, 0},
/* 54 */ { 8, s_10_54, 53, 8, 0},
/* 55 */ { 5, s_10_55, -1, 8, 0},
/* 56 */ { 5, s_10_56, -1, 8, 0},
/* 57 */ { 6, s_10_57, 56, 8, 0},
/* 58 */ { 6, s_10_58, -1, 8, 0},
/* 59 */ { 8, s_10_59, 58, 8, 0},
/* 60 */ { 9, s_10_60, 58, 8, 0},
/* 61 */ { 8, s_10_61, 58, 8, 0},
/* 62 */ { 9, s_10_62, 58, 8, 0},
/* 63 */ { 6, s_10_63, -1, 8, 0},
/* 64 */ { 8, s_10_64, 63, 8, 0},
/* 65 */ { 6, s_10_65, -1, 8, 0},
/* 66 */ { 5, s_10_66, -1, 8, 0},
/* 67 */ { 5, s_10_67, -1, 8, 0},
/* 68 */ { 6, s_10_68, -1, 8, 0},
/* 69 */ { 7, s_10_69, -1, 8, 0},
/* 70 */ { 4, s_10_70, -1, 16, 0},
/* 71 */ { 4, s_10_71, -1, 16, 0},
/* 72 */ { 5, s_10_72, -1, 16, 0},
/* 73 */ { 7, s_10_73, 72, 16, 0},
/* 74 */ { 8, s_10_74, 72, 16, 0},
/* 75 */ { 7, s_10_75, 72, 16, 0},
/* 76 */ { 8, s_10_76, 72, 16, 0},
/* 77 */ { 5, s_10_77, -1, 16, 0},
/* 78 */ { 4, s_10_78, -1, 16, 0},
/* 79 */ { 5, s_10_79, -1, 16, 0},
/* 80 */ { 6, s_10_80, -1, 16, 0},
/* 81 */ { 4, s_10_81, -1, 14, 0},
/* 82 */ { 4, s_10_82, -1, 14, 0},
/* 83 */ { 5, s_10_83, -1, 14, 0},
/* 84 */ { 7, s_10_84, 83, 14, 0},
/* 85 */ { 8, s_10_85, 83, 14, 0},
/* 86 */ { 7, s_10_86, 83, 14, 0},
/* 87 */ { 8, s_10_87, 83, 14, 0},
/* 88 */ { 5, s_10_88, -1, 14, 0},
/* 89 */ { 4, s_10_89, -1, 14, 0},
/* 90 */ { 5, s_10_90, -1, 14, 0},
/* 91 */ { 6, s_10_91, -1, 14, 0},
/* 92 */ { 4, s_10_92, -1, 7, 0},
/* 93 */ { 4, s_10_93, -1, 7, 0},
/* 94 */ { 5, s_10_94, 93, 7, 0},
/* 95 */ { 5, s_10_95, -1, 7, 0},
/* 96 */ { 7, s_10_96, 95, 7, 0},
/* 97 */ { 8, s_10_97, 95, 7, 0},
/* 98 */ { 7, s_10_98, 95, 7, 0},
/* 99 */ { 8, s_10_99, 95, 7, 0},
/*100 */ { 5, s_10_100, -1, 7, 0},
/*101 */ { 7, s_10_101, 100, 7, 0},
/*102 */ { 5, s_10_102, -1, 7, 0},
/*103 */ { 4, s_10_103, -1, 7, 0},
/*104 */ { 5, s_10_104, -1, 7, 0},
/*105 */ { 6, s_10_105, -1, 7, 0},
/*106 */ { 4, s_10_106, -1, 7, 0},
/*107 */ { 7, s_10_107, 106, 7, 0},
/*108 */ { 4, s_10_108, -1, 6, 0},
/*109 */ { 5, s_10_109, 108, 6, 0},
/*110 */ { 6, s_10_110, 108, 6, 0},
/*111 */ { 5, s_10_111, 108, 6, 0},
/*112 */ { 6, s_10_112, 108, 6, 0},
/*113 */ { 6, s_10_113, -1, 5, 0},
/*114 */ { 6, s_10_114, -1, 5, 0},
/*115 */ { 10, s_10_115, 114, 5, 0},
/*116 */ { 7, s_10_116, 114, 5, 0},
/*117 */ { 7, s_10_117, -1, 5, 0},
/*118 */ { 9, s_10_118, 117, 5, 0},
/*119 */ { 10, s_10_119, 117, 5, 0},
/*120 */ { 9, s_10_120, 117, 5, 0},
/*121 */ { 10, s_10_121, 117, 5, 0},
/*122 */ { 7, s_10_122, -1, 5, 0},
/*123 */ { 9, s_10_123, 122, 5, 0},
/*124 */ { 7, s_10_124, -1, 5, 0},
/*125 */ { 6, s_10_125, -1, 5, 0},
/*126 */ { 7, s_10_126, -1, 5, 0},
/*127 */ { 8, s_10_127, -1, 5, 0},
/*128 */ { 6, s_10_128, -1, 5, 0},
/*129 */ { 9, s_10_129, 128, 5, 0},
/*130 */ { 6, s_10_130, -1, 13, 0},
/*131 */ { 9, s_10_131, 130, 13, 0},
/*132 */ { 6, s_10_132, -1, 13, 0},
/*133 */ { 6, s_10_133, -1, 13, 0},
/*134 */ { 7, s_10_134, 133, 13, 0},
/*135 */ { 7, s_10_135, -1, 13, 0},
/*136 */ { 9, s_10_136, 135, 13, 0},
/*137 */ { 10, s_10_137, 135, 13, 0},
/*138 */ { 9, s_10_138, 135, 13, 0},
/*139 */ { 10, s_10_139, 135, 13, 0},
/*140 */ { 7, s_10_140, -1, 13, 0},
/*141 */ { 9, s_10_141, 140, 13, 0},
/*142 */ { 7, s_10_142, -1, 13, 0},
/*143 */ { 6, s_10_143, -1, 13, 0},
/*144 */ { 6, s_10_144, -1, 13, 0},
/*145 */ { 7, s_10_145, -1, 13, 0},
/*146 */ { 8, s_10_146, -1, 13, 0},
/*147 */ { 5, s_10_147, -1, 18, 0},
/*148 */ { 5, s_10_148, -1, 18, 0},
/*149 */ { 6, s_10_149, -1, 18, 0},
/*150 */ { 8, s_10_150, 149, 18, 0},
/*151 */ { 9, s_10_151, 149, 18, 0},
/*152 */ { 8, s_10_152, 149, 18, 0},
/*153 */ { 9, s_10_153, 149, 18, 0},
/*154 */ { 6, s_10_154, -1, 18, 0},
/*155 */ { 5, s_10_155, -1, 18, 0},
/*156 */ { 6, s_10_156, -1, 18, 0},
/*157 */ { 7, s_10_157, -1, 18, 0},
/*158 */ { 7, s_10_158, -1, 18, 0},
/*159 */ { 9, s_10_159, 158, 18, 0},
/*160 */ { 5, s_10_160, -1, 18, 0},
/*161 */ { 8, s_10_161, 160, 18, 0},
/*162 */ { 6, s_10_162, -1, 18, 0},
/*163 */ { 5, s_10_163, -1, 15, 0},
/*164 */ { 5, s_10_164, -1, 15, 0},
/*165 */ { 6, s_10_165, -1, 15, 0},
/*166 */ { 8, s_10_166, 165, 15, 0},
/*167 */ { 9, s_10_167, 165, 15, 0},
/*168 */ { 8, s_10_168, 165, 15, 0},
/*169 */ { 9, s_10_169, 165, 15, 0},
/*170 */ { 6, s_10_170, -1, 15, 0},
/*171 */ { 5, s_10_171, -1, 15, 0},
/*172 */ { 6, s_10_172, -1, 15, 0},
/*173 */ { 7, s_10_173, -1, 15, 0},
/*174 */ { 4, s_10_174, -1, 2, 0},
/*175 */ { 4, s_10_175, -1, 2, 0},
/*176 */ { 5, s_10_176, 175, 2, 0},
/*177 */ { 8, s_10_177, 176, 2, 0},
/*178 */ { 5, s_10_178, 175, 2, 0},
/*179 */ { 5, s_10_179, -1, 2, 0},
/*180 */ { 7, s_10_180, 179, 2, 0},
/*181 */ { 8, s_10_181, 179, 2, 0},
/*182 */ { 7, s_10_182, 179, 2, 0},
/*183 */ { 8, s_10_183, 179, 2, 0},
/*184 */ { 5, s_10_184, -1, 2, 0},
/*185 */ { 7, s_10_185, 184, 2, 0},
/*186 */ { 5, s_10_186, -1, 2, 0},
/*187 */ { 4, s_10_187, -1, 2, 0},
/*188 */ { 5, s_10_188, -1, 2, 0},
/*189 */ { 6, s_10_189, -1, 2, 0},
/*190 */ { 3, s_10_190, -1, 2, 0},
/*191 */ { 4, s_10_191, 190, 2, 0},
/*192 */ { 5, s_10_192, 190, 2, 0},
/*193 */ { 4, s_10_193, 190, 2, 0},
/*194 */ { 5, s_10_194, 190, 2, 0},
/*195 */ { 4, s_10_195, -1, 9, 0},
/*196 */ { 5, s_10_196, 195, 9, 0},
/*197 */ { 6, s_10_197, 195, 9, 0},
/*198 */ { 5, s_10_198, 195, 9, 0},
/*199 */ { 6, s_10_199, 195, 9, 0},
/*200 */ { 6, s_10_200, -1, 9, 0},
/*201 */ { 6, s_10_201, -1, 9, 0},
/*202 */ { 10, s_10_202, 201, 9, 0},
/*203 */ { 7, s_10_203, 201, 9, 0},
/*204 */ { 7, s_10_204, -1, 9, 0},
/*205 */ { 9, s_10_205, 204, 9, 0},
/*206 */ { 10, s_10_206, 204, 9, 0},
/*207 */ { 9, s_10_207, 204, 9, 0},
/*208 */ { 10, s_10_208, 204, 9, 0},
/*209 */ { 7, s_10_209, -1, 9, 0},
/*210 */ { 9, s_10_210, 209, 9, 0},
/*211 */ { 7, s_10_211, -1, 9, 0},
/*212 */ { 6, s_10_212, -1, 9, 0},
/*213 */ { 7, s_10_213, -1, 9, 0},
/*214 */ { 8, s_10_214, -1, 9, 0},
/*215 */ { 6, s_10_215, -1, 9, 0},
/*216 */ { 9, s_10_216, 215, 9, 0},
/*217 */ { 4, s_10_217, -1, 17, 0},
/*218 */ { 4, s_10_218, -1, 17, 0},
/*219 */ { 5, s_10_219, -1, 17, 0},
/*220 */ { 7, s_10_220, 219, 17, 0},
/*221 */ { 8, s_10_221, 219, 17, 0},
/*222 */ { 7, s_10_222, 219, 17, 0},
/*223 */ { 8, s_10_223, 219, 17, 0},
/*224 */ { 5, s_10_224, -1, 17, 0},
/*225 */ { 4, s_10_225, -1, 17, 0},
/*226 */ { 5, s_10_226, -1, 17, 0},
/*227 */ { 6, s_10_227, -1, 17, 0},
/*228 */ { 6, s_10_228, -1, 17, 0},
/*229 */ { 8, s_10_229, 228, 17, 0},
/*230 */ { 4, s_10_230, -1, 17, 0},
/*231 */ { 7, s_10_231, 230, 17, 0},
/*232 */ { 5, s_10_232, -1, 17, 0},
/*233 */ { 4, s_10_233, -1, 10, 0},
/*234 */ { 4, s_10_234, -1, 10, 0},
/*235 */ { 5, s_10_235, 234, 10, 0},
/*236 */ { 5, s_10_236, -1, 10, 0},
/*237 */ { 7, s_10_237, 236, 10, 0},
/*238 */ { 8, s_10_238, 236, 10, 0},
/*239 */ { 7, s_10_239, 236, 10, 0},
/*240 */ { 8, s_10_240, 236, 10, 0},
/*241 */ { 5, s_10_241, -1, 10, 0},
/*242 */ { 7, s_10_242, 241, 10, 0},
/*243 */ { 5, s_10_243, -1, 10, 0},
/*244 */ { 4, s_10_244, -1, 10, 0},
/*245 */ { 5, s_10_245, -1, 10, 0},
/*246 */ { 6, s_10_246, -1, 10, 0},
/*247 */ { 4, s_10_247, -1, 10, 0},
/*248 */ { 7, s_10_248, 247, 10, 0},
/*249 */ { 4, s_10_249, -1, 10, 0},
/*250 */ { 5, s_10_250, 249, 10, 0},
/*251 */ { 6, s_10_251, 249, 10, 0},
/*252 */ { 5, s_10_252, 249, 10, 0},
/*253 */ { 6, s_10_253, 249, 10, 0},
/*254 */ { 4, s_10_254, -1, 3, 0},
/*255 */ { 7, s_10_255, 254, 3, 0},
/*256 */ { 4, s_10_256, -1, 3, 0},
/*257 */ { 4, s_10_257, -1, 3, 0},
/*258 */ { 5, s_10_258, 257, 3, 0},
/*259 */ { 5, s_10_259, -1, 3, 0},
/*260 */ { 7, s_10_260, 259, 3, 0},
/*261 */ { 8, s_10_261, 259, 3, 0},
/*262 */ { 7, s_10_262, 259, 3, 0},
/*263 */ { 8, s_10_263, 259, 3, 0},
/*264 */ { 5, s_10_264, -1, 3, 0},
/*265 */ { 7, s_10_265, 264, 3, 0},
/*266 */ { 5, s_10_266, -1, 3, 0},
/*267 */ { 4, s_10_267, -1, 3, 0},
/*268 */ { 7, s_10_268, -1, 3, 0},
/*269 */ { 6, s_10_269, -1, 3, 0},
/*270 */ { 7, s_10_270, -1, 3, 0},
/*271 */ { 5, s_10_271, -1, 3, 0},
/*272 */ { 6, s_10_272, -1, 3, 0},
/*273 */ { 5, s_10_273, -1, 11, 0},
/*274 */ { 5, s_10_274, -1, 11, 0},
/*275 */ { 6, s_10_275, 274, 11, 0},
/*276 */ { 9, s_10_276, 275, 11, 0},
/*277 */ { 6, s_10_277, 274, 11, 0},
/*278 */ { 6, s_10_278, -1, 11, 0},
/*279 */ { 8, s_10_279, 278, 11, 0},
/*280 */ { 9, s_10_280, 278, 11, 0},
/*281 */ { 8, s_10_281, 278, 11, 0},
/*282 */ { 9, s_10_282, 278, 11, 0},
/*283 */ { 6, s_10_283, -1, 11, 0},
/*284 */ { 8, s_10_284, 283, 11, 0},
/*285 */ { 6, s_10_285, -1, 11, 0},
/*286 */ { 5, s_10_286, -1, 11, 0},
/*287 */ { 5, s_10_287, -1, 11, 0},
/*288 */ { 6, s_10_288, -1, 11, 0},
/*289 */ { 7, s_10_289, -1, 11, 0}
};

static const unsigned char g_V1[] = { 17, 65, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 48, 8 };

static const unsigned char g_RV[] = { 17, 65, 16 };

static const unsigned char g_KI[] = { 117, 66, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 16 };

static const unsigned char g_GI[] = { 21, 123, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 48, 8 };

static const symbol s_0[] = { 0xC3, 0xA4, 'r' };
static const symbol s_1[] = { 'k' };
static const symbol s_2[] = { 'a' };
static const symbol s_3[] = { 'l', 'a', 's', 'e' };
static const symbol s_4[] = { 'm', 'i', 's', 'e' };
static const symbol s_5[] = { 'l', 'i', 's', 'e' };
static const symbol s_6[] = { 'i', 'k', 'u' };
static const symbol s_7[] = { 'm', 'i', 's' };
static const symbol s_8[] = { 'e' };
static const symbol s_9[] = { 'l', 'a', 's' };
static const symbol s_10[] = { 'e' };
static const symbol s_11[] = { 'l', 'i', 's' };
static const symbol s_12[] = { 'e' };
static const symbol s_13[] = { 't' };
static const symbol s_14[] = { 'j', 'o', 'o' };
static const symbol s_15[] = { 's', 'a', 'a' };
static const symbol s_16[] = { 'v', 'i', 'i', 'm', 'a' };
static const symbol s_17[] = { 'k', 'e', 'e', 's', 'i' };
static const symbol s_18[] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_19[] = { 'l', 0xC3, 0xB6, 'i' };
static const symbol s_20[] = { 'l', 'o', 'o' };
static const symbol s_21[] = { 'k', 0xC3, 0xA4, 'i', 's', 'i' };
static const symbol s_22[] = { 's', 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_23[] = { 't', 'o', 'o' };
static const symbol s_24[] = { 'v', 0xC3, 0xB5, 'i', 's', 'i' };
static const symbol s_25[] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'm', 'a' };
static const symbol s_26[] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 's', 'i' };
static const symbol s_27[] = { 'l', 'u', 'g', 'e' };
static const symbol s_28[] = { 'p', 0xC3, 0xB5, 'd', 'e' };
static const symbol s_29[] = { 'l', 'a', 'd', 'u' };
static const symbol s_30[] = { 't', 'e', 'g', 'i' };
static const symbol s_31[] = { 'n', 0xC3, 0xA4, 'g', 'i' };

static int r_mark_regions(struct SN_env * z) { /* forwardmode */
    z->I[0] = z->l; /* $p1 = <integer expression>, line 42 */
    if (out_grouping_U(z, g_V1, 97, 252, 1) < 0) return 0; /* goto */ /* grouping V1, line 44 */
    {    /* gopast */ /* non V1, line 44 */
        int ret = in_grouping_U(z, g_V1, 97, 252, 1);
        if (ret < 0) return 0;
        z->c += ret;
    }
    z->I[0] = z->c; /* setmark p1, line 44 */
    return 1;
}

static int r_emphasis(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 51 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 51 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] != 105) { z->lb = mlimit1; return 0; } /* substring, line 51 */
        among_var = find_among_b(z, a_0, 2);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 51 */
        z->lb = mlimit1;
    }
    {   int m_test2 = z->l - z->c; /* test, line 52 */
        {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 4); /* hop, line 52 */
            if (ret < 0) return 0;
            z->c = ret;
        }
        z->c = z->l - m_test2;
    }
    switch (among_var) { /* among, line 53 */
        case 1:
            {   int m3 = z->l - z->c; (void)m3; /* and, line 54 */
                if (in_grouping_b_U(z, g_GI, 97, 252, 0)) return 0; /* grouping GI, line 54 */
                z->c = z->l - m3;
                {   int m4 = z->l - z->c; (void)m4; /* not, line 54 */
                    {   int ret = r_LONGV(z); /* call LONGV, line 54 */
                        if (ret == 0) goto lab0;
                        if (ret < 0) return ret;
                    }
                    return 0;
                lab0:
                    z->c = z->l - m4;
                }
            }
            {   int ret = slice_del(z); /* delete, line 54 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m5 = z->l - z->c; (void)m5; /* or, line 55 */
                if (!(eq_s_b(z, 3, s_0))) goto lab2; /* literal, line 55 */
                {   int ret = slice_from_s(z, 1, s_1); /* <-, line 55 */
                    if (ret < 0) return ret;
                }
                goto lab1;
            lab2:
                z->c = z->l - m5;
                if (in_grouping_b_U(z, g_KI, 98, 382, 0)) return 0; /* grouping KI, line 55 */
                {   int ret = slice_del(z); /* delete, line 55 */
                    if (ret < 0) return ret;
                }
            }
        lab1:
            break;
    }
    return 1;
}

static int r_verb(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 61 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 61 */
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((540726 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 61 */
        among_var = find_among_b(z, a_1, 21);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 61 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 62 */
        case 1:
            {   int ret = slice_del(z); /* delete, line 63 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 1, s_2); /* <-, line 68 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            if (in_grouping_b_U(z, g_V1, 97, 252, 0)) return 0; /* grouping V1, line 72 */
            {   int ret = slice_del(z); /* delete, line 72 */
                if (ret < 0) return ret;
            }
            break;
    }
    z->B[0] = 1; /* set is_verb, line 77 */
    return 1;
}

static int r_LONGV(struct SN_env * z) { /* backwardmode */
    if (!(find_among_b(z, a_2, 9))) return 0; /* among, line 81 */
    return 1;
}

static int r_i_plural(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 84 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 84 */
        if (z->c <= z->lb || z->p[z->c - 1] != 105) { z->lb = mlimit1; return 0; } /* substring, line 84 */
        if (!(find_among_b(z, a_3, 1))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 84 */
        z->lb = mlimit1;
    }
    if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 86 */
    {   int ret = slice_del(z); /* delete, line 88 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_special_noun_endings(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 92 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 92 */
        if (z->c - 3 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1049120 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 92 */
        among_var = find_among_b(z, a_4, 12);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 92 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 93 */
        case 1:
            {   int ret = slice_from_s(z, 4, s_3); /* <-, line 94 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 4, s_4); /* <-, line 98 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 4, s_5); /* <-, line 102 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_case_ending(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 110 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 110 */
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1576994 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 110 */
        if (!(find_among_b(z, a_5, 10))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 110 */
        z->lb = mlimit1;
    }
    {   int m2 = z->l - z->c; (void)m2; /* or, line 112 */
        if (in_grouping_b_U(z, g_RV, 97, 117, 0)) goto lab1; /* grouping RV, line 112 */
        goto lab0;
    lab1:
        z->c = z->l - m2;
        {   int ret = r_LONGV(z); /* call LONGV, line 112 */
            if (ret <= 0) return ret;
        }
    }
lab0:
    {   int ret = slice_del(z); /* delete, line 123 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_plural_three_first_cases(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 128 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 128 */
        if (z->c <= z->lb || (z->p[z->c - 1] != 100 && z->p[z->c - 1] != 101)) { z->lb = mlimit1; return 0; } /* substring, line 128 */
        among_var = find_among_b(z, a_6, 7);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 128 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 129 */
        case 1:
            {   int ret = slice_from_s(z, 3, s_6); /* <-, line 130 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m2 = z->l - z->c; (void)m2; /* not, line 133 */
                {   int ret = r_LONGV(z); /* call LONGV, line 133 */
                    if (ret == 0) goto lab0;
                    if (ret < 0) return ret;
                }
                return 0;
            lab0:
                z->c = z->l - m2;
            }
            {   int ret = slice_del(z); /* delete, line 133 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int m3 = z->l - z->c; (void)m3; /* or, line 134 */
                {   int m_test4 = z->l - z->c; /* test, line 134 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 4); /* hop, line 134 */
                        if (ret < 0) goto lab2;
                        z->c = ret;
                    }
                    z->c = z->l - m_test4;
                }
                {   int m5 = z->l - z->c; (void)m5; /* or, line 134 */
                    if (!(eq_s_b(z, 3, s_7))) goto lab4; /* literal, line 134 */
                    {   int ret = slice_from_s(z, 1, s_8); /* <-, line 134 */
                        if (ret < 0) return ret;
                    }
                    goto lab3;
                lab4:
                    z->c = z->l - m5;
                    if (!(eq_s_b(z, 3, s_9))) goto lab5; /* literal, line 134 */
                    {   int ret = slice_from_s(z, 1, s_10); /* <-, line 134 */
                        if (ret < 0) return ret;
                    }
                    goto lab3;
                lab5:
                    z->c = z->l - m5;
                    if (!(eq_s_b(z, 3, s_11))) goto lab6; /* literal, line 134 */
                    {   int ret = slice_from_s(z, 1, s_12); /* <-, line 134 */
                        if (ret < 0) return ret;
                    }
                    goto lab3;
                lab6:
                    z->c = z->l - m5;
                    {   int m6 = z->l - z->c; (void)m6; /* not, line 134 */
                        if (z->c <= z->lb || z->p[z->c - 1] != 't') goto lab7; /* literal, line 134 */
                        z->c--;
                        goto lab2;
                    lab7:
                        z->c = z->l - m6;
                    }
                    {   int ret = slice_del(z); /* delete, line 134 */
                        if (ret < 0) return ret;
                    }
                }
            lab3:
                goto lab1;
            lab2:
                z->c = z->l - m3;
                {   int m7 = z->l - z->c; (void)m7; /* not, line 134 */
                    if (z->c <= z->lb || z->p[z->c - 1] != 't') goto lab8; /* literal, line 134 */
                    z->c--;
                    return 0;
                lab8:
                    z->c = z->l - m7;
                }
                {   int ret = slice_from_s(z, 1, s_13); /* <-, line 134 */
                    if (ret < 0) return ret;
                }
            }
        lab1:
            break;
        case 4:
            {   int m8 = z->l - z->c; (void)m8; /* or, line 135 */
                if (in_grouping_b_U(z, g_RV, 97, 117, 0)) goto lab10; /* grouping RV, line 135 */
                goto lab9;
            lab10:
                z->c = z->l - m8;
                {   int ret = r_LONGV(z); /* call LONGV, line 135 */
                    if (ret <= 0) return ret;
                }
            }
        lab9:
            {   int ret = slice_del(z); /* delete, line 135 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_double(struct SN_env * z) { /* backwardmode */
    {   int m_test1 = z->l - z->c; /* test, line 141 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1116160 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0; /* among, line 141 */
        if (!(find_among_b(z, a_7, 3))) return 0;
        z->c = z->l - m_test1;
    }
    return 1;
}

static int r_undouble(struct SN_env * z) { /* backwardmode */
    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
        if (ret < 0) return 0;
        z->c = ret; /* next, line 145 */
    }
    z->ket = z->c; /* [, line 145 */
    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 1); /* hop, line 145 */
        if (ret < 0) return 0;
        z->c = ret;
    }
    z->bra = z->c; /* ], line 145 */
    {   int ret = slice_del(z); /* delete, line 145 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_nu(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 149 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 149 */
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 97 && z->p[z->c - 1] != 117)) { z->lb = mlimit1; return 0; } /* substring, line 149 */
        if (!(find_among_b(z, a_8, 4))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 149 */
        z->lb = mlimit1;
    }
    {   int ret = slice_del(z); /* delete, line 156 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_remove_double_kpt(struct SN_env * z) { /* backwardmode */
    if (in_grouping_b_U(z, g_V1, 97, 252, 0)) return 0; /* grouping V1, line 160 */
    {   int m1 = z->l - z->c; (void)m1; /* and, line 161 */
        {   int ret = r_double(z); /* call double, line 160 */
            if (ret <= 0) return ret;
        }
        z->c = z->l - m1;
        {   int ret = r_undouble(z); /* call undouble, line 161 */
            if (ret <= 0) return ret;
        }
    }
    return 1;
}

static int r_degrees(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 165 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 165 */
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((8706 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 165 */
        among_var = find_among_b(z, a_9, 3);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 165 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 166 */
        case 1:
            if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 167 */
            {   int ret = slice_del(z); /* delete, line 167 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_del(z); /* delete, line 168 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_substantive(struct SN_env * z) { /* backwardmode */
    {   int m1 = z->l - z->c; (void)m1; /* do, line 174 */
        {   int ret = r_special_noun_endings(z); /* call special_noun_endings, line 174 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    {   int m2 = z->l - z->c; (void)m2; /* do, line 175 */
        {   int ret = r_case_ending(z); /* call case_ending, line 175 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    {   int m3 = z->l - z->c; (void)m3; /* do, line 176 */
        {   int ret = r_plural_three_first_cases(z); /* call plural_three_first_cases, line 176 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* do, line 177 */
        {   int ret = r_degrees(z); /* call degrees, line 177 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m4;
    }
    {   int m5 = z->l - z->c; (void)m5; /* do, line 178 */
        {   int ret = r_i_plural(z); /* call i_plural, line 178 */
            if (ret == 0) goto lab4;
            if (ret < 0) return ret;
        }
    lab4:
        z->c = z->l - m5;
    }
    {   int m6 = z->l - z->c; (void)m6; /* do, line 179 */
        {   int ret = r_nu(z); /* call nu, line 179 */
            if (ret == 0) goto lab5;
            if (ret < 0) return ret;
        }
    lab5:
        z->c = z->l - m6;
    }
    return 1;
}

static int r_verb_exceptions(struct SN_env * z) { /* forwardmode */
    int among_var;
    z->bra = z->c; /* [, line 185 */
    among_var = find_among(z, a_10, 290); /* substring, line 185 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 185 */
    if (z->c < z->l) return 0; /* atlimit, line 185 */
    switch (among_var) { /* among, line 186 */
        case 1:
            {   int ret = slice_from_s(z, 3, s_14); /* <-, line 187 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 3, s_15); /* <-, line 191 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 5, s_16); /* <-, line 195 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 5, s_17); /* <-, line 199 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 5, s_18); /* <-, line 202 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 4, s_19); /* <-, line 205 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 3, s_20); /* <-, line 206 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 6, s_21); /* <-, line 209 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 5, s_22); /* <-, line 212 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 3, s_23); /* <-, line 216 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 6, s_24); /* <-, line 220 */
                if (ret < 0) return ret;
            }
            break;
        case 12:
            {   int ret = slice_from_s(z, 7, s_25); /* <-, line 223 */
                if (ret < 0) return ret;
            }
            break;
        case 13:
            {   int ret = slice_from_s(z, 7, s_26); /* <-, line 227 */
                if (ret < 0) return ret;
            }
            break;
        case 14:
            {   int ret = slice_from_s(z, 4, s_27); /* <-, line 230 */
                if (ret < 0) return ret;
            }
            break;
        case 15:
            {   int ret = slice_from_s(z, 5, s_28); /* <-, line 232 */
                if (ret < 0) return ret;
            }
            break;
        case 16:
            {   int ret = slice_from_s(z, 4, s_29); /* <-, line 234 */
                if (ret < 0) return ret;
            }
            break;
        case 17:
            {   int ret = slice_from_s(z, 4, s_30); /* <-, line 236 */
                if (ret < 0) return ret;
            }
            break;
        case 18:
            {   int ret = slice_from_s(z, 5, s_31); /* <-, line 239 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int H_stem(struct SN_env * z) { /* forwardmode */
    {   int c1 = z->c; /* do, line 248 */
        {   int ret = r_mark_regions(z); /* call mark_regions, line 248 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    {   int c2 = z->c; /* not, line 249 */
        {   int ret = r_verb_exceptions(z); /* call verb_exceptions, line 249 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
        return 0;
    lab1:
        z->c = c2;
    }
    z->B[0] = 0; /* unset is_verb, line 250 */
    z->lb = z->c; z->c = z->l; /* backwards, line 251 */

    {   int m3 = z->l - z->c; (void)m3; /* do, line 252 */
        {   int ret = r_emphasis(z); /* call emphasis, line 252 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* do, line 253 */
        {   int ret = r_verb(z); /* call verb, line 253 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m4;
    }
    {   int m5 = z->l - z->c; (void)m5; /* try, line 254 */
        /* not, line 254 */
        if (!(z->B[0])) goto lab5; /* Boolean test is_verb, line 254 */
        { z->c = z->l - m5; goto lab4; }
    lab5:
        /* do, line 254 */
        {   int ret = r_substantive(z); /* call substantive, line 254 */
            if (ret == 0) goto lab6;
            if (ret < 0) return ret;
        }
    lab6:
    lab4:
        ;
    }
    {   int m6 = z->l - z->c; (void)m6; /* do, line 255 */
        {   int ret = r_remove_double_kpt(z); /* call remove_double_kpt, line 255 */
            if (ret == 0) goto lab7;
            if (ret < 0) return ret;
        }
    lab7:
        z->c = z->l - m6;
    }
    z->c = z->lb;
    return 1;
}

extern struct SN_env * H_create_env(void) { return SN_create_env(0, 1, 1); }

extern void H_close_env(struct SN_env * z) { SN_close_env(z, 0); }

