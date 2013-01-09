/*
   'md5.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
*/
#include"cobf.h"
#ifdef _WIN32
#if defined( UNDER_CE) && defined( bb354) || ! defined( bb336)
#define bb331 1
#define bb357 1
#else
#define bb349 bb343
#define bb356 1
#define bb338 1
#endif
#define bb342 1
#include"uncobf.h"
#include<ndis.h>
#include"cobf.h"
#ifdef UNDER_CE
#include"uncobf.h"
#include<ndiswan.h>
#include"cobf.h"
#endif
#include"uncobf.h"
#include<stdio.h>
#include<basetsd.h>
#include"cobf.h"
bba bbs bbl bbf, *bb1;bba bbs bbe bbq, *bb93;bba bb135 bb123, *bb330;
bba bbs bbl bb39, *bb72;bba bbs bb135 bbk, *bb59;bba bbe bbu, *bb134;
bba bbh bbf*bb89;
#ifdef bb308
bba bbd bb60, *bb122;
#endif
#else
#include"uncobf.h"
#include<linux/module.h>
#include<linux/ctype.h>
#include<linux/time.h>
#include<linux/slab.h>
#include"cobf.h"
#ifndef bb112
#define bb112
#ifdef _WIN32
#include"uncobf.h"
#include<wtypes.h>
#include"cobf.h"
#else
#ifdef bb115
#include"uncobf.h"
#include<linux/types.h>
#include"cobf.h"
#else
#include"uncobf.h"
#include<stddef.h>
#include<sys/types.h>
#include"cobf.h"
#endif
#endif
#ifdef _WIN32
bba bb118 bb285;
#else
bba bbe bbu, *bb134, *bb214;
#define bb201 1
#define bb202 0
bba bb221 bb287, *bb278, *bb292;bba bbe bb286, *bb241, *bb232;bba bbs
bbq, *bb93, *bb233;bba bb5 bb280, *bb283;bba bbs bb5 bb226, *bb235;
bba bb5 bb111, *bb281;bba bbs bb5 bb63, *bb251;bba bb63 bb282, *bb255
;bba bb63 bb275, *bb262;bba bb111 bb118, *bb219;bba bb273 bb288;bba
bb254 bb123;bba bb210 bb83;bba bb113 bb114;bba bb113 bb250;
#ifdef bb259
bba bb209 bb39, *bb72;bba bb291 bbk, *bb59;bba bb256 bbd, *bb28;bba
bb236 bb56, *bb117;
#else
bba bb272 bb39, *bb72;bba bb212 bbk, *bb59;bba bb271 bbd, *bb28;bba
bb243 bb56, *bb117;
#endif
bba bb39 bbf, *bb1, *bb206;bba bbk bb274, *bb246, *bb215;bba bbk bb263
, *bb268, *bb234;bba bbd bb60, *bb122, *bb220;bba bb83 bb37, *bb249, *
bb207;bba bbd bb230, *bb218, *bb248;bba bb114 bb264, *bb253, *bb266;
bba bb56 bb279, *bb239, *bb284;
#define bb142 bbb
bba bbb*bb231, *bb76;bba bbh bbb*bb269;bba bbl bb276;bba bbl*bb240;
bba bbh bbl*bb82;
#if defined( bb115)
bba bbe bb120;
#endif
bba bb120 bb19;bba bb19*bb289;bba bbh bb19*bb187;
#if defined( bb247) || defined( bb265)
bba bb19 bb36;bba bb19 bb116;
#else
bba bbl bb36;bba bbs bbl bb116;
#endif
bba bbh bb36*bb223;bba bb36*bb224;bba bb60 bb229, *bb290;bba bbb*
bb105;bba bb105*bb208;
#define bb228( bb34) bbi bb34##__ { bbe bb260; }; bba bbi bb34##__  * \
 bb34
