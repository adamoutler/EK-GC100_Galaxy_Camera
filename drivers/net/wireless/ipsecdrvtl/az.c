/*
   'src_compress_deflate_inftrees.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
bb906));bba bbi bb1370 bb153;bbi bb1370{bb550{bbi{bb154 bb1154;bb154
bb956;}bb501;bb7 bb1546;}bb508;bb7 bb602;};bbr bbe bb2013 bbp((bb165*
,bb165* ,bb153* * ,bb153* ,bb17));bbr bbe bb1996 bbp((bb7,bb7,bb165* ,
bb165* ,bb165* ,bb153* * ,bb153* * ,bb153* ,bb17));bbr bbe bb1966 bbp
((bb165* ,bb165* ,bb153* * ,bb153* * ,bb17));
#if ! defined( bb2247) && ! defined( bb136)
#define bb2247
#endif
bbi bb375{bbe bb445;};bb40 bbe bb1974 bbp((bb165* ,bb7,bb7,bbh bb165*
,bbh bb165* ,bb153* * ,bb165* ,bb153* ,bb7* ,bb165* ));bb40 bbh bb7
bb2368[31 ]={3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,11 ,13 ,15 ,17 ,19 ,23 ,27 ,31 ,35 ,43 ,51 ,59 ,67 ,
83 ,99 ,115 ,131 ,163 ,195 ,227 ,258 ,0 ,0 };bb40 bbh bb7 bb2358[31 ]={0 ,0 ,0 ,0 ,0
,0 ,0 ,0 ,1 ,1 ,1 ,1 ,2 ,2 ,2 ,2 ,3 ,3 ,3 ,3 ,4 ,4 ,4 ,4 ,5 ,5 ,5 ,5 ,0 ,112 ,112 };bb40 bbh bb7
bb2404[30 ]={1 ,2 ,3 ,4 ,5 ,7 ,9 ,13 ,17 ,25 ,33 ,49 ,65 ,97 ,129 ,193 ,257 ,385 ,513 ,
769 ,1025 ,1537 ,2049 ,3073 ,4097 ,6145 ,8193 ,12289 ,16385 ,24577 };bb40 bbh bb7
bb2405[30 ]={0 ,0 ,0 ,0 ,1 ,1 ,2 ,2 ,3 ,3 ,4 ,4 ,5 ,5 ,6 ,6 ,7 ,7 ,8 ,8 ,9 ,9 ,10 ,10 ,11 ,11 ,
12 ,12 ,13 ,13 };bb40 bbe bb1974(bbn,bb12,bbg,bbt,bbw,bb45,bb96,bb1786,
bb1770,bb441)bb165*bbn;bb7 bb12;bb7 bbg;bbh bb165*bbt;bbh bb165*bbw;
bb153* *bb45;bb165*bb96;bb153*bb1786;bb7*bb1770;bb165*bb441;{bb7 bbc;
bb7 bbo[15 +1 ];bb7 bb20;bbe bb52;bbe bb42;bb915 bb7 bbz;bb915 bb7 bb77
;bb915 bbe bb3;bbe bb195;bb7 bb1165;bb915 bb165*bb27;bb153*bb84;bbi
bb1370 bb35={{{0 }},0 };bb153*bb317[15 ];bb915 bbe bbv;bb7 bb8[15 +1 ];
bb165*bb2085;bbe bb192;bb7 bby;bb27=bbo; *bb27++=0 ; *bb27++=0 ; *bb27
++=0 ; *bb27++=0 ; *bb27++=0 ; *bb27++=0 ; *bb27++=0 ; *bb27++=0 ; *bb27++=
0 ; *bb27++=0 ; *bb27++=0 ; *bb27++=0 ; *bb27++=0 ; *bb27++=0 ; *bb27++=0 ; *
bb27++=0 ;bb27=bbn;bbz=bb12;bb567{bbo[ *bb27++]++;}bb108(--bbz);bbm(
bbo[0 ]==bb12){ *bb45=(bb153* )0 ; *bb96=0 ;bb2 0 ;}bb195= *bb96;bb91(
bb77=1 ;bb77<=15 ;bb77++)bbm(bbo[bb77])bb22;bb3=bb77;bbm((bb7)bb195<
bb77)bb195=bb77;bb91(bbz=15 ;bbz;bbz--)bbm(bbo[bbz])bb22;bb52=bbz;bbm(
(bb7)bb195>bbz)bb195=bbz; *bb96=bb195;bb91(bb192=1 <<bb77;bb77<bbz;
bb77++,bb192<<=1 )bbm((bb192-=bbo[bb77])<0 )bb2(-3 );bbm((bb192-=bbo[bbz
])<0 )bb2(-3 );bbo[bbz]+=bb192;bb8[1 ]=bb77=0 ;bb27=bbo+1 ;bb2085=bb8+2 ;
bb108(--bbz){ *bb2085++=(bb77+= *bb27++);}bb27=bbn;bbz=0 ;bb567{bbm((
bb77= *bb27++)!=0 )bb441[bb8[bb77]++]=bbz;}bb108(++bbz<bb12);bb12=bb8[
bb52];bb8[0 ]=bbz=0 ;bb27=bb441;bb42=-1 ;bbv=-bb195;bb317[0 ]=(bb153* )0 ;
bb84=(bb153* )0 ;bby=0 ;bb91(;bb3<=bb52;bb3++){bbc=bbo[bb3];bb108(bbc--
){bb108(bb3>bbv+bb195){bb42++;bbv+=bb195;bby=bb52-bbv;bby=bby>(bb7)bb195
?(bb7)bb195:bby;bbm((bb20=1 <<(bb77=bb3-bbv))>bbc+1 ){bb20-=bbc+1 ;
bb2085=bbo+bb3;bbm(bb77<bby)bb108(++bb77<bby){bbm((bb20<<=1 )<= * ++
bb2085)bb22;bb20-= *bb2085;}}bby=1 <<bb77;bbm( *bb1770+bby>1440 )bb2(-4
);bb317[bb42]=bb84=bb1786+ *bb1770; *bb1770+=bby;bbm(bb42){bb8[bb42]=
bbz;bb35.bb508.bb501.bb956=(bb154)bb195;bb35.bb508.bb501.bb1154=(
bb154)bb77;bb77=bbz>>(bbv-bb195);bb35.bb602=(bb7)(bb84-bb317[bb42-1 ]-
bb77);bb317[bb42-1 ][bb77]=bb35;}bb54*bb45=bb84;}bb35.bb508.bb501.
bb956=(bb154)(bb3-bbv);bbm(bb27>=bb441+bb12)bb35.bb508.bb501.bb1154=
128 +64 ;bb54 bbm( *bb27<bbg){bb35.bb508.bb501.bb1154=(bb154)( *bb27<
256 ?0 :32 +64 );bb35.bb602= *bb27++;}bb54{bb35.bb508.bb501.bb1154=(bb154
)(bbw[ *bb27-bbg]+16 +64 );bb35.bb602=bbt[ *bb27++-bbg];}bb20=1 <<(bb3-
bbv);bb91(bb77=bbz>>bbv;bb77<bby;bb77+=bb20)bb84[bb77]=bb35;bb91(bb77
=1 <<(bb3-1 );bbz&bb77;bb77>>=1 )bbz^=bb77;bbz^=bb77;bb1165=(1 <<bbv)-1 ;
bb108((bbz&bb1165)!=bb8[bb42]){bb42--;bbv-=bb195;bb1165=(1 <<bbv)-1 ;}}
}bb2 bb192!=0 &&bb52!=1 ?(-5 ):0 ;}bbe bb2013(bbo,bb1719,bb1769,bb1786,
bby)bb165*bbo;bb165*bb1719;bb153* *bb1769;bb153*bb1786;bb17 bby;{bbe
bb35;bb7 bb1770=0 ;bb165*bb441;bbm((bb441=(bb165* )( * ((bby)->bb401))(
(bby)->bb110,(19 ),(bb11(bb7))))==0 )bb2(-4 );bb35=bb1974(bbo,19 ,19 ,(
bb165* )0 ,(bb165* )0 ,bb1769,bb1719,bb1786,&bb1770,bb441);bbm(bb35==(-
3 ))bby->bb322=(bbl* )"";bb54 bbm(bb35==(-5 )|| *bb1719==0 ){bby->bb322=
(bbl* )"";bb35=(-3 );}( * ((bby)->bb371))((bby)->bb110,(bb70)(bb441));
bb2 bb35;}bbe bb1996(bb2176,bb2390,bbo,bb55,bb932,bb1001,bb1014,
bb1786,bby)bb7 bb2176;bb7 bb2390;bb165*bbo;bb165*bb55;bb165*bb932;
bb153* *bb1001;bb153* *bb1014;bb153*bb1786;bb17 bby;{bbe bb35;bb7
bb1770=0 ;bb165*bb441;bbm((bb441=(bb165* )( * ((bby)->bb401))((bby)->
bb110,(288 ),(bb11(bb7))))==0 )bb2(-4 );bb35=bb1974(bbo,bb2176,257 ,
bb2368,bb2358,bb1001,bb55,bb1786,&bb1770,bb441);bbm(bb35!=0 || *bb55==
0 ){bbm(bb35==(-3 ))bby->bb322=(bbl* )"";bb54 bbm(bb35!=(-4 )){bby->
bb322=(bbl* )"";bb35=(-3 );}( * ((bby)->bb371))((bby)->bb110,(bb70)(
bb441));bb2 bb35;}bb35=bb1974(bbo+bb2176,bb2390,0 ,bb2404,bb2405,
bb1014,bb932,bb1786,&bb1770,bb441);bbm(bb35!=0 ||( *bb932==0 &&bb2176>
257 )){bbm(bb35==(-3 ))bby->bb322=(bbl* )"";bb54 bbm(bb35==(-5 )){bby->
bb322=(bbl* )"";bb35=(-3 );}bb54 bbm(bb35!=(-4 )){bby->bb322=(bbl* )"";
bb35=(-3 );}( * ((bby)->bb371))((bby)->bb110,(bb70)(bb441));bb2 bb35;}
( * ((bby)->bb371))((bby)->bb110,(bb70)(bb441));bb2 0 ;}
#ifdef bb2247
bb40 bbe bb2336=0 ;
#define bb2544 544
bb40 bb153 bb2426[bb2544];bb40 bb7 bb2130;bb40 bb7 bb2132;bb40 bb153*
bb2262;bb40 bb153*bb2266;
#else
bb40 bb7 bb2130=9 ;bb40 bb7 bb2132=5 ;bb40 bb153 bb2262[]={{{{96 ,7 }},
256 },{{{0 ,8 }},80 },{{{0 ,8 }},16 },{{{84 ,8 }},115 },{{{82 ,7 }},31 },{{{0 ,8 }},
112 },{{{0 ,8 }},48 },{{{0 ,9 }},192 },{{{80 ,7 }},10 },{{{0 ,8 }},96 },{{{0 ,8 }},
32 },{{{0 ,9 }},160 },{{{0 ,8 }},0 },{{{0 ,8 }},128 },{{{0 ,8 }},64 },{{{0 ,9 }},224
},{{{80 ,7 }},6 },{{{0 ,8 }},88 },{{{0 ,8 }},24 },{{{0 ,9 }},144 },{{{83 ,7 }},59 },
{{{0 ,8 }},120 },{{{0 ,8 }},56 },{{{0 ,9 }},208 },{{{81 ,7 }},17 },{{{0 ,8 }},104 },
{{{0 ,8 }},40 },{{{0 ,9 }},176 },{{{0 ,8 }},8 },{{{0 ,8 }},136 },{{{0 ,8 }},72 },{{{
0 ,9 }},240 },{{{80 ,7 }},4 },{{{0 ,8 }},84 },{{{0 ,8 }},20 },{{{85 ,8 }},227 },{{{
83 ,7 }},43 },{{{0 ,8 }},116 },{{{0 ,8 }},52 },{{{0 ,9 }},200 },{{{81 ,7 }},13 },{{{
0 ,8 }},100 },{{{0 ,8 }},36 },{{{0 ,9 }},168 },{{{0 ,8 }},4 },{{{0 ,8 }},132 },{{{0 ,
8 }},68 },{{{0 ,9 }},232 },{{{80 ,7 }},8 },{{{0 ,8 }},92 },{{{0 ,8 }},28 },{{{0 ,9 }}
,152 },{{{84 ,7 }},83 },{{{0 ,8 }},124 },{{{0 ,8 }},60 },{{{0 ,9 }},216 },{{{82 ,7 }
},23 },{{{0 ,8 }},108 },{{{0 ,8 }},44 },{{{0 ,9 }},184 },{{{0 ,8 }},12 },{{{0 ,8 }},
140 },{{{0 ,8 }},76 },{{{0 ,9 }},248 },{{{80 ,7 }},3 },{{{0 ,8 }},82 },{{{0 ,8 }},18
},{{{85 ,8 }},163 },{{{83 ,7 }},35 },{{{0 ,8 }},114 },{{{0 ,8 }},50 },{{{0 ,9 }},
196 },{{{81 ,7 }},11 },{{{0 ,8 }},98 },{{{0 ,8 }},34 },{{{0 ,9 }},164 },{{{0 ,8 }},2
},{{{0 ,8 }},130 },{{{0 ,8 }},66 },{{{0 ,9 }},228 },{{{80 ,7 }},7 },{{{0 ,8 }},90 },
{{{0 ,8 }},26 },{{{0 ,9 }},148 },{{{84 ,7 }},67 },{{{0 ,8 }},122 },{{{0 ,8 }},58 },{
{{0 ,9 }},212 },{{{82 ,7 }},19 },{{{0 ,8 }},106 },{{{0 ,8 }},42 },{{{0 ,9 }},180 },{
{{0 ,8 }},10 },{{{0 ,8 }},138 },{{{0 ,8 }},74 },{{{0 ,9 }},244 },{{{80 ,7 }},5 },{{{
0 ,8 }},86 },{{{0 ,8 }},22 },{{{192 ,8 }},0 },{{{83 ,7 }},51 },{{{0 ,8 }},118 },{{{0
,8 }},54 },{{{0 ,9 }},204 },{{{81 ,7 }},15 },{{{0 ,8 }},102 },{{{0 ,8 }},38 },{{{0 ,
9 }},172 },{{{0 ,8 }},6 },{{{0 ,8 }},134 },{{{0 ,8 }},70 },{{{0 ,9 }},236 },{{{80 ,7
}},9 },{{{0 ,8 }},94 },{{{0 ,8 }},30 },{{{0 ,9 }},156 },{{{84 ,7 }},99 },{{{0 ,8 }},
126 },{{{0 ,8 }},62 },{{{0 ,9 }},220 },{{{82 ,7 }},27 },{{{0 ,8 }},110 },{{{0 ,8 }},
46 },{{{0 ,9 }},188 },{{{0 ,8 }},14 },{{{0 ,8 }},142 },{{{0 ,8 }},78 },{{{0 ,9 }},
252 },{{{96 ,7 }},256 },{{{0 ,8 }},81 },{{{0 ,8 }},17 },{{{85 ,8 }},131 },{{{82 ,7 }
},31 },{{{0 ,8 }},113 },{{{0 ,8 }},49 },{{{0 ,9 }},194 },{{{80 ,7 }},10 },{{{0 ,8 }}
,97 },{{{0 ,8 }},33 },{{{0 ,9 }},162 },{{{0 ,8 }},1 },{{{0 ,8 }},129 },{{{0 ,8 }},65
},{{{0 ,9 }},226 },{{{80 ,7 }},6 },{{{0 ,8 }},89 },{{{0 ,8 }},25 },{{{0 ,9 }},146 },
{{{83 ,7 }},59 },{{{0 ,8 }},121 },{{{0 ,8 }},57 },{{{0 ,9 }},210 },{{{81 ,7 }},17 },
{{{0 ,8 }},105 },{{{0 ,8 }},41 },{{{0 ,9 }},178 },{{{0 ,8 }},9 },{{{0 ,8 }},137 },{{
{0 ,8 }},73 },{{{0 ,9 }},242 },{{{80 ,7 }},4 },{{{0 ,8 }},85 },{{{0 ,8 }},21 },{{{80
,8 }},258 },{{{83 ,7 }},43 },{{{0 ,8 }},117 },{{{0 ,8 }},53 },{{{0 ,9 }},202 },{{{
81 ,7 }},13 },{{{0 ,8 }},101 },{{{0 ,8 }},37 },{{{0 ,9 }},170 },{{{0 ,8 }},5 },{{{0 ,
8 }},133 },{{{0 ,8 }},69 },{{{0 ,9 }},234 },{{{80 ,7 }},8 },{{{0 ,8 }},93 },{{{0 ,8 }
},29 },{{{0 ,9 }},154 },{{{84 ,7 }},83 },{{{0 ,8 }},125 },{{{0 ,8 }},61 },{{{0 ,9 }}
,218 },{{{82 ,7 }},23 },{{{0 ,8 }},109 },{{{0 ,8 }},45 },{{{0 ,9 }},186 },{{{0 ,8 }}
,13 },{{{0 ,8 }},141 },{{{0 ,8 }},77 },{{{0 ,9 }},250 },{{{80 ,7 }},3 },{{{0 ,8 }},
83 },{{{0 ,8 }},19 },{{{85 ,8 }},195 },{{{83 ,7 }},35 },{{{0 ,8 }},115 },{{{0 ,8 }},
51 },{{{0 ,9 }},198 },{{{81 ,7 }},11 },{{{0 ,8 }},99 },{{{0 ,8 }},35 },{{{0 ,9 }},
166 },{{{0 ,8 }},3 },{{{0 ,8 }},131 },{{{0 ,8 }},67 },{{{0 ,9 }},230 },{{{80 ,7 }},7
},{{{0 ,8 }},91 },{{{0 ,8 }},27 },{{{0 ,9 }},150 },{{{84 ,7 }},67 },{{{0 ,8 }},123 }
,{{{0 ,8 }},59 },{{{0 ,9 }},214 },{{{82 ,7 }},19 },{{{0 ,8 }},107 },{{{0 ,8 }},43 },
{{{0 ,9 }},182 },{{{0 ,8 }},11 },{{{0 ,8 }},139 },{{{0 ,8 }},75 },{{{0 ,9 }},246 },{
{{80 ,7 }},5 },{{{0 ,8 }},87 },{{{0 ,8 }},23 },{{{192 ,8 }},0 },{{{83 ,7 }},51 },{{{
0 ,8 }},119 },{{{0 ,8 }},55 },{{{0 ,9 }},206 },{{{81 ,7 }},15 },{{{0 ,8 }},103 },{{{
0 ,8 }},39 },{{{0 ,9 }},174 },{{{0 ,8 }},7 },{{{0 ,8 }},135 },{{{0 ,8 }},71 },{{{0 ,9
}},238 },{{{80 ,7 }},9 },{{{0 ,8 }},95 },{{{0 ,8 }},31 },{{{0 ,9 }},158 },{{{84 ,7 }
},99 },{{{0 ,8 }},127 },{{{0 ,8 }},63 },{{{0 ,9 }},222 },{{{82 ,7 }},27 },{{{0 ,8 }}
,111 },{{{0 ,8 }},47 },{{{0 ,9 }},190 },{{{0 ,8 }},15 },{{{0 ,8 }},143 },{{{0 ,8 }},
79 },{{{0 ,9 }},254 },{{{96 ,7 }},256 },{{{0 ,8 }},80 },{{{0 ,8 }},16 },{{{84 ,8 }},
115 },{{{82 ,7 }},31 },{{{0 ,8 }},112 },{{{0 ,8 }},48 },{{{0 ,9 }},193 },{{{80 ,7 }}
,10 },{{{0 ,8 }},96 },{{{0 ,8 }},32 },{{{0 ,9 }},161 },{{{0 ,8 }},0 },{{{0 ,8 }},128
},{{{0 ,8 }},64 },{{{0 ,9 }},225 },{{{80 ,7 }},6 },{{{0 ,8 }},88 },{{{0 ,8 }},24 },{
{{0 ,9 }},145 },{{{83 ,7 }},59 },{{{0 ,8 }},120 },{{{0 ,8 }},56 },{{{0 ,9 }},209 },{
{{81 ,7 }},17 },{{{0 ,8 }},104 },{{{0 ,8 }},40 },{{{0 ,9 }},177 },{{{0 ,8 }},8 },{{{
0 ,8 }},136 },{{{0 ,8 }},72 },{{{0 ,9 }},241 },{{{80 ,7 }},4 },{{{0 ,8 }},84 },{{{0 ,
8 }},20 },{{{85 ,8 }},227 },{{{83 ,7 }},43 },{{{0 ,8 }},116 },{{{0 ,8 }},52 },{{{0 ,
9 }},201 },{{{81 ,7 }},13 },{{{0 ,8 }},100 },{{{0 ,8 }},36 },{{{0 ,9 }},169 },{{{0 ,
8 }},4 },{{{0 ,8 }},132 },{{{0 ,8 }},68 },{{{0 ,9 }},233 },{{{80 ,7 }},8 },{{{0 ,8 }}
,92 },{{{0 ,8 }},28 },{{{0 ,9 }},153 },{{{84 ,7 }},83 },{{{0 ,8 }},124 },{{{0 ,8 }},
60 },{{{0 ,9 }},217 },{{{82 ,7 }},23 },{{{0 ,8 }},108 },{{{0 ,8 }},44 },{{{0 ,9 }},
185 },{{{0 ,8 }},12 },{{{0 ,8 }},140 },{{{0 ,8 }},76 },{{{0 ,9 }},249 },{{{80 ,7 }},
3 },{{{0 ,8 }},82 },{{{0 ,8 }},18 },{{{85 ,8 }},163 },{{{83 ,7 }},35 },{{{0 ,8 }},
114 },{{{0 ,8 }},50 },{{{0 ,9 }},197 },{{{81 ,7 }},11 },{{{0 ,8 }},98 },{{{0 ,8 }},
34 },{{{0 ,9 }},165 },{{{0 ,8 }},2 },{{{0 ,8 }},130 },{{{0 ,8 }},66 },{{{0 ,9 }},229
},{{{80 ,7 }},7 },{{{0 ,8 }},90 },{{{0 ,8 }},26 },{{{0 ,9 }},149 },{{{84 ,7 }},67 },
{{{0 ,8 }},122 },{{{0 ,8 }},58 },{{{0 ,9 }},213 },{{{82 ,7 }},19 },{{{0 ,8 }},106 },
{{{0 ,8 }},42 },{{{0 ,9 }},181 },{{{0 ,8 }},10 },{{{0 ,8 }},138 },{{{0 ,8 }},74 },{{
{0 ,9 }},245 },{{{80 ,7 }},5 },{{{0 ,8 }},86 },{{{0 ,8 }},22 },{{{192 ,8 }},0 },{{{
83 ,7 }},51 },{{{0 ,8 }},118 },{{{0 ,8 }},54 },{{{0 ,9 }},205 },{{{81 ,7 }},15 },{{{
0 ,8 }},102 },{{{0 ,8 }},38 },{{{0 ,9 }},173 },{{{0 ,8 }},6 },{{{0 ,8 }},134 },{{{0 ,
8 }},70 },{{{0 ,9 }},237 },{{{80 ,7 }},9 },{{{0 ,8 }},94 },{{{0 ,8 }},30 },{{{0 ,9 }}
,157 },{{{84 ,7 }},99 },{{{0 ,8 }},126 },{{{0 ,8 }},62 },{{{0 ,9 }},221 },{{{82 ,7 }
},27 },{{{0 ,8 }},110 },{{{0 ,8 }},46 },{{{0 ,9 }},189 },{{{0 ,8 }},14 },{{{0 ,8 }},
142 },{{{0 ,8 }},78 },{{{0 ,9 }},253 },{{{96 ,7 }},256 },{{{0 ,8 }},81 },{{{0 ,8 }},
17 },{{{85 ,8 }},131 },{{{82 ,7 }},31 },{{{0 ,8 }},113 },{{{0 ,8 }},49 },{{{0 ,9 }},
195 },{{{80 ,7 }},10 },{{{0 ,8 }},97 },{{{0 ,8 }},33 },{{{0 ,9 }},163 },{{{0 ,8 }},1
},{{{0 ,8 }},129 },{{{0 ,8 }},65 },{{{0 ,9 }},227 },{{{80 ,7 }},6 },{{{0 ,8 }},89 },
{{{0 ,8 }},25 },{{{0 ,9 }},147 },{{{83 ,7 }},59 },{{{0 ,8 }},121 },{{{0 ,8 }},57 },{
{{0 ,9 }},211 },{{{81 ,7 }},17 },{{{0 ,8 }},105 },{{{0 ,8 }},41 },{{{0 ,9 }},179 },{
{{0 ,8 }},9 },{{{0 ,8 }},137 },{{{0 ,8 }},73 },{{{0 ,9 }},243 },{{{80 ,7 }},4 },{{{0
,8 }},85 },{{{0 ,8 }},21 },{{{80 ,8 }},258 },{{{83 ,7 }},43 },{{{0 ,8 }},117 },{{{0
,8 }},53 },{{{0 ,9 }},203 },{{{81 ,7 }},13 },{{{0 ,8 }},101 },{{{0 ,8 }},37 },{{{0 ,
9 }},171 },{{{0 ,8 }},5 },{{{0 ,8 }},133 },{{{0 ,8 }},69 },{{{0 ,9 }},235 },{{{80 ,7
}},8 },{{{0 ,8 }},93 },{{{0 ,8 }},29 },{{{0 ,9 }},155 },{{{84 ,7 }},83 },{{{0 ,8 }},
125 },{{{0 ,8 }},61 },{{{0 ,9 }},219 },{{{82 ,7 }},23 },{{{0 ,8 }},109 },{{{0 ,8 }},
45 },{{{0 ,9 }},187 },{{{0 ,8 }},13 },{{{0 ,8 }},141 },{{{0 ,8 }},77 },{{{0 ,9 }},
251 },{{{80 ,7 }},3 },{{{0 ,8 }},83 },{{{0 ,8 }},19 },{{{85 ,8 }},195 },{{{83 ,7 }},
35 },{{{0 ,8 }},115 },{{{0 ,8 }},51 },{{{0 ,9 }},199 },{{{81 ,7 }},11 },{{{0 ,8 }},
99 },{{{0 ,8 }},35 },{{{0 ,9 }},167 },{{{0 ,8 }},3 },{{{0 ,8 }},131 },{{{0 ,8 }},67 }
,{{{0 ,9 }},231 },{{{80 ,7 }},7 },{{{0 ,8 }},91 },{{{0 ,8 }},27 },{{{0 ,9 }},151 },{
{{84 ,7 }},67 },{{{0 ,8 }},123 },{{{0 ,8 }},59 },{{{0 ,9 }},215 },{{{82 ,7 }},19 },{
{{0 ,8 }},107 },{{{0 ,8 }},43 },{{{0 ,9 }},183 },{{{0 ,8 }},11 },{{{0 ,8 }},139 },{{
{0 ,8 }},75 },{{{0 ,9 }},247 },{{{80 ,7 }},5 },{{{0 ,8 }},87 },{{{0 ,8 }},23 },{{{
192 ,8 }},0 },{{{83 ,7 }},51 },{{{0 ,8 }},119 },{{{0 ,8 }},55 },{{{0 ,9 }},207 },{{{
81 ,7 }},15 },{{{0 ,8 }},103 },{{{0 ,8 }},39 },{{{0 ,9 }},175 },{{{0 ,8 }},7 },{{{0 ,
8 }},135 },{{{0 ,8 }},71 },{{{0 ,9 }},239 },{{{80 ,7 }},9 },{{{0 ,8 }},95 },{{{0 ,8 }
},31 },{{{0 ,9 }},159 },{{{84 ,7 }},99 },{{{0 ,8 }},127 },{{{0 ,8 }},63 },{{{0 ,9 }}
,223 },{{{82 ,7 }},27 },{{{0 ,8 }},111 },{{{0 ,8 }},47 },{{{0 ,9 }},191 },{{{0 ,8 }}
,15 },{{{0 ,8 }},143 },{{{0 ,8 }},79 },{{{0 ,9 }},255 }};bb40 bb153 bb2266[]={{
{{80 ,5 }},1 },{{{87 ,5 }},257 },{{{83 ,5 }},17 },{{{91 ,5 }},4097 },{{{81 ,5 }},5 }
,{{{89 ,5 }},1025 },{{{85 ,5 }},65 },{{{93 ,5 }},16385 },{{{80 ,5 }},3 },{{{88 ,5 }
},513 },{{{84 ,5 }},33 },{{{92 ,5 }},8193 },{{{82 ,5 }},9 },{{{90 ,5 }},2049 },{{{
86 ,5 }},129 },{{{192 ,5 }},24577 },{{{80 ,5 }},2 },{{{87 ,5 }},385 },{{{83 ,5 }},
25 },{{{91 ,5 }},6145 },{{{81 ,5 }},7 },{{{89 ,5 }},1537 },{{{85 ,5 }},97 },{{{93 ,
5 }},24577 },{{{80 ,5 }},4 },{{{88 ,5 }},769 },{{{84 ,5 }},49 },{{{92 ,5 }},12289 }
,{{{82 ,5 }},13 },{{{90 ,5 }},3073 },{{{86 ,5 }},193 },{{{192 ,5 }},24577 }};
#endif
bbe bb1966(bb55,bb932,bb1001,bb1014,bby)bb165*bb55;bb165*bb932;bb153*
 *bb1001;bb153* *bb1014;bb17 bby;{(bbb)bby;
#ifdef bb2247
bbm(!bb2336){bbe bb3;bb7 bb20=0 ;bb165*bbo;bb165*bb441;bbm((bbo=(bb165
 * )( * ((bby)->bb401))((bby)->bb110,(288 ),(bb11(bb7))))==0 )bb2(-4 );
bbm((bb441=(bb165* )( * ((bby)->bb401))((bby)->bb110,(288 ),(bb11(bb7))))==
0 ){( * ((bby)->bb371))((bby)->bb110,(bb70)(bbo));bb2(-4 );}bb91(bb3=0 ;
bb3<144 ;bb3++)bbo[bb3]=8 ;bb91(;bb3<256 ;bb3++)bbo[bb3]=9 ;bb91(;bb3<280
;bb3++)bbo[bb3]=7 ;bb91(;bb3<288 ;bb3++)bbo[bb3]=8 ;bb2130=9 ;bb1974(bbo,
288 ,257 ,bb2368,bb2358,&bb2262,&bb2130,bb2426,&bb20,bb441);bb91(bb3=0 ;
bb3<30 ;bb3++)bbo[bb3]=5 ;bb2132=5 ;bb1974(bbo,30 ,0 ,bb2404,bb2405,&
bb2266,&bb2132,bb2426,&bb20,bb441);( * ((bby)->bb371))((bby)->bb110,(
bb70)(bb441));( * ((bby)->bb371))((bby)->bb110,(bb70)(bbo));bb2336=1 ;
}
#endif
 *bb55=bb2130; *bb932=bb2132; *bb1001=bb2262; *bb1014=bb2266;bb2 0 ;}
