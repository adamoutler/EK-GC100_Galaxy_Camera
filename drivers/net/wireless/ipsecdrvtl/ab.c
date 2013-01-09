/*
   'aes.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
bba bbi{bbq bb456;bbd bb419[4 * (14 +1 )];}bb364;bbb bb1091(bb364*bbj,
bbh bbb*bb71,bbq bb143);bbb bb1735(bb364*bbj,bbh bbb*bb71,bbq bb143);
bbb bb1033(bb364*bbj,bbb*bb14,bbh bbb*bb6);bbb bb1776(bb364*bbj,bbb*
bb14,bbh bbb*bb6);
#ifdef __cplusplus
}
#endif
bb40 bbf bb404[256 ]={0x63 ,0x7c ,0x77 ,0x7b ,0xf2 ,0x6b ,0x6f ,0xc5 ,0x30 ,
0x01 ,0x67 ,0x2b ,0xfe ,0xd7 ,0xab ,0x76 ,0xca ,0x82 ,0xc9 ,0x7d ,0xfa ,0x59 ,0x47
,0xf0 ,0xad ,0xd4 ,0xa2 ,0xaf ,0x9c ,0xa4 ,0x72 ,0xc0 ,0xb7 ,0xfd ,0x93 ,0x26 ,
0x36 ,0x3f ,0xf7 ,0xcc ,0x34 ,0xa5 ,0xe5 ,0xf1 ,0x71 ,0xd8 ,0x31 ,0x15 ,0x04 ,0xc7
,0x23 ,0xc3 ,0x18 ,0x96 ,0x05 ,0x9a ,0x07 ,0x12 ,0x80 ,0xe2 ,0xeb ,0x27 ,0xb2 ,
0x75 ,0x09 ,0x83 ,0x2c ,0x1a ,0x1b ,0x6e ,0x5a ,0xa0 ,0x52 ,0x3b ,0xd6 ,0xb3 ,0x29
,0xe3 ,0x2f ,0x84 ,0x53 ,0xd1 ,0x00 ,0xed ,0x20 ,0xfc ,0xb1 ,0x5b ,0x6a ,0xcb ,
0xbe ,0x39 ,0x4a ,0x4c ,0x58 ,0xcf ,0xd0 ,0xef ,0xaa ,0xfb ,0x43 ,0x4d ,0x33 ,0x85
,0x45 ,0xf9 ,0x02 ,0x7f ,0x50 ,0x3c ,0x9f ,0xa8 ,0x51 ,0xa3 ,0x40 ,0x8f ,0x92 ,
0x9d ,0x38 ,0xf5 ,0xbc ,0xb6 ,0xda ,0x21 ,0x10 ,0xff ,0xf3 ,0xd2 ,0xcd ,0x0c ,0x13
,0xec ,0x5f ,0x97 ,0x44 ,0x17 ,0xc4 ,0xa7 ,0x7e ,0x3d ,0x64 ,0x5d ,0x19 ,0x73 ,
0x60 ,0x81 ,0x4f ,0xdc ,0x22 ,0x2a ,0x90 ,0x88 ,0x46 ,0xee ,0xb8 ,0x14 ,0xde ,0x5e
,0x0b ,0xdb ,0xe0 ,0x32 ,0x3a ,0x0a ,0x49 ,0x06 ,0x24 ,0x5c ,0xc2 ,0xd3 ,0xac ,
0x62 ,0x91 ,0x95 ,0xe4 ,0x79 ,0xe7 ,0xc8 ,0x37 ,0x6d ,0x8d ,0xd5 ,0x4e ,0xa9 ,0x6c
,0x56 ,0xf4 ,0xea ,0x65 ,0x7a ,0xae ,0x08 ,0xba ,0x78 ,0x25 ,0x2e ,0x1c ,0xa6 ,
0xb4 ,0xc6 ,0xe8 ,0xdd ,0x74 ,0x1f ,0x4b ,0xbd ,0x8b ,0x8a ,0x70 ,0x3e ,0xb5 ,0x66
,0x48 ,0x03 ,0xf6 ,0x0e ,0x61 ,0x35 ,0x57 ,0xb9 ,0x86 ,0xc1 ,0x1d ,0x9e ,0xe1 ,
0xf8 ,0x98 ,0x11 ,0x69 ,0xd9 ,0x8e ,0x94 ,0x9b ,0x1e ,0x87 ,0xe9 ,0xce ,0x55 ,0x28
,0xdf ,0x8c ,0xa1 ,0x89 ,0x0d ,0xbf ,0xe6 ,0x42 ,0x68 ,0x41 ,0x99 ,0x2d ,0x0f ,
0xb0 ,0x54 ,0xbb ,0x16 };bb40 bbq bb2086(bbq bb441){bb441<<=1 ;bbm(bb441&
0x0100 )bb441^=0x011b ;bb2 bb441;}bb40 bbd bb2081[256 ],bb2080[256 ],
bb2079[256 ],bb2078[256 ];bb40 bbf bb1015[256 ];bb40 bbd bb1764[256 ],
bb1765[256 ],bb1763[256 ],bb1762[256 ];bb40 bbb bb2057(){bbq bbz;bb91(
bbz=0 ;bbz<256 ;bbz++){bbq bb77=bb404[bbz];{bbq bb1834=bb2086(bb77),
bb2548=bb1834^bb77;bbq bb45=bb1834<<24 |bb77<<16 |bb77<<8 |bb2548;bb2081
[bbz]=bb45;bb2080[bbz]=((bb45)>>(8 )|(bb45)<<(32 -8 ));bb2079[bbz]=((
bb45)>>(16 )|(bb45)<<(32 -16 ));bb2078[bbz]=((bb45)>>(24 )|(bb45)<<(32 -24
));}bb1015[bb77]=bbz;{bbq bb2293=bb2086(bbz),bb2292=bb2086(bb2293),
bb2185=bb2086(bb2292),bb2549=bb2185^bbz,bb2498=bb2185^bb2293^bbz,
bb2501=bb2185^bb2292^bbz,bb2500=bb2185^bb2292^bb2293;bbq bb45=bb2500
<<24 |bb2549<<16 |bb2501<<8 |bb2498;bb1764[bb77]=bb45;bb1765[bb77]=((
bb45)>>(8 )|(bb45)<<(32 -8 ));bb1763[bb77]=((bb45)>>(16 )|(bb45)<<(32 -16 ));
bb1762[bb77]=((bb45)>>(24 )|(bb45)<<(32 -24 ));}}}bbb bb1091(bb364*bbj,
bbh bbb*bb71,bbq bb143){bbq bb1252,bb456,bbz;bb28 bb3=bbj->bb419;bb40
bbu bb1821=1 ;bbm(bb1821){bb2057();bb1821=0 ;}bb31(bb143==16 ||bb143==24
||bb143==32 );bb1252=bb143/4 ;bbj->bb456=bb456=bb1252+6 ;bb91(bbz=0 ;bbz<
bb1252;bbz++) *bb3++=(((bb1)((bb28)bb71+bbz))[3 ]|((bb1)((bb28)bb71+
bbz))[2 ]<<8 |((bb1)((bb28)bb71+bbz))[1 ]<<16 |((bb1)((bb28)bb71+bbz))[0 ]
<<24 );{bbq bbo=1 ;bb91(;bbz<4 * (bb456+1 );bbz++){bbd bb45= * (bb3-1 );
bbm(bbz%bb1252==0 ){bb45=(bb404[bb45>>24 ]^bb404[bb45>>16 &0xff ]<<24 ^
bb404[bb45>>8 &0xff ]<<16 ^bb404[bb45&0xff ]<<8 )^(bbo<<24 );bbo=bb2086(bbo
);}bb54 bbm(bb1252>6 &&bbz%bb1252==4 ){bb45=((bb45)>>(8 )|(bb45)<<(32 -8 ));
bb45=(bb404[bb45>>24 ]^bb404[bb45>>16 &0xff ]<<24 ^bb404[bb45>>8 &0xff ]<<
16 ^bb404[bb45&0xff ]<<8 );} *bb3= * (bb3-bb1252)^bb45;bb3++;}}}bbb
bb1735(bb364*bbj,bbh bbb*bb71,bbq bb143){bb364 bbw;bb28 bb3=bbj->
bb419;bbq bbz;bb1091(&bbw,bb71,bb143);bbj->bb456=bbw.bb456;bb91(bbz=0
;bbz<=bbw.bb456;bbz++){bb81(bb3+4 *bbz,bbw.bb419+4 * (bbw.bb456-bbz),16
);}bb91(bbz=1 ;bbz<bbw.bb456;bbz++){bb3+=4 ;bb3[0 ]=bb1764[bb404[bb3[0 ]
>>24 ]]^bb1765[bb404[bb3[0 ]>>16 &0xff ]]^bb1763[bb404[bb3[0 ]>>8 &0xff ]]^
bb1762[bb404[bb3[0 ]&0xff ]];;bb3[1 ]=bb1764[bb404[bb3[1 ]>>24 ]]^bb1765[
bb404[bb3[1 ]>>16 &0xff ]]^bb1763[bb404[bb3[1 ]>>8 &0xff ]]^bb1762[bb404[
bb3[1 ]&0xff ]];;bb3[2 ]=bb1764[bb404[bb3[2 ]>>24 ]]^bb1765[bb404[bb3[2 ]>>
16 &0xff ]]^bb1763[bb404[bb3[2 ]>>8 &0xff ]]^bb1762[bb404[bb3[2 ]&0xff ]];;
bb3[3 ]=bb1764[bb404[bb3[3 ]>>24 ]]^bb1765[bb404[bb3[3 ]>>16 &0xff ]]^
bb1763[bb404[bb3[3 ]>>8 &0xff ]]^bb1762[bb404[bb3[3 ]&0xff ]];;}}bbb bb1033
(bb364*bbj,bbb*bb14,bbh bbb*bb6){bbd bb730,bb194,bb340,bb809,bb1094,
bb51,bb86,bb1123;bbq bb456=bbj->bb456,bbz;bb28 bb3=(bb28)bbj->bb419;
bb730=(((bb1)((bb28)bb6))[3 ]|((bb1)((bb28)bb6))[2 ]<<8 |((bb1)((bb28)bb6
))[1 ]<<16 |((bb1)((bb28)bb6))[0 ]<<24 )^bb3[0 ];bb194=(((bb1)((bb28)bb6+1
))[3 ]|((bb1)((bb28)bb6+1 ))[2 ]<<8 |((bb1)((bb28)bb6+1 ))[1 ]<<16 |((bb1)((
bb28)bb6+1 ))[0 ]<<24 )^bb3[1 ];bb340=(((bb1)((bb28)bb6+2 ))[3 ]|((bb1)((
bb28)bb6+2 ))[2 ]<<8 |((bb1)((bb28)bb6+2 ))[1 ]<<16 |((bb1)((bb28)bb6+2 ))[0
]<<24 )^bb3[2 ];bb809=(((bb1)((bb28)bb6+3 ))[3 ]|((bb1)((bb28)bb6+3 ))[2 ]
<<8 |((bb1)((bb28)bb6+3 ))[1 ]<<16 |((bb1)((bb28)bb6+3 ))[0 ]<<24 )^bb3[3 ];
bb91(bbz=1 ;bbz<bb456;bbz++){bb3+=4 ;bb1094=bb2081[bb730>>24 ]^bb2080[(
bb194>>16 )&0xff ]^bb2079[(bb340>>8 )&0xff ]^bb2078[(bb809&0xff )]^bb3[0 ];
bb51=bb2081[bb194>>24 ]^bb2080[(bb340>>16 )&0xff ]^bb2079[(bb809>>8 )&
0xff ]^bb2078[(bb730&0xff )]^bb3[1 ];bb86=bb2081[bb340>>24 ]^bb2080[(
bb809>>16 )&0xff ]^bb2079[(bb730>>8 )&0xff ]^bb2078[(bb194&0xff )]^bb3[2 ];
bb1123=bb2081[bb809>>24 ]^bb2080[(bb730>>16 )&0xff ]^bb2079[(bb194>>8 )&
0xff ]^bb2078[(bb340&0xff )]^bb3[3 ];bb730=bb1094;bb194=bb51;bb340=bb86;
bb809=bb1123;}bb3+=4 ;bb1094=bb404[bb730>>24 ]<<24 ^bb404[bb194>>16 &0xff
]<<16 ^bb404[bb340>>8 &0xff ]<<8 ^bb404[bb809&0xff ]^bb3[0 ];bb51=bb404[
bb194>>24 ]<<24 ^bb404[bb340>>16 &0xff ]<<16 ^bb404[bb809>>8 &0xff ]<<8 ^
bb404[bb730&0xff ]^bb3[1 ];bb86=bb404[bb340>>24 ]<<24 ^bb404[bb809>>16 &
0xff ]<<16 ^bb404[bb730>>8 &0xff ]<<8 ^bb404[bb194&0xff ]^bb3[2 ];bb1123=
bb404[bb809>>24 ]<<24 ^bb404[bb730>>16 &0xff ]<<16 ^bb404[bb194>>8 &0xff ]<<
8 ^bb404[bb340&0xff ]^bb3[3 ];((bb28)bb14)[0 ]=(((bb1)(&bb1094))[3 ]|((bb1
)(&bb1094))[2 ]<<8 |((bb1)(&bb1094))[1 ]<<16 |((bb1)(&bb1094))[0 ]<<24 );((
bb28)bb14)[1 ]=(((bb1)(&bb51))[3 ]|((bb1)(&bb51))[2 ]<<8 |((bb1)(&bb51))[
1 ]<<16 |((bb1)(&bb51))[0 ]<<24 );((bb28)bb14)[2 ]=(((bb1)(&bb86))[3 ]|((
bb1)(&bb86))[2 ]<<8 |((bb1)(&bb86))[1 ]<<16 |((bb1)(&bb86))[0 ]<<24 );((
bb28)bb14)[3 ]=(((bb1)(&bb1123))[3 ]|((bb1)(&bb1123))[2 ]<<8 |((bb1)(&
bb1123))[1 ]<<16 |((bb1)(&bb1123))[0 ]<<24 );}bbb bb1776(bb364*bbj,bbb*
bb14,bbh bbb*bb6){bbd bb730,bb194,bb340,bb809,bb1094,bb51,bb86,bb1123
;bbq bb456=bbj->bb456,bbz;bb28 bb3=(bb28)bbj->bb419;bb730=(((bb1)((
bb28)bb6))[3 ]|((bb1)((bb28)bb6))[2 ]<<8 |((bb1)((bb28)bb6))[1 ]<<16 |((
bb1)((bb28)bb6))[0 ]<<24 )^bb3[0 ];bb194=(((bb1)((bb28)bb6+1 ))[3 ]|((bb1)(
(bb28)bb6+1 ))[2 ]<<8 |((bb1)((bb28)bb6+1 ))[1 ]<<16 |((bb1)((bb28)bb6+1 ))[
0 ]<<24 )^bb3[1 ];bb340=(((bb1)((bb28)bb6+2 ))[3 ]|((bb1)((bb28)bb6+2 ))[2 ]
<<8 |((bb1)((bb28)bb6+2 ))[1 ]<<16 |((bb1)((bb28)bb6+2 ))[0 ]<<24 )^bb3[2 ];
bb809=(((bb1)((bb28)bb6+3 ))[3 ]|((bb1)((bb28)bb6+3 ))[2 ]<<8 |((bb1)((
bb28)bb6+3 ))[1 ]<<16 |((bb1)((bb28)bb6+3 ))[0 ]<<24 )^bb3[3 ];bb91(bbz=1 ;
bbz<bb456;bbz++){bb3+=4 ;bb1094=bb1764[bb730>>24 ]^bb1765[bb809>>16 &
0xff ]^bb1763[bb340>>8 &0xff ]^bb1762[bb194&0xff ]^bb3[0 ];bb51=bb1764[
bb194>>24 ]^bb1765[bb730>>16 &0xff ]^bb1763[bb809>>8 &0xff ]^bb1762[bb340&
0xff ]^bb3[1 ];bb86=bb1764[bb340>>24 ]^bb1765[bb194>>16 &0xff ]^bb1763[
bb730>>8 &0xff ]^bb1762[bb809&0xff ]^bb3[2 ];bb1123=bb1764[bb809>>24 ]^
bb1765[bb340>>16 &0xff ]^bb1763[bb194>>8 &0xff ]^bb1762[bb730&0xff ]^bb3[3
];bb730=bb1094;bb194=bb51;bb340=bb86;bb809=bb1123;}bb3+=4 ;bb1094=
bb1015[bb730>>24 ]<<24 ^bb1015[bb809>>16 &0xff ]<<16 ^bb1015[bb340>>8 &0xff
]<<8 ^bb1015[bb194&0xff ]^bb3[0 ];bb51=bb1015[bb194>>24 ]<<24 ^bb1015[
bb730>>16 &0xff ]<<16 ^bb1015[bb809>>8 &0xff ]<<8 ^bb1015[bb340&0xff ]^bb3[1
];bb86=bb1015[bb340>>24 ]<<24 ^bb1015[bb194>>16 &0xff ]<<16 ^bb1015[bb730
>>8 &0xff ]<<8 ^bb1015[bb809&0xff ]^bb3[2 ];bb1123=bb1015[bb809>>24 ]<<24 ^
bb1015[bb340>>16 &0xff ]<<16 ^bb1015[bb194>>8 &0xff ]<<8 ^bb1015[bb730&0xff
]^bb3[3 ];((bb28)bb14)[0 ]=(((bb1)(&bb1094))[3 ]|((bb1)(&bb1094))[2 ]<<8 |
((bb1)(&bb1094))[1 ]<<16 |((bb1)(&bb1094))[0 ]<<24 );((bb28)bb14)[1 ]=(((
bb1)(&bb51))[3 ]|((bb1)(&bb51))[2 ]<<8 |((bb1)(&bb51))[1 ]<<16 |((bb1)(&
bb51))[0 ]<<24 );((bb28)bb14)[2 ]=(((bb1)(&bb86))[3 ]|((bb1)(&bb86))[2 ]<<
8 |((bb1)(&bb86))[1 ]<<16 |((bb1)(&bb86))[0 ]<<24 );((bb28)bb14)[3 ]=(((bb1
)(&bb1123))[3 ]|((bb1)(&bb1123))[2 ]<<8 |((bb1)(&bb1123))[1 ]<<16 |((bb1)(
&bb1123))[0 ]<<24 );}
