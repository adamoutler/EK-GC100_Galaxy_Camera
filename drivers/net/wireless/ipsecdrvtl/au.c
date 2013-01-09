/*
   'src_compress_deflate_deflate.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
bb1289,bbe bb1107));bb40 bbh bb458 bb1737[(256 +1 +29 )+2 ]={{{12 },{8 }},{
{140 },{8 }},{{76 },{8 }},{{204 },{8 }},{{44 },{8 }},{{172 },{8 }},{{108 },{8 }},
{{236 },{8 }},{{28 },{8 }},{{156 },{8 }},{{92 },{8 }},{{220 },{8 }},{{60 },{8 }},
{{188 },{8 }},{{124 },{8 }},{{252 },{8 }},{{2 },{8 }},{{130 },{8 }},{{66 },{8 }},
{{194 },{8 }},{{34 },{8 }},{{162 },{8 }},{{98 },{8 }},{{226 },{8 }},{{18 },{8 }},
{{146 },{8 }},{{82 },{8 }},{{210 },{8 }},{{50 },{8 }},{{178 },{8 }},{{114 },{8 }}
,{{242 },{8 }},{{10 },{8 }},{{138 },{8 }},{{74 },{8 }},{{202 },{8 }},{{42 },{8 }}
,{{170 },{8 }},{{106 },{8 }},{{234 },{8 }},{{26 },{8 }},{{154 },{8 }},{{90 },{8 }
},{{218 },{8 }},{{58 },{8 }},{{186 },{8 }},{{122 },{8 }},{{250 },{8 }},{{6 },{8 }
},{{134 },{8 }},{{70 },{8 }},{{198 },{8 }},{{38 },{8 }},{{166 },{8 }},{{102 },{8
}},{{230 },{8 }},{{22 },{8 }},{{150 },{8 }},{{86 },{8 }},{{214 },{8 }},{{54 },{8
}},{{182 },{8 }},{{118 },{8 }},{{246 },{8 }},{{14 },{8 }},{{142 },{8 }},{{78 },{
8 }},{{206 },{8 }},{{46 },{8 }},{{174 },{8 }},{{110 },{8 }},{{238 },{8 }},{{30 },
{8 }},{{158 },{8 }},{{94 },{8 }},{{222 },{8 }},{{62 },{8 }},{{190 },{8 }},{{126 }
,{8 }},{{254 },{8 }},{{1 },{8 }},{{129 },{8 }},{{65 },{8 }},{{193 },{8 }},{{33 },
{8 }},{{161 },{8 }},{{97 },{8 }},{{225 },{8 }},{{17 },{8 }},{{145 },{8 }},{{81 },
{8 }},{{209 },{8 }},{{49 },{8 }},{{177 },{8 }},{{113 },{8 }},{{241 },{8 }},{{9 },
{8 }},{{137 },{8 }},{{73 },{8 }},{{201 },{8 }},{{41 },{8 }},{{169 },{8 }},{{105 }
,{8 }},{{233 },{8 }},{{25 },{8 }},{{153 },{8 }},{{89 },{8 }},{{217 },{8 }},{{57 }
,{8 }},{{185 },{8 }},{{121 },{8 }},{{249 },{8 }},{{5 },{8 }},{{133 },{8 }},{{69 }
,{8 }},{{197 },{8 }},{{37 },{8 }},{{165 },{8 }},{{101 },{8 }},{{229 },{8 }},{{21
},{8 }},{{149 },{8 }},{{85 },{8 }},{{213 },{8 }},{{53 },{8 }},{{181 },{8 }},{{
117 },{8 }},{{245 },{8 }},{{13 },{8 }},{{141 },{8 }},{{77 },{8 }},{{205 },{8 }},{
{45 },{8 }},{{173 },{8 }},{{109 },{8 }},{{237 },{8 }},{{29 },{8 }},{{157 },{8 }},
{{93 },{8 }},{{221 },{8 }},{{61 },{8 }},{{189 },{8 }},{{125 },{8 }},{{253 },{8 }}
,{{19 },{9 }},{{275 },{9 }},{{147 },{9 }},{{403 },{9 }},{{83 },{9 }},{{339 },{9 }
},{{211 },{9 }},{{467 },{9 }},{{51 },{9 }},{{307 },{9 }},{{179 },{9 }},{{435 },{
9 }},{{115 },{9 }},{{371 },{9 }},{{243 },{9 }},{{499 },{9 }},{{11 },{9 }},{{267 }
,{9 }},{{139 },{9 }},{{395 },{9 }},{{75 },{9 }},{{331 },{9 }},{{203 },{9 }},{{
459 },{9 }},{{43 },{9 }},{{299 },{9 }},{{171 },{9 }},{{427 },{9 }},{{107 },{9 }},
{{363 },{9 }},{{235 },{9 }},{{491 },{9 }},{{27 },{9 }},{{283 },{9 }},{{155 },{9 }
},{{411 },{9 }},{{91 },{9 }},{{347 },{9 }},{{219 },{9 }},{{475 },{9 }},{{59 },{9
}},{{315 },{9 }},{{187 },{9 }},{{443 },{9 }},{{123 },{9 }},{{379 },{9 }},{{251 }
,{9 }},{{507 },{9 }},{{7 },{9 }},{{263 },{9 }},{{135 },{9 }},{{391 },{9 }},{{71 }
,{9 }},{{327 },{9 }},{{199 },{9 }},{{455 },{9 }},{{39 },{9 }},{{295 },{9 }},{{
167 },{9 }},{{423 },{9 }},{{103 },{9 }},{{359 },{9 }},{{231 },{9 }},{{487 },{9 }}
,{{23 },{9 }},{{279 },{9 }},{{151 },{9 }},{{407 },{9 }},{{87 },{9 }},{{343 },{9 }
},{{215 },{9 }},{{471 },{9 }},{{55 },{9 }},{{311 },{9 }},{{183 },{9 }},{{439 },{
9 }},{{119 },{9 }},{{375 },{9 }},{{247 },{9 }},{{503 },{9 }},{{15 },{9 }},{{271 }
,{9 }},{{143 },{9 }},{{399 },{9 }},{{79 },{9 }},{{335 },{9 }},{{207 },{9 }},{{
463 },{9 }},{{47 },{9 }},{{303 },{9 }},{{175 },{9 }},{{431 },{9 }},{{111 },{9 }},
{{367 },{9 }},{{239 },{9 }},{{495 },{9 }},{{31 },{9 }},{{287 },{9 }},{{159 },{9 }
},{{415 },{9 }},{{95 },{9 }},{{351 },{9 }},{{223 },{9 }},{{479 },{9 }},{{63 },{9
}},{{319 },{9 }},{{191 },{9 }},{{447 },{9 }},{{127 },{9 }},{{383 },{9 }},{{255 }
,{9 }},{{511 },{9 }},{{0 },{7 }},{{64 },{7 }},{{32 },{7 }},{{96 },{7 }},{{16 },{7
}},{{80 },{7 }},{{48 },{7 }},{{112 },{7 }},{{8 },{7 }},{{72 },{7 }},{{40 },{7 }},
{{104 },{7 }},{{24 },{7 }},{{88 },{7 }},{{56 },{7 }},{{120 },{7 }},{{4 },{7 }},{{
68 },{7 }},{{36 },{7 }},{{100 },{7 }},{{20 },{7 }},{{84 },{7 }},{{52 },{7 }},{{
116 },{7 }},{{3 },{8 }},{{131 },{8 }},{{67 },{8 }},{{195 },{8 }},{{35 },{8 }},{{
163 },{8 }},{{99 },{8 }},{{227 },{8 }}};bb40 bbh bb458 bb2232[30 ]={{{0 },{5 }
},{{16 },{5 }},{{8 },{5 }},{{24 },{5 }},{{4 },{5 }},{{20 },{5 }},{{12 },{5 }},{{
28 },{5 }},{{2 },{5 }},{{18 },{5 }},{{10 },{5 }},{{26 },{5 }},{{6 },{5 }},{{22 },{
5 }},{{14 },{5 }},{{30 },{5 }},{{1 },{5 }},{{17 },{5 }},{{9 },{5 }},{{25 },{5 }},{
{5 },{5 }},{{21 },{5 }},{{13 },{5 }},{{29 },{5 }},{{3 },{5 }},{{19 },{5 }},{{11 },
{5 }},{{27 },{5 }},{{7 },{5 }},{{23 },{5 }}};bb40 bbh bb155 bb1734[512 ]={0 ,1
,2 ,3 ,4 ,4 ,5 ,5 ,6 ,6 ,6 ,6 ,7 ,7 ,7 ,7 ,8 ,8 ,8 ,8 ,8 ,8 ,8 ,8 ,9 ,9 ,9 ,9 ,9 ,9 ,9 ,9 ,10 ,10 ,10
,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11 ,11
,11 ,11 ,11 ,11 ,11 ,11 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12
,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,12 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13
,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13 ,13
,13 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14
,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14
,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,14 ,15 ,15 ,15 ,15
,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15
,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15
,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,15 ,0 ,0 ,16 ,17 ,18 ,18 ,19 ,19 ,20 ,
20 ,20 ,20 ,21 ,21 ,21 ,21 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,
24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,
25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,
26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,27 ,27 ,27 ,27 ,27 ,
27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,
27 ,27 ,27 ,27 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,
28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,
28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,28 ,29 ,
29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,
29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,
29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 ,29 };bb40 bbh bb155
bb2049[258 -3 +1 ]={0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,8 ,9 ,9 ,10 ,10 ,11 ,11 ,12 ,12 ,12 ,12 ,13 ,
13 ,13 ,13 ,14 ,14 ,14 ,14 ,15 ,15 ,15 ,15 ,16 ,16 ,16 ,16 ,16 ,16 ,16 ,16 ,17 ,17 ,17 ,17 ,
17 ,17 ,17 ,17 ,18 ,18 ,18 ,18 ,18 ,18 ,18 ,18 ,19 ,19 ,19 ,19 ,19 ,19 ,19 ,19 ,20 ,20 ,20 ,
20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,20 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,21 ,
21 ,21 ,21 ,21 ,21 ,21 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,22 ,23 ,
23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,23 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,
24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,24 ,
24 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,
25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,25 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,
26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,26 ,27 ,27 ,27 ,27 ,
27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,27 ,
27 ,27 ,27 ,27 ,28 };bb40 bbh bbe bb2333[29 ]={0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,10 ,12 ,14 ,
16 ,20 ,24 ,28 ,32 ,40 ,48 ,56 ,64 ,80 ,96 ,112 ,128 ,160 ,192 ,224 ,0 };bb40 bbh bbe
bb2414[30 ]={0 ,1 ,2 ,3 ,4 ,6 ,8 ,12 ,16 ,24 ,32 ,48 ,64 ,96 ,128 ,192 ,256 ,384 ,512 ,
768 ,1024 ,1536 ,2048 ,3072 ,4096 ,6144 ,8192 ,12288 ,16384 ,24576 };bba bb9{
bb1280,bb2158,bb1755,bb2139}bb1823;bba bb1823( *bb2383)bbp((bb191*bbg
,bbe bb174));bb40 bbb bb2189 bbp((bb191*bbg));bb40 bb1823 bb2377 bbp(
(bb191*bbg,bbe bb174));bb40 bb1823 bb2160 bbp((bb191*bbg,bbe bb174));
bb40 bb1823 bb1947 bbp((bb191*bbg,bbe bb174));bb40 bbb bb2425 bbp((
bb191*bbg));bb40 bbb bb2007 bbp((bb191*bbg,bb7 bbn));bb40 bbb bb1263
bbp((bb17 bb16));bb40 bbe bb2430 bbp((bb17 bb16,bb29*bb41,bbs bb47));
bb40 bb7 bb2256 bbp((bb191*bbg,bb1315 bb1993));bba bbi bb2625{bb126
bb2428;bb126 bb2433;bb126 bb2380;bb126 bb2347;bb2383 bb2019;}bb2512;
bb40 bbh bb2512 bb1288[10 ]={{0 ,0 ,0 ,0 ,bb2377},{4 ,4 ,8 ,4 ,bb2160},{4 ,5 ,16
,8 ,bb2160},{4 ,6 ,32 ,32 ,bb2160},{4 ,4 ,16 ,16 ,bb1947},{8 ,16 ,32 ,32 ,bb1947},
{8 ,16 ,128 ,128 ,bb1947},{8 ,32 ,128 ,256 ,bb1947},{32 ,128 ,258 ,1024 ,bb1947},
{32 ,258 ,258 ,4096 ,bb1947}};bbi bb2275{bbe bb445;};bbe bb1109(bb16,
bb124,bb186,bb196)bb17 bb16;bbe bb124;bbh bbl*bb186;bbe bb196;{bb2
bb1045(bb16,bb124,8 ,15 ,bb783,0 ,bb186,bb196);}bbe bb1045(bb16,bb124,
bb572,bb454,bb928,bb297,bb186,bb196)bb17 bb16;bbe bb124;bbe bb572;bbe
bb454;bbe bb928;bbe bb297;bbh bbl*bb186;bbe bb196;{bb191*bbg;bbe
bb1348=0 ;bb40 bbh bbl*bb2439="\x31\x2e\x31\x2e\x33";bb500*bb1882;bbm(
bb186==0 ||bb186[0 ]!=bb2439[0 ]||bb196!=bb11(bb433)){bb2(-6 );}bbm(bb16
==0 )bb2(-2 );bb16->bb322=0 ;bbm(bb16->bb401==0 ){bb16->bb401=bb1171;bb16
->bb110=(bb70)0 ;}bbm(bb16->bb371==0 )bb16->bb371=bb1162;bbm(bb124==(-1
))bb124=6 ;bbm(bb454<0 ){bb1348=1 ;bb454=-bb454;}bbm(bb928<1 ||bb928>
bb267||bb572!=8 ||bb454<8 ||bb454>15 ||bb124<0 ||bb124>9 ||bb297<0 ||bb297>
2 ){bb2(-2 );}bbg=(bb191* )( * ((bb16)->bb401))((bb16)->bb110,(1 ),(bb11
(bb191)));bbm(bbg==0 )bb2(-4 );bb16->bb23=(bbi bb375* )bbg;bbg->bb16=
bb16;bbg->bb1348=bb1348;bbg->bb2161=bb454;bbg->bb929=1 <<bbg->bb2161;
bbg->bb1807=bbg->bb929-1 ;bbg->bb2131=bb928+7 ;bbg->bb1321=1 <<bbg->
bb2131;bbg->bb1378=bbg->bb1321-1 ;bbg->bb1608=((bbg->bb2131+3 -1 )/3 );
bbg->bb158=(bb29* )( * ((bb16)->bb401))((bb16)->bb110,(bbg->bb929),(2
 *bb11(bb154)));bbg->bb963=(bb1356* )( * ((bb16)->bb401))((bb16)->
bb110,(bbg->bb929),(bb11(bb1064)));bbg->bb385=(bb1356* )( * ((bb16)->
bb401))((bb16)->bb110,(bbg->bb1321),(bb11(bb1064)));bbg->bb1118=1 <<(
bb928+6 );bb1882=(bb500* )( * ((bb16)->bb401))((bb16)->bb110,(bbg->
bb1118),(bb11(bb126)+2 ));bbg->bb171=(bb1205* )bb1882;bbg->bb2038=(
bb396)bbg->bb1118* (bb11(bb126)+2L );bbm(bbg->bb158==0 ||bbg->bb963==0
||bbg->bb385==0 ||bbg->bb171==0 ){bb16->bb322=(bbl* )bb1065[2 -((-4 ))];
bb939(bb16);bb2(-4 );}bbg->bb1642=bb1882+bbg->bb1118/bb11(bb126);bbg->
bb1723=bbg->bb171+(1 +bb11(bb126)) *bbg->bb1118;bbg->bb124=bb124;bbg->
bb297=bb297;bbg->bb572=(bb154)bb572;bb2 bb1052(bb16);}bbe bb1174(bb16
,bb424,bb432)bb17 bb16;bbh bb29*bb424;bb7 bb432;{bb191*bbg;bb7 bb464=
bb432;bb7 bb12;bb1315 bb1129=0 ;bbm(bb16==0 ||bb16->bb23==0 ||bb424==0 ||
bb16->bb23->bb359!=42 )bb2(-2 );bbg=bb16->bb23;bb16->bb369=bb981(bb16->
bb369,bb424,bb432);bbm(bb464<3 )bb2 0 ;bbm(bb464>((bbg)->bb929-(258 +3 +1
))){bb464=((bbg)->bb929-(258 +3 +1 ));bb424+=bb432-bb464;}bb81(bbg->
bb158,bb424,bb464);bbg->bb182=bb464;bbg->bb427=(bb5)bb464;bbg->bb497=
bbg->bb158[0 ];(bbg->bb497=(((bbg->bb497)<<bbg->bb1608)^(bbg->bb158[1 ]
))&bbg->bb1378);bb91(bb12=0 ;bb12<=bb464-3 ;bb12++){((bbg->bb497=(((bbg
->bb497)<<bbg->bb1608)^(bbg->bb158[(bb12)+(3 -1 )]))&bbg->bb1378),bbg->
bb963[(bb12)&bbg->bb1807]=bb1129=bbg->bb385[bbg->bb497],bbg->bb385[
bbg->bb497]=(bb1064)(bb12));}bbm(bb1129)bb1129=0 ;bb2 0 ;}bbe bb1052(
bb16)bb17 bb16;{bb191*bbg;bbm(bb16==0 ||bb16->bb23==0 ||bb16->bb401==0
||bb16->bb371==0 )bb2(-2 );bb16->bb190=bb16->bb610=0 ;bb16->bb322=0 ;bb16
->bb974=2 ;bbg=(bb191* )bb16->bb23;bbg->bb183=0 ;bbg->bb1874=bbg->bb171
;bbm(bbg->bb1348<0 ){bbg->bb1348=0 ;}bbg->bb359=bbg->bb1348?113 :42 ;bb16
->bb369=1 ;bbg->bb1894=0 ;bb2208(bbg);bb2425(bbg);bb2 0 ;}bbe bb1172(
bb16,bb124,bb297)bb17 bb16;bbe bb124;bbe bb297;{bb191*bbg;bb2383
bb2019;bbe bb18=0 ;bbm(bb16==0 ||bb16->bb23==0 )bb2(-2 );bbg=bb16->bb23;
bbm(bb124==(-1 )){bb124=6 ;}bbm(bb124<0 ||bb124>9 ||bb297<0 ||bb297>2 ){bb2
(-2 );}bb2019=bb1288[bbg->bb124].bb2019;bbm(bb2019!=bb1288[bb124].
bb2019&&bb16->bb190!=0 ){bb18=bb511(bb16,1 );}bbm(bbg->bb124!=bb124){
bbg->bb124=bb124;bbg->bb2054=bb1288[bb124].bb2433;bbg->bb2180=bb1288[
bb124].bb2428;bbg->bb1837=bb1288[bb124].bb2380;bbg->bb2175=bb1288[
bb124].bb2347;}bbg->bb297=bb297;bb2 bb18;}bb40 bbb bb2007(bbg,bbn)bb191
 *bbg;bb7 bbn;{{bbg->bb171[bbg->bb183++]=((bb154)(bbn>>8 ));};{bbg->
bb171[bbg->bb183++]=((bb154)(bbn&0xff ));};}bb40 bbb bb1263(bb16)bb17
bb16;{bbs bb21=bb16->bb23->bb183;bbm(bb21>bb16->bb383)bb21=bb16->
bb383;bbm(bb21==0 )bb2;bb81(bb16->bb593,bb16->bb23->bb1874,bb21);bb16
->bb593+=bb21;bb16->bb23->bb1874+=bb21;bb16->bb610+=bb21;bb16->bb383
-=bb21;bb16->bb23->bb183-=bb21;bbm(bb16->bb23->bb183==0 ){bb16->bb23->
bb1874=bb16->bb23->bb171;}}bbe bb511(bb16,bb174)bb17 bb16;bbe bb174;{
bbe bb2343;bb191*bbg;bbm(bb16==0 ||bb16->bb23==0 ||bb174>4 ||bb174<0 ){
bb2(-2 );}bbg=bb16->bb23;bbm(bb16->bb593==0 ||(bb16->bb125==0 &&bb16->
bb148!=0 )||(bbg->bb359==666 &&bb174!=4 )){bb2(bb16->bb322=(bbl* )bb1065
[2 -((-2 ))],((-2 )));}bbm(bb16->bb383==0 )bb2(bb16->bb322=(bbl* )bb1065[
2 -((-5 ))],((-5 )));bbg->bb16=bb16;bb2343=bbg->bb1894;bbg->bb1894=bb174
;bbm(bbg->bb359==42 ){bb7 bb980=(8 +((bbg->bb2161-8 )<<4 ))<<8 ;bb7 bb2296
=(bbg->bb124-1 )>>1 ;bbm(bb2296>3 )bb2296=3 ;bb980|=(bb2296<<6 );bbm(bbg->
bb182!=0 )bb980|=0x20 ;bb980+=31 -(bb980%31 );bbg->bb359=113 ;bb2007(bbg,
bb980);bbm(bbg->bb182!=0 ){bb2007(bbg,(bb7)(bb16->bb369>>16 ));bb2007(
bbg,(bb7)(bb16->bb369&0xffff ));}bb16->bb369=1L ;}bbm(bbg->bb183!=0 ){
bb1263(bb16);bbm(bb16->bb383==0 ){bbg->bb1894=-1 ;bb2 0 ;}}bb54 bbm(bb16
->bb148==0 &&bb174<=bb2343&&bb174!=4 ){bb2(bb16->bb322=(bbl* )bb1065[2 -
((-5 ))],((-5 )));}bbm(bbg->bb359==666 &&bb16->bb148!=0 ){bb2(bb16->bb322
=(bbl* )bb1065[2 -((-5 ))],((-5 )));}bbm(bb16->bb148!=0 ||bbg->bb462!=0 ||
(bb174!=0 &&bbg->bb359!=666 )){bb1823 bb1984;bb1984=( * (bb1288[bbg->
bb124].bb2019))(bbg,bb174);bbm(bb1984==bb1755||bb1984==bb2139){bbg->
bb359=666 ;}bbm(bb1984==bb1280||bb1984==bb1755){bbm(bb16->bb383==0 ){
bbg->bb1894=-1 ;}bb2 0 ;}bbm(bb1984==bb2158){bbm(bb174==1 ){bb2252(bbg);
}bb54{bb2142(bbg,(bbl* )0 ,0L ,0 );bbm(bb174==3 ){bbg->bb385[bbg->bb1321-
1 ]=0 ;bb994((bb29* )bbg->bb385,0 ,(bbs)(bbg->bb1321-1 ) *bb11( *bbg->
bb385));;}}bb1263(bb16);bbm(bb16->bb383==0 ){bbg->bb1894=-1 ;bb2 0 ;}}};
bbm(bb174!=4 )bb2 0 ;bbm(bbg->bb1348)bb2 1 ;bb2007(bbg,(bb7)(bb16->bb369
>>16 ));bb2007(bbg,(bb7)(bb16->bb369&0xffff ));bb1263(bb16);bbg->bb1348
=-1 ;bb2 bbg->bb183!=0 ?0 :1 ;}bbe bb939(bb16)bb17 bb16;{bbe bb359;bbm(
bb16==0 ||bb16->bb23==0 )bb2(-2 );bb359=bb16->bb23->bb359;bbm(bb359!=42
&&bb359!=113 &&bb359!=666 ){bb2(-2 );}{bbm(bb16->bb23->bb171)( * ((bb16)->
bb371))((bb16)->bb110,(bb70)(bb16->bb23->bb171));};{bbm(bb16->bb23->
bb385)( * ((bb16)->bb371))((bb16)->bb110,(bb70)(bb16->bb23->bb385));}
;{bbm(bb16->bb23->bb963)( * ((bb16)->bb371))((bb16)->bb110,(bb70)(
bb16->bb23->bb963));};{bbm(bb16->bb23->bb158)( * ((bb16)->bb371))((
bb16)->bb110,(bb70)(bb16->bb23->bb158));};( * ((bb16)->bb371))((bb16)->
bb110,(bb70)(bb16->bb23));bb16->bb23=0 ;bb2 bb359==113 ?(-3 ):0 ;}bbe
bb1147(bb130,bb185)bb17 bb130;bb17 bb185;{
#ifdef bb506
bb2(-2 );
#else
bb191*bb425;bb191*bb1824;bb500*bb1882;bbm(bb185==0 ||bb130==0 ||bb185->
bb23==0 ){bb2(-2 );}bb1824=bb185->bb23; *bb130= *bb185;bb425=(bb191* )(
 * ((bb130)->bb401))((bb130)->bb110,(1 ),(bb11(bb191)));bbm(bb425==0 )bb2
(-4 );bb130->bb23=(bbi bb375* )bb425; *bb425= *bb1824;bb425->bb16=
bb130;bb425->bb158=(bb29* )( * ((bb130)->bb401))((bb130)->bb110,(
bb425->bb929),(2 *bb11(bb154)));bb425->bb963=(bb1356* )( * ((bb130)->
bb401))((bb130)->bb110,(bb425->bb929),(bb11(bb1064)));bb425->bb385=(
bb1356* )( * ((bb130)->bb401))((bb130)->bb110,(bb425->bb1321),(bb11(
bb1064)));bb1882=(bb500* )( * ((bb130)->bb401))((bb130)->bb110,(bb425
->bb1118),(bb11(bb126)+2 ));bb425->bb171=(bb1205* )bb1882;bbm(bb425->
bb158==0 ||bb425->bb963==0 ||bb425->bb385==0 ||bb425->bb171==0 ){bb939(
bb130);bb2(-4 );}bb81(bb425->bb158,bb1824->bb158,bb425->bb929*2 *bb11(
bb154));bb81((bb29* )bb425->bb963,(bb29* )bb1824->bb963,bb425->bb929*
bb11(bb1064));bb81((bb29* )bb425->bb385,(bb29* )bb1824->bb385,bb425->
bb1321*bb11(bb1064));bb81(bb425->bb171,bb1824->bb171,(bb7)bb425->
bb2038);bb425->bb1874=bb425->bb171+(bb1824->bb1874-bb1824->bb171);
bb425->bb1642=bb1882+bb425->bb1118/bb11(bb126);bb425->bb1723=bb425->
bb171+(1 +bb11(bb126)) *bb425->bb1118;bb425->bb1937.bb1747=bb425->
bb982;bb425->bb1861.bb1747=bb425->bb1678;bb425->bb2061.bb1747=bb425->
bb526;bb2 0 ;
#endif
}bb40 bbe bb2430(bb16,bb41,bb47)bb17 bb16;bb29*bb41;bbs bb47;{bbs bb21
=bb16->bb148;bbm(bb21>bb47)bb21=bb47;bbm(bb21==0 )bb2 0 ;bb16->bb148-=
bb21;bbm(!bb16->bb23->bb1348){bb16->bb369=bb981(bb16->bb369,bb16->
bb125,bb21);}bb81(bb41,bb16->bb125,bb21);bb16->bb125+=bb21;bb16->
bb190+=bb21;bb2(bbe)bb21;}bb40 bbb bb2425(bbg)bb191*bbg;{bbg->bb2224=
(bb396)2L *bbg->bb929;bbg->bb385[bbg->bb1321-1 ]=0 ;bb994((bb29* )bbg->
bb385,0 ,(bbs)(bbg->bb1321-1 ) *bb11( *bbg->bb385));;bbg->bb2054=bb1288
[bbg->bb124].bb2433;bbg->bb2180=bb1288[bbg->bb124].bb2428;bbg->bb1837
=bb1288[bbg->bb124].bb2380;bbg->bb2175=bb1288[bbg->bb124].bb2347;bbg
->bb182=0 ;bbg->bb427=0L ;bbg->bb462=0 ;bbg->bb953=bbg->bb1276=3 -1 ;bbg->
bb1939=0 ;bbg->bb497=0 ;}bb40 bb7 bb2256(bbg,bb1993)bb191*bbg;bb1315
bb1993;{bbs bb2316=bbg->bb2175;bb915 bb29*bb494=bbg->bb158+bbg->bb182
;bb915 bb29*bb603;bb915 bbe bb21;bbe bb1186=bbg->bb1276;bbe bb1837=
bbg->bb1837;bb1315 bb2440=bbg->bb182>(bb1315)((bbg)->bb929-(258 +3 +1 ))?
bbg->bb182-(bb1315)((bbg)->bb929-(258 +3 +1 )):0 ;bb1356*bb963=bbg->bb963
;bb7 bb2467=bbg->bb1807;
#ifdef bb1038
bb915 bb29*bb1892=bbg->bb158+bbg->bb182+258 -1 ;bb915 bb126 bb2536= * (
bb500* )bb494;bb915 bb126 bb2122= * (bb500* )(bb494+bb1186-1 );
#else
bb915 bb29*bb1892=bbg->bb158+bbg->bb182+258 ;bb915 bb154 bb2318=bb494[
bb1186-1 ];bb915 bb154 bb2122=bb494[bb1186];
#endif
;bbm(bbg->bb1276>=bbg->bb2180){bb2316>>=2 ;}bbm((bb7)bb1837>bbg->bb462
)bb1837=bbg->bb462;;bb567{;bb603=bbg->bb158+bb1993;
#if ( defined( bb1038) && bb2583 == 258)
bbm( * (bb500* )(bb603+bb1186-1 )!=bb2122|| * (bb500* )bb603!=bb2536)bb1789
;;bb494++,bb603++;bb567{}bb108( * (bb500* )(bb494+=2 )== * (bb500* )(
bb603+=2 )&& * (bb500* )(bb494+=2 )== * (bb500* )(bb603+=2 )&& * (bb500*
)(bb494+=2 )== * (bb500* )(bb603+=2 )&& * (bb500* )(bb494+=2 )== * (
bb500* )(bb603+=2 )&&bb494<bb1892);;bbm( *bb494== *bb603)bb494++;bb21=
(258 -1 )-(bbe)(bb1892-bb494);bb494=bb1892-(258 -1 );
#else
bbm(bb603[bb1186]!=bb2122||bb603[bb1186-1 ]!=bb2318|| *bb603!= *bb494
|| * ++bb603!=bb494[1 ])bb1789;bb494+=2 ,bb603++;;bb567{}bb108( * ++
bb494== * ++bb603&& * ++bb494== * ++bb603&& * ++bb494== * ++bb603&& *
++bb494== * ++bb603&& * ++bb494== * ++bb603&& * ++bb494== * ++bb603&&
 * ++bb494== * ++bb603&& * ++bb494== * ++bb603&&bb494<bb1892);;bb21=
258 -(bbe)(bb1892-bb494);bb494=bb1892-258 ;
#endif
bbm(bb21>bb1186){bbg->bb2022=bb1993;bb1186=bb21;bbm(bb21>=bb1837)bb22
;
#ifdef bb1038
bb2122= * (bb500* )(bb494+bb1186-1 );
#else
bb2318=bb494[bb1186-1 ];bb2122=bb494[bb1186];
#endif
}}bb108((bb1993=bb963[bb1993&bb2467])>bb2440&&--bb2316!=0 );bbm((bb7)bb1186
<=bbg->bb462)bb2(bb7)bb1186;bb2 bbg->bb462;}bb40 bbb bb2189(bbg)bb191
 *bbg;{bb915 bbs bb12,bb96;bb915 bb1356*bb27;bbs bb1929;bb7 bb1201=
bbg->bb929;bb567{bb1929=(bbs)(bbg->bb2224-(bb396)bbg->bb462-(bb396)bbg
->bb182);bbm(bb1929==0 &&bbg->bb182==0 &&bbg->bb462==0 ){bb1929=bb1201;}
bb54 bbm(bb1929==(bbs)(-1 )){bb1929--;}bb54 bbm(bbg->bb182>=bb1201+((
bbg)->bb929-(258 +3 +1 ))){bb81(bbg->bb158,bbg->bb158+bb1201,(bbs)bb1201
);bbg->bb2022-=bb1201;bbg->bb182-=bb1201;bbg->bb427-=(bb5)bb1201;bb12
=bbg->bb1321;bb27=&bbg->bb385[bb12];bb567{bb96= * --bb27; *bb27=(
bb1064)(bb96>=bb1201?bb96-bb1201:0 );}bb108(--bb12);bb12=bb1201;bb27=&
bbg->bb963[bb12];bb567{bb96= * --bb27; *bb27=(bb1064)(bb96>=bb1201?
bb96-bb1201:0 );}bb108(--bb12);bb1929+=bb1201;}bbm(bbg->bb16->bb148==0
)bb2;;bb12=bb2430(bbg->bb16,bbg->bb158+bbg->bb182+bbg->bb462,bb1929);
bbg->bb462+=bb12;bbm(bbg->bb462>=3 ){bbg->bb497=bbg->bb158[bbg->bb182]
;(bbg->bb497=(((bbg->bb497)<<bbg->bb1608)^(bbg->bb158[bbg->bb182+1 ]))&
bbg->bb1378);}}bb108(bbg->bb462<(258 +3 +1 )&&bbg->bb16->bb148!=0 );}bb40
bb1823 bb2377(bbg,bb174)bb191*bbg;bbe bb174;{bb396 bb2270=0xffff ;
bb396 bb2152;bbm(bb2270>bbg->bb2038-5 ){bb2270=bbg->bb2038-5 ;}bb91(;;){
bbm(bbg->bb462<=1 ){;bb2189(bbg);bbm(bbg->bb462==0 &&bb174==0 )bb2 bb1280
;bbm(bbg->bb462==0 )bb22;};bbg->bb182+=bbg->bb462;bbg->bb462=0 ;bb2152=
bbg->bb427+bb2270;bbm(bbg->bb182==0 ||(bb396)bbg->bb182>=bb2152){bbg->
bb462=(bb7)(bbg->bb182-bb2152);bbg->bb182=(bb7)bb2152;{{bb1617(bbg,(
bbg->bb427>=0L ?(bb439* )&bbg->bb158[(bbs)bbg->bb427]:(bb439* )0 ),(
bb396)((bb5)bbg->bb182-bbg->bb427),(0 ));bbg->bb427=bbg->bb182;bb1263(
bbg->bb16);;};bbm(bbg->bb16->bb383==0 )bb2(0 )?bb1755:bb1280;};}bbm(bbg
->bb182-(bb7)bbg->bb427>=((bbg)->bb929-(258 +3 +1 ))){{{bb1617(bbg,(bbg
->bb427>=0L ?(bb439* )&bbg->bb158[(bbs)bbg->bb427]:(bb439* )0 ),(bb396)(
(bb5)bbg->bb182-bbg->bb427),(0 ));bbg->bb427=bbg->bb182;bb1263(bbg->
bb16);;};bbm(bbg->bb16->bb383==0 )bb2(0 )?bb1755:bb1280;};}}{{bb1617(
bbg,(bbg->bb427>=0L ?(bb439* )&bbg->bb158[(bbs)bbg->bb427]:(bb439* )0 ),
(bb396)((bb5)bbg->bb182-bbg->bb427),(bb174==4 ));bbg->bb427=bbg->bb182
;bb1263(bbg->bb16);;};bbm(bbg->bb16->bb383==0 )bb2(bb174==4 )?bb1755:
bb1280;};bb2 bb174==4 ?bb2139:bb2158;}bb40 bb1823 bb2160(bbg,bb174)bb191
 *bbg;bbe bb174;{bb1315 bb1129=0 ;bbe bb1761;bb91(;;){bbm(bbg->bb462<(
258 +3 +1 )){bb2189(bbg);bbm(bbg->bb462<(258 +3 +1 )&&bb174==0 ){bb2 bb1280;
}bbm(bbg->bb462==0 )bb22;}bbm(bbg->bb462>=3 ){((bbg->bb497=(((bbg->
bb497)<<bbg->bb1608)^(bbg->bb158[(bbg->bb182)+(3 -1 )]))&bbg->bb1378),
bbg->bb963[(bbg->bb182)&bbg->bb1807]=bb1129=bbg->bb385[bbg->bb497],
bbg->bb385[bbg->bb497]=(bb1064)(bbg->bb182));}bbm(bb1129!=0 &&bbg->
bb182-bb1129<=((bbg)->bb929-(258 +3 +1 ))){bbm(bbg->bb297!=2 ){bbg->bb953
=bb2256(bbg,bb1129);}}bbm(bbg->bb953>=3 ){;{bb155 bb21=(bbg->bb953-3 );
bb126 bb415=(bbg->bb182-bbg->bb2022);bbg->bb1642[bbg->bb606]=bb415;
bbg->bb1723[bbg->bb606++]=bb21;bb415--;bbg->bb982[bb2049[bb21]+256 +1 ]
.bb222.bb426++;bbg->bb1678[((bb415)<256 ?bb1734[bb415]:bb1734[256 +((
bb415)>>7 )])].bb222.bb426++;bb1761=(bbg->bb606==bbg->bb1118-1 );};bbg
->bb462-=bbg->bb953;bbm(bbg->bb953<=bbg->bb2054&&bbg->bb462>=3 ){bbg->
bb953--;bb567{bbg->bb182++;((bbg->bb497=(((bbg->bb497)<<bbg->bb1608)^
(bbg->bb158[(bbg->bb182)+(3 -1 )]))&bbg->bb1378),bbg->bb963[(bbg->bb182
)&bbg->bb1807]=bb1129=bbg->bb385[bbg->bb497],bbg->bb385[bbg->bb497]=(
bb1064)(bbg->bb182));}bb108(--bbg->bb953!=0 );bbg->bb182++;}bb54{bbg->
bb182+=bbg->bb953;bbg->bb953=0 ;bbg->bb497=bbg->bb158[bbg->bb182];(bbg
->bb497=(((bbg->bb497)<<bbg->bb1608)^(bbg->bb158[bbg->bb182+1 ]))&bbg
->bb1378);}}bb54{;{bb155 bb1840=(bbg->bb158[bbg->bb182]);bbg->bb1642[
bbg->bb606]=0 ;bbg->bb1723[bbg->bb606++]=bb1840;bbg->bb982[bb1840].
bb222.bb426++;bb1761=(bbg->bb606==bbg->bb1118-1 );};bbg->bb462--;bbg->
bb182++;}bbm(bb1761){{bb1617(bbg,(bbg->bb427>=0L ?(bb439* )&bbg->bb158
[(bbs)bbg->bb427]:(bb439* )0 ),(bb396)((bb5)bbg->bb182-bbg->bb427),(0 ));
bbg->bb427=bbg->bb182;bb1263(bbg->bb16);;};bbm(bbg->bb16->bb383==0 )bb2
(0 )?bb1755:bb1280;};}{{bb1617(bbg,(bbg->bb427>=0L ?(bb439* )&bbg->
bb158[(bbs)bbg->bb427]:(bb439* )0 ),(bb396)((bb5)bbg->bb182-bbg->bb427
),(bb174==4 ));bbg->bb427=bbg->bb182;bb1263(bbg->bb16);;};bbm(bbg->
bb16->bb383==0 )bb2(bb174==4 )?bb1755:bb1280;};bb2 bb174==4 ?bb2139:
bb2158;}bb40 bb1823 bb1947(bbg,bb174)bb191*bbg;bbe bb174;{bb1315
bb1129=0 ;bbe bb1761;bb91(;;){bbm(bbg->bb462<(258 +3 +1 )){bb2189(bbg);
bbm(bbg->bb462<(258 +3 +1 )&&bb174==0 ){bb2 bb1280;}bbm(bbg->bb462==0 )bb22
;}bbm(bbg->bb462>=3 ){((bbg->bb497=(((bbg->bb497)<<bbg->bb1608)^(bbg->
bb158[(bbg->bb182)+(3 -1 )]))&bbg->bb1378),bbg->bb963[(bbg->bb182)&bbg
->bb1807]=bb1129=bbg->bb385[bbg->bb497],bbg->bb385[bbg->bb497]=(
bb1064)(bbg->bb182));}bbg->bb1276=bbg->bb953,bbg->bb2295=bbg->bb2022;
bbg->bb953=3 -1 ;bbm(bb1129!=0 &&bbg->bb1276<bbg->bb2054&&bbg->bb182-
bb1129<=((bbg)->bb929-(258 +3 +1 ))){bbm(bbg->bb297!=2 ){bbg->bb953=
bb2256(bbg,bb1129);}bbm(bbg->bb953<=5 &&(bbg->bb297==1 ||(bbg->bb953==3
&&bbg->bb182-bbg->bb2022>4096 ))){bbg->bb953=3 -1 ;}}bbm(bbg->bb1276>=3
&&bbg->bb953<=bbg->bb1276){bb7 bb2490=bbg->bb182+bbg->bb462-3 ;;{bb155
bb21=(bbg->bb1276-3 );bb126 bb415=(bbg->bb182-1 -bbg->bb2295);bbg->
bb1642[bbg->bb606]=bb415;bbg->bb1723[bbg->bb606++]=bb21;bb415--;bbg->
bb982[bb2049[bb21]+256 +1 ].bb222.bb426++;bbg->bb1678[((bb415)<256 ?
bb1734[bb415]:bb1734[256 +((bb415)>>7 )])].bb222.bb426++;bb1761=(bbg->
bb606==bbg->bb1118-1 );};bbg->bb462-=bbg->bb1276-1 ;bbg->bb1276-=2 ;
bb567{bbm(++bbg->bb182<=bb2490){((bbg->bb497=(((bbg->bb497)<<bbg->
bb1608)^(bbg->bb158[(bbg->bb182)+(3 -1 )]))&bbg->bb1378),bbg->bb963[(
bbg->bb182)&bbg->bb1807]=bb1129=bbg->bb385[bbg->bb497],bbg->bb385[bbg
->bb497]=(bb1064)(bbg->bb182));}}bb108(--bbg->bb1276!=0 );bbg->bb1939=
0 ;bbg->bb953=3 -1 ;bbg->bb182++;bbm(bb1761){{bb1617(bbg,(bbg->bb427>=0L
?(bb439* )&bbg->bb158[(bbs)bbg->bb427]:(bb439* )0 ),(bb396)((bb5)bbg->
bb182-bbg->bb427),(0 ));bbg->bb427=bbg->bb182;bb1263(bbg->bb16);;};bbm
(bbg->bb16->bb383==0 )bb2(0 )?bb1755:bb1280;};}bb54 bbm(bbg->bb1939){;{
bb155 bb1840=(bbg->bb158[bbg->bb182-1 ]);bbg->bb1642[bbg->bb606]=0 ;bbg
->bb1723[bbg->bb606++]=bb1840;bbg->bb982[bb1840].bb222.bb426++;bb1761
=(bbg->bb606==bbg->bb1118-1 );};bbm(bb1761){{bb1617(bbg,(bbg->bb427>=
0L ?(bb439* )&bbg->bb158[(bbs)bbg->bb427]:(bb439* )0 ),(bb396)((bb5)bbg
->bb182-bbg->bb427),(0 ));bbg->bb427=bbg->bb182;bb1263(bbg->bb16);;};}
bbg->bb182++;bbg->bb462--;bbm(bbg->bb16->bb383==0 )bb2 bb1280;}bb54{
bbg->bb1939=1 ;bbg->bb182++;bbg->bb462--;}};bbm(bbg->bb1939){;{bb155
bb1840=(bbg->bb158[bbg->bb182-1 ]);bbg->bb1642[bbg->bb606]=0 ;bbg->
bb1723[bbg->bb606++]=bb1840;bbg->bb982[bb1840].bb222.bb426++;bb1761=(
bbg->bb606==bbg->bb1118-1 );};bbg->bb1939=0 ;}{{bb1617(bbg,(bbg->bb427
>=0L ?(bb439* )&bbg->bb158[(bbs)bbg->bb427]:(bb439* )0 ),(bb396)((bb5)bbg
->bb182-bbg->bb427),(bb174==4 ));bbg->bb427=bbg->bb182;bb1263(bbg->
bb16);;};bbm(bbg->bb16->bb383==0 )bb2(bb174==4 )?bb1755:bb1280;};bb2
bb174==4 ?bb2139:bb2158;}
