/*
   'src_nic_vpnsupport.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Tue Sep  4 10:25:31 2012
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
#ifdef UNDER_CE
#define bb1916 64
#endif
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
bb979(bbx*bb50);bbu bb1002(bbf*bb50);bba bbi bb989*bb1016;bba bbi
bb1026*bb1004;bba bbi bb991*bb992;bba bbi bb998*bb1012;bba bbi bb1013
 *bb1024;bba bbi bb988*bb1020;bba bb9{bb555=0 ,bb592=1 ,bb579=2 ,bb743=3
,bb583=4 ,bb561=5 ,bb574=6 ,bb563=7 ,bb589=9 ,}bb421;bba bb9{bb601=0 ,bb990
,bb596,bb1011,bb923,bb926,bb904,bb910,bb919,bb922,bb909,}bb512;
#pragma pack(push, 8)
#ifdef _MSC_VER
#pragma warning (disable:4200)
#endif
bba bbf bb178[4 ];bba bb9{bb1649=0 ,bb1465=1 ,}bb1391;bba bb9{bb1527=0 ,
bb1718=1 ,bb1665=2 ,bb1435=3 ,bb1655=4 ,bb1496=5 ,bb1633=6 ,bb1515=7 ,bb1607
=8 ,bb1518=9 ,bb1679=10 ,bb1507=11 ,bb1693=12 ,bb1709=13 ,bb1715=14 ,bb1423=
15 ,bb1451=16 ,bb1394=17 ,bb1573=18 ,bb1688=19 ,bb1641=20 ,bb1492=21 ,bb1505
=22 ,bb1473=23 ,bb1604=24 ,bb1609=25 ,bb1448=26 ,bb1581=27 ,bb1373=28 ,
bb1706=29 ,bb1687=30 ,bb1629=16300 ,bb1613=16301 ,bb1726=16384 ,bb1535=
24576 ,bb1461=24577 ,bb1436=24578 ,bb1477=34793 ,bb1380=40500 ,}bb630;bba
bb9{bb1459=0 ,bb1523=1 ,bb1455=2 ,bb1425=3 ,bb1697=4 ,bb1387=5 ,bb1670=6 ,
bb1474=7 ,bb1528=8 ,bb1397=9 ,bb1440=21 ,bb1487=22 ,bb1488=23 ,bb1442=24 ,
bb1540=25 ,bb1508=26 ,bb1460=27 ,bb1382=28 ,bb1479=29 ,bb1489=80 ,}bb795;
bba bb9{bb1563=0 ,bb1695=1 ,bb1692=2 ,bb1483=3 ,bb1520=4 ,}bb1625;bba bb9{
bb1686=0 ,bb1349=1 ,bb1164=2 ,bb1199=3 ,bb1287=4 ,bb1073=61440 ,bb1359=
61441 ,bb1111=61443 ,bb1297=61444 ,}bb480;bba bb9{bb1700=0 ,bb1495=1 ,
bb1559=2 ,}bb1680;bba bb9{bb1389=0 ,bb1725,bb1437,bb1521,bb1562,bb1497,
bb1634,bb1463,bb1606,bb1493,bb1396,bb1668,}bb735;bba bb9{bb1676=0 ,
bb1363=2 ,bb1322=3 ,bb1375=4 ,bb1320=9 ,bb1294=12 ,bb1313=13 ,bb1306=14 ,
bb1350=249 ,}bb621;bba bb9{bb1360=0 ,bb1296=1 ,bb1283=2 ,bb1422=3 ,bb1632=
4 ,bb1358=5 ,bb1341=12 ,bb1316=13 ,bb1367=14 ,bb1284=61440 ,}bb488;bba bb9{
bb1291=1 ,bb1368=2 ,bb1337=3 ,bb1539=4 ,bb1603=5 ,bb1447=6 ,bb1428=7 ,bb1469
=8 ,bb1453=9 ,bb1538=10 ,bb1301=11 ,bb397=12 ,bb1338=13 ,bb389=240 ,bb1346=(
128 <<16 )|bb389,bb1342=(192 <<16 )|bb389,bb1324=(256 <<16 )|bb389,bb1335=(
128 <<16 )|bb397,bb1292=(192 <<16 )|bb397,bb1364=(256 <<16 )|bb397,}bb758;
bba bb9{bb1293=0 ,bb1502=1 ,bb1366=2 ,bb1323=3 ,bb1457=4 ,}bb893;bba bb9{
bb1434=0 ,bb1574=1 ,bb1190=2 ,bb611=3 ,bb1234=4 ,}bb699;bba bb9{bb1578=0 ,
bb1526=1 ,bb1405=2 ,bb1669=5 ,bb1705=7 ,}bb484;bba bb9{bb1427=0 ,bb1514=1 ,
bb1598=2 ,bb1710=3 ,bb1481=4 ,bb1683=5 ,bb1644=6 ,bb390=7 ,bb1543=65001 ,
bb398=240 ,bb1484=(128 <<16 )|bb398,bb1503=(192 <<16 )|bb398,bb1512=(256 <<
16 )|bb398,bb1542=(128 <<16 )|bb390,bb1556=(192 <<16 )|bb390,bb1616=(256 <<
16 )|bb390,}bb784;bba bb9{bb1716=0 ,bb1456=1 ,bb1659=2 ,bb1572=3 ,bb1472=4
,bb1529=5 ,bb1564=6 ,bb1643=65001 ,}bb864;bba bb9{bb1682=0 ,bb1524=1 ,
bb1658=2 ,bb1552=3 ,bb1653=4 ,bb1611=5 ,bb1554=64221 ,bb1619=64222 ,bb1656=
64223 ,bb1672=64224 ,bb1708=65001 ,bb1681=65002 ,bb1550=65003 ,bb1439=
65004 ,bb1721=65005 ,bb1486=65006 ,bb1510=65007 ,bb1476=65008 ,bb1707=
65009 ,bb1475=65010 ,}bb763;bba bb9{bb1696=0 ,bb1415=1 ,bb1431=2 ,}bb729;
bba bb9{bb1408=0 ,bb1372=1 ,bb1478=2 ,bb1684=3 ,}bb789;bba bb9{bb1592=0 ,
bb1418=1 ,bb1433=2 ,bb1646=3 ,bb1411=4 ,bb1639=5 ,bb1501=21 ,bb1568=6 ,
bb1618=7 ,bb1536=8 ,bb1377=1000 ,}bb486;bba bb9{bb1410=0 ,bb1663=1 ,bb1667
=2 ,}bb700;bba bb9{bb1662=0 ,bb1612=1 ,bb1714=2 ,bb1445=3 ,bb1471=4 ,}bb664
;bba bb9{bb1530=0 ,bb1674=1 ,bb1393=1001 ,bb1712=1002 ,}bb847;bba bb9{
bb1558=0 ,bb1127=1 ,bb1043=2 ,bb1051=3 ,bb1108=4 ,bb1142=5 ,bb1090=6 ,bb1694
=100 ,bb1586=101 ,}bb477;bba bbi bb399{bb758 bb152;bb488 bb586;bb480
bb57;}bb399;bba bbi bb395{bb621 bb1351;bb488 bb586;bb480 bb57;}bb395;
bba bbi bb387{bb893 bb1000;}bb387;bba bbi bb481{bb763 bb1601;bb864
bb416;bb784 bb152;bbu bb1485;bb484 bb821;}bb481;bba bbi bb475{bbu
bb607;bb399 bb309;bbu bb757;bb395 bb560;bbu bb705;bb387 bb597;bb484
bb821;}bb475;bba bbi bb447{bb178 bb951;bb178 bb1212;bb699 bb100;bb550
{bbi{bb395 bb45;bbf bb554[64 ];bbf bb557[64 ];}bb560;bbi{bb399 bb45;bbf
bb1213[32 ];bbf bb1225[32 ];bbf bb554[64 ];bbf bb557[64 ];bbf bb1197[16 ];
}bb309;bbi{bb387 bb45;}bb597;}bb317;}bb447;bba bbi{bbd bb1092,bb1046;
bbf bb1167:1 ;bbf bb1202:1 ;bbf bb100;bbk bb436;}bb193;bba bbi bb520{
bbd bb12;bb193 bbc[64 *2 ];}bb520;
#ifdef UNDER_CE
bba bb43 bb380;
#else
bba bb83 bb380;
#endif
bba bbi bb199{bbi bb199*bb1466, *bb1385;bbd bb26;bbd bb1160;bb193
bb936[64 ];bb477 bb509;bbd bb1298;bbk bb1058;bbd bb558;bbd bb866;bbd
bb753;bbf bb489;bbf bb1332;bbf bb1102;bbd bb984;bbd bb1381;bb380 bb569
;bbk bb1250;bb447 bb403[3 ];bb380 bb1565;bbf bb1504[40 ];bbd bb590;bbd
bb1727;}bb199;bba bbi bb391{bbi bb391*bb1722;bb193 bb485;}bb391;bba
bbi bb727{bbu bb473;bbu bb489;bbd bb26;bbd bb590;bbf bb1513;bbk bb1645
;bbf*bb1544;bbd bb1424;bbf*bb1583;bbd bb1713;bbf*bb1376;bbd bb1482;
bbu bb1446;bbu bb1569;bb391*bb130;bbu bb1470;bb664 bb1519;bbd bb1595;
bb729 bb1576;bb477 bb509;bbk bb1371;bbd bb1533;bb847 bb1400;bbd bb1647
;bbd bb1623;bb735 bb1417;bbf*bb1404;bbd bb1413;bb486 bb660;bbd bb1652
;bbd bb1622;bbd bb1406;bbd bb1699;bbd bb1494;bb481*bb1537;bbd bb1610;
bb475*bb1506;bbd bb1395;bbd bb1531;bbd bb1650;}bb727;bba bbi bb890{
bbu bb473;bbd bb26;bb193 bb485;}bb890;bba bbi bb874{bb199*bb311;bbu
bb1570;bbf*bb1698;bbd bb1666;}bb874;bba bbi bb868{bbd bb26;bb193 bb485
;bbf bb1432;bbf bb1444;}bb868;bba bbi bb848{bbu bb473;bbu bb1114;bbd
bb26;bbf*bb1626;bbd bb1541;}bb848;bba bbi bb748{bbd bb26;bbk bb1728;
bbk bb1729;bbd bb151;bbf*bb49;}bb748;bba bbi bb636{bbu bb1588;bbd bb26
;bbd bb558;bbd bb866;bbd bb753;}bb636;bba bbi bb903{bb630 bb1491;bbd
bb26;bb795 bb1318;bbu bb1555;}bb903;bba bbi bb810{bbf bb1673;bbf
bb1390;bbf bb1594;bbf bb1587;bbf bb1577;bbf bb1605;bbf bb1585;bbf
bb1458;bbf bb1374;bbf bb1522;bbf bb1412;bbf bb1703;bbf bb1724;bbf
bb1407;bbf bb1677;bbf bb1438;bbf bb1620;bbf bb1383;bbf bb1449;bbf
bb511;bbf bb1549;bbf bb1615;bbf bb1532;bbf bb1689;bbf bb1414;bbf
bb1430;bbf bb1416;}bb810;bba bbi bb726{bbu bb1631;bbd bb483;bbd bb1579
;bb789 bb1426;bbk bb1571;bbu bb1517;bbu bb1560;bbu bb1651;bbu bb1450;
bbu bb1630;bbu bb1596;bbu bb1398;bbl bb1624[128 ];bbl bb1671[128 ];bbl
bb1597[128 ];bbl bb1419[256 ];bbl bb1636[128 ];bbl bb1443[128 ];bbd bb1591
;bbf bb1561[8 ];bbf bb1403[8 ];}bb726;bba bbi bb651{bbd bb26;bbd bb1386
;}bb651;bba bbi bb815{bbd bb26;bbu bb489;}bb815;bba bbi bb791{bbu
bb1545;bbd bb502;bbd bb1165;}bb791;bba bbi bb739{bbd bb26;bb486 bb660
;bb700 bb1602;bbf*bb1580;bbd bb1589;}bb739;bba bb9{bb1399=0 ,bb1553,
bb1452,bb1384,bb1614,bb1534,bb1599,bb1392,bb1525,bb1582,bb1584,bb1691
,bb1704,bb1654,bb1401,bb1409,bb1462,bb1402,bb1621,bb1640,}bb642;bba
bbi bb1648 bb805;bba bb4( *bb1551)(bb805*bb1567,bbb*bb1590,bb642 bb322
,bbb*bb74);
#pragma pack(pop)
#ifdef _WIN32
#ifdef UNDER_CE
#define bb468 bb1701 bb605("1:")
#else
#define bb468 bb605("\\\\.\\IPSecTL")
#endif
#else
#define bb598 "ipsecdrvtl"
#define bb468 "/dev/" bb598
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
#include"uncobf.h"
#include<linux/ioctl.h>
#include"cobf.h"
bba bbi{bb1 bb1347;bbd bb1336;bb1 bb1238;bbd bb1141;bbd bb451;}bb1196
;
#define bb1343 1
#endif
#pragma pack(push, 8)
bb9{bb1357=3 ,bb1355,bb1354,bb1421,};bba bbi{bbf bb103[4 ];}bb1258;bba
bbi{bbf bb103[4 ];}bb1233;bba bbi{bbd bb941;bbd bb26;}bb1269;bba bbi{
bbd bb131;bbf bb1223[8 ];}bb408;bba bb9{bb1204=0 ,bb1267,bb1247,bb1259,
bb1730}bb1231;bba bbi{bbf bb1116;bbd bb1071;bbf bb1362;}bb487;
#pragma pack(pop)
#pragma pack(push, 8)
bb9{bb1130=-5000 ,bb1103=-4000 ,bb995=-4999 ,bb986=-4998 ,bb1025=-4997 ,
bb976=-4996 ,bb1133=-4995 ,bb1086=-4994 ,bb1132=-4993 ,bb1005=-4992 ,
bb1029=-4991 };bb4 bb1124(bb4 bb1126,bbd bb1112,bbl*bb1098);bba bbi{
bb199 bb184;bbd bb1193;bbd bb1085;bbd bb1369;bbd bb1034;bbd bb1237;
bbd bb1278;bbd bb1268;bbd bb1236;bbd bb1245;bbd bb1230;bbd bb1246;bbu
bb1220;bb43 bb569,bb1157,bb1166;bbf bb370[6 ];}bb161;bba bbi bb478{bbi
bb478*bb94;bbf bb100;bbk bb1275;bbk bb1277;bbk bb1282;bbk bb1273;}
bb430;bba bbi bb767{bbi bb767*bb94;bbi bb478*bb1128;bbd bb26;bbf bb370
[6 ];}bb412;bba bb9{bb1143=0 ,bb1720,bb1040,bb1019,bb1009}bb204;bba bbi
{bbd bb385;bbd bb451;bbd bb503;bb408*bb907;bb95 bb962;}bb303;bba bbi{
bb487*bb461;bb412*bb1117;bbd bb584;bb430*bb542;bb95 bb600;bbq bb1113;
bbq bb538;bb161*bb507;bbu bb1266;bbk bb1156;bbk bb1105;bb303 bb1044;}
bb32, *bb1511;
#pragma pack(pop)
bba bbi bb964 bb1331, *bb79;bba bbi bb612{bbi bb612*bb318;bb1 bb472;
bbq bb576;bbd bb26;bbk bb436;bbq bb92;bb1 bb316;bbq bb446;bb1 bb549;
bbq bb543;bb1 bb1499;bb101 bb1327;bbf bb1303[6 ];bb101 bb960;bb101
bb1137;bb101 bb514;bb101 bb532;}bb175, *bb87;bba bbi bb745{bbi bb745*
bb94;bb175*bb318;bbd bb26;bbk bb546;bbk bb1468;bbq bb1441;bbq bb1467;
bbk bb1429;}bb1454, *bb457;bbu bb1265(bb32* *bb1210);bbb bb1281(bb32*
bbj);bb204 bb1264(bb32*bb109,bb378 bb452,bb313 bb138,bb335 bb413,
bb314 bb200);bb204 bb1279(bb32*bb109,bb378 bb452,bb313 bb138,bb335
bb413,bb314 bb200);bb204 bb1253(bb32*bb109,bb175*bb49,bb79 bb75);
bb204 bb1232(bb32*bb109,bb175*bb49,bb79 bb75);bb4 bb1242(bb32*bb109,
bb175*bb49,bbd*bb103);bb4 bb1151(bb79 bb75,bb32*bb109,bb175*bb49,
bb161*bb311,bbu bb578,bbu bb940);bba bbi bb1886{bb121 bb1909;bb121
bb1920;bb32*bb969;}bb1039, *bb1889;bbr bb1039 bb943;bbi bb964{bb121
bb1881;bbq bb1891;bbd bb1952;bb87 bb997;bb87 bb1935;bb87 bb1857;bb87
bb1890;bb87 bb1938;bb457 bb1856;bb457 bb1951;bb457 bb1907;bb95 bb1115
;bb101 bb1902;bb101 bb1946;bb101 bb1926;bb121 bb1948;bb121 bb1868;};
bbr bb79 bb1956;bbr bb95 bb1913;bbd bb1862(bbb*bb519,bbb*bb1878,bb160
 *bb1125);bb160 bb1944(bb121 bb1955,bb121 bb1906,bb76 bb549,bbq bb543
,bb76 bb1110,bbq bb1100,bbq bb1120);
#ifdef UNDER_CE
#define bb588 16
#define bb1139 32
#else
#define bb588 128
#define bb1139 256
#endif
#define bb1104 bb588  *2
#define bb571 ( bb1104  *  2)
#define bb1901 bb571  *  2
#define bb1859 bb571  *  2
bbr bbq bb950;bb160 bb1782(bb60 bb944,bbb*bb41,bbq bb1131,bb122 bb1637
);bb142 bb1922(IN bb79 bb75,IN bb121 bb1917,IN bb1 bb549,IN bbq bb543
,IN bb76 bb1110,IN bbq bb1100,IN bbq bb1120);bb142 bb1903(IN bb79 bb75
);bbd bb1899(bb76 bb519,bb121 bb1918,bb76 bb1908,bbq bb1958,bb76
bb1854,bbq bb1849,bbq bb1912,bb160*bb1125);bbb bb1228(bb79 bb75,bb87*
bb536,bb87 bb49);bb87 bb1262(bb79 bb75,bb87*bb536);bbu bb1781(bb79
bb75);bbb bb1793(bb79 bb75);bb87 bb1464(bb173 bb359,bb79 bb75);bb87
bb1827(bb173 bb359,bb79 bb75);bb87 bb1772(bb173 bb359,bb79 bb75);
bb142 bb1661(bb79 bb75,bb87 bb49);bb142 bb1798(bb79 bb75,bb87 bb49);
bb142 bb1844(bb79 bb75,bb87 bb49);bbb bb1914();bbb bb1877();bbb bb156
(bbh bbl*bb20,...);bbb bb1999(bb187 bbg);bbb bb2034(bbb*bb27,bbq bb12
);bbb bb1379(bbb*bb6,bbq bb10);bbb bb1809(bbb*bb6,bbq bb10);bbb bb1325
(bbb*bb6,bbq bb10);bbb bb1897();bbb bb1746();bbb bb1976(bb365*bb1921);
bbb bb1575(bb324*bb27);bbb bb1260(bb324*bb817,bb479*bb150);bbb bb1480
(bb324*bb817,bb414*bb1490);bba bb9{bb409,bb1498,}bb295;bbk bb1181(
bb295 bb686,bbh bbf*bb455);bbd bb540(bb295 bb686,bbh bbf*bb455);bbb
bb1168(bbk bb159,bb295 bb553,bbf bb435[2 ]);bbb bb970(bbd bb159,bb295
bb553,bbf bb435[4 ]);bbb bb1228(bb79 bb75,bb87*bb536,bb87 bb49){bb133(
&bb75->bb1115);bbm( *bb536==bb90)bb49->bb318=bb49;bb54{bb49->bb318=( *
bb536)->bb318;( *bb536)->bb318=bb49;} *bb536=bb49;bb132(&bb75->bb1115
);}bb87 bb1262(bb79 bb75,bb87*bb536){bb87 bb49;bb133(&bb75->bb1115);
bbm( *bb536==bb90)bb49=bb90;bb54{bb49=( *bb536)->bb318;bbm(bb49== *
bb536) *bb536=bb90;bb54( *bb536)->bb318=bb49->bb318;}bb132(&bb75->
bb1115);bb2 bb49;}bbu bb1781(bb79 bb75){bbe bbz;bbq bb2052;bb75->
bb997=bb90;bb2052=2000 ;bb91(bbz=0 ;bbz<bb571;bbz++){bb87 bb49=bb137(1 ,
bb11( *bb49));bbm(!bb49)bb2 0 ;bb49->bb472=bb127(bb2052);bbm(!bb49->
bb472)bb2 0 ;bb49->bb316=bb127(bb2052);bbm(!bb49->bb316)bb2 0 ;bb1228(
bb75,&bb75->bb997,bb49);}bb2 1 ;}bbb bb1793(bb79 bb75){bbq bb2052;bb87
bb49;bb2052=2000 ;bb108((bb49=bb1262(bb75,&bb75->bb997))!=bb90){bb106(
bb49->bb316);bb106(bb49->bb472);bb106(bb49);}bb75->bb997=bb90;}bb87
bb1464(bb173 bb359,bb79 bb75){bb87 bb49=bb1262(bb75,&bb75->bb997);bbm
(!bb49){ *bb359=bb319;bb2 bb90;} *bb359=bb205;bb49->bb318=bb90;bb2
bb49;}bb87 bb1827(bb173 bb359,bb79 bb75){bb87 bb49=bb1262(bb75,&bb75
->bb997);bbm(!bb49){ *bb359=bb319;bb2 bb90;}bb49->bb318=bb90;bb49->
bb960=0 ;bb49->bb1137=0 ;bb49->bb514=0 ;bb49->bb532=0 ;bb2 bb49;}bb87
bb1772(bb173 bb359,bb79 bb75){bb87 bb49=bb1262(bb75,&bb75->bb997);bbm
(!bb49){ *bb359=bb319;bb2 bb90;}bb49->bb318=bb90;bb49->bb960=0 ;bb49->
bb1137=0 ;bb49->bb514=0 ;bb49->bb532=0 ;bb2 bb49;}bb142 bb1661(bb79 bb75
,bb87 bb49){bbm(!bb49)bb2;bb1228(bb75,&bb75->bb997,bb49);}bb142 bb1798
(bb79 bb75,bb87 bb49){bbm(!bb49)bb2;bb1228(bb75,&bb75->bb997,bb49);}
bb142 bb1844(bb79 bb75,bb87 bb49){bbm(!bb49)bb2;bb1228(bb75,&bb75->
bb997,bb49);}
