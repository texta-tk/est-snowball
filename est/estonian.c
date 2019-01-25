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

static const symbol s_4_0[2] = { 'g', 'a' };
static const symbol s_4_1[2] = { 't', 'a' };
static const symbol s_4_2[2] = { 'l', 'e' };
static const symbol s_4_3[3] = { 's', 's', 'e' };
static const symbol s_4_4[1] = { 'l' };
static const symbol s_4_5[1] = { 's' };
static const symbol s_4_6[2] = { 'k', 's' };
static const symbol s_4_7[1] = { 't' };
static const symbol s_4_8[2] = { 'l', 't' };
static const symbol s_4_9[2] = { 's', 't' };

static const struct among a_4[10] =
{
/*  0 */ { 2, s_4_0, -1, 1, 0},
/*  1 */ { 2, s_4_1, -1, 1, 0},
/*  2 */ { 2, s_4_2, -1, 1, 0},
/*  3 */ { 3, s_4_3, -1, 1, 0},
/*  4 */ { 1, s_4_4, -1, 1, 0},
/*  5 */ { 1, s_4_5, -1, 1, 0},
/*  6 */ { 2, s_4_6, 5, 1, 0},
/*  7 */ { 1, s_4_7, -1, 1, 0},
/*  8 */ { 2, s_4_8, 7, 1, 0},
/*  9 */ { 2, s_4_9, 7, 1, 0}
};

static const symbol s_5_0[1] = { 'd' };
static const symbol s_5_1[3] = { 's', 'i', 'd' };
static const symbol s_5_2[2] = { 'd', 'e' };
static const symbol s_5_3[6] = { 'i', 'k', 'k', 'u', 'd', 'e' };
static const symbol s_5_4[3] = { 'i', 'k', 'e' };
static const symbol s_5_5[4] = { 'i', 'k', 'k', 'e' };
static const symbol s_5_6[2] = { 't', 'e' };

