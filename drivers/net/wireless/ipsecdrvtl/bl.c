/*
   'src_ipsec_pgpIPsecESP.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
bba bb83 bb4;bb9{bb98=0 ,bb363=-12000 ,bb328=-11999 ,bb376=-11998 ,bb761=
-11997 ,bb801=-11996 ,bb710=-11995 ,bb676=-11994 ,bb768=-11992 ,bb820=-
11991 ,bb823=-11990 ,bb720=-11989 ,bb827=-11988 ,bb635=-11987 ,bb707=-
11986 ,bb892=-11985 ,bb680=-11984 ,bb616=-11983 ,bb648=-11982 ,bb750=-
11981 ,bb681=-11980 ,bb899=-11979 ,bb697=-11978 ,bb840=-11977 ,bb582=-
11976 ,bb869=-11975 ,bb808=-11960 ,bb779=-11959 ,bb674=-11500 ,bb718=-
11499 ,bb661=-11498 ,bb776=-11497 ,bb833=-11496 ,bb619=-11495 ,bb786=-
11494 ,bb626=-11493 ,bb861=-11492 ,bb646=-11491 ,bb853=-11490 ,bb687=-
11489 ,bb685=-11488 ,bb881=-11487 ,bb855=-11486 ,bb860=-11485 ,bb740=-
11484 ,bb668=-11483 ,bb703=-11482 ,bb715=-11481 ,bb832=-11480 ,bb742=-
11479 ,bb641=-11478 ,bb759=-11477 ,bb760=-11476 ,bb797=-11475 ,bb794=-
11474 ,bb769=-11473 ,bb830=-11472 ,bb765=-11460 ,bb876=-11450 ,bb723=-
11449 ,bb694=-11448 ,bb719=-11447 ,bb849=-11446 ,bb633=-11445 ,bb782=-
11444 ,bb618=-11443 ,bb826=-11440 ,bb854=-11439 ,bb764=-11438 ,bb778=-
11437 ,bb677=-11436 ,bb663=-11435 ,bb691=-11420 ,bb527=-11419 ,bb568=-
11418 ,bb671=-11417 ,bb871=-11416 ,bb657=-11415 ,bb774=-11414 ,bb717=-
11413 ,bb839=-11412 ,bb755=-11411 ,bb656=-11410 ,bb629=-11409 ,bb689=-
11408 ,bb841=-11407 ,bb902=-11406 ,bb800=-11405 ,bb803=-11404 ,bb747=-
11403 ,bb744=-11402 ,bb834=-11401 ,bb666=-11400 ,bb870=-11399 ,bb777=-
11398 ,bb746=-11397 ,bb670=-11396 ,bb644=-11395 ,bb883=-11394 ,bb615=-
11393 ,bb785=-11392 ,bb872=-11391 ,bb634=-11390 ,bb713=-11389 ,bb724=-
11388 ,bb711=-11387 ,bb900=-11386 ,bb798=-11385 ,bb682=-11384 ,bb895=-
11383 ,bb643=-11382 ,bb770=-11381 ,bb734=-11380 ,bb875=-11379 ,bb624=-
11378 ,bb732=-11377 ,bb781=-11376 ,bb714=-11375 ,bb659=-11374 ,bb806=-
11373 ,bb886=-11372 ,bb851=-11371 ,bb846=-11370 ,bb762=-11369 ,bb825=-
11368 ,bb738=-11367 ,bb818=-11366 ,bb654=-11365 ,bb632=-11364 ,bb837=-
11363 ,bb386=-11350 ,bb882=bb386,bb696=-11349 ,bb667=-11348 ,bb814=-11347
,bb640=-11346 ,bb650=-11345 ,bb885=-11344 ,bb693=-11343 ,bb695=-11342 ,
bb835=-11341 ,bb756=-11340 ,bb898=-11339 ,bb400=-11338 ,bb901=-11337 ,
bb679=bb400,bb772=-11330 ,bb802=-11329 ,bb749=-11328 ,bb702=-11327 ,bb704
=-11326 ,bb645=-11325 ,bb788=-11324 ,bb688=-11320 ,bb822=-11319 ,bb858=-
11318 ,bb706=-11317 ,bb620=-11316 ,bb655=-11315 ,bb811=-11314 ,bb708=-
11313 ,bb637=-11312 ,bb639=-11300 ,bb638=-11299 ,bb775=-11298 ,bb684=-
11297 ,bb838=-11296 ,bb793=-11295 ,bb819=-11294 ,bb850=-11293 ,bb857=-
11292 ,bb888=-11291 ,bb896=-11290 ,bb799=-11289 ,bb792=-11288 ,bb828=-
11287 ,bb796=-11286 ,bb647=-11285 ,bb807=-11284 ,bb836=-11283 ,bb722=-
11282 ,bb665=-11281 ,bb653=-11280 ,bb692=-11279 ,bb725=-11250 ,bb831=-
11249 ,bb844=-11248 ,bb728=-11247 ,bb652=-11246 ,bb878=-11245 ,bb862=-
11244 ,bb736=-11243 ,bb623=-11242 ,bb852=-11240 ,bb627=-11239 ,bb716=-
11238 ,bb771=-11237 ,bb816=-11150 ,bb790=-11100 ,bb829=-11099 ,bb787=-
11098 ,bb721=-11097 ,bb658=-11096 ,bb773=-11095 ,bb752=-11094 ,bb617=-
11093 ,bb812=-11092 ,bb894=-11091 ,bb625=-11090 ,bb675=-11089 ,bb856=-
11088 ,bb804=-11087 ,bb813=-11086 ,bb701=-11085 ,bb766=-11050 ,bb731=-
11049 ,bb873=-10999 ,bb891=-10998 ,bb649=-10997 ,bb733=-10996 ,bb709=-
10995 ,bb669=-10994 ,bb877=-10993 ,bb897=-10992 ,bb754=-10991 ,bb889=-
10990 ,bb631=-10989 ,bb880=-10988 ,bb879=-10979 ,bb843=-10978 ,bb842=-
10977 ,bb867=-10976 ,bb737=-10975 ,bb887=-10974 ,};bb9{bb551=1 ,};bbb*
bb496(bbd bb1195,bbd bb374);bb4 bb460(bbb*bb967);bba bbi bb989*bb1016
;bba bbi bb1026*bb1004;bba bbi bb991*bb992;bba bbi bb998*bb1012;bba
bbi bb1013*bb1024;bba bbi bb988*bb1020;bba bb9{bb555=0 ,bb592=1 ,bb579=
2 ,bb743=3 ,bb583=4 ,bb561=5 ,bb574=6 ,bb563=7 ,bb589=9 ,}bb421;bba bb9{
bb601=0 ,bb990,bb596,bb1011,bb923,bb926,bb904,bb910,bb919,bb922,bb909,
}bb512;bba bbi bb448{bb1 bb74;bbd bb128;bbd bb180;bbi bb448*bb94;}bbx
;bb4 bb467(bbx*bb859,bbd bb905,bbx*bb865,bbd bb780,bbd bb539);bb4
bb522(bbx*bbj,bbd bb92,bbh bbb*bb97,bbd bb47);bb4 bb564(bbx*bbj,bbd
bb92,bbb*bb130,bbd bb47);bbu bb673(bbx*bbj,bbd bb92,bbh bbb*bb97,bbd
bb47);bb4 bb2056(bbx*bb301,bbd*bb103);bb4 bb2117(bbx*bb85,bbu bb176,
bbd bb483,bb512 bb152,bbh bbf*bb1307,bbf*bb129,bb421 bb416,bbf*bb556,
bbd bb103,bbd bb492,bbx*bb58);bb4 bb2043(bbx*bb85,bbu bb176,bb512
bb152,bbh bbf*bb1307,bb421 bb416,bbf*bb556,bbd*bb474,bbd*bb459,bbd*
bb541,bbx*bb58);
#define bb945 bb53(0x0800)
#define bb1095 bb53(0x0806)
#define bb930 bb53(0x01f4)
#define bb935 bb53(0x1194)
#define bb1122 bb53(0x4000)
#define bb1135 bb53(0x2000)
#define bb1106 bb53(0x1FFF)
#define bb1063( bb8) (( bb8) & bb53(0x2000 | 0x1FFF))
#define bb1023( bb8) ((( bb197( bb8)) & 0x1FFF) << 3)
#define bb975( bb8) ((( bb8) & bb53(0x1FFF)) == 0)
#define bb493( bb8) (( bb8) & bb53(0x2000))
#define bb983( bb8) (!( bb493( bb8)))
#pragma pack(push, 1)
bba bbi{bbf bb370[6 ];bbf bb1008[6 ];bbk bb373;}bb365, *bb378;bba bbi{
bbf bb445[6 ];bbk bb373;}bb1084, *bb1028;bba bbi{bbf bb958:4 ;bbf bb1054
:4 ;bbf bb1049;bbk bb361;bbk bb683;bbk bb575;bbf bb999;bbf bb252;bbk
bb609;bbd bb307;bbd bb203;}bb324, *bb313;bba bbi{bbk bb1032;bbk bb1075
;bbf bb1035;bbf bb1042;bbk bb1057;bbf bb1088[6 ];bbd bb1036;bbf bb1081
[6 ];bbd bb1061;}bb1070, *bb1077;
#pragma pack(pop)
bba bbi{bbk bb213;bbk bb423;bbk bb1006;bbk bb321;}bb414, *bb335;bba
bbi{bbk bb213;bbk bb591;bbd bb535;bbd bb913;bbf bb92;bbf bb172;bbk
bb158;bbk bb321;bbk bb1021;}bb479, *bb314;bba bbi{bbf bb1030;bbf
bb1066;bbf bb1087;bbf bb1037;bbd bb1060;bbk bb1080;bbk bb374;bbd
bb1068;bbd bb1076;bbd bb1062;bbd bb1056;bbf bb1074[16 ];bbf bb1048[64 ]
;bbf bb25[128 ];bbf bb1031[64 ];}bb1079, *bb1069;bba bbi{bbd bb307;bbd
bb203;bbf bb912;bbf bb252;bbk bb914;}bb595, *bb570;
#if defined( _WIN32)
#define bb53( bbc) (((( bbc) & 0XFF00) >> 8) | ((( bbc) & 0X00FF) <<  \
8))
#define bb197( bbc) ( bb53( bbc))
#define bb444( bbc) (((( bbc) & 0XFF000000) >> 24) | ((( bbc) &  \
0X00FF0000) >> 8) | ((( bbc) & 0X0000FF00) << 8) | ((( bbc) &  \
0X000000FF) << 24))
#define bb548( bbc) ( bb444( bbc))
#endif
bbk bb920(bbh bbb*bb294);bbk bb741(bbh bbb*bb502,bbe bb21);bb4 bb580(
bbx*bb85,bbf bb100,bbx*bb58);bb4 bb672(bbx*bb85,bbu bb176,bbf*bb410);
bb4 bb948(bbx*bb58,bbf*bb393);bb4 bb955(bbh bbf*bb393,bbx*bb58);bb4
bb544(bbx*bb50,bbf bb100,bbd*bb937);bb4 bb921(bbx*bb85,bbf bb100,bbf
bb410,bbx*bb58);bbd bb516(bbx*bb50);bbk bb533(bbx*bb50);bbb bb529(bbk
bb151,bbx*bb50);bbb bb545(bbx*bb50);bbb bb965(bbx*bb50,bbd*bb26);bbb
bb996(bbx*bb50,bbd*bb26);bbb bb1022(bbx*bb50,bbd bb26);bbb bb917(bbx*
bb50,bbd bb26);bbb bb979(bbx*bb50);bbu bb1002(bbf*bb50);bb9{bb1130=-
5000 ,bb1103=-4000 ,bb995=-4999 ,bb986=-4998 ,bb1025=-4997 ,bb976=-4996 ,
bb1133=-4995 ,bb1086=-4994 ,bb1132=-4993 ,bb1005=-4992 ,bb1029=-4991 };bb4
bb1124(bb4 bb1126,bbd bb1112,bbl*bb1098);bba bb9{bb409,bb1498,}bb295;
bbk bb1181(bb295 bb686,bbh bbf*bb455);bbd bb540(bb295 bb686,bbh bbf*
bb455);bbb bb1168(bbk bb159,bb295 bb553,bbf bb435[2 ]);bbb bb970(bbd
bb159,bb295 bb553,bbf bb435[4 ]);
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbi{bbf bb419[8 *16 ];}bb911;bbb bb1749(bb911*bbj,bbh bbb*bb71);bbb
bb1932(bb911*bbj,bbh bbb*bb71);bbb bb1243(bb911*bbj,bbb*bb14,bbh bbb*
bb6);bba bbi{bb911 bb2032,bb2033,bb2031;}bb678;bbb bb2101(bb678*bbj,
bbh bbb*bb1300);bbb bb2136(bb678*bbj,bbh bbb*bb1300);bbb bb2042(bb678
 *bbj,bbb*bb14,bbh bbb*bb6);bbb bb2178(bb678*bbj,bbb*bb14,bbh bbb*bb6
);
#ifdef __cplusplus
}
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
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbi{bbd bb419[2 *16 ];}bb978;bbb bb2000(bb978*bbj,bbh bbb*bb71);bbb
bb2146(bb978*bbj,bbh bbb*bb71);bbb bb1981(bb978*bbj,bbb*bb14,bbh bbb*
bb6);
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbi{bbq bb456;bbd bb419[4 * (16 +1 )];}bb562;bbb bb1593(bb562*bbj,
bbh bbb*bb71,bbq bb143);bbb bb2018(bb562*bbj,bbh bbb*bb71,bbq bb143);
bbb bb1239(bb562*bbj,bbb*bb14,bbh bbb*bb6);
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbb( *bb469)(bbb*bbj,bbb*bb14,bbh bbb*bb6);bba bbi{bbe bb57;bbq
bb38;bbq bb143;bbf bb150[16 ];bbq bb88;bbf bb129[16 ];bb469 bb179;bbf
bb152[512 ];}bb431;bbb bb2066(bb431*bbj,bbe bb57);bbb bb2064(bb431*bbj
,bbe bb2217,bbh bbb*bb71,bbh bbb*bb1274);bbb bb2298(bb431*bbj,bbe bb57
,bbh bbb*bb71,bbh bbb*bb1274);bbb bb1600(bb431*bbj,bbb*bb14,bb93 bb177
,bbh bbb*bb6,bbq bb10);bbu bb2097(bb431*bbj,bbb*bb14,bb93 bb177);bbb
bb2389(bbe bb57,bbh bbb*bb71,bbh bbb*bb1274,bbb*bb2126,bb93 bb177,bbh
bbb*bb6,bbq bb10);bb82 bb2264(bbe bb152);bb82 bb2239(bbe bb1657);bb82
bb2413(bbe bb57);bbu bb2513(bbe bb57);
#ifdef __cplusplus
}
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
bb40 bbf bb2350[]={0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 };bb4 bb2056(bbx*
bb301,bbd*bb103){bb4 bb18;bbd bb381;bbf bb74[8 ]; *bb103=0 ;bb18=bb544(
bb301,50 ,&bb381);bbm(((bb18)!=bb98))bb2 bb18;bb564(bb301,bb381,bb74,8
); *bb103=bb540(bb409,&(bb74[0 ]));bb2 bb18;}bb4 bb2117(bbx*bb85,bbu
bb176,bbd bb483,bb512 bb152,bbh bbf*bb1307,bbf*bb129,bb421 bb416,bbf*
bb556,bbd bb103,bbd bb492,bbx*bb58){bbd bb381;bbd bb163;bbd bb2362;
bbk bb151;bbd bb1295;bbd bb1743;bbd bb167;bbd bb147;bbd bb482;bbd
bb499;bbd bb1027;bbd bb157;bbd bb573;bbf bb927;bbf bb577;bbd bb143;
bbd bb2036;bbd bb38;bbd bb977;bbf bb189=0 ;bbf bb417=0 ;bbf bb961[32 ];
bbf bb924[32 ];bbf bb2179[32 ];bbf bb2427[64 ];bbf bb565[8 +64 ];bbf*
bb1915=bb90;bbf*bb599=bb90;bbx*bb73=bb90;bbx*bb46=bb90;bb4 bb18=bb98;
bb431*bb537=bb90;bb521*bb523=bb90;bbe bb712=0x100000 ,bb411;bb151=
bb533(bb85);bb298(bb152){bb15 bb596:bb143=24 ;bb38=8 ;bb712|=0x11 ;bb22;
bb15 bb923:bb143=16 ;bb38=16 ;bb712|=0x80 ;bb22;bb15 bb919:bb143=16 ;bb38
=16 ;bb712|=0x91 ;bb22;bb15 bb922:bb143=24 ;bb38=16 ;bb712|=0x92 ;bb22;
bb15 bb909:bb143=32 ;bb38=16 ;bb712|=0x93 ;bb22;bb15 bb926:bb143=16 ;bb38
=16 ;bb712|=0x20 ;bb22;bb15 bb904:bb143=24 ;bb38=16 ;bb712|=0x21 ;bb22;
bb15 bb910:bb143=32 ;bb38=16 ;bb712|=0x22 ;bb22;bb15 bb601:bb143=0 ;bb38=
0 ;bb712|=0x00 ;bb22;bb420:bb2 bb568;}bb537=bb127(bb11( *bb537));bb2066
(bb537,bb712);bb672(bb85,bb176,&bb927);bb381=bb516(bb85);bb18=bb580(
bb85,50 ,bb58);bbm(((bb18)!=bb98))bb107 bb164;bbm(bb176)bb151+=bb381;
bb2036=bb151-bb381;bb1295=bb176?0 :bb381;bb977=bb2036;bb1743=bb381+8 +
bb38;bbm(bb152!=bb601){bb1 bb1256=bb90;bb2064(bb537,0x0100 |0x1000000 ,
bb1307,bb129?bb129:bb2350);bbm(((bb18)!=bb98))bb107 bb164;bb73=bb85;
bb46=bb58;bb482=0 ;bb499=0 ;{bb157=bb73->bb128;bb573=0 ;bb108(bb157<=
bb1295&&bb73->bb94){bb573=bb157;bb73=bb73->bb94;bb157+=bb73->bb128;}
bb167=bb1295-bb573;bbm(bb157<=bb1295){bb18=bb376;bb107 bb164;}}{bb157
=bb46->bb180;bb573=0 ;bb108(bb157<=bb1743&&bb46->bb94){bb573=bb157;
bb46=bb46->bb94;bb157+=bb46->bb180;}bb147=bb1743-bb573;bbm(bb157<=
bb1743){bb18=bb376;bb107 bb164;}}bb108(bb977>=bb38&&bb73){bbm(!bb46){
bb18=bb376;bb107 bb164;}bb482=0 ;bb499=0 ;bbm(bb73->bb128-bb167>=bb38&&
bb46->bb180-bb147>=bb38){bb1027=((bb73->bb128-bb167)<(bb46->bb180-
bb147)?(bb73->bb128-bb167):(bb46->bb180-bb147));bb1027=bb1027-bb1027%
bb38;{bbq bb392;bb1600(bb537,&bb46->bb74[bb147],&bb392,&bb73->bb74[
bb167],bb1027);bb1256=&bb46->bb74[bb147]+bb392;}bb147+=bb1027;bb167+=
bb1027;bb977-=bb1027;bbm(bb167==bb73->bb128){bb73=bb73->bb94;bb167=0 ;
}bbm(bb147==bb46->bb180){bb46->bb128=bb46->bb180;bb46=bb46->bb94;
bb147=0 ;}}bb54{bbm(bb73->bb128-bb167<bb38){bb1915=bb961;bb108(bb977>=
bb38-bb482&&bb482<bb38&&bb73){bb157=bb73->bb128-bb167;bbm(bb157>bb38-
bb482)bb157=bb38-bb482;bb81(&bb961[bb482],&bb73->bb74[bb167],bb157);
bb482+=bb157;bb167+=bb157;bb977-=bb157;bbm(bb167==bb73->bb128){bb73=
bb73->bb94;bb167=0 ;}}}bb54{bb1915=&bb73->bb74[bb167];bb482=bb38;bb167
+=bb38;bb977-=bb38;}bb599=bb46->bb180-bb147<bb38?bb924:&bb46->bb74[
bb147];bbm(bb482==bb38){bb482=0 ;{bbq bb392;bb1600(bb537,bb599,&bb392,
bb1915,bb38);bb1256=bb599+bb392;}bbm(bb599==bb924){bb499=bb46->bb180-
bb147;bb81(&bb46->bb74[bb147],bb924,bb499);bb46->bb128=bb46->bb180;
bb46=bb46->bb94;bbm(!bb46){bb18=bb376;bb107 bb164;}bb81(bb46->bb74,&
bb924[bb499],bb38-bb499);bb147=bb38-bb499;}bb54 bb147+=bb38;}}}{bbm(
bb977){bbm(!bb73){bb18=bb1029;bb107 bb164;}bbm(bb73->bb128-bb167<
bb977){bb81(&bb961[bb482],&bb73->bb74[bb167],bb73->bb128-bb167);bb482
+=bb73->bb128-bb167;bb977-=bb73->bb128-bb167;bb73=bb73->bb94;bb81(&
bb961[bb482],bb73->bb74,bb977);}bb54 bb81(&bb961[bb482],&bb73->bb74[
bb167],bb977);bb482+=bb977;}bbm(!bb46){bb18=bb376;bb107 bb164;}bb599=
bb46->bb180-bb147<bb38?bb924:&bb46->bb74[bb147];bbm(bb482<bb38-1 ){
bb577=bb38-bb482-2 ;bb91(bb163=0 ;bb163<bb577;bb163++)bb961[bb163+bb482
]=bb163+1 ;bb961[bb482+bb577]=bb577;bb961[bb482+bb577+1 ]=bb927;{bbq
bb392;bb1600(bb537,bb599,&bb392,bb961,bb38);bb1256=bb599+bb392;}bbm(
bb599==bb924){bb499=bb46->bb180-bb147;bb81(&bb46->bb74[bb147],bb924,
bb499);bb46->bb128=bb46->bb180;bb46=bb46->bb94;bb81(bb46->bb74,&bb924
[bb499],bb38-bb499);bb147=bb38-bb499;}bb54 bb147+=bb38;}bb54{bb961[
bb38-1 ]=1 ;{bbq bb392;bb1600(bb537,bb599,&bb392,bb961,bb38);bb1256=
bb599+bb392;}bbm(bb599==bb924){bb499=bb46->bb180-bb147;bb81(&bb46->
bb74[bb147],bb924,bb499);bb46->bb128=bb46->bb180;bb46=bb46->bb94;bb81
(bb46->bb74,&bb924[bb499],bb38-bb499);bb147=bb38-bb499;}bb54 bb147+=
bb38;bb599=bb46->bb180-bb147<bb38?bb924:&bb46->bb74[bb147];{bb91(
bb163=0 ;bb163<bb38-2 ;bb163++)bb961[bb163]=bb163+2 ;bb577=bb38-1 ;bb961[
bb38-2 ]=bb577;bb961[bb38-1 ]=bb927;{bbq bb392;bb1600(bb537,bb599,&
bb392,bb961,bb38);bb1256=bb599+bb392;}}bbm(bb599==bb924){bb499=bb46->
bb180-bb147;bb81(&bb46->bb74[bb147],bb924,bb499);bb46->bb128=bb46->
bb180;bb46=bb46->bb94;bb81(bb46->bb74,&bb924[bb499],bb38-bb499);bb147
=bb38-bb499;}bb54 bb147+=bb38;}}bb151+=bb577+2 +8 +bb38;bb46->bb128=
bb147;bb31(bb1256);bb2097(bb537,bb1256,bb90);}bb54{bb18=bb467(bb85,
bb1295,bb58,bb381+8 ,bb2036);bbm(((bb18)!=bb98))bb107 bb164;bb2362=
bb381+8 +bb2036;bb577=3 -(bb2036+2 +3 )%4 ;bb91(bb163=0 ;bb163<bb577;bb163
++)bb2179[bb163]=bb163+1 ;bb2179[bb577]=bb577;bb2179[bb577+1 ]=bb927;
bb18=bb522(bb58,bb2362,bb2179,bb577+2 );bbm(((bb18)!=bb98))bb107 bb164
;bb151+=bb577+2 +8 ;}bb970(bb103,bb409,&bb565[0 ]);bb970(bb492,bb409,&
bb565[4 ]);bb81(&bb565[8 ],bb129?bb129:bb2350,bb38);bbm(bb129&&bb599)bb81
(bb129,bb599,bb38);bb18=bb522(bb58,bb381,bb565,8 +bb38);bbm(((bb18)!=
bb98))bb107 bb164;bb18=bb580(bb85,50 ,bb58);bbm(((bb18)!=bb98))bb107
bb164;bbm(bb176)bb917(bb58,bb483);bb529(bb151,bb58);bbm(bb416!=bb555){
bb298(bb416){bb15 bb592:bb189=16 ;bb417=16 ;bb411=0x1000 |0x10 ;bb22;bb15
bb579:bb189=20 ;bb417=20 ;bb411=0x1000 |0x20 ;bb22;bb15 bb561:bb189=32 ;
bb417=32 ;bb411=0x1000 |0x21 ;bb22;bb15 bb574:bb189=48 ;bb417=48 ;bb411=
0x1000 |0x22 ;bb22;bb15 bb563:bb189=64 ;bb417=64 ;bb411=0x1000 |0x23 ;bb22;
bb15 bb589:bb189=16 ;bb417=16 ;bb411=0x2000 ;bb22;bb15 bb583:bb189=20 ;
bb417=20 ;bb411=0x1000 |0x80 ;bb22;bb15 bb743:bb189=20 ;bb417=20 ;bb411=
0x1000 |0x30 ;bb22;bb420:bb18=bb527;bb107 bb164;}bbm(bb189>12 )bb189=12 ;
bb523=bb127(bb11( *bb523));bb1833(bb523,bb411,bb556,(bbq)bb417);bb147
=bb381;bb46=bb58;bb108(bb147>bb46->bb128){bb147-=bb46->bb128;bb46=
bb46->bb94;}bb157=bb46->bb128-bb147;bb1240(bb523,bb46->bb74+bb147,
bb157);bb108(bb157<bb151-bb381){bb46=bb46->bb94;bb157+=bb46->bb128;
bb1240(bb523,bb46->bb74,bb46->bb128);}bb1815(bb523,bb2427);bb18=bb522
(bb46,bb46->bb128,bb2427,bb189);bbm(((bb18)!=bb98))bb107 bb164;bb151
+=bb189;bb529(bb151,bb58);}bb545(bb58);bb164:bbm(bb537)bb106(bb537);
bbm(bb523)bb106(bb523);bb2 bb18;}bb4 bb2043(bbx*bb85,bbu bb176,bb512
bb152,bbh bbf*bb1307,bb421 bb416,bbf*bb556,bbd*bb474,bbd*bb459,bbd*
bb541,bbx*bb58){bbd bb381;bbd bb492=0 ;bbk bb151;bbd bb167;bbd bb147;
bbd bb482;bbd bb499;bbd bb1027;bbd bb1295;bbd bb1743;bbd bb157;bbd
bb573;bbd bb143;bbd bb38;bbd bb977;bbf bb577;bbf bb927;bbf bb189=0 ;
bbf bb417=0 ;bbf*bb129=bb90;bbf bb1828[64 ];bbf bb961[32 ];bbf bb924[32 ]
;bbf bb565[8 +64 ];bbf*bb1915=bb90;bbf*bb599=bb90;bbx*bb73=bb90;bbx*
bb46=bb90;bbx*bb465=bb90;bb4 bb18=bb98;bb431*bb537=bb90;bb521*bb523=
bb90;bbe bb712=0x100000 ,bb411;bb151=bb533(bb85);bb298(bb152){bb15
bb596:bb143=24 ;bb38=8 ;bb712|=0x11 ;bb22;bb15 bb923:bb143=16 ;bb38=16 ;
bb712|=0x80 ;bb22;bb15 bb919:bb143=16 ;bb38=16 ;bb712|=0x91 ;bb22;bb15
bb922:bb143=24 ;bb38=16 ;bb712|=0x92 ;bb22;bb15 bb909:bb143=32 ;bb38=16 ;
bb712|=0x93 ;bb22;bb15 bb926:bb143=16 ;bb38=16 ;bb712|=0x20 ;bb22;bb15
bb904:bb143=24 ;bb38=16 ;bb712|=0x21 ;bb22;bb15 bb910:bb143=32 ;bb38=16 ;
bb712|=0x22 ;bb22;bb15 bb601:bb143=0 ;bb38=0 ;bb712|=0x00 ;bb22;bb420:bb2
bb568;}bb537=bb127(bb11( *bb537));bb2066(bb537,bb712);bb18=bb544(bb85
,50 ,&bb381);bbm(((bb18)!=bb98))bb107 bb164;bb564(bb85,bb381,bb565,8 +
bb38);bbm( *bb459<(bb11( *bb474)<<3 )-1 ) *bb459=(bb11( *bb474)<<3 )-1 ; *
bb541= *bb459-(bb11( *bb474)<<3 )+1 ;bb492=bb540(bb409,&bb565[4 ]);bbm(
bb492< *bb541){bb18=bb986;bb107 bb164;}bbm(bb492<= *bb459&& *bb474&1
<<(bb492- *bb541)){bb18=bb995;bb107 bb164;}bbm(bb416!=bb555){bb298(
bb416){bb15 bb592:bb189=16 ;bb417=16 ;bb411=0x1000 |0x10 ;bb22;bb15 bb579
:bb189=20 ;bb417=20 ;bb411=0x1000 |0x20 ;bb22;bb15 bb561:bb189=32 ;bb417=
32 ;bb411=0x1000 |0x21 ;bb22;bb15 bb574:bb189=48 ;bb417=48 ;bb411=0x1000 |
0x22 ;bb22;bb15 bb563:bb189=64 ;bb417=64 ;bb411=0x1000 |0x23 ;bb22;bb15
bb589:bb189=16 ;bb417=16 ;bb411=0x2000 ;bb22;bb15 bb583:bb189=20 ;bb417=
20 ;bb411=0x1000 |0x80 ;bb22;bb15 bb743:bb189=20 ;bb417=20 ;bb411=0x1000 |
0x30 ;bb22;bb420:bb18=bb527;bb107 bb164;}bbm(bb189>12 )bb189=12 ;bb523=
bb127(bb11( *bb523));bb1833(bb523,bb411,bb556,bb417);bb73=bb85;bb167=
bb381;bb157=bb73->bb128>(bbd)(bb151-bb189)?bb151-bb381-bb189:bb73->
bb128-bb167;bb1240(bb523,bb73->bb74+bb167,bb157);bb167+=bb157;bb108(
bb157<bb151-bb381-bb189){bb73=bb73->bb94;bb573=bb157;bb157+=bb73->
bb128;bb167=bb157<=bb151-bb381-bb189?bb73->bb128:bb151-bb381-bb189-
bb573;bb1240(bb523,bb73->bb74,bb167);}bb1815(bb523,bb1828);bbm(!bb673
(bb85,bb151-bb189,bb1828,bb189)){bb18=bb1025;bb107 bb164;}bb151-=
bb189;bbm(bb167+bb189>bb73->bb128)bb73->bb94->bb128=0 ;bb73->bb128=
bb167;}bbm(bb152!=bb601){bb1 bb1256=bb90;bb129=(bbf* )bb496(bb38,
bb551);bbm(!bb129){bb18=bb328;bb107 bb164;}bb81(bb129,&bb565[8 ],bb38);
bb2064(bb537,0x0200 |0x1000000 ,bb1307,bb129);bb73=bb85;bb46=bb58;bb482
=0 ;bb499=0 ;bb1295=bb381+8 +bb38;bb977=bb151-bb1295;bb1743=bb176?0 :
bb381;{bb157=bb73->bb128;bb573=0 ;bb108(bb157<=bb1295&&bb73->bb94){
bb573=bb157;bb73=bb73->bb94;bb157+=bb73->bb128;}bb167=bb1295-bb573;
bbm(bb157<=bb1295){bb18=bb376;bb107 bb164;}}{bb157=bb46->bb180;bb573=
0 ;bb108(bb157<=bb1743&&bb46->bb94){bb573=bb157;bb46=bb46->bb94;bb157
+=bb46->bb180;}bb147=bb1743-bb573;bbm(bb157<=bb1743){bb18=bb376;bb107
bb164;}}bb108(bb977>=bb38&&bb73){bbm(!bb46){bb18=bb376;bb107 bb164;}
bb482=0 ;bb499=0 ;bbm(bb73->bb128-bb167>=bb38&&bb46->bb180-bb147>=bb38){
bb1027=((bb73->bb128-bb167)<(bb46->bb180-bb147)?(bb73->bb128-bb167):(
bb46->bb180-bb147));bb1027=bb1027-bb1027%bb38;{bbq bb392;bb1600(bb537
,&bb46->bb74[bb147],&bb392,&bb73->bb74[bb167],bb1027);bb1256=&bb46->
bb74[bb147]+bb392;}bb147+=bb1027;bb167+=bb1027;bb977-=bb1027;bbm(
bb167==bb73->bb128){bb73=bb73->bb94;bb167=0 ;}bbm(bb147==bb46->bb180){
bb46->bb128=bb46->bb180;bb465=bb46;bb46=bb46->bb94;bb147=0 ;}}bb54{bbm
(bb73->bb128-bb167<bb38){bb1915=bb961;bb108(bb482<bb38&&bb73){bb157=
bb73->bb128-bb167;bbm(bb157>bb38-bb482)bb157=bb38-bb482;bb81(&bb961[
bb482],&bb73->bb74[bb167],bb157);bb482+=bb157;bb167+=bb157;bb977-=
bb157;bbm(bb167==bb73->bb128){bb73=bb73->bb94;bb167=0 ;}}}bb54{bb1915=
&bb73->bb74[bb167];bb482=bb38;bb167+=bb38;bb977-=bb38;}bb599=bb46->
bb180-bb147<bb38?bb924:&bb46->bb74[bb147];bbm(bb482==bb38){bb482=0 ;{
bbq bb392;bb1600(bb537,bb599,&bb392,bb1915,bb38);bb1256=bb599+bb392;}
bbm(bb599==bb924){bb499=bb46->bb180-bb147;bb81(&bb46->bb74[bb147],
bb924,bb499);bb46->bb128=bb46->bb180;bb465=bb46;bb46=bb46->bb94;bbm(!
bb46){bb18=bb376;bb107 bb164;}bb81(bb46->bb74,&bb924[bb499],bb38-
bb499);bb147=bb38-bb499;}bb54 bb147+=bb38;}}}bb31(bb1256);bb2097(
bb537,bb1256,bb90);}bb54{bb18=bb467(bb85,bb381+8 +bb38,bb58,bb176?0 :
bb381,bb151-bb381-8 );bbm(((bb18)!=bb98))bb107 bb164;bb46=bb58;bb465=
bb90;bb108(bb46->bb94){bbm(bb46->bb94->bb128==0 )bb22;bb465=bb46;bb46=
bb46->bb94;}bb147=bb46->bb128;}bbm(bb492> *bb459){ *bb474>>=bb492- *
bb459; *bb474&=0x7fffffff >>(bb492- *bb459-1 ); *bb459=bb492; *bb541= *
bb459-(bb11( *bb474)<<3 )+1 ;} *bb474|=1 <<(bb492- *bb541);bbm(bb147>1 ){
bb577=bb46->bb74[bb147-2 ];bb927=bb46->bb74[bb147-1 ];}bb54 bbm(bb147==
1 ){bb577=bb465->bb74[bb465->bb128-1 ];bb927=bb46->bb74[0 ];}bb54{bb577=
bb465->bb74[bb465->bb128-2 ];bb927=bb465->bb74[bb465->bb128-1 ];}bbm(
bb147>(bbd)(bb577+2 )){bb147-=bb577+2 ;bb46->bb128=bb147;}bb54{bbm(!
bb465){bb18=bb376;bb107 bb164;}bb46->bb128=0 ;bb465->bb128-=bb577+2 -
bb147;bb147=bb465->bb128;bb46=bb465;}bbm(bb927==4 &&!bb176){bb176=1 ;
bb18=bb467(bb58,bb381,bb58,0 ,bb151-(bb381+8 +bb38)-(bb577+2 ));bbm(((
bb18)!=bb98))bb107 bb164;}bb151-=(bb176?bb381:0 )+8 +bb38+bb577+2 ;bbm(!
bb176){bb18=bb921(bb85,50 ,bb927,bb58);bbm(((bb18)!=bb98))bb107 bb164;
}bb529(bb151,bb58);bb545(bb58);bb164:bbm(bb129)bb460(bb129);bbm(bb537
)bb106(bb537);bbm(bb523)bb106(bb523);bb2 bb18;}
