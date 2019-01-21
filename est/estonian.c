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
static const symbol s_3_1[1] = { 'b' };
static const symbol s_3_2[3] = { 'v', 'a', 'd' };
static const symbol s_3_3[4] = { 'k', 's', 'i', 'd' };
static const symbol s_3_4[2] = { 'm', 'e' };
static const symbol s_3_5[3] = { 'i', 'm', 'e' };
static const symbol s_3_6[4] = { 's', 'i', 'm', 'e' };
static const symbol s_3_7[5] = { 'k', 's', 'i', 'm', 'e' };
static const symbol s_3_8[4] = { 'a', 'k', 's', 'e' };
static const symbol s_3_9[5] = { 'd', 'a', 'k', 's', 'e' };
static const symbol s_3_10[5] = { 't', 'a', 'k', 's', 'e' };
static const symbol s_3_11[3] = { 'i', 't', 'e' };
static const symbol s_3_12[4] = { 's', 'i', 't', 'e' };
static const symbol s_3_13[5] = { 'k', 's', 'i', 't', 'e' };
static const symbol s_3_14[1] = { 'n' };
static const symbol s_3_15[2] = { 'i', 'n' };
static const symbol s_3_16[3] = { 's', 'i', 'n' };
static const symbol s_3_17[4] = { 'k', 's', 'i', 'n' };
static const symbol s_3_18[2] = { 'i', 's' };
static const symbol s_3_19[4] = { 'd', 'a', 'k', 's' };
static const symbol s_3_20[4] = { 't', 'a', 'k', 's' };
static const symbol s_3_21[3] = { 'v', 'a', 't' };

