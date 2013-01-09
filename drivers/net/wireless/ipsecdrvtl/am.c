/*
   'ripemd.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
bba bbi{bbd bb10;bbd bb23[5 ];bbf bb102[64 ];}bb525;bbb bb1801(bb525*
bbj);bbb bb1353(bb525*bbj,bbh bbb*bb498,bbq bb10);bbb bb1795(bb525*
bbj,bbb*bb14);bbb bb1923(bbb*bb14,bbh bbb*bb6,bbq bb10);bbb bb1972(
bbb*bb14,bb82 bb6);
#ifdef __cplusplus
}
#endif
bb40 bbb bb1251(bbd bb23[5 ],bbh bbf bb97[64 ]){bb31(bb11(bbe)>=4 );{bbd
bb67,bb62,bb69,bb55,bb64,bb68,bb61,bb48,bb66,bb65;bbd bbv[16 ],bbz;
bb67=bb62=bb23[0 ];bb69=bb55=bb23[1 ];bb64=bb68=bb23[2 ];bb61=bb48=bb23[
3 ];bb66=bb65=bb23[4 ];bb91(bbz=0 ;bbz<16 ;bbz++,bb97+=4 )bbv[bbz]=(bb97[0
]|bb97[1 ]<<8 |bb97[2 ]<<16 |bb97[3 ]<<24 );bb62+=(bb55^bb68^bb48)+bbv[0 ];
bb62=((bb62)<<(11 )|(bb62)>>(32 -11 ))+bb65;bb68=((bb68)<<(10 )|(bb68)>>(
32 -10 ));bb65+=(bb62^bb55^bb68)+bbv[1 ];bb65=((bb65)<<(14 )|(bb65)>>(32 -
14 ))+bb48;bb55=((bb55)<<(10 )|(bb55)>>(32 -10 ));bb48+=(bb65^bb62^bb55)+
bbv[2 ];bb48=((bb48)<<(15 )|(bb48)>>(32 -15 ))+bb68;bb62=((bb62)<<(10 )|(
bb62)>>(32 -10 ));bb68+=(bb48^bb65^bb62)+bbv[3 ];bb68=((bb68)<<(12 )|(
bb68)>>(32 -12 ))+bb55;bb65=((bb65)<<(10 )|(bb65)>>(32 -10 ));bb55+=(bb68^
bb48^bb65)+bbv[4 ];bb55=((bb55)<<(5 )|(bb55)>>(32 -5 ))+bb62;bb48=((bb48)<<
(10 )|(bb48)>>(32 -10 ));bb62+=(bb55^bb68^bb48)+bbv[5 ];bb62=((bb62)<<(8 )|
(bb62)>>(32 -8 ))+bb65;bb68=((bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62^
bb55^bb68)+bbv[6 ];bb65=((bb65)<<(7 )|(bb65)>>(32 -7 ))+bb48;bb55=((bb55)<<
(10 )|(bb55)>>(32 -10 ));bb48+=(bb65^bb62^bb55)+bbv[7 ];bb48=((bb48)<<(9 )|
(bb48)>>(32 -9 ))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(32 -10 ));bb68+=(bb48^
bb65^bb62)+bbv[8 ];bb68=((bb68)<<(11 )|(bb68)>>(32 -11 ))+bb55;bb65=((
bb65)<<(10 )|(bb65)>>(32 -10 ));bb55+=(bb68^bb48^bb65)+bbv[9 ];bb55=((
bb55)<<(13 )|(bb55)>>(32 -13 ))+bb62;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));
bb62+=(bb55^bb68^bb48)+bbv[10 ];bb62=((bb62)<<(14 )|(bb62)>>(32 -14 ))+
bb65;bb68=((bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62^bb55^bb68)+bbv[
11 ];bb65=((bb65)<<(15 )|(bb65)>>(32 -15 ))+bb48;bb55=((bb55)<<(10 )|(bb55
)>>(32 -10 ));bb48+=(bb65^bb62^bb55)+bbv[12 ];bb48=((bb48)<<(6 )|(bb48)>>
(32 -6 ))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(32 -10 ));bb68+=(bb48^bb65^
bb62)+bbv[13 ];bb68=((bb68)<<(7 )|(bb68)>>(32 -7 ))+bb55;bb65=((bb65)<<(
10 )|(bb65)>>(32 -10 ));bb55+=(bb68^bb48^bb65)+bbv[14 ];bb55=((bb55)<<(9 )|
(bb55)>>(32 -9 ))+bb62;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));bb62+=(bb55^
bb68^bb48)+bbv[15 ];bb62=((bb62)<<(8 )|(bb62)>>(32 -8 ))+bb65;bb68=((bb68
)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62&bb55|~bb62&bb68)+0x5a827999 +bbv[
7 ];bb65=((bb65)<<(7 )|(bb65)>>(32 -7 ))+bb48;bb55=((bb55)<<(10 )|(bb55)>>
(32 -10 ));bb48+=(bb65&bb62|~bb65&bb55)+0x5a827999 +bbv[4 ];bb48=((bb48)<<
(6 )|(bb48)>>(32 -6 ))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(32 -10 ));bb68+=(
bb48&bb65|~bb48&bb62)+0x5a827999 +bbv[13 ];bb68=((bb68)<<(8 )|(bb68)>>(
32 -8 ))+bb55;bb65=((bb65)<<(10 )|(bb65)>>(32 -10 ));bb55+=(bb68&bb48|~
bb68&bb65)+0x5a827999 +bbv[1 ];bb55=((bb55)<<(13 )|(bb55)>>(32 -13 ))+bb62
;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));bb62+=(bb55&bb68|~bb55&bb48)+
0x5a827999 +bbv[10 ];bb62=((bb62)<<(11 )|(bb62)>>(32 -11 ))+bb65;bb68=((
bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62&bb55|~bb62&bb68)+0x5a827999 +
bbv[6 ];bb65=((bb65)<<(9 )|(bb65)>>(32 -9 ))+bb48;bb55=((bb55)<<(10 )|(
bb55)>>(32 -10 ));bb48+=(bb65&bb62|~bb65&bb55)+0x5a827999 +bbv[15 ];bb48=
((bb48)<<(7 )|(bb48)>>(32 -7 ))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(32 -10 ));
bb68+=(bb48&bb65|~bb48&bb62)+0x5a827999 +bbv[3 ];bb68=((bb68)<<(15 )|(
bb68)>>(32 -15 ))+bb55;bb65=((bb65)<<(10 )|(bb65)>>(32 -10 ));bb55+=(bb68&
bb48|~bb68&bb65)+0x5a827999 +bbv[12 ];bb55=((bb55)<<(7 )|(bb55)>>(32 -7 ))+
bb62;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));bb62+=(bb55&bb68|~bb55&bb48)+
0x5a827999 +bbv[0 ];bb62=((bb62)<<(12 )|(bb62)>>(32 -12 ))+bb65;bb68=((
bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62&bb55|~bb62&bb68)+0x5a827999 +
bbv[9 ];bb65=((bb65)<<(15 )|(bb65)>>(32 -15 ))+bb48;bb55=((bb55)<<(10 )|(
bb55)>>(32 -10 ));bb48+=(bb65&bb62|~bb65&bb55)+0x5a827999 +bbv[5 ];bb48=(
(bb48)<<(9 )|(bb48)>>(32 -9 ))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(32 -10 ));
bb68+=(bb48&bb65|~bb48&bb62)+0x5a827999 +bbv[2 ];bb68=((bb68)<<(11 )|(
bb68)>>(32 -11 ))+bb55;bb65=((bb65)<<(10 )|(bb65)>>(32 -10 ));bb55+=(bb68&
bb48|~bb68&bb65)+0x5a827999 +bbv[14 ];bb55=((bb55)<<(7 )|(bb55)>>(32 -7 ))+
bb62;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));bb62+=(bb55&bb68|~bb55&bb48)+
0x5a827999 +bbv[11 ];bb62=((bb62)<<(13 )|(bb62)>>(32 -13 ))+bb65;bb68=((
bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62&bb55|~bb62&bb68)+0x5a827999 +
bbv[8 ];bb65=((bb65)<<(12 )|(bb65)>>(32 -12 ))+bb48;bb55=((bb55)<<(10 )|(
bb55)>>(32 -10 ));bb48+=((bb65|~bb62)^bb55)+0x6ed9eba1 +bbv[3 ];bb48=((
bb48)<<(11 )|(bb48)>>(32 -11 ))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(32 -10 ));
bb68+=((bb48|~bb65)^bb62)+0x6ed9eba1 +bbv[10 ];bb68=((bb68)<<(13 )|(bb68
)>>(32 -13 ))+bb55;bb65=((bb65)<<(10 )|(bb65)>>(32 -10 ));bb55+=((bb68|~
bb48)^bb65)+0x6ed9eba1 +bbv[14 ];bb55=((bb55)<<(6 )|(bb55)>>(32 -6 ))+bb62
;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));bb62+=((bb55|~bb68)^bb48)+
0x6ed9eba1 +bbv[4 ];bb62=((bb62)<<(7 )|(bb62)>>(32 -7 ))+bb65;bb68=((bb68)<<
(10 )|(bb68)>>(32 -10 ));bb65+=((bb62|~bb55)^bb68)+0x6ed9eba1 +bbv[9 ];
bb65=((bb65)<<(14 )|(bb65)>>(32 -14 ))+bb48;bb55=((bb55)<<(10 )|(bb55)>>(
32 -10 ));bb48+=((bb65|~bb62)^bb55)+0x6ed9eba1 +bbv[15 ];bb48=((bb48)<<(9
)|(bb48)>>(32 -9 ))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(32 -10 ));bb68+=((
bb48|~bb65)^bb62)+0x6ed9eba1 +bbv[8 ];bb68=((bb68)<<(13 )|(bb68)>>(32 -13
))+bb55;bb65=((bb65)<<(10 )|(bb65)>>(32 -10 ));bb55+=((bb68|~bb48)^bb65)+
0x6ed9eba1 +bbv[1 ];bb55=((bb55)<<(15 )|(bb55)>>(32 -15 ))+bb62;bb48=((
bb48)<<(10 )|(bb48)>>(32 -10 ));bb62+=((bb55|~bb68)^bb48)+0x6ed9eba1 +bbv
[2 ];bb62=((bb62)<<(14 )|(bb62)>>(32 -14 ))+bb65;bb68=((bb68)<<(10 )|(bb68
)>>(32 -10 ));bb65+=((bb62|~bb55)^bb68)+0x6ed9eba1 +bbv[7 ];bb65=((bb65)<<
(8 )|(bb65)>>(32 -8 ))+bb48;bb55=((bb55)<<(10 )|(bb55)>>(32 -10 ));bb48+=((
bb65|~bb62)^bb55)+0x6ed9eba1 +bbv[0 ];bb48=((bb48)<<(13 )|(bb48)>>(32 -13
))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(32 -10 ));bb68+=((bb48|~bb65)^bb62)+
0x6ed9eba1 +bbv[6 ];bb68=((bb68)<<(6 )|(bb68)>>(32 -6 ))+bb55;bb65=((bb65)<<
(10 )|(bb65)>>(32 -10 ));bb55+=((bb68|~bb48)^bb65)+0x6ed9eba1 +bbv[13 ];
bb55=((bb55)<<(5 )|(bb55)>>(32 -5 ))+bb62;bb48=((bb48)<<(10 )|(bb48)>>(32
-10 ));bb62+=((bb55|~bb68)^bb48)+0x6ed9eba1 +bbv[11 ];bb62=((bb62)<<(12 )|
(bb62)>>(32 -12 ))+bb65;bb68=((bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=((
bb62|~bb55)^bb68)+0x6ed9eba1 +bbv[5 ];bb65=((bb65)<<(7 )|(bb65)>>(32 -7 ))+
bb48;bb55=((bb55)<<(10 )|(bb55)>>(32 -10 ));bb48+=((bb65|~bb62)^bb55)+
0x6ed9eba1 +bbv[12 ];bb48=((bb48)<<(5 )|(bb48)>>(32 -5 ))+bb68;bb62=((bb62
)<<(10 )|(bb62)>>(32 -10 ));bb68+=(bb48&bb62|bb65&~bb62)+0x8f1bbcdc +bbv[
1 ];bb68=((bb68)<<(11 )|(bb68)>>(32 -11 ))+bb55;bb65=((bb65)<<(10 )|(bb65)>>
(32 -10 ));bb55+=(bb68&bb65|bb48&~bb65)+0x8f1bbcdc +bbv[9 ];bb55=((bb55)<<
(12 )|(bb55)>>(32 -12 ))+bb62;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));bb62+=
(bb55&bb48|bb68&~bb48)+0x8f1bbcdc +bbv[11 ];bb62=((bb62)<<(14 )|(bb62)>>
(32 -14 ))+bb65;bb68=((bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62&bb68|
bb55&~bb68)+0x8f1bbcdc +bbv[10 ];bb65=((bb65)<<(15 )|(bb65)>>(32 -15 ))+
bb48;bb55=((bb55)<<(10 )|(bb55)>>(32 -10 ));bb48+=(bb65&bb55|bb62&~bb55)+
0x8f1bbcdc +bbv[0 ];bb48=((bb48)<<(14 )|(bb48)>>(32 -14 ))+bb68;bb62=((
bb62)<<(10 )|(bb62)>>(32 -10 ));bb68+=(bb48&bb62|bb65&~bb62)+0x8f1bbcdc +
bbv[8 ];bb68=((bb68)<<(15 )|(bb68)>>(32 -15 ))+bb55;bb65=((bb65)<<(10 )|(
bb65)>>(32 -10 ));bb55+=(bb68&bb65|bb48&~bb65)+0x8f1bbcdc +bbv[12 ];bb55=
((bb55)<<(9 )|(bb55)>>(32 -9 ))+bb62;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));
bb62+=(bb55&bb48|bb68&~bb48)+0x8f1bbcdc +bbv[4 ];bb62=((bb62)<<(8 )|(
bb62)>>(32 -8 ))+bb65;bb68=((bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62&
bb68|bb55&~bb68)+0x8f1bbcdc +bbv[13 ];bb65=((bb65)<<(9 )|(bb65)>>(32 -9 ))+
bb48;bb55=((bb55)<<(10 )|(bb55)>>(32 -10 ));bb48+=(bb65&bb55|bb62&~bb55)+
0x8f1bbcdc +bbv[3 ];bb48=((bb48)<<(14 )|(bb48)>>(32 -14 ))+bb68;bb62=((
bb62)<<(10 )|(bb62)>>(32 -10 ));bb68+=(bb48&bb62|bb65&~bb62)+0x8f1bbcdc +
bbv[7 ];bb68=((bb68)<<(5 )|(bb68)>>(32 -5 ))+bb55;bb65=((bb65)<<(10 )|(
bb65)>>(32 -10 ));bb55+=(bb68&bb65|bb48&~bb65)+0x8f1bbcdc +bbv[15 ];bb55=
((bb55)<<(6 )|(bb55)>>(32 -6 ))+bb62;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));
bb62+=(bb55&bb48|bb68&~bb48)+0x8f1bbcdc +bbv[14 ];bb62=((bb62)<<(8 )|(
bb62)>>(32 -8 ))+bb65;bb68=((bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62&
bb68|bb55&~bb68)+0x8f1bbcdc +bbv[5 ];bb65=((bb65)<<(6 )|(bb65)>>(32 -6 ))+
bb48;bb55=((bb55)<<(10 )|(bb55)>>(32 -10 ));bb48+=(bb65&bb55|bb62&~bb55)+
0x8f1bbcdc +bbv[6 ];bb48=((bb48)<<(5 )|(bb48)>>(32 -5 ))+bb68;bb62=((bb62)<<
(10 )|(bb62)>>(32 -10 ));bb68+=(bb48&bb62|bb65&~bb62)+0x8f1bbcdc +bbv[2 ];
bb68=((bb68)<<(12 )|(bb68)>>(32 -12 ))+bb55;bb65=((bb65)<<(10 )|(bb65)>>(
32 -10 ));bb55+=(bb68^(bb48|~bb65))+0xa953fd4e +bbv[4 ];bb55=((bb55)<<(9 )|
(bb55)>>(32 -9 ))+bb62;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));bb62+=(bb55^
(bb68|~bb48))+0xa953fd4e +bbv[0 ];bb62=((bb62)<<(15 )|(bb62)>>(32 -15 ))+
bb65;bb68=((bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62^(bb55|~bb68))+
0xa953fd4e +bbv[5 ];bb65=((bb65)<<(5 )|(bb65)>>(32 -5 ))+bb48;bb55=((bb55)<<
(10 )|(bb55)>>(32 -10 ));bb48+=(bb65^(bb62|~bb55))+0xa953fd4e +bbv[9 ];
bb48=((bb48)<<(11 )|(bb48)>>(32 -11 ))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(
32 -10 ));bb68+=(bb48^(bb65|~bb62))+0xa953fd4e +bbv[7 ];bb68=((bb68)<<(6 )|
(bb68)>>(32 -6 ))+bb55;bb65=((bb65)<<(10 )|(bb65)>>(32 -10 ));bb55+=(bb68^
(bb48|~bb65))+0xa953fd4e +bbv[12 ];bb55=((bb55)<<(8 )|(bb55)>>(32 -8 ))+
bb62;bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));bb62+=(bb55^(bb68|~bb48))+
0xa953fd4e +bbv[2 ];bb62=((bb62)<<(13 )|(bb62)>>(32 -13 ))+bb65;bb68=((
bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62^(bb55|~bb68))+0xa953fd4e +bbv
[10 ];bb65=((bb65)<<(12 )|(bb65)>>(32 -12 ))+bb48;bb55=((bb55)<<(10 )|(
bb55)>>(32 -10 ));bb48+=(bb65^(bb62|~bb55))+0xa953fd4e +bbv[14 ];bb48=((
bb48)<<(5 )|(bb48)>>(32 -5 ))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(32 -10 ));
bb68+=(bb48^(bb65|~bb62))+0xa953fd4e +bbv[1 ];bb68=((bb68)<<(12 )|(bb68)>>
(32 -12 ))+bb55;bb65=((bb65)<<(10 )|(bb65)>>(32 -10 ));bb55+=(bb68^(bb48|~
bb65))+0xa953fd4e +bbv[3 ];bb55=((bb55)<<(13 )|(bb55)>>(32 -13 ))+bb62;
bb48=((bb48)<<(10 )|(bb48)>>(32 -10 ));bb62+=(bb55^(bb68|~bb48))+
0xa953fd4e +bbv[8 ];bb62=((bb62)<<(14 )|(bb62)>>(32 -14 ))+bb65;bb68=((
bb68)<<(10 )|(bb68)>>(32 -10 ));bb65+=(bb62^(bb55|~bb68))+0xa953fd4e +bbv
[11 ];bb65=((bb65)<<(11 )|(bb65)>>(32 -11 ))+bb48;bb55=((bb55)<<(10 )|(
bb55)>>(32 -10 ));bb48+=(bb65^(bb62|~bb55))+0xa953fd4e +bbv[6 ];bb48=((
bb48)<<(8 )|(bb48)>>(32 -8 ))+bb68;bb62=((bb62)<<(10 )|(bb62)>>(32 -10 ));
bb68+=(bb48^(bb65|~bb62))+0xa953fd4e +bbv[15 ];bb68=((bb68)<<(5 )|(bb68)>>
(32 -5 ))+bb55;bb65=((bb65)<<(10 )|(bb65)>>(32 -10 ));bb55+=(bb68^(bb48|~
bb65))+0xa953fd4e +bbv[13 ];bb55=((bb55)<<(6 )|(bb55)>>(32 -6 ))+bb62;bb48
=((bb48)<<(10 )|(bb48)>>(32 -10 ));bb67+=(bb69^(bb64|~bb61))+0x50a28be6 +
bbv[5 ];bb67=((bb67)<<(8 )|(bb67)>>(32 -8 ))+bb66;bb64=((bb64)<<(10 )|(
bb64)>>(32 -10 ));bb66+=(bb67^(bb69|~bb64))+0x50a28be6 +bbv[14 ];bb66=((
bb66)<<(9 )|(bb66)>>(32 -9 ))+bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));
bb61+=(bb66^(bb67|~bb69))+0x50a28be6 +bbv[7 ];bb61=((bb61)<<(9 )|(bb61)>>
(32 -9 ))+bb64;bb67=((bb67)<<(10 )|(bb67)>>(32 -10 ));bb64+=(bb61^(bb66|~
bb67))+0x50a28be6 +bbv[0 ];bb64=((bb64)<<(11 )|(bb64)>>(32 -11 ))+bb69;
bb66=((bb66)<<(10 )|(bb66)>>(32 -10 ));bb69+=(bb64^(bb61|~bb66))+
0x50a28be6 +bbv[9 ];bb69=((bb69)<<(13 )|(bb69)>>(32 -13 ))+bb67;bb61=((
bb61)<<(10 )|(bb61)>>(32 -10 ));bb67+=(bb69^(bb64|~bb61))+0x50a28be6 +bbv
[2 ];bb67=((bb67)<<(15 )|(bb67)>>(32 -15 ))+bb66;bb64=((bb64)<<(10 )|(bb64
)>>(32 -10 ));bb66+=(bb67^(bb69|~bb64))+0x50a28be6 +bbv[11 ];bb66=((bb66)<<
(15 )|(bb66)>>(32 -15 ))+bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=
(bb66^(bb67|~bb69))+0x50a28be6 +bbv[4 ];bb61=((bb61)<<(5 )|(bb61)>>(32 -5
))+bb64;bb67=((bb67)<<(10 )|(bb67)>>(32 -10 ));bb64+=(bb61^(bb66|~bb67))+
0x50a28be6 +bbv[13 ];bb64=((bb64)<<(7 )|(bb64)>>(32 -7 ))+bb69;bb66=((bb66
)<<(10 )|(bb66)>>(32 -10 ));bb69+=(bb64^(bb61|~bb66))+0x50a28be6 +bbv[6 ];
bb69=((bb69)<<(7 )|(bb69)>>(32 -7 ))+bb67;bb61=((bb61)<<(10 )|(bb61)>>(32
-10 ));bb67+=(bb69^(bb64|~bb61))+0x50a28be6 +bbv[15 ];bb67=((bb67)<<(8 )|
(bb67)>>(32 -8 ))+bb66;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));bb66+=(bb67^
(bb69|~bb64))+0x50a28be6 +bbv[8 ];bb66=((bb66)<<(11 )|(bb66)>>(32 -11 ))+
bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=(bb66^(bb67|~bb69))+
0x50a28be6 +bbv[1 ];bb61=((bb61)<<(14 )|(bb61)>>(32 -14 ))+bb64;bb67=((
bb67)<<(10 )|(bb67)>>(32 -10 ));bb64+=(bb61^(bb66|~bb67))+0x50a28be6 +bbv
[10 ];bb64=((bb64)<<(14 )|(bb64)>>(32 -14 ))+bb69;bb66=((bb66)<<(10 )|(
bb66)>>(32 -10 ));bb69+=(bb64^(bb61|~bb66))+0x50a28be6 +bbv[3 ];bb69=((
bb69)<<(12 )|(bb69)>>(32 -12 ))+bb67;bb61=((bb61)<<(10 )|(bb61)>>(32 -10 ));
bb67+=(bb69^(bb64|~bb61))+0x50a28be6 +bbv[12 ];bb67=((bb67)<<(6 )|(bb67)>>
(32 -6 ))+bb66;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));bb66+=(bb67&bb64|
bb69&~bb64)+0x5c4dd124 +bbv[6 ];bb66=((bb66)<<(9 )|(bb66)>>(32 -9 ))+bb61;
bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=(bb66&bb69|bb67&~bb69)+
0x5c4dd124 +bbv[11 ];bb61=((bb61)<<(13 )|(bb61)>>(32 -13 ))+bb64;bb67=((
bb67)<<(10 )|(bb67)>>(32 -10 ));bb64+=(bb61&bb67|bb66&~bb67)+0x5c4dd124 +
bbv[3 ];bb64=((bb64)<<(15 )|(bb64)>>(32 -15 ))+bb69;bb66=((bb66)<<(10 )|(
bb66)>>(32 -10 ));bb69+=(bb64&bb66|bb61&~bb66)+0x5c4dd124 +bbv[7 ];bb69=(
(bb69)<<(7 )|(bb69)>>(32 -7 ))+bb67;bb61=((bb61)<<(10 )|(bb61)>>(32 -10 ));
bb67+=(bb69&bb61|bb64&~bb61)+0x5c4dd124 +bbv[0 ];bb67=((bb67)<<(12 )|(
bb67)>>(32 -12 ))+bb66;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));bb66+=(bb67&
bb64|bb69&~bb64)+0x5c4dd124 +bbv[13 ];bb66=((bb66)<<(8 )|(bb66)>>(32 -8 ))+
bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=(bb66&bb69|bb67&~bb69)+
0x5c4dd124 +bbv[5 ];bb61=((bb61)<<(9 )|(bb61)>>(32 -9 ))+bb64;bb67=((bb67)<<
(10 )|(bb67)>>(32 -10 ));bb64+=(bb61&bb67|bb66&~bb67)+0x5c4dd124 +bbv[10 ]
;bb64=((bb64)<<(11 )|(bb64)>>(32 -11 ))+bb69;bb66=((bb66)<<(10 )|(bb66)>>
(32 -10 ));bb69+=(bb64&bb66|bb61&~bb66)+0x5c4dd124 +bbv[14 ];bb69=((bb69)<<
(7 )|(bb69)>>(32 -7 ))+bb67;bb61=((bb61)<<(10 )|(bb61)>>(32 -10 ));bb67+=(
bb69&bb61|bb64&~bb61)+0x5c4dd124 +bbv[15 ];bb67=((bb67)<<(7 )|(bb67)>>(
32 -7 ))+bb66;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));bb66+=(bb67&bb64|bb69
&~bb64)+0x5c4dd124 +bbv[8 ];bb66=((bb66)<<(12 )|(bb66)>>(32 -12 ))+bb61;
bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=(bb66&bb69|bb67&~bb69)+
0x5c4dd124 +bbv[12 ];bb61=((bb61)<<(7 )|(bb61)>>(32 -7 ))+bb64;bb67=((bb67
)<<(10 )|(bb67)>>(32 -10 ));bb64+=(bb61&bb67|bb66&~bb67)+0x5c4dd124 +bbv[
4 ];bb64=((bb64)<<(6 )|(bb64)>>(32 -6 ))+bb69;bb66=((bb66)<<(10 )|(bb66)>>
(32 -10 ));bb69+=(bb64&bb66|bb61&~bb66)+0x5c4dd124 +bbv[9 ];bb69=((bb69)<<
(15 )|(bb69)>>(32 -15 ))+bb67;bb61=((bb61)<<(10 )|(bb61)>>(32 -10 ));bb67+=
(bb69&bb61|bb64&~bb61)+0x5c4dd124 +bbv[1 ];bb67=((bb67)<<(13 )|(bb67)>>(
32 -13 ))+bb66;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));bb66+=(bb67&bb64|
bb69&~bb64)+0x5c4dd124 +bbv[2 ];bb66=((bb66)<<(11 )|(bb66)>>(32 -11 ))+
bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=((bb66|~bb67)^bb69)+
0x6d703ef3 +bbv[15 ];bb61=((bb61)<<(9 )|(bb61)>>(32 -9 ))+bb64;bb67=((bb67
)<<(10 )|(bb67)>>(32 -10 ));bb64+=((bb61|~bb66)^bb67)+0x6d703ef3 +bbv[5 ];
bb64=((bb64)<<(7 )|(bb64)>>(32 -7 ))+bb69;bb66=((bb66)<<(10 )|(bb66)>>(32
-10 ));bb69+=((bb64|~bb61)^bb66)+0x6d703ef3 +bbv[1 ];bb69=((bb69)<<(15 )|
(bb69)>>(32 -15 ))+bb67;bb61=((bb61)<<(10 )|(bb61)>>(32 -10 ));bb67+=((
bb69|~bb64)^bb61)+0x6d703ef3 +bbv[3 ];bb67=((bb67)<<(11 )|(bb67)>>(32 -11
))+bb66;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));bb66+=((bb67|~bb69)^bb64)+
0x6d703ef3 +bbv[7 ];bb66=((bb66)<<(8 )|(bb66)>>(32 -8 ))+bb61;bb69=((bb69)<<
(10 )|(bb69)>>(32 -10 ));bb61+=((bb66|~bb67)^bb69)+0x6d703ef3 +bbv[14 ];
bb61=((bb61)<<(6 )|(bb61)>>(32 -6 ))+bb64;bb67=((bb67)<<(10 )|(bb67)>>(32
-10 ));bb64+=((bb61|~bb66)^bb67)+0x6d703ef3 +bbv[6 ];bb64=((bb64)<<(6 )|(
bb64)>>(32 -6 ))+bb69;bb66=((bb66)<<(10 )|(bb66)>>(32 -10 ));bb69+=((bb64|
~bb61)^bb66)+0x6d703ef3 +bbv[9 ];bb69=((bb69)<<(14 )|(bb69)>>(32 -14 ))+
bb67;bb61=((bb61)<<(10 )|(bb61)>>(32 -10 ));bb67+=((bb69|~bb64)^bb61)+
0x6d703ef3 +bbv[11 ];bb67=((bb67)<<(12 )|(bb67)>>(32 -12 ))+bb66;bb64=((
bb64)<<(10 )|(bb64)>>(32 -10 ));bb66+=((bb67|~bb69)^bb64)+0x6d703ef3 +bbv
[8 ];bb66=((bb66)<<(13 )|(bb66)>>(32 -13 ))+bb61;bb69=((bb69)<<(10 )|(bb69
)>>(32 -10 ));bb61+=((bb66|~bb67)^bb69)+0x6d703ef3 +bbv[12 ];bb61=((bb61)<<
(5 )|(bb61)>>(32 -5 ))+bb64;bb67=((bb67)<<(10 )|(bb67)>>(32 -10 ));bb64+=((
bb61|~bb66)^bb67)+0x6d703ef3 +bbv[2 ];bb64=((bb64)<<(14 )|(bb64)>>(32 -14
))+bb69;bb66=((bb66)<<(10 )|(bb66)>>(32 -10 ));bb69+=((bb64|~bb61)^bb66)+
0x6d703ef3 +bbv[10 ];bb69=((bb69)<<(13 )|(bb69)>>(32 -13 ))+bb67;bb61=((
bb61)<<(10 )|(bb61)>>(32 -10 ));bb67+=((bb69|~bb64)^bb61)+0x6d703ef3 +bbv
[0 ];bb67=((bb67)<<(13 )|(bb67)>>(32 -13 ))+bb66;bb64=((bb64)<<(10 )|(bb64
)>>(32 -10 ));bb66+=((bb67|~bb69)^bb64)+0x6d703ef3 +bbv[4 ];bb66=((bb66)<<
(7 )|(bb66)>>(32 -7 ))+bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=((
bb66|~bb67)^bb69)+0x6d703ef3 +bbv[13 ];bb61=((bb61)<<(5 )|(bb61)>>(32 -5 ))+
bb64;bb67=((bb67)<<(10 )|(bb67)>>(32 -10 ));bb64+=(bb61&bb66|~bb61&bb67)+
0x7a6d76e9 +bbv[8 ];bb64=((bb64)<<(15 )|(bb64)>>(32 -15 ))+bb69;bb66=((
bb66)<<(10 )|(bb66)>>(32 -10 ));bb69+=(bb64&bb61|~bb64&bb66)+0x7a6d76e9 +
bbv[6 ];bb69=((bb69)<<(5 )|(bb69)>>(32 -5 ))+bb67;bb61=((bb61)<<(10 )|(
bb61)>>(32 -10 ));bb67+=(bb69&bb64|~bb69&bb61)+0x7a6d76e9 +bbv[4 ];bb67=(
(bb67)<<(8 )|(bb67)>>(32 -8 ))+bb66;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));
bb66+=(bb67&bb69|~bb67&bb64)+0x7a6d76e9 +bbv[1 ];bb66=((bb66)<<(11 )|(
bb66)>>(32 -11 ))+bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=(bb66&
bb67|~bb66&bb69)+0x7a6d76e9 +bbv[3 ];bb61=((bb61)<<(14 )|(bb61)>>(32 -14 ))+
bb64;bb67=((bb67)<<(10 )|(bb67)>>(32 -10 ));bb64+=(bb61&bb66|~bb61&bb67)+
0x7a6d76e9 +bbv[11 ];bb64=((bb64)<<(14 )|(bb64)>>(32 -14 ))+bb69;bb66=((
bb66)<<(10 )|(bb66)>>(32 -10 ));bb69+=(bb64&bb61|~bb64&bb66)+0x7a6d76e9 +
bbv[15 ];bb69=((bb69)<<(6 )|(bb69)>>(32 -6 ))+bb67;bb61=((bb61)<<(10 )|(
bb61)>>(32 -10 ));bb67+=(bb69&bb64|~bb69&bb61)+0x7a6d76e9 +bbv[0 ];bb67=(
(bb67)<<(14 )|(bb67)>>(32 -14 ))+bb66;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));
bb66+=(bb67&bb69|~bb67&bb64)+0x7a6d76e9 +bbv[5 ];bb66=((bb66)<<(6 )|(
bb66)>>(32 -6 ))+bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=(bb66&
bb67|~bb66&bb69)+0x7a6d76e9 +bbv[12 ];bb61=((bb61)<<(9 )|(bb61)>>(32 -9 ))+
bb64;bb67=((bb67)<<(10 )|(bb67)>>(32 -10 ));bb64+=(bb61&bb66|~bb61&bb67)+
0x7a6d76e9 +bbv[2 ];bb64=((bb64)<<(12 )|(bb64)>>(32 -12 ))+bb69;bb66=((
bb66)<<(10 )|(bb66)>>(32 -10 ));bb69+=(bb64&bb61|~bb64&bb66)+0x7a6d76e9 +
bbv[13 ];bb69=((bb69)<<(9 )|(bb69)>>(32 -9 ))+bb67;bb61=((bb61)<<(10 )|(
bb61)>>(32 -10 ));bb67+=(bb69&bb64|~bb69&bb61)+0x7a6d76e9 +bbv[9 ];bb67=(
(bb67)<<(12 )|(bb67)>>(32 -12 ))+bb66;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));
bb66+=(bb67&bb69|~bb67&bb64)+0x7a6d76e9 +bbv[7 ];bb66=((bb66)<<(5 )|(
bb66)>>(32 -5 ))+bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=(bb66&
bb67|~bb66&bb69)+0x7a6d76e9 +bbv[10 ];bb61=((bb61)<<(15 )|(bb61)>>(32 -15
))+bb64;bb67=((bb67)<<(10 )|(bb67)>>(32 -10 ));bb64+=(bb61&bb66|~bb61&
bb67)+0x7a6d76e9 +bbv[14 ];bb64=((bb64)<<(8 )|(bb64)>>(32 -8 ))+bb69;bb66=
((bb66)<<(10 )|(bb66)>>(32 -10 ));bb69+=(bb64^bb61^bb66)+bbv[12 ];bb69=((
bb69)<<(8 )|(bb69)>>(32 -8 ))+bb67;bb61=((bb61)<<(10 )|(bb61)>>(32 -10 ));
bb67+=(bb69^bb64^bb61)+bbv[15 ];bb67=((bb67)<<(5 )|(bb67)>>(32 -5 ))+bb66
;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));bb66+=(bb67^bb69^bb64)+bbv[10 ];
bb66=((bb66)<<(12 )|(bb66)>>(32 -12 ))+bb61;bb69=((bb69)<<(10 )|(bb69)>>(
32 -10 ));bb61+=(bb66^bb67^bb69)+bbv[4 ];bb61=((bb61)<<(9 )|(bb61)>>(32 -9
))+bb64;bb67=((bb67)<<(10 )|(bb67)>>(32 -10 ));bb64+=(bb61^bb66^bb67)+
bbv[1 ];bb64=((bb64)<<(12 )|(bb64)>>(32 -12 ))+bb69;bb66=((bb66)<<(10 )|(
bb66)>>(32 -10 ));bb69+=(bb64^bb61^bb66)+bbv[5 ];bb69=((bb69)<<(5 )|(bb69
)>>(32 -5 ))+bb67;bb61=((bb61)<<(10 )|(bb61)>>(32 -10 ));bb67+=(bb69^bb64^
bb61)+bbv[8 ];bb67=((bb67)<<(14 )|(bb67)>>(32 -14 ))+bb66;bb64=((bb64)<<(
10 )|(bb64)>>(32 -10 ));bb66+=(bb67^bb69^bb64)+bbv[7 ];bb66=((bb66)<<(6 )|
(bb66)>>(32 -6 ))+bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=(bb66^
bb67^bb69)+bbv[6 ];bb61=((bb61)<<(8 )|(bb61)>>(32 -8 ))+bb64;bb67=((bb67)<<
(10 )|(bb67)>>(32 -10 ));bb64+=(bb61^bb66^bb67)+bbv[2 ];bb64=((bb64)<<(13
)|(bb64)>>(32 -13 ))+bb69;bb66=((bb66)<<(10 )|(bb66)>>(32 -10 ));bb69+=(
bb64^bb61^bb66)+bbv[13 ];bb69=((bb69)<<(6 )|(bb69)>>(32 -6 ))+bb67;bb61=(
(bb61)<<(10 )|(bb61)>>(32 -10 ));bb67+=(bb69^bb64^bb61)+bbv[14 ];bb67=((
bb67)<<(5 )|(bb67)>>(32 -5 ))+bb66;bb64=((bb64)<<(10 )|(bb64)>>(32 -10 ));
bb66+=(bb67^bb69^bb64)+bbv[0 ];bb66=((bb66)<<(15 )|(bb66)>>(32 -15 ))+
bb61;bb69=((bb69)<<(10 )|(bb69)>>(32 -10 ));bb61+=(bb66^bb67^bb69)+bbv[3
];bb61=((bb61)<<(13 )|(bb61)>>(32 -13 ))+bb64;bb67=((bb67)<<(10 )|(bb67)>>
(32 -10 ));bb64+=(bb61^bb66^bb67)+bbv[9 ];bb64=((bb64)<<(11 )|(bb64)>>(32
-11 ))+bb69;bb66=((bb66)<<(10 )|(bb66)>>(32 -10 ));bb69+=(bb64^bb61^bb66)+
bbv[11 ];bb69=((bb69)<<(11 )|(bb69)>>(32 -11 ))+bb67;bb61=((bb61)<<(10 )|(
bb61)>>(32 -10 ));bb61+=bb23[1 ]+bb68;bb23[1 ]=bb23[2 ]+bb48+bb66;bb23[2 ]=
bb23[3 ]+bb65+bb67;bb23[3 ]=bb23[4 ]+bb62+bb69;bb23[4 ]=bb23[0 ]+bb55+bb64
;bb23[0 ]=bb61;}}bbb bb1801(bb525*bbj){bb40 bbd bb23[5 ]={0x67452301 ,
0xefcdab89 ,0x98badcfe ,0x10325476 ,0xc3d2e1f0 };bbj->bb10=0 ;bb81(bbj->
bb23,bb23,bb11(bb23));}bbb bb1353(bb525*bbj,bbh bbb*bb498,bbq bb10){
bbh bbf*bb6=(bbh bbf* )bb498;bbq bb382=bbj->bb10%bb11(bbj->bb102);bbj
->bb10+=bb10;bbm(bb382){bbq bb12=bb11(bbj->bb102)-bb382;bb81(bbj->
bb102+bb382,bb6,((bb10)<(bb12)?(bb10):(bb12)));bbm(bb10<bb12)bb2;bb6
+=bb12;bb10-=bb12;bb1251(bbj->bb23,bbj->bb102);}bb91(;bb10>=bb11(bbj
->bb102);bb10-=bb11(bbj->bb102),bb6+=bb11(bbj->bb102))bb1251(bbj->
bb23,bb6);bb81(bbj->bb102,bb6,bb10);}bbb bb1795(bb525*bbj,bbb*bb14){
bbd bb1007[2 ]={(bbd)(bbj->bb10<<3 ),(bbd)(bbj->bb10>>29 )};bbf bb438[
bb11(bb1007)];bbq bbz;bb91(bbz=0 ;bbz<bb11(bb438);bbz++)bb438[bbz]=
bb1007[bbz/4 ]>>((bbz%4 ) *8 )&0xff ;{bbf bb1312[]={0x80 },bb1310[bb11(bbj
->bb102)]={0 };bbq bb382=bbj->bb10%bb11(bbj->bb102);bb1353(bbj,bb1312,
1 );bb1353(bbj,bb1310,(bb11(bbj->bb102) *2 -1 -bb11(bb438)-bb382)%bb11(
bbj->bb102));}bb1353(bbj,bb438,bb11(bb438));bb91(bbz=0 ;bbz<bb11(bbj->
bb23);bbz++)((bbf* )bb14)[bbz]=bbj->bb23[bbz/4 ]>>((bbz%4 ) *8 )&0xff ;}
bbb bb1923(bbb*bb14,bbh bbb*bb6,bbq bb10){bb525 bb96;bb1801(&bb96);
bb1353(&bb96,bb6,bb10);bb1795(&bb96,bb14);}bbb bb1972(bbb*bb14,bb82
bb6){bb1923(bb14,bb6,(bbq)bb1302(bb6));}
