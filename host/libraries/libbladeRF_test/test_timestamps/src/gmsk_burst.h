#include <stdint.h>

#define GMSK_SPS 8
#define GMSK_SAMPLERATE_INITIALIZER { 0, GMSK_SPS * 13000000, 48 }

static const int16_t gmsk_burst[] = {
    0, 0,
    90, 0,
    180, 0,
    270, 0,
    360, 0,
    450, 0,
    540, 0,
    629, 0,
    720, 0,
    809, 0,
    899, 0,
    989, -1,
    1079, -4,
    1169, -10,
    1259, -22,
    1349, -44,
    1437, -83,
    1522, -148,
    1601, -247,
    1665, -389,
    1704, -579,
    1622, -779,
    1497, -998,
    1322, -1221,
    1095, -1428,
    820, -1602,
    507, -1727,
    169, -1792,
    -179, -1791,
    -523, -1722,
    -848, -1587,
    -1141, -1391,
    -1391, -1142,
    -1586, -849,
    -1721, -525,
    -1790, -182,
    -1792, 161,
    -1731, 492,
    -1616, 792,
    -1463, 1047,
    -1295, 1249,
    -1139, 1393,
    -1017, 1484,
    -951, 1527,
    -951, 1527,
    -1017, 1484,
    -1139, 1393,
    -1295, 1249,
    -1463, 1047,
    -1616, 792,
    -1731, 492,
    -1792, 161,
    -1790, -182,
    -1721, -525,
    -1586, -849,
    -1391, -1142,
    -1142, -1391,
    -849, -1586,
    -525, -1721,
    -182, -1790,
    161, -1792,
    492, -1731,
    792, -1616,
    1047, -1463,
    1249, -1295,
    1393, -1139,
    1484, -1017,
    1527, -951,
    1527, -951,
    1484, -1017,
    1393, -1139,
    1249, -1295,
    1047, -1463,
    793, -1615,
    494, -1730,
    168, -1792,
    -168, -1792,
    -494, -1730,
    -793, -1615,
    -1047, -1463,
    -1249, -1295,
    -1393, -1139,
    -1484, -1017,
    -1527, -951,
    -1527, -951,
    -1484, -1017,
    -1393, -1139,
    -1249, -1295,
    -1047, -1463,
    -793, -1615,
    -494, -1730,
    -168, -1792,
    168, -1792,
    494, -1730,
    793, -1615,
    1048, -1463,
    1249, -1295,
    1394, -1138,
    1486, -1015,
    1531, -946,
    1535, -939,
    1502, -991,
    1432, -1089,
    1331, -1210,
    1210, -1332,
    1088, -1433,
    989, -1503,
    933, -1538,
    933, -1538,
    989, -1503,
    1088, -1433,
    1210, -1332,
    1332, -1210,
    1433, -1088,
    1503, -989,
    1538, -933,
    1538, -933,
    1503, -989,
    1433, -1088,
    1332, -1210,
    1210, -1331,
    1089, -1432,
    991, -1502,
    939, -1535,
    946, -1531,
    1015, -1486,
    1138, -1394,
    1295, -1249,
    1463, -1048,
    1615, -793,
    1730, -494,
    1792, -168,
    1792, 168,
    1730, 494,
    1615, 793,
    1463, 1047,
    1295, 1249,
    1139, 1393,
    1017, 1484,
    951, 1527,
    951, 1527,
    1017, 1484,
    1139, 1393,
    1295, 1249,
    1463, 1047,
    1616, 792,
    1731, 492,
    1792, 161,
    1790, -182,
    1721, -525,
    1586, -849,
    1391, -1142,
    1141, -1391,
    848, -1587,
    522, -1722,
    176, -1791,
    -176, -1791,
    -522, -1722,
    -848, -1587,
    -1141, -1391,
    -1391, -1141,
    -1587, -848,
    -1722, -522,
    -1791, -176,
    -1791, 176,
    -1722, 522,
    -1587, 848,
    -1391, 1141,
    -1142, 1391,
    -849, 1586,
    -525, 1721,
    -182, 1790,
    161, 1792,
    492, 1731,
    792, 1616,
    1047, 1463,
    1249, 1295,
    1394, 1138,
    1486, 1015,
    1531, 946,
    1535, 939,
    1502, 991,
    1432, 1089,
    1331, 1210,
    1210, 1332,
    1088, 1433,
    989, 1503,
    933, 1538,
    933, 1538,
    989, 1503,
    1088, 1433,
    1210, 1332,
    1331, 1210,
    1432, 1089,
    1502, 991,
    1535, 939,
    1531, 946,
    1486, 1015,
    1394, 1138,
    1249, 1295,
    1048, 1463,
    793, 1615,
    494, 1730,
    168, 1792,
    -168, 1792,
    -494, 1730,
    -793, 1615,
    -1047, 1463,
    -1249, 1295,
    -1393, 1139,
    -1484, 1017,
    -1527, 951,
    -1527, 951,
    -1484, 1017,
    -1393, 1139,
    -1249, 1295,
    -1047, 1463,
    -792, 1616,
    -492, 1731,
    -161, 1792,
    182, 1790,
    525, 1721,
    849, 1586,
    1142, 1391,
    1391, 1142,
    1586, 849,
    1721, 525,
    1790, 182,
    1792, -161,
    1731, -492,
    1616, -792,
    1463, -1047,
    1295, -1249,
    1139, -1393,
    1017, -1484,
    951, -1527,
    951, -1527,
    1017, -1484,
    1139, -1393,
    1295, -1249,
    1463, -1047,
    1616, -792,
    1731, -492,
    1792, -161,
    1790, 182,
    1721, 525,
    1586, 849,
    1391, 1142,
    1141, 1391,
    848, 1587,
    522, 1722,
    176, 1791,
    -176, 1791,
    -522, 1722,
    -848, 1587,
    -1141, 1391,
    -1391, 1142,
    -1586, 849,
    -1721, 525,
    -1790, 182,
    -1792, -161,
    -1731, -492,
    -1616, -792,
    -1463, -1047,
    -1295, -1249,
    -1139, -1393,
    -1017, -1484,
    -951, -1527,
    -951, -1527,
    -1017, -1484,
    -1139, -1393,
    -1295, -1249,
    -1463, -1047,
    -1616, -792,
    -1731, -492,
    -1792, -161,
    -1790, 182,
    -1721, 525,
    -1586, 849,
    -1391, 1142,
    -1142, 1391,
    -849, 1586,
    -525, 1721,
    -182, 1790,
    161, 1792,
    492, 1731,
    792, 1616,
    1047, 1463,
    1249, 1296,
    1393, 1139,
    1484, 1017,
    1527, 951,
    1527, 951,
    1484, 1017,
    1393, 1139,
    1249, 1296,
    1047, 1463,
    792, 1616,
    492, 1731,
    161, 1792,
    -182, 1790,
    -525, 1721,
    -849, 1586,
    -1142, 1391,
    -1391, 1142,
    -1586, 849,
    -1721, 525,
    -1790, 182,
    -1792, -161,
    -1731, -492,
    -1616, -792,
    -1463, -1047,
    -1295, -1249,
    -1138, -1394,
    -1015, -1486,
    -946, -1531,
    -939, -1535,
    -991, -1502,
    -1089, -1432,
    -1210, -1331,
    -1332, -1210,
    -1433, -1088,
    -1503, -989,
    -1538, -933,
    -1538, -933,
    -1503, -989,
    -1433, -1088,
    -1332, -1210,
    -1210, -1332,
    -1088, -1433,
    -989, -1503,
    -933, -1538,
    -933, -1538,
    -989, -1503,
    -1088, -1433,
    -1210, -1332,
    -1331, -1210,
    -1432, -1089,
    -1502, -991,
    -1535, -939,
    -1531, -946,
    -1486, -1015,
    -1394, -1138,
    -1249, -1295,
    -1047, -1463,
    -792, -1616,
    -492, -1731,
    -161, -1792,
    182, -1790,
    525, -1721,
    849, -1586,
    1142, -1391,
    1391, -1141,
    1587, -848,
    1722, -522,
    1791, -176,
    1791, 176,
    1722, 522,
    1587, 848,
    1391, 1141,
    1142, 1391,
    849, 1586,
    525, 1721,
    182, 1790,
    -161, 1792,
    -492, 1731,
    -792, 1616,
    -1047, 1463,
    -1249, 1295,
    -1394, 1138,
    -1486, 1015,
    -1531, 946,
    -1535, 939,
    -1502, 991,
    -1432, 1089,
    -1331, 1210,
    -1210, 1332,
    -1088, 1433,
    -989, 1503,
    -933, 1538,
    -933, 1538,
    -989, 1503,
    -1088, 1433,
    -1210, 1332,
    -1331, 1210,
    -1432, 1089,
    -1502, 991,
    -1535, 939,
    -1531, 946,
    -1486, 1015,
    -1394, 1138,
    -1249, 1295,
    -1048, 1463,
    -793, 1615,
    -494, 1730,
    -168, 1792,
    168, 1792,
    494, 1730,
    793, 1615,
    1048, 1463,
    1249, 1295,
    1394, 1138,
    1486, 1015,
    1531, 946,
    1535, 939,
    1502, 991,
    1432, 1089,
    1331, 1210,
    1210, 1332,
    1088, 1433,
    989, 1503,
    933, 1538,
    933, 1538,
    989, 1503,
    1088, 1433,
    1210, 1332,
    1332, 1210,
    1433, 1088,
    1503, 989,
    1538, 933,
    1538, 933,
    1503, 989,
    1433, 1088,
    1332, 1210,
    1210, 1332,
    1088, 1433,
    989, 1503,
    933, 1538,
    933, 1538,
    989, 1503,
    1088, 1433,
    1210, 1332,
    1332, 1210,
    1433, 1088,
    1503, 989,
    1538, 933,
    1538, 933,
    1503, 989,
    1433, 1088,
    1332, 1210,
    1210, 1331,
    1089, 1432,
    991, 1502,
    939, 1535,
    946, 1531,
    1015, 1486,
    1138, 1394,
    1295, 1249,
    1463, 1048,
    1615, 793,
    1730, 494,
    1792, 168,
    1792, -168,
    1730, -494,
    1615, -793,
    1463, -1048,
    1295, -1249,
    1138, -1394,
    1015, -1486,
    946, -1531,
    939, -1535,
    991, -1502,
    1089, -1432,
    1210, -1331,
    1331, -1210,
    1432, -1089,
    1502, -991,
    1535, -939,
    1531, -946,
    1486, -1015,
    1394, -1138,
    1249, -1295,
    1047, -1463,
    792, -1616,
    492, -1731,
    161, -1792,
    -182, -1790,
    -525, -1721,
    -849, -1586,
    -1142, -1391,
    -1391, -1142,
    -1586, -849,
    -1721, -525,
    -1790, -182,
    -1792, 161,
    -1731, 492,
    -1616, 792,
    -1463, 1047,
    -1296, 1249,
    -1139, 1393,
    -1017, 1484,
    -951, 1527,
    -951, 1527,
    -1017, 1484,
    -1139, 1393,
    -1295, 1249,
    -1463, 1047,
    -1615, 793,
    -1730, 494,
    -1792, 168,
    -1792, -168,
    -1730, -494,
    -1615, -793,
    -1463, -1047,
    -1295, -1249,
    -1139, -1393,
    -1017, -1484,
    -951, -1527,
    -951, -1527,
    -1017, -1484,
    -1139, -1393,
    -1295, -1249,
    -1463, -1047,
    -1615, -793,
    -1730, -494,
    -1792, -168,
    -1792, 168,
    -1730, 494,
    -1615, 793,
    -1463, 1048,
    -1295, 1249,
    -1138, 1394,
    -1015, 1486,
    -946, 1531,
    -939, 1535,
    -991, 1502,
    -1089, 1432,
    -1210, 1331,
    -1331, 1210,
    -1432, 1089,
    -1502, 991,
    -1535, 939,
    -1531, 946,
    -1486, 1015,
    -1394, 1138,
    -1249, 1295,
    -1048, 1463,
    -793, 1615,
    -494, 1730,
    -168, 1792,
    168, 1792,
    494, 1730,
    793, 1615,
    1048, 1463,
    1249, 1295,
    1394, 1138,
    1486, 1015,
    1531, 946,
    1535, 939,
    1502, 991,
    1432, 1089,
    1331, 1210,
    1210, 1332,
    1088, 1433,
    989, 1503,
    933, 1538,
    933, 1538,
    989, 1503,
    1088, 1433,
    1210, 1332,
    1331, 1210,
    1432, 1089,
    1502, 991,
    1535, 939,
    1531, 946,
    1486, 1015,
    1394, 1138,
    1249, 1295,
    1047, 1463,
    792, 1616,
    492, 1731,
    161, 1792,
    -182, 1790,
    -525, 1721,
    -849, 1586,
    -1142, 1391,
    -1391, 1142,
    -1586, 849,
    -1721, 525,
    -1790, 182,
    -1792, -161,
    -1731, -492,
    -1616, -792,
    -1463, -1047,
    -1295, -1249,
    -1139, -1393,
    -1017, -1484,
    -951, -1527,
    -951, -1527,
    -1017, -1484,
    -1139, -1393,
    -1295, -1249,
    -1463, -1047,
    -1616, -792,
    -1731, -492,
    -1792, -161,
    -1790, 182,
    -1721, 525,
    -1586, 849,
    -1391, 1142,
    -1141, 1391,
    -848, 1587,
    -522, 1722,
    -176, 1791,
    176, 1791,
    522, 1722,
    848, 1587,
    1141, 1391,
    1391, 1142,
    1586, 849,
    1721, 525,
    1790, 182,
    1792, -161,
    1731, -492,
    1616, -792,
    1463, -1047,
    1295, -1249,
    1138, -1394,
    1015, -1486,
    946, -1531,
    939, -1535,
    991, -1502,
    1089, -1432,
    1210, -1331,
    1331, -1210,
    1432, -1089,
    1502, -991,
    1535, -939,
    1531, -946,
    1486, -1015,
    1394, -1138,
    1249, -1295,
    1047, -1463,
    792, -1616,
    492, -1731,
    161, -1792,
    -182, -1790,
    -525, -1721,
    -849, -1586,
    -1142, -1391,
    -1391, -1142,
    -1586, -849,
    -1721, -525,
    -1790, -182,
    -1792, 161,
    -1731, 492,
    -1616, 792,
    -1463, 1047,
    -1295, 1249,
    -1138, 1394,
    -1015, 1486,
    -946, 1531,
    -939, 1535,
    -991, 1502,
    -1089, 1432,
    -1210, 1331,
    -1331, 1210,
    -1432, 1089,
    -1502, 991,
    -1535, 939,
    -1531, 946,
    -1486, 1015,
    -1394, 1138,
    -1249, 1295,
    -1048, 1463,
    -793, 1615,
    -494, 1730,
    -168, 1792,
    168, 1792,
    494, 1730,
    793, 1615,
    1048, 1463,
    1249, 1295,
    1394, 1138,
    1486, 1015,
    1531, 946,
    1535, 939,
    1502, 991,
    1432, 1089,
    1331, 1210,
    1210, 1332,
    1088, 1433,
    989, 1503,
    933, 1538,
    933, 1538,
    989, 1503,
    1088, 1433,
    1210, 1332,
    1331, 1210,
    1432, 1089,
    1502, 991,
    1535, 939,
    1531, 946,
    1486, 1015,
    1394, 1138,
    1249, 1295,
    1047, 1463,
    792, 1616,
    492, 1731,
    161, 1792,
    -182, 1790,
    -525, 1721,
    -849, 1586,
    -1142, 1391,
    -1391, 1141,
    -1587, 848,
    -1722, 522,
    -1791, 176,
    -1791, -176,
    -1722, -522,
    -1587, -848,
    -1391, -1141,
    -1142, -1391,
    -849, -1586,
    -525, -1721,
    -182, -1790,
    161, -1792,
    492, -1731,
    792, -1616,
    1047, -1463,
    1249, -1295,
    1394, -1138,
    1486, -1015,
    1531, -946,
    1535, -939,
    1502, -991,
    1432, -1089,
    1331, -1210,
    1210, -1332,
    1088, -1433,
    989, -1503,
    933, -1538,
    933, -1538,
    989, -1503,
    1088, -1433,
    1210, -1332,
    1331, -1210,
    1432, -1089,
    1502, -991,
    1535, -939,
    1531, -946,
    1486, -1015,
    1394, -1138,
    1249, -1295,
    1047, -1463,
    792, -1616,
    492, -1731,
    161, -1792,
    -182, -1790,
    -525, -1721,
    -849, -1586,
    -1142, -1391,
    -1391, -1141,
    -1587, -848,
    -1722, -522,
    -1791, -176,
    -1791, 176,
    -1722, 522,
    -1587, 848,
    -1391, 1141,
    -1142, 1391,
    -849, 1586,
    -525, 1721,
    -182, 1790,
    161, 1792,
    492, 1731,
    792, 1616,
    1047, 1463,
    1249, 1295,
    1394, 1138,
    1486, 1015,
    1531, 946,
    1535, 939,
    1502, 991,
    1432, 1089,
    1331, 1210,
    1210, 1331,
    1089, 1432,
    991, 1502,
    939, 1535,
    946, 1531,
    1015, 1486,
    1138, 1394,
    1295, 1249,
    1463, 1047,
    1616, 792,
    1731, 492,
    1792, 161,
    1790, -182,
    1721, -525,
    1586, -849,
    1391, -1142,
    1141, -1391,
    848, -1587,
    522, -1722,
    176, -1791,
    -176, -1791,
    -522, -1722,
    -848, -1587,
    -1141, -1391,
    -1391, -1142,
    -1586, -849,
    -1721, -525,
    -1790, -182,
    -1792, 161,
    -1731, 492,
    -1616, 792,
    -1463, 1047,
    -1296, 1249,
    -1139, 1393,
    -1017, 1484,
    -951, 1527,
    -951, 1527,
    -1017, 1484,
    -1139, 1393,
    -1295, 1249,
    -1463, 1047,
    -1615, 793,
    -1730, 494,
    -1792, 168,
    -1792, -168,
    -1730, -494,
    -1615, -793,
    -1463, -1047,
    -1295, -1249,
    -1139, -1393,
    -1017, -1484,
    -951, -1527,
    -951, -1527,
    -1017, -1484,
    -1139, -1393,
    -1295, -1249,
    -1463, -1047,
    -1616, -792,
    -1731, -492,
    -1792, -161,
    -1790, 182,
    -1721, 525,
    -1587, 849,
    -1391, 1142,
    -1142, 1391,
    -849, 1586,
    -525, 1721,
    -182, 1790,
    161, 1792,
    492, 1731,
    792, 1616,
    1047, 1463,
    1249, 1296,
    1393, 1139,
    1484, 1017,
    1527, 951,
    1527, 951,
    1484, 1017,
    1393, 1139,
    1249, 1296,
    1047, 1463,
    792, 1616,
    492, 1731,
    161, 1792,
    -182, 1790,
    -525, 1721,
    -849, 1586,
    -1142, 1391,
    -1391, 1142,
    -1587, 849,
    -1721, 525,
    -1790, 182,
    -1792, -161,
    -1731, -492,
    -1616, -792,
    -1463, -1047,
    -1295, -1249,
    -1138, -1394,
    -1015, -1486,
    -946, -1531,
    -939, -1535,
    -991, -1502,
    -1089, -1432,
    -1210, -1331,
    -1332, -1210,
    -1433, -1088,
    -1503, -989,
    -1538, -933,
    -1538, -933,
    -1503, -989,
    -1433, -1088,
    -1332, -1210,
    -1210, -1331,
    -1089, -1432,
    -991, -1502,
    -939, -1535,
    -946, -1531,
    -1015, -1486,
    -1138, -1394,
    -1295, -1249,
    -1463, -1047,
    -1616, -792,
    -1731, -492,
    -1792, -161,
    -1790, 182,
    -1721, 525,
    -1587, 849,
    -1391, 1142,
    -1142, 1391,
    -849, 1586,
    -525, 1721,
    -182, 1790,
    161, 1792,
    492, 1731,
    792, 1616,
    1047, 1463,
    1249, 1295,
    1394, 1138,
    1486, 1015,
    1531, 946,
    1535, 939,
    1502, 991,
    1432, 1089,
    1331, 1210,
    1210, 1331,
    1089, 1432,
    991, 1502,
    939, 1535,
    946, 1531,
    1015, 1486,
    1138, 1394,
    1295, 1249,
    1463, 1048,
    1615, 793,
    1730, 494,
    1792, 168,
    1792, -168,
    1730, -494,
    1615, -793,
    1463, -1047,
    1295, -1249,
    1139, -1393,
    1017, -1484,
    951, -1527,
    951, -1527,
    1017, -1484,
    1139, -1393,
    1296, -1249,
    1463, -1047,
    1616, -792,
    1731, -492,
    1792, -161,
    1790, 182,
    1721, 525,
    1586, 849,
    1391, 1142,
    1142, 1391,
    849, 1587,
    525, 1721,
    182, 1790,
    -161, 1792,
    -492, 1731,
    -792, 1616,
    -1047, 1463,
    -1249, 1295,
    -1394, 1138,
    -1486, 1015,
    -1531, 946,
    -1535, 939,
    -1502, 991,
    -1432, 1089,
    -1331, 1210,
    -1210, 1332,
    -1088, 1433,
    -989, 1503,
    -933, 1538,
    -933, 1538,
    -989, 1503,
    -1088, 1433,
    -1210, 1332,
    -1332, 1210,
    -1433, 1088,
    -1503, 989,
    -1538, 933,
    -1538, 933,
    -1503, 989,
    -1433, 1088,
    -1332, 1210,
    -1210, 1331,
    -1089, 1432,
    -991, 1502,
    -939, 1535,
    -946, 1531,
    -1015, 1486,
    -1138, 1394,
    -1295, 1249,
    -1463, 1047,
    -1616, 792,
    -1731, 492,
    -1792, 161,
    -1790, -182,
    -1721, -525,
    -1586, -849,
    -1391, -1142,
    -1141, -1391,
    -848, -1587,
    -522, -1722,
    -176, -1791,
    176, -1791,
    522, -1722,
    848, -1587,
    1141, -1391,
    1391, -1141,
    1587, -848,
    1722, -522,
    1791, -176,
    1791, 176,
    1722, 522,
    1587, 848,
    1391, 1141,
    1141, 1391,
    848, 1587,
    522, 1722,
    176, 1791,
    -176, 1791,
    -522, 1722,
    -848, 1587,
    -1141, 1391,
    -1391, 1141,
    -1587, 848,
    -1722, 522,
    -1791, 176,
    -1791, -176,
    -1722, -522,
    -1587, -848,
    -1391, -1141,
    -1141, -1391,
    -848, -1587,
    -522, -1722,
    -176, -1791,
    176, -1791,
    522, -1722,
    848, -1587,
    1141, -1391,
    1391, -1141,
    1587, -848,
    1722, -522,
    1791, -176,
    1791, 176,
    1722, 522,
    1587, 848,
    1391, 1141,
    1141, 1391,
    848, 1587,
    522, 1722,
    176, 1791,
    -176, 1791,
    -522, 1722,
    -848, 1587,
    -1141, 1391,
    -1391, 1142,
    -1586, 849,
    -1721, 525,
    -1790, 182,
    -1792, -161,
    -1731, -492,
    -1616, -792,
    -1463, -1047,
    -1295, -1249,
    -1138, -1394,
    -1015, -1486,
    -946, -1531,
    -939, -1535,
    -991, -1502,
    -1089, -1432,
    -1210, -1331,
    -1331, -1210,
    -1432, -1089,
    -1502, -991,
    -1535, -939,
    -1531, -946,
    -1486, -1015,
    -1394, -1138,
    -1249, -1295,
    -1048, -1463,
    -793, -1615,
    -494, -1730,
    -168, -1792,
    168, -1792,
    494, -1730,
    793, -1615,
    1048, -1463,
    1249, -1295,
    1394, -1138,
    1486, -1015,
    1531, -946,
    1535, -939,
    1502, -991,
    1432, -1089,
    1331, -1210,
    1210, -1332,
    1088, -1433,
    989, -1503,
    933, -1538,
    933, -1538,
    989, -1503,
    1088, -1433,
    1210, -1332,
    1332, -1210,
    1433, -1088,
    1503, -989,
    1538, -933,
    1538, -933,
    1503, -989,
    1433, -1088,
    1332, -1210,
    1210, -1331,
    1089, -1432,
    991, -1502,
    939, -1535,
    946, -1531,
    1015, -1486,
    1138, -1394,
    1295, -1249,
    1463, -1048,
    1615, -793,
    1730, -494,
    1792, -168,
    1792, 168,
    1730, 494,
    1615, 793,
    1463, 1047,
    1295, 1249,
    1139, 1393,
    1017, 1484,
    951, 1527,
    951, 1527,
    1017, 1484,
    1139, 1393,
    1295, 1249,
    1463, 1047,
    1615, 793,
    1730, 494,
    1792, 168,
    1792, -168,
    1730, -494,
    1615, -793,
    1463, -1048,
    1295, -1249,
    1138, -1394,
    1015, -1486,
    946, -1531,
    939, -1535,
    991, -1502,
    1089, -1432,
    1210, -1331,
    1332, -1210,
    1433, -1088,
    1503, -989,
    1538, -933,
    1538, -933,
    1503, -989,
    1433, -1088,
    1332, -1210,
    1210, -1332,
    1088, -1433,
    989, -1503,
    933, -1538,
    933, -1538,
    989, -1503,
    1088, -1433,
    1210, -1332,
    1331, -1210,
    1432, -1089,
    1502, -991,
    1535, -939,
    1531, -946,
    1486, -1015,
    1394, -1138,
    1249, -1295,
    1047, -1463,
    792, -1616,
    492, -1731,
    161, -1792,
    -182, -1790,
    -525, -1721,
    -849, -1586,
    -1142, -1391,
    -1391, -1141,
    -1587, -848,
    -1722, -522,
    -1791, -176,
    -1791, 176,
    -1722, 522,
    -1587, 848,
    -1391, 1141,
    -1141, 1391,
    -848, 1587,
    -522, 1722,
    -176, 1791,
    176, 1791,
    522, 1722,
    848, 1587,
    1141, 1391,
    1391, 1142,
    1586, 849,
    1721, 525,
    1790, 182,
    1792, -161,
    1731, -492,
    1616, -792,
    1463, -1047,
    1295, -1249,
    1138, -1394,
    1015, -1486,
    946, -1531,
    939, -1535,
    991, -1502,
    1089, -1432,
    1210, -1331,
    1332, -1210,
    1433, -1088,
    1503, -989,
    1538, -933,
    1538, -933,
    1503, -989,
    1433, -1088,
    1332, -1210,
    1210, -1332,
    1088, -1433,
    989, -1503,
    887, -1461,
    840, -1384,
    840, -1278,
    870, -1146,
    907, -999,
    932, -847,
    931, -707,
    902, -593,
    846, -513,
    769, -466,
    676, -445,
    573, -435,
    466, -423,
    363, -399,
    272, -358,
    197, -300,
    140, -230,
    93, -153,
    49, -75,
    0, 0,
    0, 0,
    0, 0,
    0, 0,
    0, 0,
    0, 0,
    0, 0,
    0, 0,
    0, 0,
    0, 0,
};

#ifdef GMSK_BURST_MAIN
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    const char filename[] = "gmsk_burst.bin";
    FILE *f = fopen(filename, "wb");
    if (!f) {
        perror("fopen");
        return 1;
    } else {
        fwrite(gmsk_burst, sizeof(gmsk_burst[0]),
                sizeof(gmsk_burst) / sizeof(gmsk_burst[0]), f);
        fclose(f);

        printf("Wrote samples to %s.\n", filename);
    }
    return 0;
}
#endif