bba bbi{bb37 bb188,bb245,bb244,bb237;}bb277, *bb270, *bb242;bba bbi{
bb37 bb8,bb192;}bb211, *bb217, *bb261;bba bbi{bb37 bb227,bb257;}bb216
, *bb238, *bb225;
#endif
bba bbh bbf*bb89;
#endif
bba bbf bb101;
#define IN
#define OUT
#ifdef _DEBUG
#define bb139( bbc) bb31( bbc)
#else
#define bb139( bbc) ( bbb)( bbc)
#endif
bba bbe bb160, *bb173;
#define bb205 0
#define bb315 1
#define bb299 2
#define bb319 3
#define bb345 4
bba bbe bb353;bba bbb*bb121;
#endif
#ifdef _WIN32
#ifndef UNDER_CE
#define bb30 bb339
#define bb43 bb346
bba bbs bb5 bb30;bba bb5 bb43;
#endif
#else
#endif
#ifdef _WIN32
bbb*bb127(bb30 bb47);bbb bb106(bbb* );bbb*bb137(bb30 bb159,bb30 bb47);
#else
#define bb127( bbc) bb146(1, bbc, bb140)
#define bb106( bbc) bb332( bbc)
#define bb137( bbc, bbn) bb146( bbc, bbn, bb140)
#endif
#ifdef _WIN32
#define bb31( bbc) bb334( bbc)
#else
#ifdef _DEBUG
bbe bb145(bbh bbl*bb97,bbh bbl*bb25,bbs bb258);
#define bb31( bbc) ( bbb)(( bbc) || ( bb145(# bbc, __FILE__, __LINE__ \
)))
#else
#define bb31( bbc) (( bbb)0)
#endif
#endif
bb43 bb300(bb43*bb323);
#ifndef _WIN32
bbe bb326(bbh bbl*bbg);bbe bb320(bbh bbl*bb20,...);
#endif
#ifdef _WIN32
bba bb337 bb95;
#define bb141( bbc) bb352( bbc)
#define bb144( bbc) bb350( bbc)
#define bb133( bbc) bb355( bbc)
#define bb132( bbc) bb333( bbc)
#else
bba bb347 bb95;
#define bb141( bbc) ( bbb)(  *  bbc = bb329( bbc))
#define bb144( bbc) (( bbb)0)
#define bb133( bbc) bb358( bbc)
#define bb132( bbc) bb348( bbc)
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbi{bbd bb10;bbd bb23[4 ];bbf bb102[64 ];}bb524;bbb bb1816(bb524*
bbj);bbb bb1305(bb524*bbj,bbh bbb*bb498,bbq bb10);bbb bb1819(bb524*
bbj,bbb*bb14);bbb bb1851(bbb*bb14,bbh bbb*bb6,bbq bb10);bbb bb1963(
bbb*bb14,bb82 bb6);
#ifdef __cplusplus
}
#endif
bb40 bbb bb1251(bbd bb23[4 ],bbh bbf bb97[64 ]){bb40 bbd bb3[64 ]={
0xd76aa478 ,0xe8c7b756 ,0x242070db ,0xc1bdceee ,0xf57c0faf ,0x4787c62a ,
0xa8304613 ,0xfd469501 ,0x698098d8 ,0x8b44f7af ,0xffff5bb1 ,0x895cd7be ,
0x6b901122 ,0xfd987193 ,0xa679438e ,0x49b40821 ,0xf61e2562 ,0xc040b340 ,
0x265e5a51 ,0xe9b6c7aa ,0xd62f105d ,0x02441453 ,0xd8a1e681 ,0xe7d3fbc8 ,
0x21e1cde6 ,0xc33707d6 ,0xf4d50d87 ,0x455a14ed ,0xa9e3e905 ,0xfcefa3f8 ,
0x676f02d9 ,0x8d2a4c8a ,0xfffa3942 ,0x8771f681 ,0x6d9d6122 ,0xfde5380c ,
0xa4beea44 ,0x4bdecfa9 ,0xf6bb4b60 ,0xbebfbc70 ,0x289b7ec6 ,0xeaa127fa ,
0xd4ef3085 ,0x04881d05 ,0xd9d4d039 ,0xe6db99e5 ,0x1fa27cf8 ,0xc4ac5665 ,
0xf4292244 ,0x432aff97 ,0xab9423a7 ,0xfc93a039 ,0x655b59c3 ,0x8f0ccc92 ,
0xffeff47d ,0x85845dd1 ,0x6fa87e4f ,0xfe2ce6e0 ,0xa3014314 ,0x4e0811a1 ,
0xf7537e82 ,0xbd3af235 ,0x2ad7d2bb ,0xeb86d391 ,};bb31(bb11(bbe)>=4 );{bbd
bbc=bb23[0 ],bbn=bb23[1 ],bbo=bb23[2 ],bbt=bb23[3 ],bb8;bbd bbv[16 ],bbz;
bb91(bbz=0 ;bbz<16 ;bbz++,bb97+=4 )bbv[bbz]=(bb97[0 ]|bb97[1 ]<<8 |bb97[2 ]
<<16 |bb97[3 ]<<24 );bb8=bbc+(bbn&bbo|~bbn&bbt)+bb3[0 ]+bbv[(0 )];bbc=bbn+
((bb8)<<(7 )|(bb8)>>(32 -7 ));bb8=bbt+(bbc&bbn|~bbc&bbo)+bb3[0 +1 ]+bbv[(0
+1 )];bbt=bbc+((bb8)<<(12 )|(bb8)>>(32 -12 ));bb8=bbo+(bbt&bbc|~bbt&bbn)+
bb3[0 +2 ]+bbv[(0 +2 )];bbo=bbt+((bb8)<<(17 )|(bb8)>>(32 -17 ));bb8=bbn+(bbo
&bbt|~bbo&bbc)+bb3[0 +3 ]+bbv[(0 +3 )];bbn=bbo+((bb8)<<(22 )|(bb8)>>(32 -22
));bb8=bbc+(bbn&bbo|~bbn&bbt)+bb3[0 +4 ]+bbv[(0 +4 )];bbc=bbn+((bb8)<<(7 )|
(bb8)>>(32 -7 ));bb8=bbt+(bbc&bbn|~bbc&bbo)+bb3[0 +4 +1 ]+bbv[(0 +4 +1 )];bbt
=bbc+((bb8)<<(12 )|(bb8)>>(32 -12 ));bb8=bbo+(bbt&bbc|~bbt&bbn)+bb3[0 +4 +
2 ]+bbv[(0 +4 +2 )];bbo=bbt+((bb8)<<(17 )|(bb8)>>(32 -17 ));bb8=bbn+(bbo&bbt
|~bbo&bbc)+bb3[0 +4 +3 ]+bbv[(0 +4 +3 )];bbn=bbo+((bb8)<<(22 )|(bb8)>>(32 -22
));bb8=bbc+(bbn&bbo|~bbn&bbt)+bb3[0 +8 ]+bbv[(0 +8 )];bbc=bbn+((bb8)<<(7 )|
(bb8)>>(32 -7 ));bb8=bbt+(bbc&bbn|~bbc&bbo)+bb3[0 +8 +1 ]+bbv[(0 +8 +1 )];bbt
=bbc+((bb8)<<(12 )|(bb8)>>(32 -12 ));bb8=bbo+(bbt&bbc|~bbt&bbn)+bb3[0 +8 +
2 ]+bbv[(0 +8 +2 )];bbo=bbt+((bb8)<<(17 )|(bb8)>>(32 -17 ));bb8=bbn+(bbo&bbt
|~bbo&bbc)+bb3[0 +8 +3 ]+bbv[(0 +8 +3 )];bbn=bbo+((bb8)<<(22 )|(bb8)>>(32 -22
));bb8=bbc+(bbn&bbo|~bbn&bbt)+bb3[0 +12 ]+bbv[(0 +12 )];bbc=bbn+((bb8)<<(
7 )|(bb8)>>(32 -7 ));bb8=bbt+(bbc&bbn|~bbc&bbo)+bb3[0 +12 +1 ]+bbv[(0 +12 +1 )]
;bbt=bbc+((bb8)<<(12 )|(bb8)>>(32 -12 ));bb8=bbo+(bbt&bbc|~bbt&bbn)+bb3[
0 +12 +2 ]+bbv[(0 +12 +2 )];bbo=bbt+((bb8)<<(17 )|(bb8)>>(32 -17 ));bb8=bbn+(
bbo&bbt|~bbo&bbc)+bb3[0 +12 +3 ]+bbv[(0 +12 +3 )];bbn=bbo+((bb8)<<(22 )|(bb8
)>>(32 -22 ));bb8=bbc+(bbt&bbn|~bbt&bbo)+bb3[16 ]+bbv[(5 * (16 )+1 )%16 ];
bbc=bbn+((bb8)<<(5 )|(bb8)>>(32 -5 ));bb8=bbt+(bbo&bbc|~bbo&bbn)+bb3[16 +
1 ]+bbv[(5 * (16 +1 )+1 )%16 ];bbt=bbc+((bb8)<<(9 )|(bb8)>>(32 -9 ));bb8=bbo+(
bbn&bbt|~bbn&bbc)+bb3[16 +2 ]+bbv[(5 * (16 +2 )+1 )%16 ];bbo=bbt+((bb8)<<(14
)|(bb8)>>(32 -14 ));bb8=bbn+(bbc&bbo|~bbc&bbt)+bb3[16 +3 ]+bbv[(5 * (16 +3 )+
1 )%16 ];bbn=bbo+((bb8)<<(20 )|(bb8)>>(32 -20 ));bb8=bbc+(bbt&bbn|~bbt&bbo
)+bb3[16 +4 ]+bbv[(5 * (16 +4 )+1 )%16 ];bbc=bbn+((bb8)<<(5 )|(bb8)>>(32 -5 ));
bb8=bbt+(bbo&bbc|~bbo&bbn)+bb3[16 +4 +1 ]+bbv[(5 * (16 +4 +1 )+1 )%16 ];bbt=
bbc+((bb8)<<(9 )|(bb8)>>(32 -9 ));bb8=bbo+(bbn&bbt|~bbn&bbc)+bb3[16 +4 +2 ]
+bbv[(5 * (16 +4 +2 )+1 )%16 ];bbo=bbt+((bb8)<<(14 )|(bb8)>>(32 -14 ));bb8=bbn
+(bbc&bbo|~bbc&bbt)+bb3[16 +4 +3 ]+bbv[(5 * (16 +4 +3 )+1 )%16 ];bbn=bbo+((bb8
)<<(20 )|(bb8)>>(32 -20 ));bb8=bbc+(bbt&bbn|~bbt&bbo)+bb3[16 +8 ]+bbv[(5 * (
16 +8 )+1 )%16 ];bbc=bbn+((bb8)<<(5 )|(bb8)>>(32 -5 ));bb8=bbt+(bbo&bbc|~bbo
&bbn)+bb3[16 +8 +1 ]+bbv[(5 * (16 +8 +1 )+1 )%16 ];bbt=bbc+((bb8)<<(9 )|(bb8)>>
(32 -9 ));bb8=bbo+(bbn&bbt|~bbn&bbc)+bb3[16 +8 +2 ]+bbv[(5 * (16 +8 +2 )+1 )%16
];bbo=bbt+((bb8)<<(14 )|(bb8)>>(32 -14 ));bb8=bbn+(bbc&bbo|~bbc&bbt)+bb3
[16 +8 +3 ]+bbv[(5 * (16 +8 +3 )+1 )%16 ];bbn=bbo+((bb8)<<(20 )|(bb8)>>(32 -20 ));
bb8=bbc+(bbt&bbn|~bbt&bbo)+bb3[16 +12 ]+bbv[(5 * (16 +12 )+1 )%16 ];bbc=bbn+
((bb8)<<(5 )|(bb8)>>(32 -5 ));bb8=bbt+(bbo&bbc|~bbo&bbn)+bb3[16 +12 +1 ]+
bbv[(5 * (16 +12 +1 )+1 )%16 ];bbt=bbc+((bb8)<<(9 )|(bb8)>>(32 -9 ));bb8=bbo+(
bbn&bbt|~bbn&bbc)+bb3[16 +12 +2 ]+bbv[(5 * (16 +12 +2 )+1 )%16 ];bbo=bbt+((bb8
)<<(14 )|(bb8)>>(32 -14 ));bb8=bbn+(bbc&bbo|~bbc&bbt)+bb3[16 +12 +3 ]+bbv[(
5 * (16 +12 +3 )+1 )%16 ];bbn=bbo+((bb8)<<(20 )|(bb8)>>(32 -20 ));bb8=bbc+(bbn
^bbo^bbt)+bb3[32 ]+bbv[(3 * (32 )+5 )%16 ];bbc=bbn+((bb8)<<(4 )|(bb8)>>(32 -
4 ));bb8=bbt+(bbc^bbn^bbo)+bb3[32 +1 ]+bbv[(3 * (32 +1 )+5 )%16 ];bbt=bbc+((
bb8)<<(11 )|(bb8)>>(32 -11 ));bb8=bbo+(bbt^bbc^bbn)+bb3[32 +2 ]+bbv[(3 * (
32 +2 )+5 )%16 ];bbo=bbt+((bb8)<<(16 )|(bb8)>>(32 -16 ));bb8=bbn+(bbo^bbt^
bbc)+bb3[32 +3 ]+bbv[(3 * (32 +3 )+5 )%16 ];bbn=bbo+((bb8)<<(23 )|(bb8)>>(32 -
23 ));bb8=bbc+(bbn^bbo^bbt)+bb3[32 +4 ]+bbv[(3 * (32 +4 )+5 )%16 ];bbc=bbn+((
bb8)<<(4 )|(bb8)>>(32 -4 ));bb8=bbt+(bbc^bbn^bbo)+bb3[32 +4 +1 ]+bbv[(3 * (
32 +4 +1 )+5 )%16 ];bbt=bbc+((bb8)<<(11 )|(bb8)>>(32 -11 ));bb8=bbo+(bbt^bbc^
bbn)+bb3[32 +4 +2 ]+bbv[(3 * (32 +4 +2 )+5 )%16 ];bbo=bbt+((bb8)<<(16 )|(bb8)>>
(32 -16 ));bb8=bbn+(bbo^bbt^bbc)+bb3[32 +4 +3 ]+bbv[(3 * (32 +4 +3 )+5 )%16 ];
bbn=bbo+((bb8)<<(23 )|(bb8)>>(32 -23 ));bb8=bbc+(bbn^bbo^bbt)+bb3[32 +8 ]+
bbv[(3 * (32 +8 )+5 )%16 ];bbc=bbn+((bb8)<<(4 )|(bb8)>>(32 -4 ));bb8=bbt+(bbc
^bbn^bbo)+bb3[32 +8 +1 ]+bbv[(3 * (32 +8 +1 )+5 )%16 ];bbt=bbc+((bb8)<<(11 )|(
bb8)>>(32 -11 ));bb8=bbo+(bbt^bbc^bbn)+bb3[32 +8 +2 ]+bbv[(3 * (32 +8 +2 )+5 )%
16 ];bbo=bbt+((bb8)<<(16 )|(bb8)>>(32 -16 ));bb8=bbn+(bbo^bbt^bbc)+bb3[32
+8 +3 ]+bbv[(3 * (32 +8 +3 )+5 )%16 ];bbn=bbo+((bb8)<<(23 )|(bb8)>>(32 -23 ));
bb8=bbc+(bbn^bbo^bbt)+bb3[32 +12 ]+bbv[(3 * (32 +12 )+5 )%16 ];bbc=bbn+((bb8
)<<(4 )|(bb8)>>(32 -4 ));bb8=bbt+(bbc^bbn^bbo)+bb3[32 +12 +1 ]+bbv[(3 * (32 +
12 +1 )+5 )%16 ];bbt=bbc+((bb8)<<(11 )|(bb8)>>(32 -11 ));bb8=bbo+(bbt^bbc^
bbn)+bb3[32 +12 +2 ]+bbv[(3 * (32 +12 +2 )+5 )%16 ];bbo=bbt+((bb8)<<(16 )|(bb8)>>
(32 -16 ));bb8=bbn+(bbo^bbt^bbc)+bb3[32 +12 +3 ]+bbv[(3 * (32 +12 +3 )+5 )%16 ];
bbn=bbo+((bb8)<<(23 )|(bb8)>>(32 -23 ));bb8=bbc+(bbo^(bbn|~bbt))+bb3[48 ]
+bbv[(7 * (48 ))%16 ];bbc=bbn+((bb8)<<(6 )|(bb8)>>(32 -6 ));bb8=bbt+(bbn^(
bbc|~bbo))+bb3[48 +1 ]+bbv[(7 * (48 +1 ))%16 ];bbt=bbc+((bb8)<<(10 )|(bb8)>>
(32 -10 ));bb8=bbo+(bbc^(bbt|~bbn))+bb3[48 +2 ]+bbv[(7 * (48 +2 ))%16 ];bbo=
bbt+((bb8)<<(15 )|(bb8)>>(32 -15 ));bb8=bbn+(bbt^(bbo|~bbc))+bb3[48 +3 ]+
bbv[(7 * (48 +3 ))%16 ];bbn=bbo+((bb8)<<(21 )|(bb8)>>(32 -21 ));bb8=bbc+(bbo
^(bbn|~bbt))+bb3[48 +4 ]+bbv[(7 * (48 +4 ))%16 ];bbc=bbn+((bb8)<<(6 )|(bb8)>>
(32 -6 ));bb8=bbt+(bbn^(bbc|~bbo))+bb3[48 +4 +1 ]+bbv[(7 * (48 +4 +1 ))%16 ];
bbt=bbc+((bb8)<<(10 )|(bb8)>>(32 -10 ));bb8=bbo+(bbc^(bbt|~bbn))+bb3[48 +
4 +2 ]+bbv[(7 * (48 +4 +2 ))%16 ];bbo=bbt+((bb8)<<(15 )|(bb8)>>(32 -15 ));bb8=
bbn+(bbt^(bbo|~bbc))+bb3[48 +4 +3 ]+bbv[(7 * (48 +4 +3 ))%16 ];bbn=bbo+((bb8)<<
(21 )|(bb8)>>(32 -21 ));bb8=bbc+(bbo^(bbn|~bbt))+bb3[48 +8 ]+bbv[(7 * (48 +8
))%16 ];bbc=bbn+((bb8)<<(6 )|(bb8)>>(32 -6 ));bb8=bbt+(bbn^(bbc|~bbo))+
bb3[48 +8 +1 ]+bbv[(7 * (48 +8 +1 ))%16 ];bbt=bbc+((bb8)<<(10 )|(bb8)>>(32 -10 ));
bb8=bbo+(bbc^(bbt|~bbn))+bb3[48 +8 +2 ]+bbv[(7 * (48 +8 +2 ))%16 ];bbo=bbt+((
bb8)<<(15 )|(bb8)>>(32 -15 ));bb8=bbn+(bbt^(bbo|~bbc))+bb3[48 +8 +3 ]+bbv[(
7 * (48 +8 +3 ))%16 ];bbn=bbo+((bb8)<<(21 )|(bb8)>>(32 -21 ));bb8=bbc+(bbo^(
bbn|~bbt))+bb3[48 +12 ]+bbv[(7 * (48 +12 ))%16 ];bbc=bbn+((bb8)<<(6 )|(bb8)>>
(32 -6 ));bb8=bbt+(bbn^(bbc|~bbo))+bb3[48 +12 +1 ]+bbv[(7 * (48 +12 +1 ))%16 ];
bbt=bbc+((bb8)<<(10 )|(bb8)>>(32 -10 ));bb8=bbo+(bbc^(bbt|~bbn))+bb3[48 +
12 +2 ]+bbv[(7 * (48 +12 +2 ))%16 ];bbo=bbt+((bb8)<<(15 )|(bb8)>>(32 -15 ));bb8
=bbn+(bbt^(bbo|~bbc))+bb3[48 +12 +3 ]+bbv[(7 * (48 +12 +3 ))%16 ];bbn=bbo+((
bb8)<<(21 )|(bb8)>>(32 -21 ));bb23[0 ]+=bbc;bb23[1 ]+=bbn;bb23[2 ]+=bbo;
bb23[3 ]+=bbt;}}bbb bb1816(bb524*bbj){bb40 bbd bb23[4 ]={0x67452301 ,
0xefcdab89 ,0x98badcfe ,0x10325476 };bbj->bb10=0 ;bb81(bbj->bb23,bb23,
bb11(bb23));}bbb bb1305(bb524*bbj,bbh bbb*bb498,bbq bb10){bbh bbf*bb6
=(bbh bbf* )bb498;bbq bb382=bbj->bb10%bb11(bbj->bb102);bbj->bb10+=
bb10;bbm(bb382){bbq bb12=bb11(bbj->bb102)-bb382;bb81(bbj->bb102+bb382
,bb6,((bb10)<(bb12)?(bb10):(bb12)));bbm(bb10<bb12)bb2;bb6+=bb12;bb10
-=bb12;bb1251(bbj->bb23,bbj->bb102);}bb91(;bb10>=bb11(bbj->bb102);
bb10-=bb11(bbj->bb102),bb6+=bb11(bbj->bb102))bb1251(bbj->bb23,bb6);
bb81(bbj->bb102,bb6,bb10);}bbb bb1819(bb524*bbj,bbb*bb14){bbd bb1007[
2 ]={(bbd)(bbj->bb10<<3 ),(bbd)(bbj->bb10>>29 )};bbf bb438[bb11(bb1007)]
;bbq bbz;bb91(bbz=0 ;bbz<bb11(bb438);bbz++)bb438[bbz]=bb1007[bbz/4 ]>>(
(bbz%4 ) *8 )&0xff ;{bbf bb1312[]={0x80 },bb1310[bb11(bbj->bb102)]={0 };
bbq bb382=bbj->bb10%bb11(bbj->bb102);bb1305(bbj,bb1312,1 );bb1305(bbj,
bb1310,(bb11(bbj->bb102) *2 -1 -bb11(bb438)-bb382)%bb11(bbj->bb102));}
bb1305(bbj,bb438,bb11(bb438));bb91(bbz=0 ;bbz<bb11(bbj->bb23);bbz++)((
bbf* )bb14)[bbz]=bbj->bb23[bbz/4 ]>>((bbz%4 ) *8 )&0xff ;}bbb bb1851(bbb*
bb14,bbh bbb*bb6,bbq bb10){bb524 bb96;bb1816(&bb96);bb1305(&bb96,bb6,
bb10);bb1819(&bb96,bb14);}bbb bb1963(bbb*bb14,bb82 bb6){bb1851(bb14,
bb6,(bbq)bb1302(bb6));}
