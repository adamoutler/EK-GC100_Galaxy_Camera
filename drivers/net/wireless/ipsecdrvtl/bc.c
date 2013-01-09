/*
   'src_compress_deflate_trees.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
bb906));bba bbi bb1954{bb550{bb126 bb426;bb126 bb172;}bb222;bb550{
bb126 bb2162;bb126 bb21;}bb48;}bb458;bba bbi bb2275 bb2004;bba bbi
bb1940{bb458*bb1747;bbe bb510;bb2004*bb1717;}bb1733;bba bb126 bb1064;
bba bb1064 bb1356;bba bbs bb1315;bba bbi bb375{bb17 bb16;bbe bb359;
bb29*bb171;bb396 bb2038;bb29*bb1874;bbe bb183;bbe bb1348;bb154 bb974;
bb154 bb572;bbe bb1894;bb7 bb929;bb7 bb2161;bb7 bb1807;bb29*bb158;
bb396 bb2224;bb1356*bb963;bb1356*bb385;bb7 bb497;bb7 bb1321;bb7 bb2131
;bb7 bb1378;bb7 bb1608;bb5 bb427;bb7 bb953;bb1315 bb2295;bbe bb1939;
bb7 bb182;bb7 bb2022;bb7 bb462;bb7 bb1276;bb7 bb2175;bb7 bb2054;bbe
bb124;bbe bb297;bb7 bb2180;bbe bb1837;bbi bb1954 bb982[(2 * (256 +1 +29 )+
1 )];bbi bb1954 bb1678[2 *30 +1 ];bbi bb1954 bb526[2 *19 +1 ];bbi bb1940
bb1937;bbi bb1940 bb1861;bbi bb1940 bb2061;bb126 bb1221[15 +1 ];bbe
bb517[2 * (256 +1 +29 )+1 ];bbe bb1500;bbe bb1945;bb155 bb1235[2 * (256 +1 +
29 )+1 ];bb1205*bb1723;bb7 bb1118;bb7 bb606;bb500*bb1642;bb396 bb1904;
bb396 bb2119;bb7 bb2228;bbe bb1992;bb126 bb99;bbe bb78;}bb191;bbb
bb2208 bbp((bb191*bbg));bbe bb2386 bbp((bb191*bbg,bbs bb415,bbs bb1134
));bbb bb1617 bbp((bb191*bbg,bb439*bb41,bb396 bb1289,bbe bb1107));bbb
bb2252 bbp((bb191*bbg));bbb bb2142 bbp((bb191*bbg,bb439*bb41,bb396
bb1289,bbe bb1107));bb40 bbh bbe bb2412[29 ]={0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,1 ,1 ,1 ,
2 ,2 ,2 ,2 ,3 ,3 ,3 ,3 ,4 ,4 ,4 ,4 ,5 ,5 ,5 ,5 ,0 };bb40 bbh bbe bb2376[30 ]={0 ,0 ,0 ,0 ,1
,1 ,2 ,2 ,3 ,3 ,4 ,4 ,5 ,5 ,6 ,6 ,7 ,7 ,8 ,8 ,9 ,9 ,10 ,10 ,11 ,11 ,12 ,12 ,13 ,13 };bb40 bbh
bbe bb2476[19 ]={0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,2 ,3 ,7 };bb40 bbh bb155
bb2197[19 ]={16 ,17 ,18 ,0 ,8 ,7 ,9 ,6 ,10 ,5 ,11 ,4 ,12 ,3 ,13 ,2 ,14 ,1 ,15 };bb40 bbh
bb458 bb1737[(256 +1 +29 )+2 ]={{{12 },{8 }},{{140 },{8 }},{{76 },{8 }},{{204 },
{8 }},{{44 },{8 }},{{172 },{8 }},{{108 },{8 }},{{236 },{8 }},{{28 },{8 }},{{156 }
,{8 }},{{92 },{8 }},{{220 },{8 }},{{60 },{8 }},{{188 },{8 }},{{124 },{8 }},{{252
},{8 }},{{2 },{8 }},{{130 },{8 }},{{66 },{8 }},{{194 },{8 }},{{34 },{8 }},{{162 }
,{8 }},{{98 },{8 }},{{226 },{8 }},{{18 },{8 }},{{146 },{8 }},{{82 },{8 }},{{210 }
,{8 }},{{50 },{8 }},{{178 },{8 }},{{114 },{8 }},{{242 },{8 }},{{10 },{8 }},{{138
},{8 }},{{74 },{8 }},{{202 },{8 }},{{42 },{8 }},{{170 },{8 }},{{106 },{8 }},{{
234 },{8 }},{{26 },{8 }},{{154 },{8 }},{{90 },{8 }},{{218 },{8 }},{{58 },{8 }},{{
186 },{8 }},{{122 },{8 }},{{250 },{8 }},{{6 },{8 }},{{134 },{8 }},{{70 },{8 }},{{
198 },{8 }},{{38 },{8 }},{{166 },{8 }},{{102 },{8 }},{{230 },{8 }},{{22 },{8 }},{
{150 },{8 }},{{86 },{8 }},{{214 },{8 }},{{54 },{8 }},{{182 },{8 }},{{118 },{8 }},
{{246 },{8 }},{{14 },{8 }},{{142 },{8 }},{{78 },{8 }},{{206 },{8 }},{{46 },{8 }},
{{174 },{8 }},{{110 },{8 }},{{238 },{8 }},{{30 },{8 }},{{158 },{8 }},{{94 },{8 }}
,{{222 },{8 }},{{62 },{8 }},{{190 },{8 }},{{126 },{8 }},{{254 },{8 }},{{1 },{8 }}
,{{129 },{8 }},{{65 },{8 }},{{193 },{8 }},{{33 },{8 }},{{161 },{8 }},{{97 },{8 }}
,{{225 },{8 }},{{17 },{8 }},{{145 },{8 }},{{81 },{8 }},{{209 },{8 }},{{49 },{8 }}
,{{177 },{8 }},{{113 },{8 }},{{241 },{8 }},{{9 },{8 }},{{137 },{8 }},{{73 },{8 }}
,{{201 },{8 }},{{41 },{8 }},{{169 },{8 }},{{105 },{8 }},{{233 },{8 }},{{25 },{8 }
},{{153 },{8 }},{{89 },{8 }},{{217 },{8 }},{{57 },{8 }},{{185 },{8 }},{{121 },{8
}},{{249 },{8 }},{{5 },{8 }},{{133 },{8 }},{{69 },{8 }},{{197 },{8 }},{{37 },{8 }
},{{165 },{8 }},{{101 },{8 }},{{229 },{8 }},{{21 },{8 }},{{149 },{8 }},{{85 },{8
}},{{213 },{8 }},{{53 },{8 }},{{181 },{8 }},{{117 },{8 }},{{245 },{8 }},{{13 },{
8 }},{{141 },{8 }},{{77 },{8 }},{{205 },{8 }},{{45 },{8 }},{{173 },{8 }},{{109 },
{8 }},{{237 },{8 }},{{29 },{8 }},{{157 },{8 }},{{93 },{8 }},{{221 },{8 }},{{61 },
{8 }},{{189 },{8 }},{{125 },{8 }},{{253 },{8 }},{{19 },{9 }},{{275 },{9 }},{{147
},{9 }},{{403 },{9 }},{{83 },{9 }},{{339 },{9 }},{{211 },{9 }},{{467 },{9 }},{{
51 },{9 }},{{307 },{9 }},{{179 },{9 }},{{435 },{9 }},{{115 },{9 }},{{371 },{9 }},
{{243 },{9 }},{{499 },{9 }},{{11 },{9 }},{{267 },{9 }},{{139 },{9 }},{{395 },{9 }
},{{75 },{9 }},{{331 },{9 }},{{203 },{9 }},{{459 },{9 }},{{43 },{9 }},{{299 },{9
}},{{171 },{9 }},{{427 },{9 }},{{107 },{9 }},{{363 },{9 }},{{235 },{9 }},{{491 }
,{9 }},{{27 },{9 }},{{283 },{9 }},{{155 },{9 }},{{411 },{9 }},{{91 },{9 }},{{347
},{9 }},{{219 },{9 }},{{475 },{9 }},{{59 },{9 }},{{315 },{9 }},{{187 },{9 }},{{
443 },{9 }},{{123 },{9 }},{{379 },{9 }},{{251 },{9 }},{{507 },{9 }},{{7 },{9 }},{
{263 },{9 }},{{135 },{9 }},{{391 },{9 }},{{71 },{9 }},{{327 },{9 }},{{199 },{9 }}
,{{455 },{9 }},{{39 },{9 }},{{295 },{9 }},{{167 },{9 }},{{423 },{9 }},{{103 },{9
}},{{359 },{9 }},{{231 },{9 }},{{487 },{9 }},{{23 },{9 }},{{279 },{9 }},{{151 },
{9 }},{{407 },{9 }},{{87 },{9 }},{{343 },{9 }},{{215 },{9 }},{{471 },{9 }},{{55 }
,{9 }},{{311 },{9 }},{{183 },{9 }},{{439 },{9 }},{{119 },{9 }},{{375 },{9 }},{{
247 },{9 }},{{503 },{9 }},{{15 },{9 }},{{271 },{9 }},{{143 },{9 }},{{399 },{9 }},
{{79 },{9 }},{{335 },{9 }},{{207 },{9 }},{{463 },{9 }},{{47 },{9 }},{{303 },{9 }}
,{{175 },{9 }},{{431 },{9 }},{{111 },{9 }},{{367 },{9 }},{{239 },{9 }},{{495 },{
9 }},{{31 },{9 }},{{287 },{9 }},{{159 },{9 }},{{415 },{9 }},{{95 },{9 }},{{351 },
{9 }},{{223 },{9 }},{{479 },{9 }},{{63 },{9 }},{{319 },{9 }},{{191 },{9 }},{{447
},{9 }},{{127 },{9 }},{{383 },{9 }},{{255 },{9 }},{{511 },{9 }},{{0 },{7 }},{{64
},{7 }},{{32 },{7 }},{{96 },{7 }},{{16 },{7 }},{{80 },{7 }},{{48 },{7 }},{{112 },
{7 }},{{8 },{7 }},{{72 },{7 }},{{40 },{7 }},{{104 },{7 }},{{24 },{7 }},{{88 },{7 }
},{{56 },{7 }},{{120 },{7 }},{{4 },{7 }},{{68 },{7 }},{{36 },{7 }},{{100 },{7 }},
{{20 },{7 }},{{84 },{7 }},{{52 },{7 }},{{116 },{7 }},{{3 },{8 }},{{131 },{8 }},{{
67 },{8 }},{{195 },{8 }},{{35 },{8 }},{{163 },{8 }},{{99 },{8 }},{{227 },{8 }}};
bb40 bbh bb458 bb2232[30 ]={{{0 },{5 }},{{16 },{5 }},{{8 },{5 }},{{24 },{5 }},
{{4 },{5 }},{{20 },{5 }},{{12 },{5 }},{{28 },{5 }},{{2 },{5 }},{{18 },{5 }},{{10 }
,{5 }},{{26 },{5 }},{{6 },{5 }},{{22 },{5 }},{{14 },{5 }},{{30 },{5 }},{{1 },{5 }}
,{{17 },{5 }},{{9 },{5 }},{{25 },{5 }},{{5 },{5 }},{{21 },{5 }},{{13 },{5 }},{{29
},{5 }},{{3 },{5 }},{{19 },{5 }},{{11 },{5 }},{{27 },{5 }},{{7 },{5 }},{{23 },{5 }
}};bb40 bbh bb155 bb1734[512 ]={0 ,1 ,2 ,3 ,4 ,4 ,5 ,5 ,6 ,6 ,6 ,6 ,7 ,7 ,7 ,7 ,8 ,8 ,8 ,
8 ,8 ,8 ,8 ,8 ,9 ,9 ,9 ,9 ,9 ,9 ,9 ,9 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,
10 ,10 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,12 ,12 ,12 ,12 ,12 ,
12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,
12 ,12 ,12 ,12 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,
13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,
14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,
14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,
14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,
15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,
15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,
15 ,15 ,15 ,0 ,0 ,16 ,17 ,18 ,18 ,19 ,19 ,20 ,20 ,20 ,20 ,21 ,21 ,21 ,21 ,22 ,22 ,22 ,22 ,22
,22 ,22 ,22 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24
,24 ,24 ,24 ,24 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,26 ,26 ,26
,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26
,26 ,26 ,26 ,26 ,26 ,26 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27
,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28
,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28
,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28
,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29
,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29
,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29
,29 ,29 ,29 ,29 ,29 };bb40 bbh bb155 bb2049[258 -3 +1 ]={0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,8 ,
9 ,9 ,10 ,10 ,11 ,11 ,12 ,12 ,12 ,12 ,13 ,13 ,13 ,13 ,14 ,14 ,14 ,14 ,15 ,15 ,15 ,15 ,16 ,16
,16 ,16 ,16 ,16 ,16 ,16 ,17 ,17 ,17 ,17 ,17 ,17 ,17 ,17 ,18 ,18 ,18 ,18 ,18 ,18 ,18 ,18 ,19
,19 ,19 ,19 ,19 ,19 ,19 ,19 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20
,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,22 ,22 ,22 ,22 ,22 ,22 ,22
,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23
,23 ,23 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24
,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25
,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,26 ,26 ,26
,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26
,26 ,26 ,26 ,26 ,26 ,26 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27
,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,28 };bb40 bbh bbe bb2333[29
]={0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,10 ,12 ,14 ,16 ,20 ,24 ,28 ,32 ,40 ,48 ,56 ,64 ,80 ,96 ,112 ,
128 ,160 ,192 ,224 ,0 };bb40 bbh bbe bb2414[30 ]={0 ,1 ,2 ,3 ,4 ,6 ,8 ,12 ,16 ,24 ,32
,48 ,64 ,96 ,128 ,192 ,256 ,384 ,512 ,768 ,1024 ,1536 ,2048 ,3072 ,4096 ,6144 ,8192 ,
12288 ,16384 ,24576 };bbi bb2275{bbh bb458*bb2344;bbh bb1136*bb2469;bbe
bb2450;bbe bb2173;bbe bb1942;};bb40 bb2004 bb2489={bb1737,bb2412,256 +
1 ,(256 +1 +29 ),15 };bb40 bb2004 bb2560={bb2232,bb2376,0 ,30 ,15 };bb40
bb2004 bb2496={(bbh bb458* )0 ,bb2476,0 ,19 ,7 };bb40 bbb bb2242 bbp((
bb191*bbg));bb40 bbb bb2166 bbp((bb191*bbg,bb458*bb302,bbe bb3));bb40
bbb bb2367 bbp((bb191*bbg,bb1733*bb1078));bb40 bbb bb2392 bbp((bb458*
bb302,bbe bb510,bb500*bb1221));bb40 bbb bb2184 bbp((bb191*bbg,bb1733*
bb1078));bb40 bbb bb2304 bbp((bb191*bbg,bb458*bb302,bbe bb510));bb40
bbb bb2229 bbp((bb191*bbg,bb458*bb302,bbe bb510));bb40 bbe bb2382 bbp
((bb191*bbg));bb40 bbb bb2406 bbp((bb191*bbg,bbe bb2051,bbe bb2092,
bbe bb2044));bb40 bbb bb2267 bbp((bb191*bbg,bb458*bb1072,bb458*bb1745
));bb40 bbb bb2312 bbp((bb191*bbg));bb40 bbs bb2369 bbp((bbs bb1318,
bbe bb464));bb40 bbb bb2257 bbp((bb191*bbg));bb40 bbb bb2301 bbp((
bb191*bbg));bb40 bbb bb2317 bbp((bb191*bbg,bb439*bb41,bbs bb21,bbe
bb980));bbb bb2208(bbg)bb191*bbg;{bbg->bb1937.bb1747=bbg->bb982;bbg->
bb1937.bb1717=&bb2489;bbg->bb1861.bb1747=bbg->bb1678;bbg->bb1861.
bb1717=&bb2560;bbg->bb2061.bb1747=bbg->bb526;bbg->bb2061.bb1717=&
bb2496;bbg->bb99=0 ;bbg->bb78=0 ;bbg->bb1992=8 ;bb2242(bbg);}bb40 bbb
bb2242(bbg)bb191*bbg;{bbe bb12;bb91(bb12=0 ;bb12<(256 +1 +29 );bb12++)bbg
->bb982[bb12].bb222.bb426=0 ;bb91(bb12=0 ;bb12<30 ;bb12++)bbg->bb1678[
bb12].bb222.bb426=0 ;bb91(bb12=0 ;bb12<19 ;bb12++)bbg->bb526[bb12].bb222
.bb426=0 ;bbg->bb982[256 ].bb222.bb426=1 ;bbg->bb1904=bbg->bb2119=0L ;bbg
->bb606=bbg->bb2228=0 ;}bb40 bbb bb2166(bbg,bb302,bb3)bb191*bbg;bb458*
bb302;bbe bb3;{bbe bb441=bbg->bb517[bb3];bbe bb77=bb3<<1 ;bb108(bb77<=
bbg->bb1500){bbm(bb77<bbg->bb1500&&(bb302[bbg->bb517[bb77+1 ]].bb222.
bb426<bb302[bbg->bb517[bb77]].bb222.bb426||(bb302[bbg->bb517[bb77+1 ]]
.bb222.bb426==bb302[bbg->bb517[bb77]].bb222.bb426&&bbg->bb1235[bbg->
bb517[bb77+1 ]]<=bbg->bb1235[bbg->bb517[bb77]]))){bb77++;}bbm((bb302[
bb441].bb222.bb426<bb302[bbg->bb517[bb77]].bb222.bb426||(bb302[bb441]
.bb222.bb426==bb302[bbg->bb517[bb77]].bb222.bb426&&bbg->bb1235[bb441]
<=bbg->bb1235[bbg->bb517[bb77]])))bb22;bbg->bb517[bb3]=bbg->bb517[
bb77];bb3=bb77;bb77<<=1 ;}bbg->bb517[bb3]=bb441;}bb40 bbb bb2367(bbg,
bb1078)bb191*bbg;bb1733*bb1078;{bb458*bb302=bb1078->bb1747;bbe bb510=
bb1078->bb510;bbh bb458*bb2115=bb1078->bb1717->bb2344;bbh bb1136*
bb1799=bb1078->bb1717->bb2469;bbe bb602=bb1078->bb1717->bb2450;bbe
bb1942=bb1078->bb1717->bb1942;bbe bb42;bbe bb12,bb96;bbe bb513;bbe
bb2143;bb126 bb20;bbe bb2138=0 ;bb91(bb513=0 ;bb513<=15 ;bb513++)bbg->
bb1221[bb513]=0 ;bb302[bbg->bb517[bbg->bb1945]].bb48.bb21=0 ;bb91(bb42=
bbg->bb1945+1 ;bb42<(2 * (256 +1 +29 )+1 );bb42++){bb12=bbg->bb517[bb42];
bb513=bb302[bb302[bb12].bb48.bb2162].bb48.bb21+1 ;bbm(bb513>bb1942)bb513
=bb1942,bb2138++;bb302[bb12].bb48.bb21=(bb126)bb513;bbm(bb12>bb510)bb1789
;bbg->bb1221[bb513]++;bb2143=0 ;bbm(bb12>=bb602)bb2143=bb1799[bb12-
bb602];bb20=bb302[bb12].bb222.bb426;bbg->bb1904+=(bb396)bb20* (bb513+
bb2143);bbm(bb2115)bbg->bb2119+=(bb396)bb20* (bb2115[bb12].bb48.bb21+
bb2143);}bbm(bb2138==0 )bb2;;bb567{bb513=bb1942-1 ;bb108(bbg->bb1221[
bb513]==0 )bb513--;bbg->bb1221[bb513]--;bbg->bb1221[bb513+1 ]+=2 ;bbg->
bb1221[bb1942]--;bb2138-=2 ;}bb108(bb2138>0 );bb91(bb513=bb1942;bb513!=
0 ;bb513--){bb12=bbg->bb1221[bb513];bb108(bb12!=0 ){bb96=bbg->bb517[--
bb42];bbm(bb96>bb510)bb1789;bbm(bb302[bb96].bb48.bb21!=(bbs)bb513){;
bbg->bb1904+=((bb5)bb513-(bb5)bb302[bb96].bb48.bb21) * (bb5)bb302[
bb96].bb222.bb426;bb302[bb96].bb48.bb21=(bb126)bb513;}bb12--;}}}bb40
bbb bb2392(bb302,bb510,bb1221)bb458*bb302;bbe bb510;bb500*bb1221;{
bb126 bb2401[15 +1 ];bb126 bb172=0 ;bbe bb513;bbe bb12;bb91(bb513=1 ;
bb513<=15 ;bb513++){bb2401[bb513]=bb172=(bb172+bb1221[bb513-1 ])<<1 ;};;
bb91(bb12=0 ;bb12<=bb510;bb12++){bbe bb21=bb302[bb12].bb48.bb21;bbm(
bb21==0 )bb1789;bb302[bb12].bb222.bb172=bb2369(bb2401[bb21]++,bb21);;}
}bb40 bbb bb2184(bbg,bb1078)bb191*bbg;bb1733*bb1078;{bb458*bb302=
bb1078->bb1747;bbh bb458*bb2115=bb1078->bb1717->bb2344;bbe bb2173=
bb1078->bb1717->bb2173;bbe bb12,bb96;bbe bb510=-1 ;bbe bb1774;bbg->
bb1500=0 ,bbg->bb1945=(2 * (256 +1 +29 )+1 );bb91(bb12=0 ;bb12<bb2173;bb12++
){bbm(bb302[bb12].bb222.bb426!=0 ){bbg->bb517[++(bbg->bb1500)]=bb510=
bb12;bbg->bb1235[bb12]=0 ;}bb54{bb302[bb12].bb48.bb21=0 ;}}bb108(bbg->
bb1500<2 ){bb1774=bbg->bb517[++(bbg->bb1500)]=(bb510<2 ?++bb510:0 );
bb302[bb1774].bb222.bb426=1 ;bbg->bb1235[bb1774]=0 ;bbg->bb1904--;bbm(
bb2115)bbg->bb2119-=bb2115[bb1774].bb48.bb21;}bb1078->bb510=bb510;
bb91(bb12=bbg->bb1500/2 ;bb12>=1 ;bb12--)bb2166(bbg,bb302,bb12);bb1774=
bb2173;bb567{{bb12=bbg->bb517[1 ];bbg->bb517[1 ]=bbg->bb517[bbg->bb1500
--];bb2166(bbg,bb302,1 );};bb96=bbg->bb517[1 ];bbg->bb517[--(bbg->
bb1945)]=bb12;bbg->bb517[--(bbg->bb1945)]=bb96;bb302[bb1774].bb222.
bb426=bb302[bb12].bb222.bb426+bb302[bb96].bb222.bb426;bbg->bb1235[
bb1774]=(bb155)((bbg->bb1235[bb12]>=bbg->bb1235[bb96]?bbg->bb1235[
bb12]:bbg->bb1235[bb96])+1 );bb302[bb12].bb48.bb2162=bb302[bb96].bb48.
bb2162=(bb126)bb1774;bbg->bb517[1 ]=bb1774++;bb2166(bbg,bb302,1 );}
bb108(bbg->bb1500>=2 );bbg->bb517[--(bbg->bb1945)]=bbg->bb517[1 ];
bb2367(bbg,(bb1733* )bb1078);bb2392((bb458* )bb302,bb510,bbg->bb1221);
}bb40 bbb bb2304(bbg,bb302,bb510)bb191*bbg;bb458*bb302;bbe bb510;{bbe
bb12;bbe bb2084=-1 ;bbe bb613;bbe bb1218=bb302[0 ].bb48.bb21;bbe bb966=
0 ;bbe bb1333=7 ;bbe bb1299=4 ;bbm(bb1218==0 )bb1333=138 ,bb1299=3 ;bb302[
bb510+1 ].bb48.bb21=(bb126)0xffff ;bb91(bb12=0 ;bb12<=bb510;bb12++){
bb613=bb1218;bb1218=bb302[bb12+1 ].bb48.bb21;bbm(++bb966<bb1333&&bb613
==bb1218){bb1789;}bb54 bbm(bb966<bb1299){bbg->bb526[bb613].bb222.
bb426+=bb966;}bb54 bbm(bb613!=0 ){bbm(bb613!=bb2084)bbg->bb526[bb613].
bb222.bb426++;bbg->bb526[16 ].bb222.bb426++;}bb54 bbm(bb966<=10 ){bbg->
bb526[17 ].bb222.bb426++;}bb54{bbg->bb526[18 ].bb222.bb426++;}bb966=0 ;
bb2084=bb613;bbm(bb1218==0 ){bb1333=138 ,bb1299=3 ;}bb54 bbm(bb613==
bb1218){bb1333=6 ,bb1299=3 ;}bb54{bb1333=7 ,bb1299=4 ;}}}bb40 bbb bb2229(
bbg,bb302,bb510)bb191*bbg;bb458*bb302;bbe bb510;{bbe bb12;bbe bb2084=
-1 ;bbe bb613;bbe bb1218=bb302[0 ].bb48.bb21;bbe bb966=0 ;bbe bb1333=7 ;
bbe bb1299=4 ;bbm(bb1218==0 )bb1333=138 ,bb1299=3 ;bb91(bb12=0 ;bb12<=
bb510;bb12++){bb613=bb1218;bb1218=bb302[bb12+1 ].bb48.bb21;bbm(++bb966
<bb1333&&bb613==bb1218){bb1789;}bb54 bbm(bb966<bb1299){bb567{{bbe bb21
=bbg->bb526[bb613].bb48.bb21;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){
bbe bb170=bbg->bb526[bb613].bb222.bb172;bbg->bb99|=(bb170<<bbg->bb78);
{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[
bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170
>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}
bb54{bbg->bb99|=(bbg->bb526[bb613].bb222.bb172)<<bbg->bb78;bbg->bb78
+=bb21;}};}bb108(--bb966!=0 );}bb54 bbm(bb613!=0 ){bbm(bb613!=bb2084){{
bbe bb21=bbg->bb526[bb613].bb48.bb21;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl
))-bb21){bbe bb170=bbg->bb526[bb613].bb222.bb172;bbg->bb99|=(bb170<<
bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};{
bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->
bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(
8 *2 *bb11(bbl));}bb54{bbg->bb99|=(bbg->bb526[bb613].bb222.bb172)<<bbg
->bb78;bbg->bb78+=bb21;}};bb966--;};{bbe bb21=bbg->bb526[16 ].bb48.
bb21;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bbg->bb526[16
].bb222.bb172;bbg->bb99|=(bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++
]=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((
bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(
bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(
bbg->bb526[16 ].bb222.bb172)<<bbg->bb78;bbg->bb78+=bb21;}};{bbe bb21=2
;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bb966-3 ;bbg->bb99
|=(bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&
0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));}
;};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78
+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(bb966-3 )<<bbg->bb78;bbg->
bb78+=bb21;}};}bb54 bbm(bb966<=10 ){{bbe bb21=bbg->bb526[17 ].bb48.bb21
;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bbg->bb526[17 ].
bb222.bb172;bbg->bb99|=(bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=
((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((
bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(
bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(
bbg->bb526[17 ].bb222.bb172)<<bbg->bb78;bbg->bb78+=bb21;}};{bbe bb21=3
;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bb966-3 ;bbg->bb99
|=(bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&
0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));}
;};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78
+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(bb966-3 )<<bbg->bb78;bbg->
bb78+=bb21;}};}bb54{{bbe bb21=bbg->bb526[18 ].bb48.bb21;bbm(bbg->bb78>
(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bbg->bb526[18 ].bb222.bb172;bbg->
bb99|=(bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->
bb99)&0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>
8 ));};};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg
->bb78+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(bbg->bb526[18 ].bb222.
bb172)<<bbg->bb78;bbg->bb78+=bb21;}};{bbe bb21=7 ;bbm(bbg->bb78>(bbe)(
8 *2 *bb11(bbl))-bb21){bbe bb170=bb966-11 ;bbg->bb99|=(bb170<<bbg->bb78);
{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[
bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170
>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}
bb54{bbg->bb99|=(bb966-11 )<<bbg->bb78;bbg->bb78+=bb21;}};}bb966=0 ;
bb2084=bb613;bbm(bb1218==0 ){bb1333=138 ,bb1299=3 ;}bb54 bbm(bb613==
bb1218){bb1333=6 ,bb1299=3 ;}bb54{bb1333=7 ,bb1299=4 ;}}}bb40 bbe bb2382(
bbg)bb191*bbg;{bbe bb1784;bb2304(bbg,(bb458* )bbg->bb982,bbg->bb1937.
bb510);bb2304(bbg,(bb458* )bbg->bb1678,bbg->bb1861.bb510);bb2184(bbg,
(bb1733* )(&(bbg->bb2061)));bb91(bb1784=19 -1 ;bb1784>=3 ;bb1784--){bbm(
bbg->bb526[bb2197[bb1784]].bb48.bb21!=0 )bb22;}bbg->bb1904+=3 * (bb1784
+1 )+5 +5 +4 ;;bb2 bb1784;}bb40 bbb bb2406(bbg,bb2051,bb2092,bb2044)bb191
 *bbg;bbe bb2051,bb2092,bb2044;{bbe bb2121;;;;{bbe bb21=5 ;bbm(bbg->
bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bb2051-257 ;bbg->bb99|=(
bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&
0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));}
;};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78
+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(bb2051-257 )<<bbg->bb78;bbg->
bb78+=bb21;}};{bbe bb21=5 ;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){
bbe bb170=bb2092-1 ;bbg->bb99|=(bb170<<bbg->bb78);{{bbg->bb171[bbg->
bb183++]=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[bbg->bb183++]=((
bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170>>((bbe)(8 *2
 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->
bb99|=(bb2092-1 )<<bbg->bb78;bbg->bb78+=bb21;}};{bbe bb21=4 ;bbm(bbg->
bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bb2044-4 ;bbg->bb99|=(bb170
<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));}
;{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->
bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(
8 *2 *bb11(bbl));}bb54{bbg->bb99|=(bb2044-4 )<<bbg->bb78;bbg->bb78+=bb21
;}};bb91(bb2121=0 ;bb2121<bb2044;bb2121++){;{bbe bb21=3 ;bbm(bbg->bb78>
(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bbg->bb526[bb2197[bb2121]].bb48.
bb21;bbg->bb99|=(bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155
)((bbg->bb99)&0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg
->bb99)>>8 ));};};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->
bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(bbg->bb526[
bb2197[bb2121]].bb48.bb21)<<bbg->bb78;bbg->bb78+=bb21;}};};bb2229(bbg
,(bb458* )bbg->bb982,bb2051-1 );;bb2229(bbg,(bb458* )bbg->bb1678,
bb2092-1 );;}bbb bb2142(bbg,bb41,bb1289,bb1107)bb191*bbg;bb439*bb41;
bb396 bb1289;bbe bb1107;{{bbe bb21=3 ;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl
))-bb21){bbe bb170=(0 <<1 )+bb1107;bbg->bb99|=(bb170<<bbg->bb78);{{bbg
->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[bbg->
bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170
>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}
bb54{bbg->bb99|=((0 <<1 )+bb1107)<<bbg->bb78;bbg->bb78+=bb21;}};bb2317(
bbg,bb41,(bbs)bb1289,1 );}bbb bb2252(bbg)bb191*bbg;{{bbe bb21=3 ;bbm(
bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=1 <<1 ;bbg->bb99|=(bb170
<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));}
;{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->
bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(
8 *2 *bb11(bbl));}bb54{bbg->bb99|=(1 <<1 )<<bbg->bb78;bbg->bb78+=bb21;}};
{bbe bb21=bb1737[256 ].bb48.bb21;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-
bb21){bbe bb170=bb1737[256 ].bb222.bb172;bbg->bb99|=(bb170<<bbg->bb78);
{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[
bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170
>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}
bb54{bbg->bb99|=(bb1737[256 ].bb222.bb172)<<bbg->bb78;bbg->bb78+=bb21;
}};bb2301(bbg);bbm(1 +bbg->bb1992+10 -bbg->bb78<9 ){{bbe bb21=3 ;bbm(bbg
->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=1 <<1 ;bbg->bb99|=(bb170<<
bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};{
bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->
bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(
8 *2 *bb11(bbl));}bb54{bbg->bb99|=(1 <<1 )<<bbg->bb78;bbg->bb78+=bb21;}};
{bbe bb21=bb1737[256 ].bb48.bb21;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-
bb21){bbe bb170=bb1737[256 ].bb222.bb172;bbg->bb99|=(bb170<<bbg->bb78);
{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[
bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170
>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}
bb54{bbg->bb99|=(bb1737[256 ].bb222.bb172)<<bbg->bb78;bbg->bb78+=bb21;
}};bb2301(bbg);}bbg->bb1992=7 ;}bbb bb1617(bbg,bb41,bb1289,bb1107)bb191
 *bbg;bb439*bb41;bb396 bb1289;bbe bb1107;{bb396 bb2012,bb2076;bbe
bb1784=0 ;bbm(bbg->bb124>0 ){bbm(bbg->bb974==2 )bb2312(bbg);bb2184(bbg,(
bb1733* )(&(bbg->bb1937)));;bb2184(bbg,(bb1733* )(&(bbg->bb1861)));;
bb1784=bb2382(bbg);bb2012=(bbg->bb1904+3 +7 )>>3 ;bb2076=(bbg->bb2119+3 +
7 )>>3 ;;bbm(bb2076<=bb2012)bb2012=bb2076;}bb54{;bb2012=bb2076=bb1289+5
;}bbm(bb1289+4 <=bb2012&&bb41!=(bbl* )0 ){bb2142(bbg,bb41,bb1289,bb1107
);}bb54 bbm(bb2076==bb2012){{bbe bb21=3 ;bbm(bbg->bb78>(bbe)(8 *2 *bb11(
bbl))-bb21){bbe bb170=(1 <<1 )+bb1107;bbg->bb99|=(bb170<<bbg->bb78);{{
bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[
bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170
>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}
bb54{bbg->bb99|=((1 <<1 )+bb1107)<<bbg->bb78;bbg->bb78+=bb21;}};bb2267(
bbg,(bb458* )bb1737,(bb458* )bb2232);}bb54{{bbe bb21=3 ;bbm(bbg->bb78>
(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=(2 <<1 )+bb1107;bbg->bb99|=(bb170
<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));}
;{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->
bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(
8 *2 *bb11(bbl));}bb54{bbg->bb99|=((2 <<1 )+bb1107)<<bbg->bb78;bbg->bb78
+=bb21;}};bb2406(bbg,bbg->bb1937.bb510+1 ,bbg->bb1861.bb510+1 ,bb1784+1
);bb2267(bbg,(bb458* )bbg->bb982,(bb458* )bbg->bb1678);};bb2242(bbg);
bbm(bb1107){bb2257(bbg);};}bbe bb2386(bbg,bb415,bb1134)bb191*bbg;bbs
bb415;bbs bb1134;{bbg->bb1642[bbg->bb606]=(bb126)bb415;bbg->bb1723[
bbg->bb606++]=(bb155)bb1134;bbm(bb415==0 ){bbg->bb982[bb1134].bb222.
bb426++;}bb54{bbg->bb2228++;bb415--;;bbg->bb982[bb2049[bb1134]+256 +1 ]
.bb222.bb426++;bbg->bb1678[((bb415)<256 ?bb1734[bb415]:bb1734[256 +((
bb415)>>7 )])].bb222.bb426++;}bb2(bbg->bb606==bbg->bb1118-1 );}bb40 bbb
bb2267(bbg,bb1072,bb1745)bb191*bbg;bb458*bb1072;bb458*bb1745;{bbs
bb415;bbe bb1134;bbs bb2285=0 ;bbs bb172;bbe bb1799;bbm(bbg->bb606!=0 )bb567
{bb415=bbg->bb1642[bb2285];bb1134=bbg->bb1723[bb2285++];bbm(bb415==0 ){
{bbe bb21=bb1072[bb1134].bb48.bb21;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-
bb21){bbe bb170=bb1072[bb1134].bb222.bb172;bbg->bb99|=(bb170<<bbg->
bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};{bbg->
bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(
bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *
bb11(bbl));}bb54{bbg->bb99|=(bb1072[bb1134].bb222.bb172)<<bbg->bb78;
bbg->bb78+=bb21;}};;}bb54{bb172=bb2049[bb1134];{bbe bb21=bb1072[bb172
+256 +1 ].bb48.bb21;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=
bb1072[bb172+256 +1 ].bb222.bb172;bbg->bb99|=(bb170<<bbg->bb78);{{bbg->
bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[bbg->
bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170
>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}
bb54{bbg->bb99|=(bb1072[bb172+256 +1 ].bb222.bb172)<<bbg->bb78;bbg->
bb78+=bb21;}};bb1799=bb2412[bb172];bbm(bb1799!=0 ){bb1134-=bb2333[
bb172];{bbe bb21=bb1799;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe
bb170=bb1134;bbg->bb99|=(bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++]
=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((
bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(
bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(
bb1134)<<bbg->bb78;bbg->bb78+=bb21;}};}bb415--;bb172=((bb415)<256 ?
bb1734[bb415]:bb1734[256 +((bb415)>>7 )]);;{bbe bb21=bb1745[bb172].bb48
.bb21;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bb1745[bb172
].bb222.bb172;bbg->bb99|=(bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++
]=((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((
bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(
bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(
bb1745[bb172].bb222.bb172)<<bbg->bb78;bbg->bb78+=bb21;}};bb1799=
bb2376[bb172];bbm(bb1799!=0 ){bb415-=bb2414[bb172];{bbe bb21=bb1799;
bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bb415;bbg->bb99|=(
bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&
0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));}
;};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(bbl))-bbg->bb78);bbg->bb78
+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(bb415)<<bbg->bb78;bbg->bb78
+=bb21;}};}};}bb108(bb2285<bbg->bb606);{bbe bb21=bb1072[256 ].bb48.
bb21;bbm(bbg->bb78>(bbe)(8 *2 *bb11(bbl))-bb21){bbe bb170=bb1072[256 ].
bb222.bb172;bbg->bb99|=(bb170<<bbg->bb78);{{bbg->bb171[bbg->bb183++]=
((bb155)((bbg->bb99)&0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((
bb126)(bbg->bb99)>>8 ));};};bbg->bb99=(bb126)bb170>>((bbe)(8 *2 *bb11(
bbl))-bbg->bb78);bbg->bb78+=bb21-(8 *2 *bb11(bbl));}bb54{bbg->bb99|=(
bb1072[256 ].bb222.bb172)<<bbg->bb78;bbg->bb78+=bb21;}};bbg->bb1992=
bb1072[256 ].bb48.bb21;}bb40 bbb bb2312(bbg)bb191*bbg;{bbe bb12=0 ;bbs
bb2325=0 ;bbs bb2268=0 ;bb108(bb12<7 )bb2268+=bbg->bb982[bb12++].bb222.
bb426;bb108(bb12<128 )bb2325+=bbg->bb982[bb12++].bb222.bb426;bb108(
bb12<256 )bb2268+=bbg->bb982[bb12++].bb222.bb426;bbg->bb974=(bb154)(
bb2268>(bb2325>>2 )?0 :1 );}bb40 bbs bb2369(bb172,bb21)bbs bb172;bbe bb21
;{bb915 bbs bb2302=0 ;bb567{bb2302|=bb172&1 ;bb172>>=1 ,bb2302<<=1 ;}
bb108(--bb21>0 );bb2 bb2302>>1 ;}bb40 bbb bb2301(bbg)bb191*bbg;{bbm(bbg
->bb78==16 ){{{bbg->bb171[bbg->bb183++]=((bb155)((bbg->bb99)&0xff ));};
{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99)>>8 ));};};bbg->
bb99=0 ;bbg->bb78=0 ;}bb54 bbm(bbg->bb78>=8 ){{bbg->bb171[bbg->bb183++]=
((bb154)bbg->bb99);};bbg->bb99>>=8 ;bbg->bb78-=8 ;}}bb40 bbb bb2257(bbg
)bb191*bbg;{bbm(bbg->bb78>8 ){{{bbg->bb171[bbg->bb183++]=((bb155)((bbg
->bb99)&0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((bb126)(bbg->bb99
)>>8 ));};};}bb54 bbm(bbg->bb78>0 ){{bbg->bb171[bbg->bb183++]=((bb154)bbg
->bb99);};}bbg->bb99=0 ;bbg->bb78=0 ;}bb40 bbb bb2317(bbg,bb41,bb21,
bb980)bb191*bbg;bb439*bb41;bbs bb21;bbe bb980;{bb2257(bbg);bbg->
bb1992=8 ;bbm(bb980){{{bbg->bb171[bbg->bb183++]=((bb155)(((bb126)bb21)&
0xff ));};{bbg->bb171[bbg->bb183++]=((bb155)((bb126)((bb126)bb21)>>8 ));
};};{{bbg->bb171[bbg->bb183++]=((bb155)(((bb126)~bb21)&0xff ));};{bbg
->bb171[bbg->bb183++]=((bb155)((bb126)((bb126)~bb21)>>8 ));};};}bb108(
bb21--){{bbg->bb171[bbg->bb183++]=( *bb41++);};}}