static const struct among a_5[7] =
{
/*  0 */ { 1, s_5_0, -1, 4, 0},
/*  1 */ { 3, s_5_1, 0, 2, 0},
/*  2 */ { 2, s_5_2, -1, 4, 0},
/*  3 */ { 6, s_5_3, 2, 1, 0},
/*  4 */ { 3, s_5_4, -1, 1, 0},
/*  5 */ { 4, s_5_5, -1, 1, 0},
/*  6 */ { 2, s_5_6, -1, 3, 0}
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

static const symbol s_7_0[2] = { 'v', 'a' };
static const symbol s_7_1[2] = { 'd', 'u' };
static const symbol s_7_2[2] = { 'n', 'u' };
static const symbol s_7_3[2] = { 't', 'u' };

static const struct among a_7[4] =
{
/*  0 */ { 2, s_7_0, -1, -1, 0},
/*  1 */ { 2, s_7_1, -1, -1, 0},
/*  2 */ { 2, s_7_2, -1, -1, 0},
/*  3 */ { 2, s_7_3, -1, -1, 0}
};

static const symbol s_8_0[2] = { 'm', 'a' };
static const symbol s_8_1[3] = { 'm', 'a', 'i' };
static const symbol s_8_2[1] = { 'm' };

static const struct among a_8[3] =
{
/*  0 */ { 2, s_8_0, -1, 1, 0},
/*  1 */ { 3, s_8_1, -1, 1, 0},
/*  2 */ { 1, s_8_2, -1, 1, 0}
};

static const symbol s_9_0[4] = { 'j', 'o', 'o', 'b' };
static const symbol s_9_1[4] = { 'j', 'o', 'o', 'd' };
static const symbol s_9_2[8] = { 'j', 'o', 'o', 'd', 'a', 'k', 's', 'e' };
static const symbol s_9_3[5] = { 'j', 'o', 'o', 'm', 'a' };
static const symbol s_9_4[7] = { 'j', 'o', 'o', 'm', 'a', 't', 'a' };
static const symbol s_9_5[5] = { 'j', 'o', 'o', 'm', 'e' };
static const symbol s_9_6[4] = { 'j', 'o', 'o', 'n' };
static const symbol s_9_7[5] = { 'j', 'o', 'o', 't', 'e' };
static const symbol s_9_8[6] = { 'j', 'o', 'o', 'v', 'a', 'd' };
static const symbol s_9_9[4] = { 'j', 'u', 'u', 'a' };
static const symbol s_9_10[7] = { 'j', 'u', 'u', 'a', 'k', 's', 'e' };
static const symbol s_9_11[4] = { 'j', 0xC3, 0xA4, 'i' };
static const symbol s_9_12[5] = { 'j', 0xC3, 0xA4, 'i', 'd' };
static const symbol s_9_13[6] = { 'j', 0xC3, 0xA4, 'i', 'm', 'e' };
static const symbol s_9_14[5] = { 'j', 0xC3, 0xA4, 'i', 'n' };
static const symbol s_9_15[6] = { 'j', 0xC3, 0xA4, 'i', 't', 'e' };
static const symbol s_9_16[6] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'b' };
static const symbol s_9_17[6] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'd' };
static const symbol s_9_18[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'd', 'a' };
static const symbol s_9_19[10] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'd', 'a', 'k', 's', 'e' };
static const symbol s_9_20[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'd', 'i' };
static const symbol s_9_21[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'k', 's' };
static const symbol s_9_22[9] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'k', 's', 'i', 'd' };
static const symbol s_9_23[10] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_24[9] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'k', 's', 'i', 'n' };
static const symbol s_9_25[10] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'k', 's', 'i', 't', 'e' };
static const symbol s_9_26[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'm', 'a' };
static const symbol s_9_27[9] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'm', 'a', 't', 'a' };
static const symbol s_9_28[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'm', 'e' };
static const symbol s_9_29[6] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'n' };
static const symbol s_9_30[7] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 't', 'e' };
static const symbol s_9_31[8] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'v', 'a', 'd' };
static const symbol s_9_32[4] = { 'j', 0xC3, 0xB5, 'i' };
static const symbol s_9_33[5] = { 'j', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_9_34[6] = { 'j', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_9_35[5] = { 'j', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_9_36[6] = { 'j', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_9_37[4] = { 'k', 'e', 'e', 'b' };
static const symbol s_9_38[4] = { 'k', 'e', 'e', 'd' };
static const symbol s_9_39[8] = { 'k', 'e', 'e', 'd', 'a', 'k', 's', 'e' };
static const symbol s_9_40[5] = { 'k', 'e', 'e', 'k', 's' };
static const symbol s_9_41[7] = { 'k', 'e', 'e', 'k', 's', 'i', 'd' };
static const symbol s_9_42[8] = { 'k', 'e', 'e', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_43[7] = { 'k', 'e', 'e', 'k', 's', 'i', 'n' };
static const symbol s_9_44[8] = { 'k', 'e', 'e', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_45[5] = { 'k', 'e', 'e', 'm', 'a' };
static const symbol s_9_46[7] = { 'k', 'e', 'e', 'm', 'a', 't', 'a' };
static const symbol s_9_47[5] = { 'k', 'e', 'e', 'm', 'e' };
static const symbol s_9_48[4] = { 'k', 'e', 'e', 'n' };
static const symbol s_9_49[4] = { 'k', 'e', 'e', 's' };
static const symbol s_9_50[5] = { 'k', 'e', 'e', 't', 'a' };
static const symbol s_9_51[5] = { 'k', 'e', 'e', 't', 'e' };
static const symbol s_9_52[6] = { 'k', 'e', 'e', 'v', 'a', 'd' };
static const symbol s_9_53[5] = { 'k', 0xC3, 0xA4, 'i', 'a' };
static const symbol s_9_54[8] = { 'k', 0xC3, 0xA4, 'i', 'a', 'k', 's', 'e' };
static const symbol s_9_55[5] = { 'k', 0xC3, 0xA4, 'i', 'b' };
static const symbol s_9_56[5] = { 'k', 0xC3, 0xA4, 'i', 'd' };
static const symbol s_9_57[6] = { 'k', 0xC3, 0xA4, 'i', 'd', 'i' };
static const symbol s_9_58[6] = { 'k', 0xC3, 0xA4, 'i', 'k', 's' };
static const symbol s_9_59[8] = { 'k', 0xC3, 0xA4, 'i', 'k', 's', 'i', 'd' };
static const symbol s_9_60[9] = { 'k', 0xC3, 0xA4, 'i', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_61[8] = { 'k', 0xC3, 0xA4, 'i', 'k', 's', 'i', 'n' };
static const symbol s_9_62[9] = { 'k', 0xC3, 0xA4, 'i', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_63[6] = { 'k', 0xC3, 0xA4, 'i', 'm', 'a' };
static const symbol s_9_64[8] = { 'k', 0xC3, 0xA4, 'i', 'm', 'a', 't', 'a' };
static const symbol s_9_65[6] = { 'k', 0xC3, 0xA4, 'i', 'm', 'e' };
static const symbol s_9_66[5] = { 'k', 0xC3, 0xA4, 'i', 'n' };
static const symbol s_9_67[5] = { 'k', 0xC3, 0xA4, 'i', 's' };
static const symbol s_9_68[6] = { 'k', 0xC3, 0xA4, 'i', 't', 'e' };
static const symbol s_9_69[7] = { 'k', 0xC3, 0xA4, 'i', 'v', 'a', 'd' };
static const symbol s_9_70[4] = { 'l', 'a', 'o', 'b' };
static const symbol s_9_71[4] = { 'l', 'a', 'o', 'd' };
static const symbol s_9_72[5] = { 'l', 'a', 'o', 'k', 's' };
static const symbol s_9_73[7] = { 'l', 'a', 'o', 'k', 's', 'i', 'd' };
static const symbol s_9_74[8] = { 'l', 'a', 'o', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_75[7] = { 'l', 'a', 'o', 'k', 's', 'i', 'n' };
static const symbol s_9_76[8] = { 'l', 'a', 'o', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_77[5] = { 'l', 'a', 'o', 'm', 'e' };
static const symbol s_9_78[4] = { 'l', 'a', 'o', 'n' };
static const symbol s_9_79[5] = { 'l', 'a', 'o', 't', 'e' };
static const symbol s_9_80[6] = { 'l', 'a', 'o', 'v', 'a', 'd' };
static const symbol s_9_81[4] = { 'l', 'o', 'e', 'b' };
static const symbol s_9_82[4] = { 'l', 'o', 'e', 'd' };
static const symbol s_9_83[5] = { 'l', 'o', 'e', 'k', 's' };
static const symbol s_9_84[7] = { 'l', 'o', 'e', 'k', 's', 'i', 'd' };
static const symbol s_9_85[8] = { 'l', 'o', 'e', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_86[7] = { 'l', 'o', 'e', 'k', 's', 'i', 'n' };
static const symbol s_9_87[8] = { 'l', 'o', 'e', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_88[5] = { 'l', 'o', 'e', 'm', 'e' };
static const symbol s_9_89[4] = { 'l', 'o', 'e', 'n' };
static const symbol s_9_90[5] = { 'l', 'o', 'e', 't', 'e' };
static const symbol s_9_91[6] = { 'l', 'o', 'e', 'v', 'a', 'd' };
static const symbol s_9_92[4] = { 'l', 'o', 'o', 'b' };
static const symbol s_9_93[4] = { 'l', 'o', 'o', 'd' };
static const symbol s_9_94[5] = { 'l', 'o', 'o', 'd', 'i' };
static const symbol s_9_95[5] = { 'l', 'o', 'o', 'k', 's' };
static const symbol s_9_96[7] = { 'l', 'o', 'o', 'k', 's', 'i', 'd' };
static const symbol s_9_97[8] = { 'l', 'o', 'o', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_98[7] = { 'l', 'o', 'o', 'k', 's', 'i', 'n' };
static const symbol s_9_99[8] = { 'l', 'o', 'o', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_100[5] = { 'l', 'o', 'o', 'm', 'a' };
static const symbol s_9_101[7] = { 'l', 'o', 'o', 'm', 'a', 't', 'a' };
static const symbol s_9_102[5] = { 'l', 'o', 'o', 'm', 'e' };
static const symbol s_9_103[4] = { 'l', 'o', 'o', 'n' };
static const symbol s_9_104[5] = { 'l', 'o', 'o', 't', 'e' };
static const symbol s_9_105[6] = { 'l', 'o', 'o', 'v', 'a', 'd' };
static const symbol s_9_106[4] = { 'l', 'u', 'u', 'a' };
static const symbol s_9_107[7] = { 'l', 'u', 'u', 'a', 'k', 's', 'e' };
static const symbol s_9_108[4] = { 'l', 0xC3, 0xB5, 'i' };
static const symbol s_9_109[5] = { 'l', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_9_110[6] = { 'l', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_9_111[5] = { 'l', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_9_112[6] = { 'l', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_9_113[6] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'b' };
static const symbol s_9_114[6] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'd' };
static const symbol s_9_115[10] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'a', 'k', 's', 'e' };
static const symbol s_9_116[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'i' };
static const symbol s_9_117[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's' };
static const symbol s_9_118[9] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'd' };
static const symbol s_9_119[10] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_120[9] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'n' };
static const symbol s_9_121[10] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 't', 'e' };
static const symbol s_9_122[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'a' };
static const symbol s_9_123[9] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'a', 't', 'a' };
static const symbol s_9_124[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'e' };
static const symbol s_9_125[6] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'n' };
static const symbol s_9_126[7] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 't', 'e' };
static const symbol s_9_127[8] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6, 'v', 'a', 'd' };
static const symbol s_9_128[6] = { 'l', 0xC3, 0xBC, 0xC3, 0xBC, 'a' };
static const symbol s_9_129[9] = { 'l', 0xC3, 0xBC, 0xC3, 0xBC, 'a', 'k', 's', 'e' };
static const symbol s_9_130[6] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'a' };
static const symbol s_9_131[9] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'a', 'k', 's', 'e' };
static const symbol s_9_132[6] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'b' };
static const symbol s_9_133[6] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'd' };
static const symbol s_9_134[7] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'd', 'i' };
static const symbol s_9_135[7] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'k', 's' };
static const symbol s_9_136[9] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'k', 's', 'i', 'd' };
static const symbol s_9_137[10] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_138[9] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'k', 's', 'i', 'n' };
static const symbol s_9_139[10] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'k', 's', 'i', 't', 'e' };
static const symbol s_9_140[7] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'm', 'a' };
static const symbol s_9_141[9] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'm', 'a', 't', 'a' };
static const symbol s_9_142[7] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'm', 'e' };
static const symbol s_9_143[6] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'n' };
static const symbol s_9_144[6] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 's' };
static const symbol s_9_145[7] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 't', 'e' };
static const symbol s_9_146[8] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 'v', 'a', 'd' };
static const symbol s_9_147[5] = { 'n', 0xC3, 0xA4, 'e', 'b' };
static const symbol s_9_148[5] = { 'n', 0xC3, 0xA4, 'e', 'd' };
static const symbol s_9_149[6] = { 'n', 0xC3, 0xA4, 'e', 'k', 's' };
static const symbol s_9_150[8] = { 'n', 0xC3, 0xA4, 'e', 'k', 's', 'i', 'd' };
static const symbol s_9_151[9] = { 'n', 0xC3, 0xA4, 'e', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_152[8] = { 'n', 0xC3, 0xA4, 'e', 'k', 's', 'i', 'n' };
static const symbol s_9_153[9] = { 'n', 0xC3, 0xA4, 'e', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_154[6] = { 'n', 0xC3, 0xA4, 'e', 'm', 'e' };
static const symbol s_9_155[5] = { 'n', 0xC3, 0xA4, 'e', 'n' };
static const symbol s_9_156[6] = { 'n', 0xC3, 0xA4, 'e', 't', 'e' };
static const symbol s_9_157[7] = { 'n', 0xC3, 0xA4, 'e', 'v', 'a', 'd' };
static const symbol s_9_158[7] = { 'n', 0xC3, 0xA4, 'g', 'e', 'm', 'a' };
static const symbol s_9_159[9] = { 'n', 0xC3, 0xA4, 'g', 'e', 'm', 'a', 't', 'a' };
static const symbol s_9_160[5] = { 'n', 0xC3, 0xA4, 'h', 'a' };
static const symbol s_9_161[8] = { 'n', 0xC3, 0xA4, 'h', 'a', 'k', 's', 'e' };
static const symbol s_9_162[6] = { 'n', 0xC3, 0xA4, 'h', 't', 'i' };
static const symbol s_9_163[5] = { 'p', 0xC3, 0xB5, 'e', 'b' };
static const symbol s_9_164[5] = { 'p', 0xC3, 0xB5, 'e', 'd' };
static const symbol s_9_165[6] = { 'p', 0xC3, 0xB5, 'e', 'k', 's' };
static const symbol s_9_166[8] = { 'p', 0xC3, 0xB5, 'e', 'k', 's', 'i', 'd' };
static const symbol s_9_167[9] = { 'p', 0xC3, 0xB5, 'e', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_168[8] = { 'p', 0xC3, 0xB5, 'e', 'k', 's', 'i', 'n' };
static const symbol s_9_169[9] = { 'p', 0xC3, 0xB5, 'e', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_170[6] = { 'p', 0xC3, 0xB5, 'e', 'm', 'e' };
static const symbol s_9_171[5] = { 'p', 0xC3, 0xB5, 'e', 'n' };
static const symbol s_9_172[6] = { 'p', 0xC3, 0xB5, 'e', 't', 'e' };
static const symbol s_9_173[7] = { 'p', 0xC3, 0xB5, 'e', 'v', 'a', 'd' };
static const symbol s_9_174[4] = { 's', 'a', 'a', 'b' };
static const symbol s_9_175[4] = { 's', 'a', 'a', 'd' };
static const symbol s_9_176[5] = { 's', 'a', 'a', 'd', 'a' };
static const symbol s_9_177[8] = { 's', 'a', 'a', 'd', 'a', 'k', 's', 'e' };
static const symbol s_9_178[5] = { 's', 'a', 'a', 'd', 'i' };
static const symbol s_9_179[5] = { 's', 'a', 'a', 'k', 's' };
static const symbol s_9_180[7] = { 's', 'a', 'a', 'k', 's', 'i', 'd' };
static const symbol s_9_181[8] = { 's', 'a', 'a', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_182[7] = { 's', 'a', 'a', 'k', 's', 'i', 'n' };
static const symbol s_9_183[8] = { 's', 'a', 'a', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_184[5] = { 's', 'a', 'a', 'm', 'a' };
static const symbol s_9_185[7] = { 's', 'a', 'a', 'm', 'a', 't', 'a' };
static const symbol s_9_186[5] = { 's', 'a', 'a', 'm', 'e' };
static const symbol s_9_187[4] = { 's', 'a', 'a', 'n' };
static const symbol s_9_188[5] = { 's', 'a', 'a', 't', 'e' };
static const symbol s_9_189[6] = { 's', 'a', 'a', 'v', 'a', 'd' };
static const symbol s_9_190[3] = { 's', 'a', 'i' };
static const symbol s_9_191[4] = { 's', 'a', 'i', 'd' };
static const symbol s_9_192[5] = { 's', 'a', 'i', 'm', 'e' };
static const symbol s_9_193[4] = { 's', 'a', 'i', 'n' };
static const symbol s_9_194[5] = { 's', 'a', 'i', 't', 'e' };
static const symbol s_9_195[4] = { 's', 0xC3, 0xB5, 'i' };
static const symbol s_9_196[5] = { 's', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_9_197[6] = { 's', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_9_198[5] = { 's', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_9_199[6] = { 's', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_9_200[6] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'b' };
static const symbol s_9_201[6] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'd' };
static const symbol s_9_202[10] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'a', 'k', 's', 'e' };
static const symbol s_9_203[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'd', 'i' };
static const symbol s_9_204[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's' };
static const symbol s_9_205[9] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'd' };
static const symbol s_9_206[10] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_207[9] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 'n' };
static const symbol s_9_208[10] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'k', 's', 'i', 't', 'e' };
static const symbol s_9_209[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'a' };
static const symbol s_9_210[9] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'a', 't', 'a' };
static const symbol s_9_211[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'm', 'e' };
static const symbol s_9_212[6] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'n' };
static const symbol s_9_213[7] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 't', 'e' };
static const symbol s_9_214[8] = { 's', 0xC3, 0xB6, 0xC3, 0xB6, 'v', 'a', 'd' };
static const symbol s_9_215[6] = { 's', 0xC3, 0xBC, 0xC3, 0xBC, 'a' };
static const symbol s_9_216[9] = { 's', 0xC3, 0xBC, 0xC3, 0xBC, 'a', 'k', 's', 'e' };
static const symbol s_9_217[4] = { 't', 'e', 'e', 'b' };
static const symbol s_9_218[4] = { 't', 'e', 'e', 'd' };
static const symbol s_9_219[5] = { 't', 'e', 'e', 'k', 's' };
static const symbol s_9_220[7] = { 't', 'e', 'e', 'k', 's', 'i', 'd' };
static const symbol s_9_221[8] = { 't', 'e', 'e', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_222[7] = { 't', 'e', 'e', 'k', 's', 'i', 'n' };
static const symbol s_9_223[8] = { 't', 'e', 'e', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_224[5] = { 't', 'e', 'e', 'm', 'e' };
static const symbol s_9_225[4] = { 't', 'e', 'e', 'n' };
static const symbol s_9_226[5] = { 't', 'e', 'e', 't', 'e' };
static const symbol s_9_227[6] = { 't', 'e', 'e', 'v', 'a', 'd' };
static const symbol s_9_228[6] = { 't', 'e', 'g', 'e', 'm', 'a' };
static const symbol s_9_229[8] = { 't', 'e', 'g', 'e', 'm', 'a', 't', 'a' };
static const symbol s_9_230[4] = { 't', 'e', 'g', 'i' };
static const symbol s_9_231[5] = { 't', 'e', 'g', 'i', 'd' };
static const symbol s_9_232[6] = { 't', 'e', 'g', 'i', 'm', 'e' };
static const symbol s_9_233[5] = { 't', 'e', 'g', 'i', 'n' };
static const symbol s_9_234[6] = { 't', 'e', 'g', 'i', 't', 'e' };
static const symbol s_9_235[4] = { 't', 'e', 'h', 'a' };
static const symbol s_9_236[7] = { 't', 'e', 'h', 'a', 'k', 's', 'e' };
static const symbol s_9_237[5] = { 't', 'e', 'h', 't', 'i' };
static const symbol s_9_238[4] = { 't', 'o', 'o', 'b' };
static const symbol s_9_239[4] = { 't', 'o', 'o', 'd' };
static const symbol s_9_240[5] = { 't', 'o', 'o', 'd', 'i' };
static const symbol s_9_241[5] = { 't', 'o', 'o', 'k', 's' };
static const symbol s_9_242[7] = { 't', 'o', 'o', 'k', 's', 'i', 'd' };
static const symbol s_9_243[8] = { 't', 'o', 'o', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_244[7] = { 't', 'o', 'o', 'k', 's', 'i', 'n' };
static const symbol s_9_245[8] = { 't', 'o', 'o', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_246[5] = { 't', 'o', 'o', 'm', 'a' };
static const symbol s_9_247[7] = { 't', 'o', 'o', 'm', 'a', 't', 'a' };
static const symbol s_9_248[5] = { 't', 'o', 'o', 'm', 'e' };
static const symbol s_9_249[4] = { 't', 'o', 'o', 'n' };
static const symbol s_9_250[5] = { 't', 'o', 'o', 't', 'e' };
static const symbol s_9_251[6] = { 't', 'o', 'o', 'v', 'a', 'd' };
static const symbol s_9_252[4] = { 't', 'u', 'u', 'a' };
static const symbol s_9_253[7] = { 't', 'u', 'u', 'a', 'k', 's', 'e' };
static const symbol s_9_254[4] = { 't', 0xC3, 0xB5, 'i' };
static const symbol s_9_255[5] = { 't', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_9_256[6] = { 't', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_9_257[5] = { 't', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_9_258[6] = { 't', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_9_259[4] = { 'v', 'i', 'i', 'a' };
static const symbol s_9_260[7] = { 'v', 'i', 'i', 'a', 'k', 's', 'e' };
static const symbol s_9_261[4] = { 'v', 'i', 'i', 'b' };
static const symbol s_9_262[4] = { 'v', 'i', 'i', 'd' };
static const symbol s_9_263[5] = { 'v', 'i', 'i', 'd', 'i' };
static const symbol s_9_264[5] = { 'v', 'i', 'i', 'k', 's' };
static const symbol s_9_265[7] = { 'v', 'i', 'i', 'k', 's', 'i', 'd' };
static const symbol s_9_266[8] = { 'v', 'i', 'i', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_267[7] = { 'v', 'i', 'i', 'k', 's', 'i', 'n' };
static const symbol s_9_268[8] = { 'v', 'i', 'i', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_269[5] = { 'v', 'i', 'i', 'm', 'a' };
static const symbol s_9_270[7] = { 'v', 'i', 'i', 'm', 'a', 't', 'a' };
static const symbol s_9_271[5] = { 'v', 'i', 'i', 'm', 'e' };
static const symbol s_9_272[4] = { 'v', 'i', 'i', 'n' };
static const symbol s_9_273[7] = { 'v', 'i', 'i', 's', 'i', 'm', 'e' };
static const symbol s_9_274[6] = { 'v', 'i', 'i', 's', 'i', 'n' };
static const symbol s_9_275[7] = { 'v', 'i', 'i', 's', 'i', 't', 'e' };
static const symbol s_9_276[5] = { 'v', 'i', 'i', 't', 'e' };
static const symbol s_9_277[6] = { 'v', 'i', 'i', 'v', 'a', 'd' };
static const symbol s_9_278[5] = { 'v', 0xC3, 0xB5, 'i', 'b' };
static const symbol s_9_279[5] = { 'v', 0xC3, 0xB5, 'i', 'd' };
static const symbol s_9_280[6] = { 'v', 0xC3, 0xB5, 'i', 'd', 'a' };
static const symbol s_9_281[9] = { 'v', 0xC3, 0xB5, 'i', 'd', 'a', 'k', 's', 'e' };
static const symbol s_9_282[6] = { 'v', 0xC3, 0xB5, 'i', 'd', 'i' };
static const symbol s_9_283[6] = { 'v', 0xC3, 0xB5, 'i', 'k', 's' };
static const symbol s_9_284[8] = { 'v', 0xC3, 0xB5, 'i', 'k', 's', 'i', 'd' };
static const symbol s_9_285[9] = { 'v', 0xC3, 0xB5, 'i', 'k', 's', 'i', 'm', 'e' };
static const symbol s_9_286[8] = { 'v', 0xC3, 0xB5, 'i', 'k', 's', 'i', 'n' };
static const symbol s_9_287[9] = { 'v', 0xC3, 0xB5, 'i', 'k', 's', 'i', 't', 'e' };
static const symbol s_9_288[6] = { 'v', 0xC3, 0xB5, 'i', 'm', 'a' };
static const symbol s_9_289[8] = { 'v', 0xC3, 0xB5, 'i', 'm', 'a', 't', 'a' };
static const symbol s_9_290[6] = { 'v', 0xC3, 0xB5, 'i', 'm', 'e' };
static const symbol s_9_291[5] = { 'v', 0xC3, 0xB5, 'i', 'n' };
static const symbol s_9_292[5] = { 'v', 0xC3, 0xB5, 'i', 's' };
static const symbol s_9_293[6] = { 'v', 0xC3, 0xB5, 'i', 't', 'e' };
static const symbol s_9_294[7] = { 'v', 0xC3, 0xB5, 'i', 'v', 'a', 'd' };

static const struct among a_9[295] =
{
/*  0 */ { 4, s_9_0, -1, 1, 0},
/*  1 */ { 4, s_9_1, -1, 1, 0},
/*  2 */ { 8, s_9_2, 1, 1, 0},
/*  3 */ { 5, s_9_3, -1, 1, 0},
/*  4 */ { 7, s_9_4, 3, 1, 0},
/*  5 */ { 5, s_9_5, -1, 1, 0},
/*  6 */ { 4, s_9_6, -1, 1, 0},
/*  7 */ { 5, s_9_7, -1, 1, 0},
/*  8 */ { 6, s_9_8, -1, 1, 0},
/*  9 */ { 4, s_9_9, -1, 1, 0},
/* 10 */ { 7, s_9_10, 9, 1, 0},
/* 11 */ { 4, s_9_11, -1, 12, 0},
/* 12 */ { 5, s_9_12, 11, 12, 0},
/* 13 */ { 6, s_9_13, 11, 12, 0},
/* 14 */ { 5, s_9_14, 11, 12, 0},
/* 15 */ { 6, s_9_15, 11, 12, 0},
/* 16 */ { 6, s_9_16, -1, 12, 0},
/* 17 */ { 6, s_9_17, -1, 12, 0},
/* 18 */ { 7, s_9_18, 17, 12, 0},
/* 19 */ { 10, s_9_19, 18, 12, 0},
/* 20 */ { 7, s_9_20, 17, 12, 0},
/* 21 */ { 7, s_9_21, -1, 12, 0},
/* 22 */ { 9, s_9_22, 21, 12, 0},
/* 23 */ { 10, s_9_23, 21, 12, 0},
/* 24 */ { 9, s_9_24, 21, 12, 0},
/* 25 */ { 10, s_9_25, 21, 12, 0},
/* 26 */ { 7, s_9_26, -1, 12, 0},
/* 27 */ { 9, s_9_27, 26, 12, 0},
/* 28 */ { 7, s_9_28, -1, 12, 0},
/* 29 */ { 6, s_9_29, -1, 12, 0},
/* 30 */ { 7, s_9_30, -1, 12, 0},
/* 31 */ { 8, s_9_31, -1, 12, 0},
/* 32 */ { 4, s_9_32, -1, 1, 0},
/* 33 */ { 5, s_9_33, 32, 1, 0},
/* 34 */ { 6, s_9_34, 32, 1, 0},
/* 35 */ { 5, s_9_35, 32, 1, 0},
/* 36 */ { 6, s_9_36, 32, 1, 0},
/* 37 */ { 4, s_9_37, -1, 4, 0},
/* 38 */ { 4, s_9_38, -1, 4, 0},
/* 39 */ { 8, s_9_39, 38, 4, 0},
/* 40 */ { 5, s_9_40, -1, 4, 0},
/* 41 */ { 7, s_9_41, 40, 4, 0},
/* 42 */ { 8, s_9_42, 40, 4, 0},
/* 43 */ { 7, s_9_43, 40, 4, 0},
/* 44 */ { 8, s_9_44, 40, 4, 0},
/* 45 */ { 5, s_9_45, -1, 4, 0},
/* 46 */ { 7, s_9_46, 45, 4, 0},
/* 47 */ { 5, s_9_47, -1, 4, 0},
/* 48 */ { 4, s_9_48, -1, 4, 0},
/* 49 */ { 4, s_9_49, -1, 4, 0},
/* 50 */ { 5, s_9_50, -1, 4, 0},
/* 51 */ { 5, s_9_51, -1, 4, 0},
/* 52 */ { 6, s_9_52, -1, 4, 0},
/* 53 */ { 5, s_9_53, -1, 8, 0},
/* 54 */ { 8, s_9_54, 53, 8, 0},
/* 55 */ { 5, s_9_55, -1, 8, 0},
/* 56 */ { 5, s_9_56, -1, 8, 0},
/* 57 */ { 6, s_9_57, 56, 8, 0},
/* 58 */ { 6, s_9_58, -1, 8, 0},
/* 59 */ { 8, s_9_59, 58, 8, 0},
/* 60 */ { 9, s_9_60, 58, 8, 0},
/* 61 */ { 8, s_9_61, 58, 8, 0},
/* 62 */ { 9, s_9_62, 58, 8, 0},
/* 63 */ { 6, s_9_63, -1, 8, 0},
/* 64 */ { 8, s_9_64, 63, 8, 0},
/* 65 */ { 6, s_9_65, -1, 8, 0},
/* 66 */ { 5, s_9_66, -1, 8, 0},
/* 67 */ { 5, s_9_67, -1, 8, 0},
/* 68 */ { 6, s_9_68, -1, 8, 0},
/* 69 */ { 7, s_9_69, -1, 8, 0},
/* 70 */ { 4, s_9_70, -1, 16, 0},
/* 71 */ { 4, s_9_71, -1, 16, 0},
/* 72 */ { 5, s_9_72, -1, 16, 0},
/* 73 */ { 7, s_9_73, 72, 16, 0},
/* 74 */ { 8, s_9_74, 72, 16, 0},
/* 75 */ { 7, s_9_75, 72, 16, 0},
/* 76 */ { 8, s_9_76, 72, 16, 0},
/* 77 */ { 5, s_9_77, -1, 16, 0},
/* 78 */ { 4, s_9_78, -1, 16, 0},
/* 79 */ { 5, s_9_79, -1, 16, 0},
/* 80 */ { 6, s_9_80, -1, 16, 0},
/* 81 */ { 4, s_9_81, -1, 14, 0},
/* 82 */ { 4, s_9_82, -1, 14, 0},
/* 83 */ { 5, s_9_83, -1, 14, 0},
/* 84 */ { 7, s_9_84, 83, 14, 0},
/* 85 */ { 8, s_9_85, 83, 14, 0},
/* 86 */ { 7, s_9_86, 83, 14, 0},
/* 87 */ { 8, s_9_87, 83, 14, 0},
/* 88 */ { 5, s_9_88, -1, 14, 0},
/* 89 */ { 4, s_9_89, -1, 14, 0},
/* 90 */ { 5, s_9_90, -1, 14, 0},
/* 91 */ { 6, s_9_91, -1, 14, 0},
/* 92 */ { 4, s_9_92, -1, 7, 0},
/* 93 */ { 4, s_9_93, -1, 7, 0},
/* 94 */ { 5, s_9_94, 93, 7, 0},
/* 95 */ { 5, s_9_95, -1, 7, 0},
/* 96 */ { 7, s_9_96, 95, 7, 0},
/* 97 */ { 8, s_9_97, 95, 7, 0},
/* 98 */ { 7, s_9_98, 95, 7, 0},
/* 99 */ { 8, s_9_99, 95, 7, 0},
/*100 */ { 5, s_9_100, -1, 7, 0},
/*101 */ { 7, s_9_101, 100, 7, 0},
/*102 */ { 5, s_9_102, -1, 7, 0},
/*103 */ { 4, s_9_103, -1, 7, 0},
/*104 */ { 5, s_9_104, -1, 7, 0},
/*105 */ { 6, s_9_105, -1, 7, 0},
/*106 */ { 4, s_9_106, -1, 7, 0},
/*107 */ { 7, s_9_107, 106, 7, 0},
/*108 */ { 4, s_9_108, -1, 6, 0},
/*109 */ { 5, s_9_109, 108, 6, 0},
/*110 */ { 6, s_9_110, 108, 6, 0},
/*111 */ { 5, s_9_111, 108, 6, 0},
/*112 */ { 6, s_9_112, 108, 6, 0},
/*113 */ { 6, s_9_113, -1, 5, 0},
/*114 */ { 6, s_9_114, -1, 5, 0},
/*115 */ { 10, s_9_115, 114, 5, 0},
/*116 */ { 7, s_9_116, 114, 5, 0},
/*117 */ { 7, s_9_117, -1, 5, 0},
/*118 */ { 9, s_9_118, 117, 5, 0},
/*119 */ { 10, s_9_119, 117, 5, 0},
/*120 */ { 9, s_9_120, 117, 5, 0},
/*121 */ { 10, s_9_121, 117, 5, 0},
/*122 */ { 7, s_9_122, -1, 5, 0},
/*123 */ { 9, s_9_123, 122, 5, 0},
/*124 */ { 7, s_9_124, -1, 5, 0},
/*125 */ { 6, s_9_125, -1, 5, 0},
/*126 */ { 7, s_9_126, -1, 5, 0},
/*127 */ { 8, s_9_127, -1, 5, 0},
/*128 */ { 6, s_9_128, -1, 5, 0},
/*129 */ { 9, s_9_129, 128, 5, 0},
/*130 */ { 6, s_9_130, -1, 13, 0},
/*131 */ { 9, s_9_131, 130, 13, 0},
/*132 */ { 6, s_9_132, -1, 13, 0},
/*133 */ { 6, s_9_133, -1, 13, 0},
/*134 */ { 7, s_9_134, 133, 13, 0},
/*135 */ { 7, s_9_135, -1, 13, 0},
/*136 */ { 9, s_9_136, 135, 13, 0},
/*137 */ { 10, s_9_137, 135, 13, 0},
/*138 */ { 9, s_9_138, 135, 13, 0},
/*139 */ { 10, s_9_139, 135, 13, 0},
/*140 */ { 7, s_9_140, -1, 13, 0},
/*141 */ { 9, s_9_141, 140, 13, 0},
/*142 */ { 7, s_9_142, -1, 13, 0},
/*143 */ { 6, s_9_143, -1, 13, 0},
/*144 */ { 6, s_9_144, -1, 13, 0},
/*145 */ { 7, s_9_145, -1, 13, 0},
/*146 */ { 8, s_9_146, -1, 13, 0},
/*147 */ { 5, s_9_147, -1, 18, 0},
/*148 */ { 5, s_9_148, -1, 18, 0},
/*149 */ { 6, s_9_149, -1, 18, 0},
/*150 */ { 8, s_9_150, 149, 18, 0},
/*151 */ { 9, s_9_151, 149, 18, 0},
/*152 */ { 8, s_9_152, 149, 18, 0},
/*153 */ { 9, s_9_153, 149, 18, 0},
/*154 */ { 6, s_9_154, -1, 18, 0},
/*155 */ { 5, s_9_155, -1, 18, 0},
/*156 */ { 6, s_9_156, -1, 18, 0},
/*157 */ { 7, s_9_157, -1, 18, 0},
/*158 */ { 7, s_9_158, -1, 18, 0},
/*159 */ { 9, s_9_159, 158, 18, 0},
/*160 */ { 5, s_9_160, -1, 18, 0},
/*161 */ { 8, s_9_161, 160, 18, 0},
/*162 */ { 6, s_9_162, -1, 18, 0},
/*163 */ { 5, s_9_163, -1, 15, 0},
/*164 */ { 5, s_9_164, -1, 15, 0},
/*165 */ { 6, s_9_165, -1, 15, 0},
/*166 */ { 8, s_9_166, 165, 15, 0},
/*167 */ { 9, s_9_167, 165, 15, 0},
/*168 */ { 8, s_9_168, 165, 15, 0},
/*169 */ { 9, s_9_169, 165, 15, 0},
/*170 */ { 6, s_9_170, -1, 15, 0},
/*171 */ { 5, s_9_171, -1, 15, 0},
/*172 */ { 6, s_9_172, -1, 15, 0},
/*173 */ { 7, s_9_173, -1, 15, 0},
/*174 */ { 4, s_9_174, -1, 2, 0},
/*175 */ { 4, s_9_175, -1, 2, 0},
/*176 */ { 5, s_9_176, 175, 2, 0},
/*177 */ { 8, s_9_177, 176, 2, 0},
/*178 */ { 5, s_9_178, 175, 2, 0},
/*179 */ { 5, s_9_179, -1, 2, 0},
/*180 */ { 7, s_9_180, 179, 2, 0},
/*181 */ { 8, s_9_181, 179, 2, 0},
/*182 */ { 7, s_9_182, 179, 2, 0},
/*183 */ { 8, s_9_183, 179, 2, 0},
/*184 */ { 5, s_9_184, -1, 2, 0},
/*185 */ { 7, s_9_185, 184, 2, 0},
/*186 */ { 5, s_9_186, -1, 2, 0},
/*187 */ { 4, s_9_187, -1, 2, 0},
/*188 */ { 5, s_9_188, -1, 2, 0},
/*189 */ { 6, s_9_189, -1, 2, 0},
/*190 */ { 3, s_9_190, -1, 2, 0},
/*191 */ { 4, s_9_191, 190, 2, 0},
/*192 */ { 5, s_9_192, 190, 2, 0},
/*193 */ { 4, s_9_193, 190, 2, 0},
/*194 */ { 5, s_9_194, 190, 2, 0},
/*195 */ { 4, s_9_195, -1, 9, 0},
/*196 */ { 5, s_9_196, 195, 9, 0},
/*197 */ { 6, s_9_197, 195, 9, 0},
/*198 */ { 5, s_9_198, 195, 9, 0},
/*199 */ { 6, s_9_199, 195, 9, 0},
/*200 */ { 6, s_9_200, -1, 9, 0},
/*201 */ { 6, s_9_201, -1, 9, 0},
/*202 */ { 10, s_9_202, 201, 9, 0},
/*203 */ { 7, s_9_203, 201, 9, 0},
/*204 */ { 7, s_9_204, -1, 9, 0},
/*205 */ { 9, s_9_205, 204, 9, 0},
/*206 */ { 10, s_9_206, 204, 9, 0},
/*207 */ { 9, s_9_207, 204, 9, 0},
/*208 */ { 10, s_9_208, 204, 9, 0},
/*209 */ { 7, s_9_209, -1, 9, 0},
/*210 */ { 9, s_9_210, 209, 9, 0},
/*211 */ { 7, s_9_211, -1, 9, 0},
/*212 */ { 6, s_9_212, -1, 9, 0},
/*213 */ { 7, s_9_213, -1, 9, 0},
/*214 */ { 8, s_9_214, -1, 9, 0},
/*215 */ { 6, s_9_215, -1, 9, 0},
/*216 */ { 9, s_9_216, 215, 9, 0},
/*217 */ { 4, s_9_217, -1, 17, 0},
/*218 */ { 4, s_9_218, -1, 17, 0},
/*219 */ { 5, s_9_219, -1, 17, 0},
/*220 */ { 7, s_9_220, 219, 17, 0},
/*221 */ { 8, s_9_221, 219, 17, 0},
/*222 */ { 7, s_9_222, 219, 17, 0},
/*223 */ { 8, s_9_223, 219, 17, 0},
/*224 */ { 5, s_9_224, -1, 17, 0},
/*225 */ { 4, s_9_225, -1, 17, 0},
/*226 */ { 5, s_9_226, -1, 17, 0},
/*227 */ { 6, s_9_227, -1, 17, 0},
/*228 */ { 6, s_9_228, -1, 17, 0},
/*229 */ { 8, s_9_229, 228, 17, 0},
/*230 */ { 4, s_9_230, -1, 17, 0},
/*231 */ { 5, s_9_231, 230, 17, 0},
/*232 */ { 6, s_9_232, 230, 17, 0},
/*233 */ { 5, s_9_233, 230, 17, 0},
/*234 */ { 6, s_9_234, 230, 17, 0},
/*235 */ { 4, s_9_235, -1, 17, 0},
/*236 */ { 7, s_9_236, 235, 17, 0},
/*237 */ { 5, s_9_237, -1, 17, 0},
/*238 */ { 4, s_9_238, -1, 10, 0},
/*239 */ { 4, s_9_239, -1, 10, 0},
/*240 */ { 5, s_9_240, 239, 10, 0},
/*241 */ { 5, s_9_241, -1, 10, 0},
/*242 */ { 7, s_9_242, 241, 10, 0},
/*243 */ { 8, s_9_243, 241, 10, 0},
/*244 */ { 7, s_9_244, 241, 10, 0},
/*245 */ { 8, s_9_245, 241, 10, 0},
/*246 */ { 5, s_9_246, -1, 10, 0},
/*247 */ { 7, s_9_247, 246, 10, 0},
/*248 */ { 5, s_9_248, -1, 10, 0},
/*249 */ { 4, s_9_249, -1, 10, 0},
/*250 */ { 5, s_9_250, -1, 10, 0},
/*251 */ { 6, s_9_251, -1, 10, 0},
/*252 */ { 4, s_9_252, -1, 10, 0},
/*253 */ { 7, s_9_253, 252, 10, 0},
/*254 */ { 4, s_9_254, -1, 10, 0},
/*255 */ { 5, s_9_255, 254, 10, 0},
/*256 */ { 6, s_9_256, 254, 10, 0},
/*257 */ { 5, s_9_257, 254, 10, 0},
/*258 */ { 6, s_9_258, 254, 10, 0},
/*259 */ { 4, s_9_259, -1, 3, 0},
/*260 */ { 7, s_9_260, 259, 3, 0},
/*261 */ { 4, s_9_261, -1, 3, 0},
/*262 */ { 4, s_9_262, -1, 3, 0},
/*263 */ { 5, s_9_263, 262, 3, 0},
/*264 */ { 5, s_9_264, -1, 3, 0},
/*265 */ { 7, s_9_265, 264, 3, 0},
/*266 */ { 8, s_9_266, 264, 3, 0},
/*267 */ { 7, s_9_267, 264, 3, 0},
/*268 */ { 8, s_9_268, 264, 3, 0},
/*269 */ { 5, s_9_269, -1, 3, 0},
/*270 */ { 7, s_9_270, 269, 3, 0},
/*271 */ { 5, s_9_271, -1, 3, 0},
/*272 */ { 4, s_9_272, -1, 3, 0},
/*273 */ { 7, s_9_273, -1, 3, 0},
/*274 */ { 6, s_9_274, -1, 3, 0},
/*275 */ { 7, s_9_275, -1, 3, 0},
/*276 */ { 5, s_9_276, -1, 3, 0},
/*277 */ { 6, s_9_277, -1, 3, 0},
/*278 */ { 5, s_9_278, -1, 11, 0},
/*279 */ { 5, s_9_279, -1, 11, 0},
/*280 */ { 6, s_9_280, 279, 11, 0},
/*281 */ { 9, s_9_281, 280, 11, 0},
/*282 */ { 6, s_9_282, 279, 11, 0},
/*283 */ { 6, s_9_283, -1, 11, 0},
/*284 */ { 8, s_9_284, 283, 11, 0},
/*285 */ { 9, s_9_285, 283, 11, 0},
/*286 */ { 8, s_9_286, 283, 11, 0},
/*287 */ { 9, s_9_287, 283, 11, 0},
/*288 */ { 6, s_9_288, -1, 11, 0},
/*289 */ { 8, s_9_289, 288, 11, 0},
/*290 */ { 6, s_9_290, -1, 11, 0},
/*291 */ { 5, s_9_291, -1, 11, 0},
/*292 */ { 5, s_9_292, -1, 11, 0},
/*293 */ { 6, s_9_293, -1, 11, 0},
/*294 */ { 7, s_9_294, -1, 11, 0}
};

static const unsigned char g_V1[] = { 17, 65, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 48, 8 };

static const unsigned char g_RV[] = { 17, 65, 16 };

static const unsigned char g_alphabet[] = { 255, 255, 255, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 48, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 32 };

static const unsigned char g_KI[] = { 117, 66, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 16 };

static const unsigned char g_GI[] = { 21, 123, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 48, 8 };

static const symbol s_0[] = { 0xC3, 0xA4, 'r' };
static const symbol s_1[] = { 'k' };
static const symbol s_2[] = { 'a' };
static const symbol s_3[] = { 'i', 'k', 'u' };
static const symbol s_4[] = { 't' };
static const symbol s_5[] = { 'j', 'o', 'o' };
static const symbol s_6[] = { 's', 'a', 'a' };
static const symbol s_7[] = { 'v', 'i', 'i', 'm', 'a' };
static const symbol s_8[] = { 'k', 'e', 'e', 's', 'i' };
static const symbol s_9[] = { 'l', 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_10[] = { 'l', 0xC3, 0xB6, 'i' };
static const symbol s_11[] = { 'l', 'o', 'o' };
static const symbol s_12[] = { 'k', 0xC3, 0xA4, 'i', 's', 'i' };
static const symbol s_13[] = { 's', 0xC3, 0xB6, 0xC3, 0xB6 };
static const symbol s_14[] = { 't', 'o', 'o' };
static const symbol s_15[] = { 'v', 0xC3, 0xB5, 'i', 's', 'i' };
static const symbol s_16[] = { 'j', 0xC3, 0xA4, 0xC3, 0xA4, 'm', 'a' };
static const symbol s_17[] = { 'm', 0xC3, 0xBC, 0xC3, 0xBC, 's', 'i' };
static const symbol s_18[] = { 'l', 'u', 'g', 'e' };
static const symbol s_19[] = { 'p', 0xC3, 0xB5, 'd', 'e' };
static const symbol s_20[] = { 'l', 'a', 'd', 'u' };
static const symbol s_21[] = { 't', 'e', 'g', 'e', 'm', 'a' };
static const symbol s_22[] = { 'n', 0xC3, 0xA4, 'g', 'i' };

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
            if (!(eq_s_b(z, 3, s_0))) return 0; /* literal, line 55 */
            {   int m5 = z->l - z->c; (void)m5; /* or, line 55 */
                {   int ret = slice_from_s(z, 1, s_1); /* <-, line 55 */
                    if (ret < 0) return ret;
                }
                goto lab1;
                z->c = z->l - m5;
                if (in_grouping_b_U(z, g_KI, 98, 382, 0)) return 0; /* grouping KI, line 55 */
            }
        lab1:
            {   int ret = slice_del(z); /* delete, line 55 */
                if (ret < 0) return ret;
            }
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

static int r_case_ending(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 92 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 92 */
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1576994 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 92 */
        if (!(find_among_b(z, a_4, 10))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 92 */
        z->lb = mlimit1;
    }
    if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 94 */
    {   int ret = slice_del(z); /* delete, line 112 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_plural_three_first_cases(struct SN_env * z) { /* backwardmode */
    int among_var;

    {   int mlimit1; /* setlimit, line 117 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 117 */
        if (z->c <= z->lb || (z->p[z->c - 1] != 100 && z->p[z->c - 1] != 101)) { z->lb = mlimit1; return 0; } /* substring, line 117 */
        among_var = find_among_b(z, a_5, 7);
        if (!(among_var)) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 117 */
        z->lb = mlimit1;
    }
    switch (among_var) { /* among, line 118 */
        case 1:
            {   int ret = slice_from_s(z, 3, s_3); /* <-, line 119 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m2 = z->l - z->c; (void)m2; /* not, line 122 */
                {   int ret = r_LONGV(z); /* call LONGV, line 122 */
                    if (ret == 0) goto lab0;
                    if (ret < 0) return ret;
                }
                return 0;
            lab0:
                z->c = z->l - m2;
            }
            {   int ret = slice_del(z); /* delete, line 122 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int m3 = z->l - z->c; (void)m3; /* or, line 123 */
                {   int m_test4 = z->l - z->c; /* test, line 123 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 4); /* hop, line 123 */
                        if (ret < 0) goto lab2;
                        z->c = ret;
                    }
                    z->c = z->l - m_test4;
                }
                {   int m5 = z->l - z->c; (void)m5; /* not, line 123 */
                    if (z->c <= z->lb || z->p[z->c - 1] != 't') goto lab3; /* literal, line 123 */
                    z->c--;
                    goto lab2;
                lab3:
                    z->c = z->l - m5;
                }
                {   int ret = slice_del(z); /* delete, line 123 */
                    if (ret < 0) return ret;
                }
                goto lab1;
            lab2:
                z->c = z->l - m3;
                {   int m6 = z->l - z->c; (void)m6; /* not, line 123 */
                    if (z->c <= z->lb || z->p[z->c - 1] != 't') goto lab4; /* literal, line 123 */
                    z->c--;
                    return 0;
                lab4:
                    z->c = z->l - m6;
                }
                {   int ret = slice_from_s(z, 1, s_4); /* <-, line 123 */
                    if (ret < 0) return ret;
                }
            }
        lab1:
            break;
        case 4:
            if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 124 */
            {   int ret = slice_del(z); /* delete, line 124 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_double(struct SN_env * z) { /* backwardmode */
    {   int m_test1 = z->l - z->c; /* test, line 130 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1116160 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0; /* among, line 130 */
        if (!(find_among_b(z, a_6, 3))) return 0;
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
        if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 97 && z->p[z->c - 1] != 117)) { z->lb = mlimit1; return 0; } /* substring, line 138 */
        if (!(find_among_b(z, a_7, 4))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 138 */
        z->lb = mlimit1;
    }
    {   int ret = slice_del(z); /* delete, line 145 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_remove_double_kpt(struct SN_env * z) { /* backwardmode */
    if (in_grouping_b_U(z, g_V1, 97, 252, 0)) return 0; /* grouping V1, line 149 */
    {   int m1 = z->l - z->c; (void)m1; /* and, line 150 */
        {   int ret = r_double(z); /* call double, line 149 */
            if (ret <= 0) return ret;
        }
        z->c = z->l - m1;
        {   int ret = r_undouble(z); /* call undouble, line 150 */
            if (ret <= 0) return ret;
        }
    }
    return 1;
}

static int r_degrees(struct SN_env * z) { /* backwardmode */

    {   int mlimit1; /* setlimit, line 154 */
        if (z->c < z->I[0]) return 0;
        mlimit1 = z->lb; z->lb = z->I[0];
        z->ket = z->c; /* [, line 154 */
        if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((8706 >> (z->p[z->c - 1] & 0x1f)) & 1)) { z->lb = mlimit1; return 0; } /* substring, line 154 */
        if (!(find_among_b(z, a_8, 3))) { z->lb = mlimit1; return 0; }
        z->bra = z->c; /* ], line 154 */
        z->lb = mlimit1;
    }
    if (in_grouping_b_U(z, g_RV, 97, 117, 0)) return 0; /* grouping RV, line 156 */
    {   int ret = slice_del(z); /* delete, line 160 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_substantive(struct SN_env * z) { /* backwardmode */
    {   int m1 = z->l - z->c; (void)m1; /* do, line 164 */
        {   int ret = r_case_ending(z); /* call case_ending, line 164 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    {   int m2 = z->l - z->c; (void)m2; /* do, line 165 */
        {   int ret = r_plural_three_first_cases(z); /* call plural_three_first_cases, line 165 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    {   int m3 = z->l - z->c; (void)m3; /* do, line 166 */
        {   int ret = r_degrees(z); /* call degrees, line 166 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* do, line 167 */
        {   int ret = r_i_plural(z); /* call i_plural, line 167 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m4;
    }
    {   int m5 = z->l - z->c; (void)m5; /* do, line 168 */
        {   int ret = r_nu(z); /* call nu, line 168 */
            if (ret == 0) goto lab4;
            if (ret < 0) return ret;
        }
    lab4:
        z->c = z->l - m5;
    }
    return 1;
}

static int r_verb_exceptions(struct SN_env * z) { /* forwardmode */
    int among_var;
    z->bra = z->c; /* [, line 174 */
    among_var = find_among(z, a_9, 295); /* substring, line 174 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 174 */
    if (z->c < z->l) return 0; /* atlimit, line 174 */
    switch (among_var) { /* among, line 175 */
        case 1:
            {   int ret = slice_from_s(z, 3, s_5); /* <-, line 176 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 3, s_6); /* <-, line 180 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 5, s_7); /* <-, line 184 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 5, s_8); /* <-, line 188 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 5, s_9); /* <-, line 191 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 4, s_10); /* <-, line 194 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 3, s_11); /* <-, line 195 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 6, s_12); /* <-, line 198 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 5, s_13); /* <-, line 201 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 3, s_14); /* <-, line 205 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 6, s_15); /* <-, line 209 */
                if (ret < 0) return ret;
            }
            break;
        case 12:
            {   int ret = slice_from_s(z, 7, s_16); /* <-, line 212 */
                if (ret < 0) return ret;
            }
            break;
        case 13:
            {   int ret = slice_from_s(z, 7, s_17); /* <-, line 216 */
                if (ret < 0) return ret;
            }
            break;
        case 14:
            {   int ret = slice_from_s(z, 4, s_18); /* <-, line 219 */
                if (ret < 0) return ret;
            }
            break;
        case 15:
            {   int ret = slice_from_s(z, 5, s_19); /* <-, line 221 */
                if (ret < 0) return ret;
            }
            break;
        case 16:
            {   int ret = slice_from_s(z, 4, s_20); /* <-, line 223 */
                if (ret < 0) return ret;
            }
            break;
        case 17:
            {   int ret = slice_from_s(z, 6, s_21); /* <-, line 225 */
                if (ret < 0) return ret;
            }
            break;
        case 18:
            {   int ret = slice_from_s(z, 5, s_22); /* <-, line 229 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int H_stem(struct SN_env * z) { /* forwardmode */
    {   int c1 = z->c; /* do, line 239 */
        {   int ret = r_mark_regions(z); /* call mark_regions, line 239 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    {   int c2 = z->c; /* not, line 240 */
        {   int ret = r_verb_exceptions(z); /* call verb_exceptions, line 240 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
        return 0;
    lab1:
        z->c = c2;
    }
    z->B[0] = 0; /* unset is_verb, line 241 */
    z->lb = z->c; z->c = z->l; /* backwards, line 242 */

    {   int m3 = z->l - z->c; (void)m3; /* do, line 243 */
        {   int ret = r_emphasis(z); /* call emphasis, line 243 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* do, line 244 */
        {   int ret = r_verb(z); /* call verb, line 244 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m4;
    }
    {   int m5 = z->l - z->c; (void)m5; /* try, line 245 */
        /* not, line 245 */
        if (!(z->B[0])) goto lab5; /* Boolean test is_verb, line 245 */
        { z->c = z->l - m5; goto lab4; }
    lab5:
        /* do, line 245 */
        {   int ret = r_substantive(z); /* call substantive, line 245 */
            if (ret == 0) goto lab6;
            if (ret < 0) return ret;
        }
    lab6:
    lab4:
        ;
    }
    {   int m6 = z->l - z->c; (void)m6; /* do, line 246 */
        {   int ret = r_remove_double_kpt(z); /* call remove_double_kpt, line 246 */
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

