/*
   'src_ipsec_pgpIPheader.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
bbk bb920(bbh bbb*bb294);bbk bb741(bbh bbb*bb502,bbe bb21);bba bb83
bb4;bb9{bb98=0 ,bb363=-12000 ,bb328=-11999 ,bb376=-11998 ,bb761=-11997 ,
bb801=-11996 ,bb710=-11995 ,bb676=-11994 ,bb768=-11992 ,bb820=-11991 ,
bb823=-11990 ,bb720=-11989 ,bb827=-11988 ,bb635=-11987 ,bb707=-11986 ,
bb892=-11985 ,bb680=-11984 ,bb616=-11983 ,bb648=-11982 ,bb750=-11981 ,
bb681=-11980 ,bb899=-11979 ,bb697=-11978 ,bb840=-11977 ,bb582=-11976 ,
bb869=-11975 ,bb808=-11960 ,bb779=-11959 ,bb674=-11500 ,bb718=-11499 ,
bb661=-11498 ,bb776=-11497 ,bb833=-11496 ,bb619=-11495 ,bb786=-11494 ,
bb626=-11493 ,bb861=-11492 ,bb646=-11491 ,bb853=-11490 ,bb687=-11489 ,
bb685=-11488 ,bb881=-11487 ,bb855=-11486 ,bb860=-11485 ,bb740=-11484 ,
bb668=-11483 ,bb703=-11482 ,bb715=-11481 ,bb832=-11480 ,bb742=-11479 ,
bb641=-11478 ,bb759=-11477 ,bb760=-11476 ,bb797=-11475 ,bb794=-11474 ,
bb769=-11473 ,bb830=-11472 ,bb765=-11460 ,bb876=-11450 ,bb723=-11449 ,
bb694=-11448 ,bb719=-11447 ,bb849=-11446 ,bb633=-11445 ,bb782=-11444 ,
bb618=-11443 ,bb826=-11440 ,bb854=-11439 ,bb764=-11438 ,bb778=-11437 ,
bb677=-11436 ,bb663=-11435 ,bb691=-11420 ,bb527=-11419 ,bb568=-11418 ,
bb671=-11417 ,bb871=-11416 ,bb657=-11415 ,bb774=-11414 ,bb717=-11413 ,
bb839=-11412 ,bb755=-11411 ,bb656=-11410 ,bb629=-11409 ,bb689=-11408 ,
bb841=-11407 ,bb902=-11406 ,bb800=-11405 ,bb803=-11404 ,bb747=-11403 ,
bb744=-11402 ,bb834=-11401 ,bb666=-11400 ,bb870=-11399 ,bb777=-11398 ,
bb746=-11397 ,bb670=-11396 ,bb644=-11395 ,bb883=-11394 ,bb615=-11393 ,
bb785=-11392 ,bb872=-11391 ,bb634=-11390 ,bb713=-11389 ,bb724=-11388 ,
bb711=-11387 ,bb900=-11386 ,bb798=-11385 ,bb682=-11384 ,bb895=-11383 ,
bb643=-11382 ,bb770=-11381 ,bb734=-11380 ,bb875=-11379 ,bb624=-11378 ,
bb732=-11377 ,bb781=-11376 ,bb714=-11375 ,bb659=-11374 ,bb806=-11373 ,
bb886=-11372 ,bb851=-11371 ,bb846=-11370 ,bb762=-11369 ,bb825=-11368 ,
bb738=-11367 ,bb818=-11366 ,bb654=-11365 ,bb632=-11364 ,bb837=-11363 ,
bb386=-11350 ,bb882=bb386,bb696=-11349 ,bb667=-11348 ,bb814=-11347 ,bb640
=-11346 ,bb650=-11345 ,bb885=-11344 ,bb693=-11343 ,bb695=-11342 ,bb835=-
11341 ,bb756=-11340 ,bb898=-11339 ,bb400=-11338 ,bb901=-11337 ,bb679=bb400
,bb772=-11330 ,bb802=-11329 ,bb749=-11328 ,bb702=-11327 ,bb704=-11326 ,
bb645=-11325 ,bb788=-11324 ,bb688=-11320 ,bb822=-11319 ,bb858=-11318 ,
bb706=-11317 ,bb620=-11316 ,bb655=-11315 ,bb811=-11314 ,bb708=-11313 ,
bb637=-11312 ,bb639=-11300 ,bb638=-11299 ,bb775=-11298 ,bb684=-11297 ,
bb838=-11296 ,bb793=-11295 ,bb819=-11294 ,bb850=-11293 ,bb857=-11292 ,
bb888=-11291 ,bb896=-11290 ,bb799=-11289 ,bb792=-11288 ,bb828=-11287 ,
bb796=-11286 ,bb647=-11285 ,bb807=-11284 ,bb836=-11283 ,bb722=-11282 ,
bb665=-11281 ,bb653=-11280 ,bb692=-11279 ,bb725=-11250 ,bb831=-11249 ,
bb844=-11248 ,bb728=-11247 ,bb652=-11246 ,bb878=-11245 ,bb862=-11244 ,
bb736=-11243 ,bb623=-11242 ,bb852=-11240 ,bb627=-11239 ,bb716=-11238 ,
bb771=-11237 ,bb816=-11150 ,bb790=-11100 ,bb829=-11099 ,bb787=-11098 ,
bb721=-11097 ,bb658=-11096 ,bb773=-11095 ,bb752=-11094 ,bb617=-11093 ,
bb812=-11092 ,bb894=-11091 ,bb625=-11090 ,bb675=-11089 ,bb856=-11088 ,
bb804=-11087 ,bb813=-11086 ,bb701=-11085 ,bb766=-11050 ,bb731=-11049 ,
bb873=-10999 ,bb891=-10998 ,bb649=-10997 ,bb733=-10996 ,bb709=-10995 ,
bb669=-10994 ,bb877=-10993 ,bb897=-10992 ,bb754=-10991 ,bb889=-10990 ,
bb631=-10989 ,bb880=-10988 ,bb879=-10979 ,bb843=-10978 ,bb842=-10977 ,
bb867=-10976 ,bb737=-10975 ,bb887=-10974 ,};bba bbi bb448{bb1 bb74;bbd
bb128;bbd bb180;bbi bb448*bb94;}bbx;bb4 bb467(bbx*bb859,bbd bb905,bbx
 *bb865,bbd bb780,bbd bb539);bb4 bb522(bbx*bbj,bbd bb92,bbh bbb*bb97,
bbd bb47);bb4 bb564(bbx*bbj,bbd bb92,bbb*bb130,bbd bb47);bbu bb673(
bbx*bbj,bbd bb92,bbh bbb*bb97,bbd bb47);bb4 bb580(bbx*bb85,bbf bb100,
bbx*bb58);bb4 bb672(bbx*bb85,bbu bb176,bbf*bb410);bb4 bb948(bbx*bb58,
bbf*bb393);bb4 bb955(bbh bbf*bb393,bbx*bb58);bb4 bb544(bbx*bb50,bbf
bb100,bbd*bb937);bb4 bb921(bbx*bb85,bbf bb100,bbf bb410,bbx*bb58);bbd
bb516(bbx*bb50);bbk bb533(bbx*bb50);bbb bb529(bbk bb151,bbx*bb50);bbb
bb545(bbx*bb50);bbb bb965(bbx*bb50,bbd*bb26);bbb bb996(bbx*bb50,bbd*
bb26);bbb bb1022(bbx*bb50,bbd bb26);bbb bb917(bbx*bb50,bbd bb26);bbb
bb979(bbx*bb50);bbu bb1002(bbf*bb50);bb9{bb1130=-5000 ,bb1103=-4000 ,
bb995=-4999 ,bb986=-4998 ,bb1025=-4997 ,bb976=-4996 ,bb1133=-4995 ,bb1086=
-4994 ,bb1132=-4993 ,bb1005=-4992 ,bb1029=-4991 };bb4 bb1124(bb4 bb1126,
bbd bb1112,bbl*bb1098);bba bb9{bb409,bb1498,}bb295;bbk bb1181(bb295
bb686,bbh bbf*bb455);bbd bb540(bb295 bb686,bbh bbf*bb455);bbb bb1168(
bbk bb159,bb295 bb553,bbf bb435[2 ]);bbb bb970(bbd bb159,bb295 bb553,
bbf bb435[4 ]);bbk bb920(bbh bbb*bb1702){bb59 bb294=(bb59)bb1702;bbd
bb585=0 ;bbk bbz=0 ;bb108(bbz++<(bb11(bb324)/2 )){bb585+= *bb294++;}
bb585=(bb585>>16 )+(bb585&0xffff );bb585+=(bb585>>16 );bb585=~bb585;bb2(
bbk)bb585;}bbk bb741(bbh bbb*bb502,bbe bb21){bb59 bb428=(bb59)bb502;
bbd bb585=0 ;bb108(bb21>1 ){bb585+= *bb428++;bbm(bb585&0x80000000 )bb585
=(bb585&0xffff )+(bb585>>16 );bb21-=2 ;}bbm(bb21)bb585+= * (bb1)bb428;
bb108(bb585>>16 )bb585=(bb585&0xffff )+(bb585>>16 );bb585=~bb585;bb2(bbk
)bb585;}bb4 bb580(bbx*bb85,bbf bb100,bbx*bb58){bbd bb1140;bb4 bb18;
bb1140=bb516(bb85);bb18=bb467(bb85,0 ,bb58,0 ,bb1140);bbm(((bb18)==bb98
))bb58->bb74[9 ]=bb100;bb2 bb18;}bb4 bb672(bbx*bb85,bbu bb176,bbf*
bb410){bb4 bb18=bb98;bbm(bb176) *bb410=4 ;bb54*bb410=bb85->bb74[9 ];bb2
bb18;}bb4 bb948(bbx*bb58,bbf*bb393){bbd bb1140;bbd bb163;bbd bb2128;
bb4 bb18=bb98;bb1140=bb516(bb58);bb81(bb393,bb58->bb74,bb1140);bb58->
bb74[1 ]=0 ;bb58->bb74[6 ]=0 ;bb58->bb74[6 +1 ]=0 ;bb58->bb74[8 ]=0 ;bb58->
bb74[10 ]=0 ;bb58->bb74[10 +1 ]=0 ;bbm(bb1140==20 )bb2 bb18;bb163=20 ;bb108(
bb58->bb74[bb163]!=0 ){bb298(bb58->bb74[bb163]){bb15 1 :bb163++;bb22;
bb15 130 :bb15 133 :bb15 134 :bb15 148 :bb15 149 :bb163++;bb163+=bb58->
bb74[bb163]+1 ;bb22;bb420:bb58->bb74[bb163]=0 ;bb2128=bb163+1 ;bb163+=2 ;
bb91(;bb163<=(bb2128+bb58->bb74[bb2128]);bb163++)bb58->bb74[bb163]=0 ;
bb58->bb74[bb2128]=0 ;bb22;}}bb2 bb18;}bb4 bb955(bbh bbf*bb393,bbx*
bb58){bbd bb1140;bb4 bb18=bb98;bb1140=bb516(bb58);bb81(bb58->bb74,
bb393,bb1140);bb2 bb18;}bb4 bb544(bbx*bb50,bbf bb100,bbd*bb937){bb4
bb18=bb98; *bb937=0 ;bbm(bb50->bb74[9 ]!=bb100)bb2 bb976; *bb937=bb516(
bb50);bb2 bb18;}bb4 bb921(bbx*bb85,bbf bb100,bbf bb410,bbx*bb58){bbd
bb1140;bb4 bb18;bbm(bb85->bb74[9 ]!=bb100)bb2 bb976;bb1140=bb516(bb85);
bb18=bb467(bb85,0 ,bb58,0 ,bb1140);bbm(((bb18)==bb98))bb58->bb74[9 ]=
bb410;bb2 bb18;}bbd bb516(bbx*bb50){bb2(bb50->bb74[0 ]&0x0F ) *4 ;}bbk
bb533(bbx*bb50){bb2 bb1181(bb409,&bb50->bb74[2 ]);}bbb bb529(bbk bb151
,bbx*bb50){bb1168(bb151,bb409,&bb50->bb74[2 ]);}bbb bb545(bbx*bb50){
bbd bb157;bbk bb321;bbd bbz;bbd bb1140;bb157=0 ;bb1140=bb516(bb50);
bb50->bb74[10 ]=0 ;bb50->bb74[10 +1 ]=0 ;bb91(bbz=0 ;bbz<bb1140;bbz+=2 ){
bb157+=(bb50->bb74[bbz]<<8 )|(bb50->bb74[bbz+1 ]);}bb321=~((bbk)bb157+(
bbk)(bb157>>16 ));bb1168(bb321,bb409,&bb50->bb74[10 ]);}bbb bb965(bbx*
bb50,bbd*bb26){bb81(bb26,&bb50->bb74[12 ],4 );}bbb bb996(bbx*bb50,bbd*
bb26){bb81(bb26,&bb50->bb74[16 ],4 );}bbb bb1022(bbx*bb50,bbd bb26){
bb81(&bb50->bb74[12 ],&bb26,4 );}bbb bb917(bbx*bb50,bbd bb26){bb81(&
bb50->bb74[16 ],&bb26,4 );}bbb bb979(bbx*bb50){bb50->bb74[6 ]&=0xBF ;}bbu
bb1002(bbf*bb50){bbm(bb50[6 ]&0x20 )bb2 1 ;bb54{bbm((bb50[6 ]&0x1F )||(
bb50[6 +1 ]))bb2 1 ;bb54 bb2 0 ;}}
