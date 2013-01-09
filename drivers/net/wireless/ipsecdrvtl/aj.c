/*
   'kmd.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbi{bbd bb10;bbd bb23[5 ];bbf bb102[64 ];}bb528;bbb bb1794(bb528*
bbj);bbb bb1286(bb528*bbj,bbh bbb*bb6,bbq bb10);bbb bb1802(bb528*bbj,
bbb*bb14);bba bbi{bbd bb10;bbd bb23[8 ];bbf bb102[64 ];}bb531;bbb bb1818
(bb531*bbj);bbb bb1290(bb531*bbj,bbh bbb*bb6,bbq bb10);bbb bb1814(
bb531*bbj,bbb*bb14);bba bbi{bbd bb10;bb56 bb23[8 ];bbf bb102[128 ];}
bb463;bbb bb1808(bb463*bbj);bbb bb1206(bb463*bbj,bbh bbb*bb6,bbq bb10
);bbb bb1835(bb463*bbj,bbb*bb14);bba bb463 bb916;bbb bb1797(bb916*bbj
);bbb bb1810(bb916*bbj,bbb*bb14);bbb bb1905(bbb*bb14,bbh bbb*bb6,bbq
bb10);bbb bb1865(bbb*bb14,bbh bbb*bb6,bbq bb10);bbb bb1848(bbb*bb14,
bbh bbb*bb6,bbq bb10);bbb bb1930(bbb*bb14,bbh bbb*bb6,bbq bb10);bbb
bb2015(bbb*bb14,bb82 bb6);bbb bb1964(bbb*bb14,bb82 bb6);bbb bb2026(
bbb*bb14,bb82 bb6);bbb bb2016(bbb*bb14,bb82 bb6);
#ifdef __cplusplus
}
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
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbi{bbd bb10;bbd bb23[5 ];bbf bb102[64 ];}bb530;bbb bb1804(bb530*
bbj);bbb bb1326(bb530*bbj,bbh bbb*bb498,bbq bb10);bbb bb1838(bb530*
bbj,bbb*bb14);bbb bb1872(bbb*bb14,bbh bbb*bb6,bbq bb10);bbb bb2001(
bbb*bb14,bb82 bb6);
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbb( *bb1053)(bbb*bbj);bba bbb( *bb824)(bbb*bbj,bbh bbb*bb6,bbq
bb10);bba bbb( *bb628)(bbb*bbj,bbb*bb14);bba bbi{bbe bb131;bbq bb38;
bbq bb392;bb1053 bb884;bb824 bb179;bb628 bb698;}bb450;bbb bb1853(
bb450*bbj,bbe bb131);bba bbi{bb450 bbn;bbf bbt[256 -bb11(bb450)];}
bb453;bbb bb1983(bb453*bbj,bbe bb131);bbb bb1990(bb453*bbj);bbb bb2020
(bb453*bbj,bbe bb131);bbb bb1982(bb453*bbj,bbh bbb*bb6,bbq bb10);bbb
bb1975(bb453*bbj,bbb*bb14);bbb bb1988(bbe bb131,bbb*bb14,bbh bbb*bb6,
bbq bb10);bbb bb2048(bbe bb131,bbb*bb14,bb82 bb6);bb82 bb1969(bbe
bb131);
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbi{bb450 bbn;bbf bb546[(512 -bb11(bb450))/2 ];bbf bb1339[(512 -bb11
(bb450))/2 ];}bb491;bbb bb1961(bb491*bbj,bbe bb581);bbb bb2005(bb491*
bbj,bbh bbb*bb71,bbq bb143);bbb bb2108(bb491*bbj,bbe bb581,bbh bbb*
bb71,bbq bb143);bbb bb1987(bb491*bbj,bbh bbb*bb6,bbq bb10);bbb bb2006
(bb491*bbj,bbb*bb14);bbb bb2107(bbe bb581,bbh bbb*bb71,bbq bb143,bbb*
bb14,bbh bbb*bb6,bbq bb10);bbb bb2190(bbe bb581,bb82 bb71,bbb*bb14,
bb82 bb6);
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbi{bbq bb456;bbd bb419[4 * (14 +1 )];}bb364;bbb bb1091(bb364*bbj,
bbh bbb*bb71,bbq bb143);bbb bb1735(bb364*bbj,bbh bbb*bb71,bbq bb143);
bbb bb1033(bb364*bbj,bbb*bb14,bbh bbb*bb6);bbb bb1776(bb364*bbj,bbb*
bb14,bbh bbb*bb6);
#ifdef __cplusplus
}
#endif
bba bbi{bb364 bb2118;bbq bb10;bbf bb102[16 ];bbf bb1927[16 ];bbf bb1928
[16 ];bbf bb1841[16 ];}bb934;bbb bb2041(bb934*bbj,bbh bbb*bb71,bbq bb143
);bbb bb2093(bb934*bbj,bbh bbb*bb6,bbq bb10);bbb bb2103(bb934*bbj,bbb
 *bb14);
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbb( *bb1864)(bbb*bbj,bbh bbb*bb71,bbq bb143);bba bbi{bbe bb131;
bbq bb38;bbq bb392;bb1864 bb884;bb824 bb179;bb628 bb698;}bb2024;bba
bbi{bb2024 bbn;bbf bbt[512 ];}bb521;bbb bb2144(bb521*bbj,bbe bb131);
bbb bb2167(bb521*bbj,bbh bbb*bb71,bbq bb143);bbb bb1833(bb521*bbj,bbe
bb131,bbh bbb*bb71,bbq bb143);bbb bb1240(bb521*bbj,bbh bbb*bb6,bbq
bb10);bbb bb1815(bb521*bbj,bbb*bb14);bbb bb2165(bbe bb131,bbh bbb*
bb71,bbq bb143,bbb*bb14,bbh bbb*bb6,bbq bb10);bbb bb2195(bbe bb131,
bb82 bb71,bbb*bb14,bb82 bb6);bb82 bb2205(bbe bb131);
#ifdef __cplusplus
}
#endif
bbb bb2144(bb521*bbj,bbe bb131){bb2024 bbn={0 };bbn.bb131=bb131;bb298(
bb131&0xff00 ){bb15 0x1000 :{bb491*bb2235=(bb491* )bbj->bbt;bb1961(
bb2235,bb131&0xff );bbn.bb38=bb2235->bbn.bb38;bbn.bb392=bb2235->bbn.
bb392;}bbn.bb884=(bb1864)bb2005;bbn.bb179=(bb824)bb1987;bbn.bb698=(
bb628)bb2006;bb22;bb15 0x2000 :bbn.bb38=16 ;bbn.bb392=16 ;bbn.bb884=(
bb1864)bb2041;bbn.bb179=(bb824)bb2093;bbn.bb698=(bb628)bb2103;bb22;
bb420:bb31(0 );}bbj->bbn=bbn;}bbb bb2167(bb521*bbj,bbh bbb*bb71,bbq
bb143){bbj->bbn.bb884(bbj->bbt,bb71,bb143);}bbb bb1833(bb521*bbj,bbe
bb131,bbh bbb*bb71,bbq bb143){bb2144(bbj,bb131);bb2167(bbj,bb71,bb143
);}bbb bb1240(bb521*bbj,bbh bbb*bb6,bbq bb10){bbj->bbn.bb179(bbj->bbt
,bb6,bb10);}bbb bb1815(bb521*bbj,bbb*bb14){bbj->bbn.bb698(bbj->bbt,
bb14);}bbb bb2165(bbe bb131,bbh bbb*bb71,bbq bb143,bbb*bb14,bbh bbb*
bb6,bbq bb10){bb521 bb96;bb1833(&bb96,bb131,bb71,bb143);bb1240(&bb96,
bb6,bb10);bb1815(&bb96,bb14);}bbb bb2195(bbe bb131,bb82 bb71,bbb*bb14
,bb82 bb6){bb2165(bb131,bb71,(bbq)bb1302(bb71),bb14,bb6,(bbq)bb1302(
bb6));}bb82 bb2205(bbe bb131){bb40 bbl bbg[32 ];bb298(bb131&0xff00 ){
bb15 0x1000 :bb1329(bbg,"\x48\x4d\x41\x43\x5f\x25\x73",bb1969(bb131&
0xff ));bb2 bbg;bb15 0x2000 :bb2"\x41\x45\x53\x5f\x58\x43\x42\x43";}bb2
bb90;}