static const struct among a_3[22] =
{
/*  0 */ { 2, s_3_0, -1, 1, 0},
/*  1 */ { 1, s_3_1, -1, 1, 0},
/*  2 */ { 3, s_3_2, -1, 1, 0},
/*  3 */ { 4, s_3_3, -1, 1, 0},
/*  4 */ { 2, s_3_4, -1, 1, 0},
/*  5 */ { 3, s_3_5, 4, 1, 0},
/*  6 */ { 4, s_3_6, 5, 1, 0},
/*  7 */ { 5, s_3_7, 6, 1, 0},
/*  8 */ { 4, s_3_8, -1, 1, 0},
/*  9 */ { 5, s_3_9, 8, 1, 0},
/* 10 */ { 5, s_3_10, 8, 1, 0},
/* 11 */ { 3, s_3_11, -1, 1, 0},
/* 12 */ { 4, s_3_12, 11, 1, 0},
/* 13 */ { 5, s_3_13, 12, 1, 0},
/* 14 */ { 1, s_3_14, -1, 1, 0},
/* 15 */ { 2, s_3_15, 14, 1, 0},
/* 16 */ { 3, s_3_16, 15, 1, 0},
/* 17 */ { 4, s_3_17, 16, 1, 0},
/* 18 */ { 2, s_3_18, -1, 1, 0},
/* 19 */ { 4, s_3_19, -1, 1, 0},
/* 20 */ { 4, s_3_20, -1, 1, 0},
/* 21 */ { 3, s_3_21, -1, 1, 0}
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
static const symbol s_6_2[2] = { 'l', 'e' };
static const symbol s_6_3[3] = { 's', 's', 'e' };
static const symbol s_6_4[1] = { 'l' };
static const symbol s_6_5[1] = { 's' };
static const symbol s_6_6[2] = { 'k', 's' };
static const symbol s_6_7[1] = { 't' };
static const symbol s_6_8[2] = { 'l', 't' };
static const symbol s_6_9[2] = { 's', 't' };

static const struct among a_6[10] =
{
/*  0 */ { 2, s_6_0, -1, 1, 0},
/*  1 */ { 2, s_6_1, -1, 1, 0},
/*  2 */ { 2, s_6_2, -1, 1, 0},
/*  3 */ { 3, s_6_3, -1, 1, 0},
/*  4 */ { 1, s_6_4, -1, 1, 0},
/*  5 */ { 1, s_6_5, -1, 1, 0},
/*  6 */ { 2, s_6_6, 5, 1, 0},
/*  7 */ { 1, s_6_7, -1, 1, 0},
/*  8 */ { 2, s_6_8, 7, 1, 0},
/*  9 */ { 2, s_6_9, 7, 1, 0}
};

static const symbol s_7_0[1] = { 'd' };
static const symbol s_7_1[3] = { 's', 'i', 'd' };
static const symbol s_7_2[2] = { 'd', 'e' };
static const symbol s_7_3[6] = { 'i', 'k', 'k', 'u', 'd', 'e' };
static const symbol s_7_4[3] = { 'i', 'k', 'e' };
static const symbol s_7_5[4] = { 'i', 'k', 'k', 'e' };
static const symbol s_7_6[2] = { 't', 'e' };

static const struct among a_7[7] =
{
/*  0 */ { 1, s_7_0, -1, 5, 0},
/*  1 */ { 3, s_7_1, 0, 2, 0},
/*  2 */ { 2, s_7_2, -1, 4, 0},
/*  3 */ { 6, s_7_3, 2, 1, 0},
/*  4 */ { 3, s_7_4, -1, 1, 0},
/*  5 */ { 4, s_7_5, -1, 1, 0},
/*  6 */ { 2, s_7_6, -1, 3, 0}
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
static const symbol s_9_1[2] = { 't', 'u' };

static const struct among a_9[2] =
{
/*  0 */ { 2, s_9_0, -1, -1, 0},
/*  1 */ { 2, s_9_1, -1, -1, 0}
};

static const symbol s_10_0[2] = { 'm', 'a' };
static const symbol s_10_1[3] = { 'm', 'a', 'i' };

static const struct among a_10[2] =
{
/*  0 */ { 2, s_10_0, -1, -1, 0},
/*  1 */ { 3, s_10_1, -1, 1, 0}
};

static const symbol s_11_0[4] = { 'j', 'o', 'o', 'b' };
static const symbol s_11_1[4] = { 'j', 'o', 'o', 'd' };
static const symbol s_11_2[8] = { 'j', 'o', 'o', 'd', 'a', 'k', 's', 'e' };
static const symbol s_11_3[5] = { 'j', 'o', 'o', 'm', 'a' };
static const symbol s_11_4[5] = { 'j', 'o', 'o', 'm', 'e' };
static const symbol s_11_5[4] = { 'j', 'o', 'o', 'n' };
static const symbol s_11_6[5] = { 'j', 'o', 'o', 't', 'e' };
static const symbol s_11_7[6] = { 'j', 'o', 'o', 'v', 'a', 'd' };
static const symbol s_11_8[4] = { 'j', 'u', 'u', 'a' };
static const symbol s_11_9[7] = { 'j', 'u', 'u', 'a', 'k', 's', 'e' };
static const symbol s_11_10[4] = { 'j', 0xC3, 0xB5, 'i' };
static const symbol s_11_11[5] = { 'j', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_11_12[6] = { 'j', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_11_13[5] = { 'j', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_11_14[6] = { 'j', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_11_15[4] = { 'k', 'e', 'e', 'b' };
static const symbol s_11_16[4] = { 'k', 'e', 'e', 'd' };
static const symbol s_11_17[8] = { 'k', 'e', 'e', 'd', 'a', 'k', 's', 'e' };
static const symbol s_11_18[5] = { 'k', 'e', 'e', 'm', 'a' };
static const symbol s_11_19[5] = { 'k', 'e', 'e', 'm', 'e' };
static const symbol s_11_20[4] = { 'k', 'e', 'e', 'n' };
static const symbol s_11_21[5] = { 'k', 'e', 'e', 't', 'a' };
static const symbol s_11_22[5] = { 'k', 'e', 'e', 't', 'e' };
static const symbol s_11_23[6] = { 'k', 'e', 'e', 'v', 'a', 'd' };
static const symbol s_11_24[5] = { 'k', 0xC3, 0xA4, 'i', 'a' };
static const symbol s_11_25[8] = { 'k', 0xC3, 0xA4, 'i', 'a', 'k', 's', 'e' };
static const symbol s_11_26[5] = { 'k', 0xC3, 0xA4, 'i', 'b' };
static const symbol s_11_27[5] = { 'k', 0xC3, 0xA4, 'i', 'd' };
static const symbol s_11_28[6] = { 'k', 0xC3, 0xA4, 'i', 'd', 'i' };
static const symbol s_11_29[6] = { 'k', 0xC3, 0xA4, 'i', 'm', 'a' };
static const symbol s_11_30[6] = { 'k', 0xC3, 0xA4, 'i', 'm', 'e' };
static const symbol s_11_31[5] = { 'k', 0xC3, 0xA4, 'i', 'n' };
static const symbol s_11_32[5] = { 'k', 0xC3, 0xA4, 'i', 's' };
static const symbol s_11_33[7] = { 'k', 0xC3, 0xA4, 'i', 's', 'i', 'd' };
static const symbol s_11_34[8] = { 'k', 0xC3, 0xA4, 'i', 's', 'i', 'm', 'e' };
static const symbol s_11_35[7] = { 'k', 0xC3, 0xA4, 'i', 's', 'i', 'n' };
static const symbol s_11_36[8] = { 'k', 0xC3, 0xA4, 'i', 's', 'i', 't', 'e' };
static const symbol s_11_37[6] = { 'k', 0xC3, 0xA4, 'i', 't', 'e' };
static const symbol s_11_38[7] = { 'k', 0xC3, 0xA4, 'i', 'v', 'a', 'd' };
static const symbol s_11_39[4] = { 'l', 0xC3, 0xB5, 'i' };
static const symbol s_11_40[5] = { 'l', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_11_41[6] = { 'l', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_11_42[5] = { 'l', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_11_43[6] = { 'l', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_11_44[6] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'b' };
static const symbol s_11_45[6] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'd' };
static const symbol s_11_46[10] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'a', 'k', 's', 'e' };
static const symbol s_11_47[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'i' };
static const symbol s_11_48[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'a' };
static const symbol s_11_49[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'e' };
static const symbol s_11_50[6] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'n' };
static const symbol s_11_51[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 't', 'e' };
static const symbol s_11_52[8] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'v', 'a', 'd' };
static const symbol s_11_53[6] = { 'l', 0xC3, 0xBC, 0xC3, 0xBC, 'a' };
static const symbol s_11_54[9] = { 'l', 0xC3, 0xBC, 0xC3, 0xBC, 'a', 'k', 's', 'e' };
static const symbol s_11_55[4] = { 's', 'a', 'a', 'b' };
static const symbol s_11_56[4] = { 's', 'a', 'a', 'd' };
static const symbol s_11_57[5] = { 's', 'a', 'a', 'd', 'a' };
static const symbol s_11_58[8] = { 's', 'a', 'a', 'd', 'a', 'k', 's', 'e' };
static const symbol s_11_59[5] = { 's', 'a', 'a', 'd', 'i' };
static const symbol s_11_60[5] = { 's', 'a', 'a', 'm', 'a' };
static const symbol s_11_61[5] = { 's', 'a', 'a', 'm', 'e' };
static const symbol s_11_62[4] = { 's', 'a', 'a', 'n' };
static const symbol s_11_63[5] = { 's', 'a', 'a', 't', 'e' };
static const symbol s_11_64[6] = { 's', 'a', 'a', 'v', 'a', 'd' };
static const symbol s_11_65[3] = { 's', 'a', 'i' };
static const symbol s_11_66[4] = { 's', 'a', 'i', 'd' };
static const symbol s_11_67[5] = { 's', 'a', 'i', 'm', 'e' };
static const symbol s_11_68[4] = { 's', 'a', 'i', 'n' };
static const symbol s_11_69[5] = { 's', 'a', 'i', 't', 'e' };
static const symbol s_11_70[4] = { 's', 0xC3, 0xB5, 'i' };
static const symbol s_11_71[5] = { 's', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_11_72[6] = { 's', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_11_73[5] = { 's', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_11_74[6] = { 's', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_11_75[6] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'b' };
static const symbol s_11_76[6] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'd' };
static const symbol s_11_77[10] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'a', 'k', 's', 'e' };
static const symbol s_11_78[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'i' };
static const symbol s_11_79[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'a' };
static const symbol s_11_80[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'e' };
static const symbol s_11_81[6] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'n' };
static const symbol s_11_82[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 't', 'e' };
static const symbol s_11_83[8] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'v', 'a', 'd' };
static const symbol s_11_84[6] = { 's', 0xC3, 0xBC, 0xC3, 0xBC, 'a' };
static const symbol s_11_85[9] = { 's', 0xC3, 0xBC, 0xC3, 0xBC, 'a', 'k', 's', 'e' };
static const symbol s_11_86[4] = { 't', 'o', 'o', 'b' };
static const symbol s_11_87[4] = { 't', 'o', 'o', 'd' };
static const symbol s_11_88[5] = { 't', 'o', 'o', 'd', 'i' };
static const symbol s_11_89[5] = { 't', 'o', 'o', 'm', 'a' };
static const symbol s_11_90[5] = { 't', 'o', 'o', 'm', 'e' };
static const symbol s_11_91[4] = { 't', 'o', 'o', 'n' };
static const symbol s_11_92[5] = { 't', 'o', 'o', 't', 'e' };
static const symbol s_11_93[6] = { 't', 'o', 'o', 'v', 'a', 'd' };
static const symbol s_11_94[4] = { 't', 'u', 'u', 'a' };
static const symbol s_11_95[7] = { 't', 'u', 'u', 'a', 'k', 's', 'e' };
static const symbol s_11_96[4] = { 't', 0xC3, 0xB5, 'i' };
static const symbol s_11_97[5] = { 't', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_11_98[6] = { 't', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_11_99[5] = { 't', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_11_100[6] = { 't', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_11_101[4] = { 'v', 'i', 'i', 'a' };
static const symbol s_11_102[7] = { 'v', 'i', 'i', 'a', 'k', 's', 'e' };
static const symbol s_11_103[4] = { 'v', 'i', 'i', 'b' };
static const symbol s_11_104[4] = { 'v', 'i', 'i', 'd' };
static const symbol s_11_105[5] = { 'v', 'i', 'i', 'd', 'i' };
static const symbol s_11_106[5] = { 'v', 'i', 'i', 'm', 'a' };
static const symbol s_11_107[5] = { 'v', 'i', 'i', 'm', 'e' };
static const symbol s_11_108[4] = { 'v', 'i', 'i', 'n' };
static const symbol s_11_109[5] = { 'v', 'i', 'i', 't', 'e' };
static const symbol s_11_110[6] = { 'v', 'i', 'i', 'v', 'a', 'd' };
static const symbol s_11_111[5] = { 'v', 0xC3, 0xB5, 'i', 'b' };
static const symbol s_11_112[5] = { 'v', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_11_113[6] = { 'v', 0xC3, 0xB5, 'i', 'd', 'a' };
static const symbol s_11_114[9] = { 'v', 0xC3, 0xB5, 'i', 'd', 'a', 'k', 's', 'e' };
static const symbol s_11_115[6] = { 'v', 0xC3, 0xB5, 'i', 'd', 'i' };
static const symbol s_11_116[6] = { 'v', 0xC3, 0xB5, 'i', 'm', 'a' };
static const symbol s_11_117[6] = { 'v', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_11_118[5] = { 'v', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_11_119[5] = { 'v', 0xC3, 0xB5, 'i', 's' };
static const symbol s_11_120[7] = { 'v', 0xC3, 0xB5, 'i', 's', 'i', 'd' };
static const symbol s_11_121[8] = { 'v', 0xC3, 0xB5, 'i', 's', 'i', 'm', 'e' };
static const symbol s_11_122[7] = { 'v', 0xC3, 0xB5, 'i', 's', 'i', 'n' };
static const symbol s_11_123[8] = { 'v', 0xC3, 0xB5, 'i', 's', 'i', 't', 'e' };
static const symbol s_11_124[6] = { 'v', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_11_125[7] = { 'v', 0xC3, 0xB5, 'i', 'v', 'a', 'd' };

static const struct among a_11[126] =
{
/*  0 */ { 4, s_11_0, -1, 1, 0},
/*  1 */ { 4, s_11_1, -1, 1, 0},
/*  2 */ { 8, s_11_2, 1, 1, 0},
/*  3 */ { 5, s_11_3, -1, 1, 0},
/*  4 */ { 5, s_11_4, -1, 1, 0},
/*  5 */ { 4, s_11_5, -1, 1, 0},
/*  6 */ { 5, s_11_6, -1, 1, 0},
/*  7 */ { 6, s_11_7, -1, 1, 0},
/*  8 */ { 4, s_11_8, -1, 1, 0},
/*  9 */ { 7, s_11_9, 8, 1, 0},
/* 10 */ { 4, s_11_10, -1, 1, 0},
/* 11 */ { 5, s_11_11, 10, 1, 0},
/* 12 */ { 6, s_11_12, 10, 1, 0},
/* 13 */ { 5, s_11_13, 10, 1, 0},
/* 14 */ { 6, s_11_14, 10, 1, 0},
/* 15 */ { 4, s_11_15, -1, 9, 0},
/* 16 */ { 4, s_11_16, -1, 9, 0},
/* 17 */ { 8, s_11_17, 16, 9, 0},
/* 18 */ { 5, s_11_18, -1, 9, 0},
/* 19 */ { 5, s_11_19, -1, 9, 0},
/* 20 */ { 4, s_11_20, -1, 9, 0},
/* 21 */ { 5, s_11_21, -1, 9, 0},
/* 22 */ { 5, s_11_22, -1, 9, 0},
/* 23 */ { 6, s_11_23, -1, 9, 0},
/* 24 */ { 5, s_11_24, -1, 3, 0},
/* 25 */ { 8, s_11_25, 24, 3, 0},
/* 26 */ { 5, s_11_26, -1, 3, 0},
/* 27 */ { 5, s_11_27, -1, 3, 0},
/* 28 */ { 6, s_11_28, 27, 3, 0},
/* 29 */ { 6, s_11_29, -1, 3, 0},
/* 30 */ { 6, s_11_30, -1, 3, 0},
/* 31 */ { 5, s_11_31, -1, 3, 0},
/* 32 */ { 5, s_11_32, -1, 3, 0},
/* 33 */ { 7, s_11_33, 32, 3, 0},
/* 34 */ { 8, s_11_34, 32, 3, 0},
/* 35 */ { 7, s_11_35, 32, 3, 0},
/* 36 */ { 8, s_11_36, 32, 3, 0},
/* 37 */ { 6, s_11_37, -1, 3, 0},
/* 38 */ { 7, s_11_38, -1, 3, 0},
/* 39 */ { 4, s_11_39, -1, 2, 0},
/* 40 */ { 5, s_11_40, 39, 2, 0},
/* 41 */ { 6, s_11_41, 39, 2, 0},
/* 42 */ { 5, s_11_42, 39, 2, 0},
/* 43 */ { 6, s_11_43, 39, 2, 0},
/* 44 */ { 6, s_11_44, -1, 2, 0},
/* 45 */ { 6, s_11_45, -1, 2, 0},
/* 46 */ { 10, s_11_46, 45, 2, 0},
/* 47 */ { 7, s_11_47, 45, 2, 0},
/* 48 */ { 7, s_11_48, -1, 2, 0},
/* 49 */ { 7, s_11_49, -1, 2, 0},
/* 50 */ { 6, s_11_50, -1, 2, 0},
/* 51 */ { 7, s_11_51, -1, 2, 0},
/* 52 */ { 8, s_11_52, -1, 2, 0},
/* 53 */ { 6, s_11_53, -1, 2, 0},
/* 54 */ { 9, s_11_54, 53, 2, 0},
/* 55 */ { 4, s_11_55, -1, 4, 0},
/* 56 */ { 4, s_11_56, -1, 4, 0},
/* 57 */ { 5, s_11_57, 56, 4, 0},
/* 58 */ { 8, s_11_58, 57, 4, 0},
/* 59 */ { 5, s_11_59, 56, 4, 0},
/* 60 */ { 5, s_11_60, -1, 4, 0},
/* 61 */ { 5, s_11_61, -1, 4, 0},
/* 62 */ { 4, s_11_62, -1, 4, 0},
/* 63 */ { 5, s_11_63, -1, 4, 0},
/* 64 */ { 6, s_11_64, -1, 4, 0},
/* 65 */ { 3, s_11_65, -1, 4, 0},
/* 66 */ { 4, s_11_66, 65, 4, 0},
/* 67 */ { 5, s_11_67, 65, 4, 0},
/* 68 */ { 4, s_11_68, 65, 4, 0},
/* 69 */ { 5, s_11_69, 65, 4, 0},
/* 70 */ { 4, s_11_70, -1, 6, 0},
/* 71 */ { 5, s_11_71, 70, 6, 0},
/* 72 */ { 6, s_11_72, 70, 6, 0},
/* 73 */ { 5, s_11_73, 70, 6, 0},
/* 74 */ { 6, s_11_74, 70, 6, 0},
/* 75 */ { 6, s_11_75, -1, 6, 0},
/* 76 */ { 6, s_11_76, -1, 6, 0},
/* 77 */ { 10, s_11_77, 76, 6, 0},
/* 78 */ { 7, s_11_78, 76, 6, 0},
/* 79 */ { 7, s_11_79, -1, 6, 0},
/* 80 */ { 7, s_11_80, -1, 6, 0},
/* 81 */ { 6, s_11_81, -1, 6, 0},
/* 82 */ { 7, s_11_82, -1, 6, 0},
/* 83 */ { 8, s_11_83, -1, 6, 0},
/* 84 */ { 6, s_11_84, -1, 6, 0},
/* 85 */ { 9, s_11_85, 84, 6, 0},
/* 86 */ { 4, s_11_86, -1, 7, 0},
/* 87 */ { 4, s_11_87, -1, 7, 0},
/* 88 */ { 5, s_11_88, 87, 7, 0},
/* 89 */ { 5, s_11_89, -1, 7, 0},
/* 90 */ { 5, s_11_90, -1, 7, 0},
/* 91 */ { 4, s_11_91, -1, 7, 0},
/* 92 */ { 5, s_11_92, -1, 7, 0},
/* 93 */ { 6, s_11_93, -1, 7, 0},
/* 94 */ { 4, s_11_94, -1, 7, 0},
/* 95 */ { 7, s_11_95, 94, 7, 0},
/* 96 */ { 4, s_11_96, -1, 7, 0},
/* 97 */ { 5, s_11_97, 96, 7, 0},
/* 98 */ { 6, s_11_98, 96, 7, 0},
/* 99 */ { 5, s_11_99, 96, 7, 0},
/*100 */ { 6, s_11_100, 96, 7, 0},
/*101 */ { 4, s_11_101, -1, 5, 0},
/*102 */ { 7, s_11_102, 101, 5, 0},
/*103 */ { 4, s_11_103, -1, 5, 0},
/*104 */ { 4, s_11_104, -1, 5, 0},
/*105 */ { 5, s_11_105, 104, 5, 0},
/*106 */ { 5, s_11_106, -1, 5, 0},
/*107 */ { 5, s_11_107, -1, 5, 0},
/*108 */ { 4, s_11_108, -1, 5, 0},
/*109 */ { 5, s_11_109, -1, 5, 0},
/*110 */ { 6, s_11_110, -1, 5, 0},
/*111 */ { 5, s_11_111, -1, 8, 0},
/*112 */ { 5, s_11_112, -1, 8, 0},
/*113 */ { 6, s_11_113, 112, 8, 0},
/*114 */ { 9, s_11_114, 113, 8, 0},
/*115 */ { 6, s_11_115, 112, 8, 0},
/*116 */ { 6, s_11_116, -1, 8, 0},
/*117 */ { 6, s_11_117, -1, 8, 0},
/*118 */ { 5, s_11_118, -1, 8, 0},
/*119 */ { 5, s_11_119, -1, 8, 0},
/*120 */ { 7, s_11_120, 119, 8, 0},
/*121 */ { 8, s_11_121, 119, 8, 0},
/*122 */ { 7, s_11_122, 119, 8, 0},
/*123 */ { 8, s_11_123, 119, 8, 0},
/*124 */ { 6, s_11_124, -1, 8, 0},
/*125 */ { 7, s_11_125, -1, 8, 0}
};

static const unsigned char g_V1[] = { 17, 65, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 48, 8 };

static const unsigned char g_RV[] = { 17, 65, 16 };

static const symbol s_0[] = { 'i', 'k' };
static const symbol s_1[] = { 't' };
static const symbol s_2[] = { 'j', 'o', 'o' };
static const symbol s_3[] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_4[] = { 'k', 0xC3, 0xA4, 'i' };
static const symbol s_5[] = { 's', 'a', 'a' };
static const symbol s_6[] = { 'v', 'i', 'i' };
static const symbol s_7[] = { 's', 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_8[] = { 't', 'o', 'o' };
static const symbol s_9[] = { 'v', 0xC3, 0xB5, 'i', 'm', 'a' };
static const symbol s_10[] = { 'k', 'e', 'e' };

static int r_mark_regions(struct SN_env * z) { /* forwardmode */
    z->I[0] = z->l; /* $p1 = <integer expression>, line 36 */
    if (out_grouping_U(z, g_V1, 97, 252, 1) < 0) return 0; /* goto */ /* grouping V1, line 38 */
    {    /* gopast */ /* non V1, line 38 */
        int ret = in_grouping_U(z, g_V1, 97, 252, 1);
        if (ret < 0) return 0;
        z->c += ret;
    }
    z->I[0] = z->c; /* setmark p1, line 38 */
    return 1;
}

static int r_emphasis(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 54 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 54 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] != 105) { z->lb = mlimit1; return 0; } /* substring, line 54 */
        among_var = find_among_b(z, a_2, 2);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 54 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 55 */
        case 1:
            if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((546 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0; /* among, line 56 */
            if (!(find_among_b(z, a_0, 10))) return 0;
            break;
        case 2:
            if (z->c - 1 <= z->lb || z->p[z->c - 1] != 116) return 0; /* among, line 57 */
            if (!(find_among_b(z, a_1, 2))) return 0;
            break;
    }
    {   int ret = slice_del(z); /* delete, line 59 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_verb(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 72 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 72 */
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1589302 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 72 */
        if (!(find_among_b(z, a_3, 22))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 72 */
        z->lb = mlimit1;
    }
    if (in_grouping_b_U(z, g_V1, 97, 252, 0)) return 0; /* grouping V1, line 80 */
    {   int ret = slice_del(z); /* delete, line 107 */
        if (ret < 0) return ret;
    }
    z->B[0] = 1; /* set is_verb, line 108 */
    return 1;
}

static int r_LONGV(struct SN_env * z) { /* backwardmode */
    if (!(find_among_b(z, a_4, 9))) return 0; /* among, line 111 */
    return 1;
}

static int r_i_plural(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 113 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 113 */
        if (z->c <= z->lb || z->p[z->c - 1] != 105) { z->lb = mlimit1; return 0; } /* substring, line 113 */
        if (!(find_among_b(z, a_5, 1))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 113 */
        z->lb = mlimit1;
    }
    if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 115 */
    {   int ret = slice_del(z); /* delete, line 117 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_case_ending(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 121 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 121 */
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1576994 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 121 */
        if (!(find_among_b(z, a_6, 10))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 121 */
        z->lb = mlimit1;
    }
    if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 123 */
    {   int ret = slice_del(z); /* delete, line 146 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_plural_three_first_cases(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 151 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 151 */
        if (z->c <= z->lb || (z->p[z->c - 1] != 100 && z->p[z->c - 1] != 101)) { z->lb = mlimit1; return 0; } /* substring, line 151 */
        among_var = find_among_b(z, a_7, 7);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 151 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 152 */
        case 1:
            {   int ret = slice_from_s(z, 2, s_0); /* <-, line 153 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m2 = z->l - z->c; (void)m2; /* not, line 156 */
                {   int ret = r_LONGV(z); /* call LONGV, line 156 */
                    if (ret == 0) goto lab0;
                    if (ret < 0) return ret;
                }
                return 0;
            lab0:
                z->c = z->l - m2;
            }
            {   int ret = slice_del(z); /* delete, line 156 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int m3 = z->l - z->c; (void)m3; /* or, line 157 */
                {   int m_test4 = z->l - z->c; /* test, line 157 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 4); /* hop, line 157 */
                        if (ret < 0) goto lab2;
                        z->c = ret;
                    }
                    z->c = z->l - m_test4;
                }
                {   int ret = slice_del(z); /* delete, line 157 */
                    if (ret < 0) return ret;
                }
                goto lab1;
            lab2:
                z->c = z->l - m3;
                {   int ret = slice_from_s(z, 1, s_1); /* <-, line 157 */
                    if (ret < 0) return ret;
                }
            }
        lab1:
            break;
        case 4:
            {   int ret = slice_del(z); /* delete, line 158 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 159 */
            {   int ret = slice_del(z); /* delete, line 159 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_double(struct SN_env * z) { /* backwardmode */
    {   int m_test1 = z->l - z->c; /* test, line 164 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1116160 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0; /* among, line 164 */
        if (!(find_among_b(z, a_8, 3))) return 0;
        z->c = z->l - m_test1;
    }
    return 1;
}

static int r_undouble(struct SN_env * z) { /* backwardmode */
    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
        if (ret < 0) return 0;
        z->c = ret; /* next, line 168 */
    }
    z->ket = z->c; /* [, line 168 */
    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 1); /* hop, line 168 */
        if (ret < 0) return 0;
        z->c = ret;
    }
    z->bra = z->c; /* ], line 168 */
    {   int ret = slice_del(z); /* delete, line 168 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_nu(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 172 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 172 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] != 117) { z->lb = mlimit1; return 0; } /* substring, line 172 */
        if (!(find_among_b(z, a_9, 2))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 172 */
        z->lb = mlimit1;
    }
    {   int ret = slice_del(z); /* delete, line 177 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_remove_double_kpt(struct SN_env * z) { /* backwardmode */
    if (in_grouping_b_U(z, g_V1, 97, 252, 0)) return 0; /* grouping V1, line 181 */
    {   int m1 = z->l - z->c; (void)m1; /* and, line 182 */
        {   int ret = r_double(z); /* call double, line 181 */
            if (ret <= 0) return ret;
        }
        z->c = z->l - m1;
        {   int ret = r_undouble(z); /* call undouble, line 182 */
            if (ret <= 0) return ret;
        }
    }
    return 1;
}

static int r_degrees(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 186 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 186 */
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 97 && z->p[z->c - 1] != 105)) { z->lb = mlimit1; return 0; } /* substring, line 186 */
        among_var = find_among_b(z, a_10, 2);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 186 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 187 */
        case 1:
            if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 188 */
            break;
    }
    {   int ret = slice_del(z); /* delete, line 193 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_substantive(struct SN_env * z) { /* backwardmode */
    {   int m1 = z->l - z->c; (void)m1; /* do, line 197 */
        {   int ret = r_emphasis(z); /* call emphasis, line 197 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    {   int m2 = z->l - z->c; (void)m2; /* do, line 198 */
        {   int ret = r_case_ending(z); /* call case_ending, line 198 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    {   int m3 = z->l - z->c; (void)m3; /* do, line 199 */
        {   int ret = r_plural_three_first_cases(z); /* call plural_three_first_cases, line 199 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* do, line 200 */
        {   int ret = r_degrees(z); /* call degrees, line 200 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m4;
    }
    {   int m5 = z->l - z->c; (void)m5; /* do, line 201 */
        {   int ret = r_i_plural(z); /* call i_plural, line 201 */
            if (ret == 0) goto lab4;
            if (ret < 0) return ret;
        }
    lab4:
        z->c = z->l - m5;
    }
    {   int m6 = z->l - z->c; (void)m6; /* do, line 202 */
        {   int ret = r_nu(z); /* call nu, line 202 */
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
    z->bra = z->c; /* [, line 212 */
    among_var = find_among(z, a_11, 126); /* substring, line 212 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 212 */
    if (z->c < z->l) return 0; /* atlimit, line 212 */
    switch (among_var) { /* among, line 213 */
        case 1:
            {   int ret = slice_from_s(z, 3, s_2); /* <-, line 214 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 5, s_3); /* <-, line 217 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 4, s_4); /* <-, line 220 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 3, s_5); /* <-, line 223 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 3, s_6); /* <-, line 226 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 5, s_7); /* <-, line 229 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 3, s_8); /* <-, line 232 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 6, s_9); /* <-, line 235 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 3, s_10); /* <-, line 238 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int H_stem(struct SN_env * z) { /* forwardmode */
    {   int c1 = z->c; /* do, line 255 */
        {   int ret = r_mark_regions(z); /* call mark_regions, line 255 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    {   int c2 = z->c; /* or, line 256 */
        {   int ret = r_verb_exceptions(z); /* call verb_exceptions, line 256 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
        goto lab1;
    lab2:
        z->c = c2;
        z->B[0] = 0; /* unset is_verb, line 257 */
    }
lab1:
    z->lb = z->c; z->c = z->l; /* backwards, line 258 */

    {   int m3 = z->l - z->c; (void)m3; /* do, line 259 */
        {   int ret = r_verb(z); /* call verb, line 259 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* try, line 260 */
        /* not, line 260 */
        if (!(z->B[0])) goto lab5; /* Boolean test is_verb, line 260 */
        { z->c = z->l - m4; goto lab4; }
    lab5:
        /* do, line 260 */
        {   int ret = r_substantive(z); /* call substantive, line 260 */
            if (ret == 0) goto lab6;
            if (ret < 0) return ret;
        }
    lab6:
    lab4:
        ;
    }
    {   int m5 = z->l - z->c; (void)m5; /* do, line 261 */
        {   int ret = r_remove_double_kpt(z); /* call remove_double_kpt, line 261 */
            if (ret == 0) goto lab7;
            if (ret < 0) return ret;
        }
    lab7:
        z->c = z->l - m5;
    }
    z->c = z->lb;
    return 1;
}

extern struct SN_env * H_create_env(void) { return SN_create_env(0, 1, 1); }

extern void H_close_env(struct SN_env * z) { SN_close_env(z, 0); }

