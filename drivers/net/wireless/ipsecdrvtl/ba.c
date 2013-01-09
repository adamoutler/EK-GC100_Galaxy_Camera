/*
   'src_compress_deflate_infutil.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
#if ( defined( _WIN32) || defined( __WIN32__)) && ! defined( WIN32)
#define WIN32
#endif
#if defined( __GNUC__) || defined( WIN32) || defined( bb1222) ||  \
defined( bb1207)
#ifndef bb394
#define bb394
#endif
#endif
#if defined( __MSDOS__) && ! defined( bb169)
#define bb169
#endif
#if defined( bb169) && ! defined( bb394)
#define bb506
#endif
#ifdef bb169
#define bb1038
#endif
#if ( defined( bb169) || defined( bb1188) || defined( WIN32)) && !  \
defined( bb136)
#define bb136
#endif
#if defined( __STDC__) || defined( __cplusplus) || defined( bb1214)
#ifndef bb136
#define bb136
#endif
#endif
#ifndef bb136
#ifndef bbh
#define bbh
#endif
#endif
#if defined( __BORLANDC__) && ( __BORLANDC__ < 0x500)
#define bb1093
#endif
#ifndef bb267
#ifdef bb506
#define bb267 8
#else
#define bb267 9
#endif
#endif
#ifndef bbp
#ifdef bb136
#define bbp( bb407) bb407
#else
#define bbp( bb407) ()
#endif
#endif
bba bbf bb154;bba bbs bbe bb7;bba bbs bb5 bb24;bba bb154 bb29;bba bbl
bb439;bba bbe bb1136;bba bb7 bb165;bba bb24 bb166;
#ifdef bb136
bba bbb*bb70;bba bbb*bb181;
#else
bba bb154*bb70;bba bb154*bb181;
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bb70( *bb505)bbp((bb70 bb110,bb7 bb495,bb7 bb47));bba bbb( *bb504
)bbp((bb70 bb110,bb70 bb1096));bbi bb375;bba bbi bb1227{bb29*bb125;
bb7 bb148;bb24 bb190;bb29*bb593;bb7 bb383;bb24 bb610;bbl*bb322;bbi
bb375*bb23;bb505 bb401;bb504 bb371;bb70 bb110;bbe bb974;bb24 bb369;
bb24 bb1148;}bb433;bba bb433*bb17;bbr bbh bbl*bb1158 bbp((bbb));bbr
bbe bb511 bbp((bb17 bb16,bbe bb174));bbr bbe bb939 bbp((bb17 bb16));
bbr bbe bb1050 bbp((bb17 bb16,bbe bb174));bbr bbe bb949 bbp((bb17 bb16
));bbr bbe bb1174 bbp((bb17 bb16,bbh bb29*bb424,bb7 bb432));bbr bbe
bb1147 bbp((bb17 bb130,bb17 bb185));bbr bbe bb1052 bbp((bb17 bb16));
bbr bbe bb1172 bbp((bb17 bb16,bbe bb124,bbe bb297));bbr bbe bb1144 bbp
((bb17 bb16,bbh bb29*bb424,bb7 bb432));bbr bbe bb1170 bbp((bb17 bb16));
bbr bbe bb1010 bbp((bb17 bb16));bbr bbe bb1146 bbp((bb29*bb130,bb166*
bb312,bbh bb29*bb185,bb24 bb325));bbr bbe bb1101 bbp((bb29*bb130,
bb166*bb312,bbh bb29*bb185,bb24 bb325,bbe bb124));bbr bbe bb1155 bbp(
(bb29*bb130,bb166*bb312,bbh bb29*bb185,bb24 bb325));bba bb181 bb33;
bbr bb33 bb1208 bbp((bbh bbl*bb933,bbh bbl*bb57));bbr bb33 bb1209 bbp
((bbe bb470,bbh bbl*bb57));bbr bbe bb1224 bbp((bb33 bb25,bbe bb124,
bbe bb297));bbr bbe bb1189 bbp((bb33 bb25,bb181 bb41,bbs bb21));bbr
bbe bb1185 bbp((bb33 bb25,bbh bb181 bb41,bbs bb21));bbr bbe bb1198 bbp
((bb33 bb25,bbh bbl*bb1226,...));bbr bbe bb1187 bbp((bb33 bb25,bbh bbl
 *bbg));bbr bbl*bb1178 bbp((bb33 bb25,bbl*bb41,bbe bb21));bbr bbe
bb1191 bbp((bb33 bb25,bbe bbo));bbr bbe bb1179 bbp((bb33 bb25));bbr
bbe bb1216 bbp((bb33 bb25,bbe bb174));bbr bb5 bb1192 bbp((bb33 bb25,
bb5 bb92,bbe bb1200));bbr bbe bb1177 bbp((bb33 bb25));bbr bb5 bb1184
bbp((bb33 bb25));bbr bbe bb1194 bbp((bb33 bb25));bbr bbe bb1203 bbp((
bb33 bb25));bbr bbh bbl*bb1183 bbp((bb33 bb25,bbe*bb1176));bbr bb24
bb981 bbp((bb24 bb369,bbh bb29*bb41,bb7 bb21));bbr bb24 bb1152 bbp((
bb24 bb377,bbh bb29*bb41,bb7 bb21));bbr bbe bb1109 bbp((bb17 bb16,bbe
bb124,bbh bbl*bb186,bbe bb196));bbr bbe bb1119 bbp((bb17 bb16,bbh bbl
 *bb186,bbe bb196));bbr bbe bb1045 bbp((bb17 bb16,bbe bb124,bbe bb572
,bbe bb454,bbe bb928,bbe bb297,bbh bbl*bb186,bbe bb196));bbr bbe
bb1082 bbp((bb17 bb16,bbe bb454,bbh bbl*bb186,bbe bb196));bbr bbh bbl
 *bb1150 bbp((bbe bb18));bbr bbe bb1169 bbp((bb17 bby));bbr bbh bb166
 *bb1161 bbp((bbb));
#ifdef __cplusplus
}
#endif
#define bb968 1
#ifdef bb136
#if defined( bb1740)
#else
#endif
#endif
bba bbs bbl bb155;bba bb155 bb1205;bba bbs bb135 bb126;bba bb126 bb500
;bba bbs bb5 bb396;bbr bbh bbl*bb1065[10 ];
#if bb267 >= 8
#define bb783 8
#else
#define bb783 bb267
#endif
#ifdef bb169
#define bb422 0x00
#if defined( __TURBOC__) || defined( __BORLANDC__)
#if( __STDC__ == 1) && ( defined( bb1792) || defined( bb1778))
bbb bb931 bb1309(bbb*bb102);bbb*bb931 bb1340(bbs bb5 bb1739);
#else
#include"uncobf.h"
#include<alloc.h>
#include"cobf.h"
#endif
#else
#include"uncobf.h"
#include<malloc.h>
#include"cobf.h"
#endif
#endif
#ifdef WIN32
#define bb422 0x0b
#endif
#if ( defined( _MSC_VER) && ( _MSC_VER > 600))
#define bb1752( bb470, bb131) bb1787( bb470, bb131)
#endif
#ifndef bb422
#define bb422 0x03
#endif
#if defined( bb1548) && ! defined( _MSC_VER) && ! defined( bb1773)
#define bb968
#endif
bba bb24( *bb952)bbp((bb24 bb476,bbh bb29*bb41,bb7 bb21));bb70 bb1171
bbp((bb70 bb110,bbs bb495,bbs bb47));bbb bb1162 bbp((bb70 bb110,bb70
bb906));bbi bb1099;bba bbi bb1099 bb306;bbr bb306*bb2010 bbp((bb17 bby
,bb952 bbo,bb7 bbv));bbr bbe bb1980 bbp((bb306* ,bb17,bbe));bbr bbb
bb1791 bbp((bb306* ,bb17,bb166* ));bbr bbe bb1995 bbp((bb306* ,bb17));
bbr bbb bb2023 bbp((bb306*bbg,bbh bb29*bbt,bb7 bb12));bbr bbe bb1978
bbp((bb306*bbg));bba bbi bb1370 bb153;bbi bb1370{bb550{bbi{bb154
bb1154;bb154 bb956;}bb501;bb7 bb1546;}bb508;bb7 bb602;};bbr bbe bb2013
bbp((bb165* ,bb165* ,bb153* * ,bb153* ,bb17));bbr bbe bb1996 bbp((bb7
,bb7,bb165* ,bb165* ,bb165* ,bb153* * ,bb153* * ,bb153* ,bb17));bbr
bbe bb1966 bbp((bb165* ,bb165* ,bb153* * ,bb153* * ,bb17));bbi bb1229
;bba bbi bb1229 bb690;bbr bb690*bb1967 bbp((bb7,bb7,bb153* ,bb153* ,
bb17));bbr bbe bb2071 bbp((bb306* ,bb17,bbe));bbr bbb bb1989 bbp((
bb690* ,bb17));bba bb9{bb1767,bb2027,bb2037,bb2074,bb2017,bb1977,
bb1959,bb1883,bb1785,bb918}bb1900;bbi bb1099{bb1900 bb57;bb550{bb7
bb188;bbi{bb7 bb985;bb7 bb163;bb165*bb1121;bb7 bb1719;bb153*bb1769;}
bb442;bbi{bb690*bb1760;}bb1750;}bb149;bb7 bb1884;bb7 bb366;bb24 bb367
;bb153*bb1806;bb29*bb158;bb29*bb443;bb29*bb368;bb29*bb198;bb952 bb1557
;bb24 bb476;};bb40 bbh bb7 bb1138[17 ]={0x0000 ,0x0001 ,0x0003 ,0x0007 ,
0x000f ,0x001f ,0x003f ,0x007f ,0x00ff ,0x01ff ,0x03ff ,0x07ff ,0x0fff ,0x1fff
,0x3fff ,0x7fff ,0xffff };bbr bbe bb388 bbp((bb306* ,bb17,bbe));bbi bb375
{bbe bb445;};bbi bb1229{bbe bb445;};bbe bb388(bbg,bby,bb35)bb306*bbg;
bb17 bby;bbe bb35;{bb7 bb12;bb29*bb27;bb29*bb84;bb27=bby->bb593;bb84=
bbg->bb368;bb12=(bb7)((bb84<=bbg->bb198?bbg->bb198:bbg->bb443)-bb84);
bbm(bb12>bby->bb383)bb12=bby->bb383;bbm(bb12&&bb35==(-5 ))bb35=0 ;bby->
bb383-=bb12;bby->bb610+=bb12;bbm(bbg->bb1557!=0 )bby->bb369=bbg->bb476
=( *bbg->bb1557)(bbg->bb476,bb84,bb12);bb81(bb27,bb84,bb12);bb27+=
bb12;bb84+=bb12;bbm(bb84==bbg->bb443){bb84=bbg->bb158;bbm(bbg->bb198
==bbg->bb443)bbg->bb198=bbg->bb158;bb12=(bb7)(bbg->bb198-bb84);bbm(
bb12>bby->bb383)bb12=bby->bb383;bbm(bb12&&bb35==(-5 ))bb35=0 ;bby->
bb383-=bb12;bby->bb610+=bb12;bbm(bbg->bb1557!=0 )bby->bb369=bbg->bb476
=( *bbg->bb1557)(bbg->bb476,bb84,bb12);bb81(bb27,bb84,bb12);bb27+=
bb12;bb84+=bb12;}bby->bb593=bb27;bbg->bb368=bb84;bb2 bb35;}
