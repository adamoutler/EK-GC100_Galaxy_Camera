/*
   'aes_xcbc.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
bbb bb2041(bb934*bbj,bbh bbb*bb71,bbq bb143){bb364 bb2149;bbf bb2181[
16 ];bbj->bb10=0 ;bb31(bb143==16 );bb1091(&bb2149,bb71,bb143);bb994(bbj
->bb1841,0 ,16 );bb994(bb2181,1 ,16 );bb1033(&bb2149,bb2181,bb2181);bb994
(bbj->bb1927,2 ,16 );bb1033(&bb2149,bbj->bb1927,bbj->bb1927);bb994(bbj
->bb1928,3 ,16 );bb1033(&bb2149,bbj->bb1928,bbj->bb1928);bb1091(&bbj->
bb2118,bb2181,bb143);}bb40 bbb bb1251(bb934*bbj,bbh bbf*bb6){bbq bbz;
bb91(bbz=0 ;bbz<16 ;bbz++)bbj->bb1841[bbz]^=bb6[bbz];bb1033(&bbj->
bb2118,bbj->bb1841,bbj->bb1841);}bbb bb2093(bb934*bbj,bbh bbb*bb498,
bbq bb10){bbh bbf*bb6=(bbh bbf* )bb498;bbq bb382=bbj->bb10?(bbj->bb10
-1 )%16 +1 :0 ;bbj->bb10+=bb10;bbm(bb382){bbq bb12=16 -bb382;bb81(bbj->
bb102+bb382,bb6,((bb10)<(bb12)?(bb10):(bb12)));bbm(bb10<=bb12)bb2;bb6
+=bb12;bb10-=bb12;bb1251(bbj,bbj->bb102);}bb91(;bb10>16 ;bb10-=16 ,bb6
+=16 )bb1251(bbj,bb6);bb81(bbj->bb102,bb6,bb10);}bbb bb2103(bb934*bbj,
bbb*bb14){bb1 bb3;bbq bbz,bb382=bbj->bb10?(bbj->bb10-1 )%16 +1 :0 ;bbm(
bb382<16 ){bbj->bb102[bb382++]=0x80 ;bb994(bbj->bb102+bb382,0 ,16 -bb382);
bb3=bbj->bb1928;}bb54 bb3=bbj->bb1927;bb91(bbz=0 ;bbz<16 ;bbz++)bbj->
bb102[bbz]^=bb3[bbz];bb1251(bbj,bbj->bb102);bb81(bb14,bbj->bb1841,16 );
}
