#include <a_samp>
#include <sscanf2>
#define FILTERSCRIPT

new MAX_OBJECT_FIJOS;

#define MAX_RADIO_STREAM			(500)
#define MAX_RADIO_STREAM_MIN		(250)

stock CargarMaps()
{ 

    //decorado Unity
	CreateDynamicObject(970, 1726.33997, -1870.09900, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1726.33997, -1866.01001, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1724.19995, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1720.09998, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1319, 1723.59998, -1862.80005, 12.88000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1319, 1723.59998, -1861.18994, 12.88000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1718.19995, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1722.30005, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1714.09998, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1710.19995, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1699.59998, -1845.69995, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(970, 1699.63306, -1849.80005, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(970, 1710.00000, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1705.90002, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1701.80005, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1699.69995, -1857.90002, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(970, 1706.00000, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1703.90002, -1866.00000, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1703.90002, -1870.09998, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1699.66882, -1853.90002, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(1319, 1704.30005, -1861.19995, 12.88000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1319, 1704.30005, -1862.80005, 12.88000,   0.00000, 0.00000, 270.00000);
	//fabrica de armas
    new ParedFabrica1;
 	ParedFabrica1 = CreateObject(19375, 2032.44080, -2024.26318, 1006.01196,   0.00000, 0.00000, 0.00000);
  	SetObjectMaterial(ParedFabrica1, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
   	new ParedFabrica2;
   	ParedFabrica2 = CreateObject(19375, 2032.44080, -2014.63745, 1006.01202,   0.00000, 0.00000, 0.00000);
   	SetObjectMaterial(ParedFabrica2, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
    new ParedFabrica3;
    ParedFabrica3 = CreateObject(19375, 2027.54846, -2029.01709, 1006.01202,   0.00000, 0.00000, 90.00000);
    SetObjectMaterial(ParedFabrica3, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
    new ParedFabrica4;
	ParedFabrica4 = CreateObject(19375, 2017.95935, -2029.01416, 1006.01202,   0.00000, 0.00000, 90.00000);
	SetObjectMaterial(ParedFabrica4, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
	new ParedFabrica5;
	ParedFabrica5 = CreateObject(19375, 2018.17346, -2026.95410, 1006.01202,   0.00000, 0.00000, 90.00000);
	SetObjectMaterial(ParedFabrica5, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
	new ParedFabrica6;
	ParedFabrica6 = CreateObject(19375, 2022.91003, -2022.23364, 1006.01202,   0.00000, 0.00000, 0.00000);
	SetObjectMaterial(ParedFabrica6, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
	new ParedFabrica7;
	ParedFabrica7 = CreateObject(19375, 2022.91003, -2012.64465, 1006.01202,   0.00000, 0.00000, 0.00000);
	SetObjectMaterial(ParedFabrica7, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
	new ParedFabrica8;
	ParedFabrica8 = CreateObject(19375, 2027.65271, -2009.95679, 1006.01202,   0.00000, 0.00000, 90.00000);
	SetObjectMaterial(ParedFabrica8, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
	new ParedFabrica9;
	ParedFabrica9 = CreateObject(19375, 2008.38220, -2029.01416, 1006.01202,   0.00000, 0.00000, 90.00000);
	SetObjectMaterial(ParedFabrica9, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
	new ParedFabrica10;
	ParedFabrica10 = CreateObject(19375, 2008.66199, -2026.95410, 1006.01202,   0.00000, 0.00000, 90.00000);
	SetObjectMaterial(ParedFabrica10, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
	new ParedFabrica11;
	ParedFabrica11 = CreateObject(19375, 2011.25024, -2027.49683, 1006.01202,   0.00000, 0.00000, 0.00000);
	SetObjectMaterial(ParedFabrica11, 0, 18202, "w_towncs_t", "ahoodfence2", 0xFFFFFFFF);
	new PisoOficina;
	PisoOficina = CreateObject(19463, 2029.58337, -2011.43494, 1005.29749,   0.00000, 90.00000, 90.00000);
    SetObjectMaterial(PisoOficina, 0, 5150, "wiresetc_las2", "metpat64", 0xFFFFFFFF);
   	new ParedDebajoOficina;
	ParedDebajoOficina = CreateObject(19463, 2027.80139, -2013.09741, 1003.62762,   0.00000, 0.00000, 90.00000);
 	SetObjectMaterial(ParedDebajoOficina, 0, 5150, "wiresetc_las2", "metpat64", 0xFFFFFFFF);
  	new TechoOficina;
	TechoOficina = CreateObject(19463, 2027.78650, -2011.41870, 1008.80658,   0.00000, 90.00000, 90.00000);
 	SetObjectMaterial(TechoOficina, 0, 5150, "wiresetc_las2", "metpat64", 0xFFFFFFFF);
  	new MarcoPuertaOficina;
	MarcoPuertaOficina = CreateObject(19398, 2024.84937, -2011.54150, 1007.04260,   0.00000, 0.00000, 0.00000);
 	SetObjectMaterial(MarcoPuertaOficina, 0, 5150, "wiresetc_las2", "metpat64", 0xFFFFFFFF);
  	new PuertaOficina;
	PuertaOficina = CreateObject(1491, 2024.87048, -2010.77417, 1005.34583,   0.00000, 0.00000, -90.00000);
 	SetObjectMaterial(PuertaOficina, 0, 1649, "wglass", "carshowwin2", 0xFFFFFFFF);
    CreateObject(19375, 2027.28296, -2024.26208, 1011.07178,   0.00000, 90.00000, 0.00000);
	CreateObject(19375, 2027.28296, -2014.64209, 1011.07178,   0.00000, 90.00000, 0.00000);
	CreateObject(19375, 2027.28296, -2024.26208, 1001.87939,   0.00000, 90.00000, 0.00000);
	CreateObject(19375, 2027.28296, -2014.64209, 1001.87939,   0.00000, 90.00000, 0.00000);
	CreateObject(14411, 2018.12524, -2028.92285, 1003.48596,   0.00000, 0.00000, 89.82002);
	CreateObject(19375, 2016.79626, -2027.22998, 1011.07178,   0.00000, 90.00000, -179.94003);
	CreateObject(19375, 2006.30164, -2026.19727, 1011.07178,   0.00000, 90.00000, -179.94003);
    CreateObject(19325, 2028.24915, -2013.13843, 1006.81091,   0.00000, 0.00000, 90.00000);
	CreateObject(19325, 2034.88904, -2013.13843, 1006.81091,   0.00000, 0.00000, 90.00000);
	CreateObject(8614, 2023.88025, -2013.91711, 1004.15240,   0.00000, 0.00000, -90.36000);
	CreateObject(1497, 2011.30847, -2028.63989, 1006.64478,   0.00000, 0.00000, 90.00000);
	CreateObject(2173, 2030.84082, -2012.41272, 1005.38458,   0.00000, 0.00000, 90.00000);
	CreateObject(1714, 2032.10034, -2011.65442, 1005.34766,   0.00000, 0.00000, -90.00000);
	CreateObject(355, 2032.09705, -2011.11011, 1005.67212,   -20.00000, -90.00000, -95.58000);
	CreateObject(2674, 2030.79724, -2011.30750, 1005.43506,   0.00000, 0.00000, 0.00000);
	CreateObject(11705, 2030.61279, -2012.22888, 1006.18604,   0.00000, 0.00000, -250.31993);
	CreateObject(2190, 2030.66724, -2010.97485, 1006.18536,   0.00000, 0.00000, 39.30000);
	CreateObject(19808, 2030.99414, -2011.81360, 1006.18567,   0.00000, 0.00000, 89.76001);
	CreateObject(348, 2031.12073, -2011.37927, 1006.18542,   90.00000, 0.00000, -232.43994);
	CreateObject(2310, 2029.56055, -2012.44629, 1005.86810,   0.00000, 0.00000, -159.89996);
	CreateObject(2310, 2029.49146, -2011.36816, 1005.86810,   0.00000, 0.00000, -181.67999);
	CreateObject(1703, 2026.44067, -2010.51782, 1005.28949,   0.00000, 0.00000, 0.00000);
	CreateObject(19822, 2031.07593, -2012.33765, 1006.18555,   0.00000, 0.00000, 0.00000);
    CreateObject(941, 2027.56616, -2019.12427, 1002.40668,   0.00000, 0.00000, 0.00000);
	CreateObject(941, 2027.56616, -2021.35754, 1002.40668,   0.00000, 0.00000, 0.00000);
	CreateObject(929, 2027.78333, -2020.18640, 1002.90186,   0.00000, 0.00000, 90.00000);
	CreateObject(941, 2027.56616, -2024.30212, 1002.40668,   0.00000, 0.00000, 0.00000);
	CreateObject(929, 2027.78333, -2025.49255, 1002.90192,   0.00000, 0.00000, 90.00000);
	CreateObject(941, 2027.56616, -2026.73926, 1002.40668,   0.00000, 0.00000, 0.00000);
	CreateObject(1421, 2023.84839, -2013.68555, 1002.63239,   0.00000, 0.00000, 0.00000);
	CreateObject(1431, 2024.04895, -2015.27600, 1002.48303,   0.00000, 0.00000, 87.36002);
	CreateObject(942, 2027.84570, -2014.18835, 1002.47614,   0.00000, 0.00000, 0.00000);
	CreateObject(952, 2031.57959, -2016.30737, 1003.26703,   0.00000, 0.00000, 0.00000);
	CreateObject(1886, 2031.97473, -2028.33582, 1010.97729,   22.31999, 1.38000, -144.41997);
	CreateObject(1886, 2012.22754, -2027.86707, 1010.97980,   16.98000, 0.06000, 89.94003);
	CreateObject(1886, 2023.32056, -2010.53784, 1011.07953,   17.64000, -0.12000, 31.55999);
	CreateObject(1886, 2023.97620, -2010.72778, 1008.79669,   14.52000, -0.54000, 0.00000);
	CreateObject(1497, 2107.49536, -1872.29114, 12.48638,   0.00000, 0.00000, -90.00000);
	
	// Map albergue para indigentes by sergitox
	CreateDynamicObject(1498, 2331.79712, -1255.20020, 1025.18665,   0.00000, 0.00000, 0.00000);
    CreateDynamicObject(1800, 2334.85229, -1252.83203, 1026.16541,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2334.85229, -1252.83203, 1025.18542,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2331.62134, -1251.48999, 1029.16174,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2328.64258, -1252.78442, 1025.18542,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2337.08081, -1251.92615, 1026.39319,   0.00000, 180.00000, -90.00000);
	CreateDynamicObject(1413, 2327.95435, -1251.91138, 1026.31323,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2337.62305, -1252.91003, 1025.18542,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2328.57837, -1251.43323, 1029.16174,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19836, 2328.87964, -1250.06567, 1025.97278,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2327.02686, -1252.81580, 1025.18542,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2850, 2330.51489, -1249.12964, 1025.18713,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2328.57837, -1251.43323, 1030.12170,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1413, 2327.96997, -1249.20996, 1026.09314,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(1413, 2339.64087, -1251.92615, 1026.31323,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2338.03979, -1250.13916, 1029.16174,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2866, 2327.10547, -1249.71179, 1029.18591,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2846, 2332.99219, -1247.20313, 1029.18701,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2846, 2338.27954, -1248.80139, 1025.18689,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2335.77075, -1249.16931, 1031.57959,   0.00000, 90.00000, 180.00000);
	CreateDynamicObject(1800, 2338.16406, -1248.17102, 1025.18542,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19376, 2327.79639, -1255.23682, 1033.68542,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2338.03979, -1248.45923, 1029.16174,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2341.35693, -1252.88464, 1026.16541,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2341.35693, -1252.88464, 1025.18542,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2329.98682, -1246.38782, 1029.16174,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2338.81226, -1247.36816, 1026.11316,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(2059, 2332.55420, -1244.78491, 1025.20459,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2860, 2327.98438, -1244.56934, 1025.18677,   0.00000, 0.00000, 269.40909);
	CreateDynamicObject(1413, 2337.54272, -1244.63086, 1026.31323,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1800, 2343.01978, -1251.15918, 1029.16174,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1413, 2325.79321, -1245.53442, 1026.31323,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2846, 2327.26880, -1244.81958, 1029.18640,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1369, 2330.40820, -1243.22900, 1025.76428,   0.00000, 0.00000, 349.35281);
	CreateDynamicObject(2322, 2325.75464, -1245.01465, 1026.51758,   0.00000, 0.00000, 170.49890);
	CreateDynamicObject(14872, 2326.21582, -1244.61304, 1025.60645,   0.00000, 0.00000, 56.89330);
	CreateDynamicObject(19452, 2334.01514, -1242.94775, 1027.97241,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2328.54224, -1243.22656, 1029.16174,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2328.54224, -1243.22656, 1030.12170,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1450, 2331.76929, -1241.54370, 1025.79724,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2331.65796, -1241.60852, 1029.16174,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1763, 2325.59204, -1243.00549, 1025.18555,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2328.58984, -1241.54126, 1026.16541,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2328.58984, -1241.54126, 1025.18542,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2343.02930, -1245.68896, 1029.16174,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2328.56201, -1241.50439, 1029.16174,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19457, 2331.08911, -1240.68018, 1027.97241,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(19457, 2330.86914, -1240.68018, 1027.97241,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1502, 2335.75317, -1240.61060, 1029.16064,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2840, 2333.39258, -1239.79956, 1029.18481,   0.00000, 0.00000, 51.77481);
	CreateDynamicObject(19393, 2336.53491, -1240.59436, 1030.92688,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19452, 2331.09717, -1239.49622, 1027.97241,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(19452, 2330.85718, -1239.49622, 1027.97241,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(19452, 2334.01514, -1239.46765, 1027.97241,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(19452, 2334.27515, -1239.46765, 1027.97241,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(2524, 2334.86377, -1239.70935, 1029.18713,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19376, 2322.47095, -1245.27100, 1033.68542,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(1413, 2327.59497, -1240.81848, 1031.81958,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(2524, 2334.86377, -1238.70935, 1029.18713,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2325.44116, -1239.91443, 1025.18542,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14474, 2333.61670, -1238.85767, 1026.96094,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19457, 2332.62988, -1238.28369, 1028.85718,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2514, 2338.94385, -1239.28882, 1029.18701,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(14443, 2333.50415, -1237.86914, 1029.18164,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1502, 2334.17139, -1237.68762, 1029.16064,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2514, 2340.12378, -1239.28882, 1029.18701,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2527, 2338.90698, -1238.32166, 1025.18616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19457, 2332.63989, -1238.28369, 1032.85718,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2514, 2341.36377, -1239.28882, 1029.18701,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2527, 2340.20703, -1238.32166, 1025.18616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19393, 2334.13745, -1236.94153, 1030.92688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2527, 2341.48706, -1238.32166, 1025.18616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1800, 2330.01611, -1236.31079, 1029.16174,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2328.58057, -1236.45605, 1029.16174,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2840, 2326.72241, -1236.16223, 1025.18616,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11707, 2342.07031, -1237.30139, 1026.24304,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2840, 2328.65381, -1234.63123, 1029.18616,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1502, 2339.66431, -1235.47046, 1029.16064,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19393, 2340.44507, -1235.45227, 1030.92688,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2826, 2333.52490, -1233.36816, 1025.18689,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14475, 2333.51538, -1236.25696, 1028.95496,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2328.68115, -1233.54358, 1026.16541,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2328.68115, -1233.54358, 1025.18542,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2328.68115, -1233.54358, 1029.16174,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2328.68115, -1233.54358, 1030.12170,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2337.87842, -1233.35144, 1026.16541,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19376, 2322.44141, -1235.46680, 1029.78796,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2337.87842, -1233.35144, 1025.18542,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2333.50635, -1232.66553, 1025.18542,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2328.42651, -1231.58337, 1025.18542,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1440, 2336.45654, -1230.93250, 1025.70630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19378, 2329.57080, -1230.07385, 1028.85632,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(1450, 2333.69775, -1229.54517, 1029.76599,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19632, 2327.28467, -1227.80017, 1025.50281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(849, 2326.97290, -1227.76514, 1025.44543,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2330.83154, -1226.20520, 1026.09314,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(14384, 2338.53296, -1226.13831, 1026.68396,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2840, 2330.03979, -1224.90784, 1025.18677,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, 2331.42651, -1223.50415, 1026.16541,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1413, 2330.81641, -1223.52661, 1026.31323,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1800, 2331.42651, -1223.50415, 1025.18542,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2334.90649, -1223.50415, 1026.16541,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, 2334.90649, -1223.50415, 1025.18542,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2141, 2248.30005, -1214.14001, 1047.30005,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2525, 2332.57007, -1147.35999, 1053.30005,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2524, 2334.44995, -1147.34998, 1053.30005,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2526, 2335.67993, -1147.13000, 1053.30005,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1502, 2331.85010, -1144.87000, 1053.29004,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1567, 2315.47998, -1144.80005, 1053.29004,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2100, 2318.42993, -1142.72998, 1049.70996,   0.00000, 0.00000, 88.56000);
	CreateDynamicObject(2141, 2331.23999, -1135.16003, 1049.65002,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2141, 2265.07007, -1142.31006, 1048.89001,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2141, 2277.02002, -1134.20996, 1049.88000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2229, 2369.26001, -1126.14001, 1049.89001,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2229, 2369.26001, -1125.13000, 1049.89001,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1567, 2270.61011, -1132.75000, 1049.64001,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2226, 2259.72998, -1138.89001, 1050.62000,   0.00000, 0.00000, 93.94000);
	CreateDynamicObject(2141, 2334.48999, -1068.98999, 1047.30005,   0.00000, 0.00000, 180.00000);
    //interior F.B.I
	new fbi;
    fbi = CreateObject(19377,1160.979,364.190,1001.059,0.000,90.000,0.000,200.000);
    SetObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateObject(19377,1171.459,364.200,1001.059,0.000,90.000,0.000,200.000);
    SetObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19377,1161.000,373.809,1001.059,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateObject(19377,1171.489,373.820,1001.059,0.000,90.000,0.000,200.000);
    SetObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19358,1176.630,359.399,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1160.589,359.399,1002.880,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1170.209,359.399,1002.880,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1166.260,367.890,1002.880,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1153.079,374.950,1002.880,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(14661,1162.450,368.559,1002.770,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 1692, "moregenroofstuff", "skylight_scum", 0);
    SetDynamicObjectMaterial(fbi, 1, 16644, "a51_detailstuff", "roucghstonebrtb", 0);
    SetDynamicObjectMaterial(fbi, 2, 16644, "a51_detailstuff", "roucghstonebrtb", 0);
    SetDynamicObjectMaterial(fbi, 3, 16644, "a51_detailstuff", "roucghstonebrtb", 0);
    SetDynamicObjectMaterial(fbi, 4, 16644, "a51_detailstuff", "roucghstonebrtb", 0);
    fbi = CreateDynamicObject(19450,1166.229,367.429,1002.880,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1164.350,373.309,1005.609,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19388,1168.089,371.790,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1168.099,369.130,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1163.339,379.829,1002.880,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19388,1168.079,378.190,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1168.079,374.979,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1161.500,362.549,1002.880,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1169.699,373.320,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1161.510,378.220,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19358,1157.610,373.339,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19388,1168.069,371.790,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19450,1161.489,372.160,1002.880,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19388,1172.630,367.890,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1175.810,367.899,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19377,1171.489,383.440,1001.059,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19358,1171.119,366.130,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1171.150,359.399,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1176.689,364.000,1002.880,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1176.689,373.589,1002.880,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19377,1150.489,364.179,1001.059,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19377,1150.510,373.799,1001.059,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19377,1160.989,383.410,1001.059,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19377,1150.500,383.399,1001.059,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19358,1164.360,373.309,1000.239,0.000,180.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19358,1163.158,379.823,1002.869,0.000,0.000,90.100,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(1649,1163.800,373.339,1002.530,0.000,0.000,180.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "shelf_glas", 0);
    fbi = CreateDynamicObject(1649,1163.781,373.319,1002.530,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "shelf_glas", 0);
    fbi = CreateDynamicObject(19404,1157.160,379.839,1002.880,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19388,1154.589,379.820,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19388,1153.089,368.619,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1153.099,362.250,1002.880,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1151.040,359.399,1002.880,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19388,1148.260,366.200,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1151.420,366.200,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1146.579,364.290,1002.880,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1146.589,373.890,1002.880,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1149.329,382.589,1002.880,0.000,0.000,-35.220,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1159.610,373.309,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19358,1155.489,373.309,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19431,1153.859,373.299,1002.859,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19450,1159.959,386.510,1002.880,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1169.420,386.500,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1173.719,384.140,1002.880,0.000,0.000,-131.039,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(1783,1163.219,373.339,1001.536,90.999,-0.399,-179.600,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 14392, "dr_gsstudio", "speaker07", 0);
    fbi = CreateDynamicObject(2001,1168.479,373.760,1001.140,0.000,0.000,-42.720,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, -1, "none", "none", -1);
    fbi = CreateDynamicObject(2001,1170.640,359.690,1001.140,0.000,0.000,-35.700,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, -1, "none", "none", -1);
    fbi = CreateDynamicObject(2614,1161.650,363.440,1003.140,0.000,0.000,89.940,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, -1, "none", "none", -1);
    fbi = CreateDynamicObject(1708,1162.859,361.579,1001.150,0.000,0.000,129.179,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 2, 18022, "genintintfasta", "CJ_TILE1", 0);
    fbi = CreateDynamicObject(1708,1162.219,364.769,1001.150,0.000,0.000,42.119,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 2, 18022, "genintintfasta", "CJ_TILE1", 0);
    fbi = CreateDynamicObject(1495,1153.829,379.929,1001.150,0.000,0.000,-92.220,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 2, 960, "cj_crate_will", "CJ_FLIGHT_CASE", 0);
    fbi = CreateDynamicObject(14410,1158.000,385.910,1001.440,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    SetDynamicObjectMaterial(fbi, 1, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19450,1159.859,383.779,1002.880,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1165.030,385.290,1002.880,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(1714,1157.170,360.790,1001.140,0.000,0.000,-178.979,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 14526, "sweetsmain", "ab_kitchunit2", 0);
    fbi = CreateDynamicObject(2207,1158.180,363.230,1001.140,0.000,0.000,-180.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 14668, "711c", "gun_ceiling1128", 0);
    fbi = CreateDynamicObject(2208,1155.949,361.890,1001.059,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 14668, "711c", "gun_ceiling1128", 0);
    fbi = CreateDynamicObject(1502,1147.469,366.190,1001.150,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 18049, "ammu_twofloor", "gun_ceiling2", 0);
    fbi = CreateDynamicObject(1502,1153.130,367.869,1001.150,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 18049, "ammu_twofloor", "gun_ceiling2", 0);
    fbi = CreateDynamicObject(1737,1162.189,363.589,1001.150,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18029, "genintintsmallrest", "GB_restaursmll04", 0);
    fbi = CreateDynamicObject(1783,1165.709,359.419,1003.949,90.999,-0.399,-179.600,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10778, "airportcpark_sfse", "ws_fireexit", 0);
    fbi = CreateDynamicObject(14782,1149.859,359.829,1002.090,0.000,0.000,180.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 15046, "svcunthoose", "csheistbox01", 0);
    fbi = CreateDynamicObject(19431,1164.209,383.799,1002.859,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(1536,1165.681,359.500,1001.140,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18029, "genintintsmallrest", "GB_restaursmll12", -1);
    fbi = CreateDynamicObject(1536,1165.709,359.540,1001.140,0.000,0.000,180.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18029, "genintintsmallrest", "GB_restaursmll12", -1);
    fbi = CreateDynamicObject(1963,1170.479,365.989,1001.539,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, -1, "none", "none", -1);
    fbi = CreateDynamicObject(2811,1161.949,359.950,1001.150,0.000,0.000,-99.779,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, -1, "none", "none", -1);
    fbi = CreateDynamicObject(19358,1166.368,379.818,1002.869,0.000,0.000,90.100,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19388,1168.059,378.190,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19358,1168.059,374.979,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19431,1167.249,373.280,1002.859,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19358,1171.150,362.610,1005.629,0.000,180.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19377,1150.469,381.779,1004.690,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateObject(19377,1160.939,379.130,1004.690,0.000,90.000,0.000,100.000);
    SetObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateDynamicObject(2614,1161.660,376.529,1003.330,0.000,0.000,89.040,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6064, "law_beach1", "musk1", -1);
    fbi = CreateDynamicObject(19482,1168.180,371.773,1003.838,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterialText(fbi, 0, "", 130, "Calibri", 20, 1, -376926742, 0, 1);
    fbi = CreateDynamicObject(1502,1168.119,377.450,1001.150,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 18049, "ammu_twofloor", "gun_ceiling2", 0);
    fbi = CreateDynamicObject(14892,1147.540,395.690,1000.390,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(14892,1175.829,366.279,1000.080,0.000,0.000,-270.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19358,1176.689,379.989,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1166.530,386.510,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1153.579,386.519,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(941,1164.410,369.430,1001.590,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3531, "triadprops_lvs", "casinowall1", -1);
    SetDynamicObjectMaterial(fbi, 1, 14527, "sweetslites", "mp_diner_fan", 0);
    fbi = CreateDynamicObject(1721,1163.167,368.870,1001.150,0.000,0.000,-60.299,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 3531, "triadprops_lvs", "casinowall1", 0);
    fbi = CreateDynamicObject(1721,1165.697,369.148,1001.150,0.000,0.000,103.800,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 3531, "triadprops_lvs", "casinowall1", 0);
    fbi = CreateDynamicObject(2001,1168.439,368.140,1001.140,0.000,0.000,-42.720,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, -1, "none", "none", -1);
    fbi = CreateDynamicObject(2596,1167.260,373.690,1003.250,0.000,0.000,180.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7979, "vegasairprtland", "hangerlight01_64", 0);
    fbi = CreateDynamicObject(2596,1166.359,373.690,1003.250,0.000,0.000,180.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 9818, "ship_brijsfw", "ship_greenscreen1", 0);
    fbi = CreateDynamicObject(1502,1171.849,367.839,1001.150,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 18049, "ammu_twofloor", "gun_ceiling2", 0);
    fbi = CreateDynamicObject(1502,1168.109,371.040,1001.150,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 3241, "conhooses", "trail_door", 0);
    fbi = CreateDynamicObject(1886,1167.522,372.839,1004.682,26.459,-0.059,-55.860,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, -1, "none", "none", -1);
    fbi = CreateDynamicObject(19388,1172.890,373.329,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1176.099,373.329,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(1502,1172.099,373.320,1001.150,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 18049, "ammu_twofloor", "gun_ceiling2", 0);
    fbi = CreateDynamicObject(19377,1165.079,388.760,1004.690,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateDynamicObject(19377,1171.439,379.140,1004.690,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateDynamicObject(19377,1171.439,369.529,1004.690,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateDynamicObject(19377,1171.439,359.899,1004.690,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateDynamicObject(19377,1160.939,369.519,1004.690,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateDynamicObject(19377,1160.949,359.890,1004.690,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateDynamicObject(19377,1150.459,372.140,1004.690,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateDynamicObject(19377,1150.449,362.529,1004.690,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateDynamicObject(19482,1168.170,378.243,1003.838,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterialText(fbi, 0, "", 130, "Calibri", 20, 1, -376926742, 0, 1);
    fbi = CreateDynamicObject(19482,1154.498,379.917,1003.838,0.000,0.000,89.900,-1,-1,-1,300.0);
    SetDynamicObjectMaterialText(fbi, 0, "", 130, "Calibri", 20, 1, -376926742, 0, 1);
    fbi = CreateDynamicObject(19482,1148.225,366.299,1003.838,0.000,0.000,89.900,-1,-1,-1,300.0);
    SetDynamicObjectMaterialText(fbi, 0, "", 130, "Calibri", 20, 1, -376926742, 0, 1);
    fbi = CreateDynamicObject(19482,1169.381,364.523,1003.848,0.000,0.000,-89.500,-1,-1,-1,300.0);
    SetDynamicObjectMaterialText(fbi, 0, "", 130, "Calibri", 20, 1, -376926742, 0, 1);
    fbi = CreateDynamicObject(19377,1175.579,388.769,1004.690,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 3292, "cxrf_payspray", "sf_spray1", 0);
    fbi = CreateDynamicObject(19450,1160.510,386.510,1006.380,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19450,1155.640,381.660,1006.380,0.000,0.000,-180.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19388,1157.290,376.920,1006.369,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19450,1158.939,372.149,1006.380,0.000,0.000,-180.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19450,1146.280,372.140,1006.380,0.000,0.000,-180.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19450,1150.889,376.920,1006.380,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19450,1151.020,367.399,1006.380,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19358,1157.430,367.390,1006.390,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19450,1170.089,386.510,1006.380,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19450,1174.920,381.790,1006.380,0.000,0.000,-180.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19450,1163.660,376.920,1006.380,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19450,1172.420,376.910,1006.380,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19377,1169.609,381.739,1008.219,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "concpanel_la", 0);
    fbi = CreateDynamicObject(14892,1142.449,377.910,1003.820,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(14892,1128.660,368.390,1003.820,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19450,1155.469,383.739,1006.380,0.000,0.000,-90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(19388,1160.189,385.260,1006.369,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(2207,1148.819,371.309,1004.770,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "ws_officy_ceiling", 0);
    fbi = CreateDynamicObject(1502,1156.489,376.899,1004.629,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 18049, "ammu_twofloor", "gun_ceiling2", 0);
    fbi = CreateDynamicObject(1502,1160.180,384.510,1004.719,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 18049, "ammu_twofloor", "gun_ceiling2", 0);
    fbi = CreateDynamicObject(19377,1159.109,381.730,1008.219,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "concpanel_la", 0);
    fbi = CreateDynamicObject(19377,1153.739,372.149,1008.219,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "concpanel_la", 0);
    fbi = CreateDynamicObject(19377,1143.250,372.130,1008.219,0.000,90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 11301, "carshow_sfse", "concpanel_la", 0);
    fbi = CreateDynamicObject(2691,1161.638,370.437,1003.856,0.000,0.000,89.999,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 14415, "carter_block_2", "mp_carter_cuffs", 0);
    fbi = CreateDynamicObject(2691,1151.142,366.313,1002.466,0.000,0.000,-179.899,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 4003, "cityhall_tr_lan", "mc_flags1", -1);
    fbi = CreateDynamicObject(2691,1153.191,376.288,1002.965,0.000,0.000,89.999,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 2059, "cj_ammo2", "CJ_gunbook1", 0);
    fbi = CreateDynamicObject(2691,1167.700,386.376,1002.606,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 14599, "paperchasebits", "ab_blueprint4", -1);
    fbi = CreateDynamicObject(2691,1146.399,372.155,1006.225,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 14853, "gen_pol_vegas", "mp_cop_whiteboard", -1);
    fbi = CreateDynamicObject(2691,1158.822,373.140,1006.185,0.000,0.000,-90.099,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 14853, "gen_pol_vegas", "mp_cop_pinboard", -1);
    fbi = CreateDynamicObject(2691,1149.221,382.234,1002.616,0.000,0.000,54.599,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 14842, "genintintpolicea", "cop_notice", -1);
    fbi = CreateDynamicObject(2691,1167.929,375.393,1002.665,0.000,0.000,-90.099,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 1952, "mixkb1", "mixer2", -1);
    fbi = CreateDynamicObject(19358,1168.039,369.400,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19358,1161.508,369.400,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19358,1161.498,371.659,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19358,1163.178,367.903,1002.869,0.000,0.000,90.100,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19358,1166.368,367.908,1002.869,0.000,0.000,90.100,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19431,1161.999,373.290,1002.859,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19431,1166.738,373.270,1002.859,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6490, "tvstudio_law2", "tvstud02_LAw2", 0);
    fbi = CreateDynamicObject(19431,1167.199,373.300,1002.859,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19431,1166.748,373.290,1002.859,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19358,1164.360,373.320,1000.229,0.000,180.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19358,1164.350,373.320,1005.619,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19431,1161.989,373.300,1002.859,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19358,1161.519,374.979,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19358,1161.529,378.139,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 10938, "skyscrap_sfse", "ws_skyscraperwin1", 0);
    fbi = CreateDynamicObject(19358,1163.237,374.979,1001.060,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6064, "law_beach1", "musk1", 0);
    fbi = CreateDynamicObject(19358,1166.308,374.979,1001.070,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6064, "law_beach1", "musk1", 0);
    fbi = CreateDynamicObject(19358,1166.308,378.189,1001.070,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6064, "law_beach1", "musk1", 0);
    fbi = CreateDynamicObject(19358,1163.237,378.190,1001.060,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6064, "law_beach1", "musk1", 0);
    fbi = CreateDynamicObject(1783,1165.559,373.339,1001.536,90.999,-0.399,-179.600,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 14392, "dr_gsstudio", "speaker07", 0);
    fbi = CreateDynamicObject(1783,1164.349,373.427,1001.737,69.699,-0.399,-179.600,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 14392, "dr_gsstudio", "rec_mix5c", 0);
    fbi = CreateDynamicObject(19358,1166.308,374.979,1004.660,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6064, "law_beach1", "musk1", 0);
    fbi = CreateDynamicObject(19358,1163.237,374.979,1004.661,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6064, "law_beach1", "musk1", 0);
    fbi = CreateDynamicObject(19358,1166.308,378.189,1004.630,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6064, "law_beach1", "musk1", 0);
    fbi = CreateDynamicObject(19358,1163.237,378.190,1004.640,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 6064, "law_beach1", "musk1", 0);
    fbi = CreateDynamicObject(19358,1166.308,369.590,1001.070,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 8663, "triadcasino", "imperial02_64", 0);
    fbi = CreateDynamicObject(19358,1163.158,369.590,1001.090,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 8663, "triadcasino", "imperial02_64", 0);
    fbi = CreateDynamicObject(19358,1163.148,371.660,1001.080,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 8663, "triadcasino", "imperial02_64", 0);
    fbi = CreateDynamicObject(19358,1166.310,371.660,1001.060,0.000,-90.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 8663, "triadcasino", "imperial02_64", 0);
    fbi = CreateDynamicObject(19404,1169.440,364.619,1002.880,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19388,1166.230,364.630,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1164.699,366.150,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(1502,1165.449,364.580,1001.150,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 1, 18049, "ammu_twofloor", "gun_ceiling2", 0);
    fbi = CreateDynamicObject(19358,1159.817,379.817,1002.869,0.000,0.000,90.100,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19404,1157.170,379.809,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19388,1154.599,379.789,1002.880,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19358,1153.109,378.190,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19358,1153.109,374.980,1002.869,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 18065, "ab_sfammumain", "breezewall", 0);
    fbi = CreateDynamicObject(19358,1154.730,373.239,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1157.930,373.239,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1159.850,373.229,1002.869,0.000,0.000,90.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19450,1161.479,368.409,1002.880,0.000,0.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1171.160,362.930,1005.639,0.000,180.000,0.000,-1,-1,-1,300.0);
    SetDynamicObjectMaterial(fbi, 0, 7009, "vgndwntwn1", "vgnbankbld4_256", 0);
    fbi = CreateDynamicObject(19358,1166.000,5132.000,373.000,0.000,0.000,0.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(1649,1162.000,9097.000,373.000,0.000,0.000,0.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2000,1167.719,373.910,1001.150,0.000,0.000,-180.119,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2000,1167.219,373.899,1001.150,0.000,0.000,-180.119,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2002,1161.819,366.809,1001.140,0.000,0.000,0.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(1811,1168.949,366.570,1001.729,0.000,0.000,91.559,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(19304,1157.260,379.869,1003.200,0.000,0.000,0.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2372,1157.599,373.269,1003.260,0.000,90.000,90.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2371,1156.540,374.070,1000.909,0.000,0.000,0.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(964,1160.760,373.369,1001.760,90.000,90.000,90.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2358,1161.069,375.140,1001.289,0.000,0.000,-93.900,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2041,1159.729,373.899,1002.630,0.000,0.000,168.119,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2063,1160.040,379.410,1001.969,0.000,0.000,0.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(964,1159.439,373.380,1001.760,90.000,90.000,90.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(964,1158.099,373.380,1001.760,90.000,90.000,90.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(964,1160.760,373.369,1003.049,90.000,90.000,90.000,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2358,1161.069,375.140,1001.520,0.000,0.000,-93.900,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2358,1161.069,375.140,1001.760,0.000,0.000,-93.900,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2358,1161.069,375.140,1002.000,0.000,0.000,-93.900,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2358,1161.069,375.140,1002.229,0.000,0.000,-93.900,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2358,1161.069,375.140,1002.460,0.000,0.000,-93.900,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2358,1161.069,375.140,1002.690,0.000,0.000,-93.900,-1,-1,-1,300.0);
    fbi = CreateDynamicObject(2358,1161.069,375.920,1001.289,0.000,0.000,-77.760,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2358,1161.030,376.760,1001.289,0.000,0.000,-89.400,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2358,1161.069,375.920,1001.520,0.000,0.000,-77.760,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2358,1161.069,375.920,1001.750,0.000,0.000,-77.760,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2358,1161.069,375.920,1001.979,0.000,0.000,-77.760,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2358,1161.030,376.760,1001.500,0.000,0.000,-89.400,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2358,1161.030,376.760,1001.710,0.000,0.000,-89.400,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2358,1161.030,376.760,1001.929,0.000,0.000,-89.400,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2358,1161.030,376.760,1002.169,0.000,0.000,-89.400,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2358,1161.030,376.760,1002.400,0.000,0.000,-89.400,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2358,1160.390,374.899,1001.289,0.000,0.000,-128.580,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2041,1159.390,373.910,1002.630,0.000,0.000,191.820,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2041,1159.109,373.910,1002.630,0.000,0.000,178.919,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2371,1153.770,374.049,1000.859,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(373,1158.050,374.109,1003.419,205.440,109.620,-100.080,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(937,1157.150,379.140,1001.609,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(373,1157.589,374.109,1003.419,205.440,109.620,-100.080,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(373,1157.140,374.100,1003.419,205.440,109.620,-100.080,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(373,1156.699,374.100,1003.419,205.440,109.620,-100.080,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(373,1156.260,374.049,1003.419,205.440,109.620,-91.139,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2186,1160.000,372.709,1001.140,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1726,1154.729,372.700,1001.150,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1157.329,377.989,1001.150,0.000,0.000,13.380,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1671,1155.620,362.989,1001.580,0.000,0.000,57.439,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(14461,1159.540,365.269,1003.400,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(631,1153.650,372.790,1002.049,0.000,0.000,-48.419,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(3965,1153.199,357.369,1002.820,0.000,0.000,-55.680,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2828,1156.550,361.869,1001.929,0.000,0.000,-173.880,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2811,1160.979,359.940,1001.150,0.000,0.000,-34.500,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2816,1162.750,363.549,1001.940,0.000,0.000,-31.799,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1778,1176.199,359.970,1001.150,0.000,0.000,65.519,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2190,1158.089,361.839,1001.780,0.000,0.000,-56.099,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2002,1157.869,372.709,1001.140,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2690,1146.780,371.649,1002.640,0.000,0.000,82.019,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1671,1158.799,362.898,1001.580,0.000,0.000,-55.759,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1671,1158.010,363.733,1001.580,0.000,0.000,-34.160,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1671,1156.488,363.903,1001.580,0.000,0.000,31.280,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(14455,1155.089,359.660,1002.760,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2007,1153.819,360.029,1001.140,0.000,0.000,177.779,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(14779,1153.680,357.739,1002.950,0.000,0.000,-89.639,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1846,1145.719,362.820,1002.669,90.000,90.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(14401,1138.180,355.149,1001.440,0.000,0.000,-90.180,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2606,1170.699,366.309,1002.179,0.000,0.000,-90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2606,1170.699,366.309,1002.650,0.000,0.000,-90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2606,1170.699,366.309,1003.090,0.000,0.000,-90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1999,1169.349,365.179,1001.150,0.000,0.000,-180.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2894,1169.280,365.350,1001.960,0.000,0.000,-171.899,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1998,1162.089,378.230,1001.150,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1811,1163.150,378.290,1001.729,0.000,0.000,-35.819,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1886,1170.619,359.970,1004.619,26.459,-0.059,-133.320,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1886,1160.910,379.339,1004.619,26.459,-0.059,-49.319,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2254,1152.949,373.890,1002.880,0.000,0.000,-90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2258,1158.839,383.649,1002.969,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1156.839,373.779,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1156.839,373.959,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1156.849,374.140,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1156.839,374.339,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1156.839,374.579,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1156.839,374.820,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1156.829,375.049,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1156.829,375.230,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1156.859,375.429,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.079,373.779,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.089,373.920,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.099,374.049,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.069,374.269,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.060,374.420,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.079,374.630,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.079,374.829,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.079,374.970,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.089,375.149,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.089,375.339,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1154.089,375.510,1001.380,-6.719,-74.760,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(353,1156.280,375.809,1001.219,-4.559,-58.439,-79.080,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(353,1156.479,375.820,1001.219,-4.559,-58.439,-79.080,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(353,1156.640,375.820,1001.219,-4.559,-58.439,-79.080,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(353,1156.810,375.809,1001.219,-4.559,-58.439,-79.080,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(348,1158.880,379.559,1002.340,92.760,14.279,-51.599,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(348,1159.209,379.570,1002.340,92.760,14.279,-51.599,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(348,1159.589,379.540,1002.340,92.760,14.279,-51.599,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(348,1159.989,379.529,1002.340,92.760,14.279,-51.599,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(348,1160.369,379.480,1002.340,92.760,14.279,-51.599,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(348,1160.709,379.470,1002.340,92.760,14.279,-51.599,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2041,1159.079,379.359,1002.099,0.000,0.000,8.220,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2041,1159.479,379.399,1002.099,0.000,0.000,-19.739,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2041,1159.900,379.339,1002.099,0.000,0.000,-11.640,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2041,1160.319,379.380,1002.099,0.000,0.000,-11.100,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2041,1160.739,379.359,1002.099,0.000,0.000,-10.380,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2041,1161.119,379.320,1002.099,0.000,0.000,-0.899,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2041,1157.880,379.410,1002.280,0.000,0.000,-32.159,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(348,1156.420,379.529,1002.080,92.760,14.279,-0.899,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(356,1157.099,379.459,1002.080,85.080,-91.980,112.980,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(18755,1175.084,385.548,1003.076,0.000,0.000,48.900,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2262,1164.119,380.440,1002.750,0.000,0.000,180.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1170.290,373.109,1001.150,0.000,0.000,-180.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1170.849,373.109,1001.150,0.000,0.000,-180.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1171.410,373.119,1001.150,0.000,0.000,-180.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2162,1169.689,386.420,1005.979,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2162,1165.020,386.399,1005.979,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2164,1174.780,383.109,1004.780,0.000,0.000,-90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2164,1174.770,381.309,1004.780,0.000,0.000,-90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2001,1174.540,377.390,1004.770,0.000,0.000,44.759,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2690,1166.579,377.119,1006.359,0.000,0.000,175.619,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2986,1155.760,380.869,1004.820,0.000,90.000,180.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(14532,1147.260,368.269,1005.729,0.000,0.000,-57.240,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(14779,1157.430,366.950,1006.250,0.000,0.000,180.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(14779,1157.449,371.160,1006.250,0.000,0.000,180.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1154.000,370.000,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1154.010,371.170,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1154.020,372.269,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1154.020,373.410,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1154.010,374.559,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1152.489,374.579,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1152.489,373.420,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1152.469,372.260,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1152.479,371.160,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1152.469,370.059,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1150.930,370.029,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1150.920,371.190,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1150.900,372.250,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1150.900,373.429,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1721,1150.930,374.570,1004.770,0.000,0.000,90.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2001,1158.510,367.859,1004.770,0.000,0.000,43.860,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2165,1166.819,379.350,1004.770,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2183,1168.739,382.649,1004.770,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2183,1168.770,379.209,1004.770,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2165,1166.839,382.820,1004.770,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2165,1167.780,383.779,1004.770,0.000,0.000,-180.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2165,1167.810,380.320,1004.770,0.000,0.000,-180.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2190,1169.560,379.980,1005.580,0.000,0.000,-173.520,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2190,1169.979,379.459,1005.580,0.000,0.000,-28.680,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2190,1171.189,379.799,1005.580,0.000,0.000,2.519,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2190,1171.160,380.079,1005.580,0.000,0.000,176.759,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2190,1171.109,383.480,1005.580,0.000,0.000,176.759,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2190,1169.000,383.559,1005.580,0.000,0.000,-207.119,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2190,1169.780,383.079,1005.580,0.000,0.000,-23.760,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2190,1171.569,382.820,1005.580,0.000,0.000,-51.419,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2191,1157.030,383.079,1004.780,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2191,1158.609,383.089,1004.780,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2186,1160.719,377.540,1004.780,0.000,0.000,180.240,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2010,1174.380,386.000,1004.770,0.000,0.000,35.040,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1167.180,381.119,1004.780,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1167.170,384.510,1004.780,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1167.589,382.000,1004.780,0.000,0.000,-161.399,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1169.319,382.000,1004.780,0.000,0.000,-196.320,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1171.390,382.029,1004.780,0.000,0.000,-168.059,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1169.319,381.070,1004.780,0.000,0.000,7.800,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1171.189,381.179,1004.780,0.000,0.000,-6.239,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1171.030,378.429,1004.780,0.000,0.000,-172.619,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1169.479,378.519,1004.780,0.000,0.000,-184.440,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1167.329,378.390,1004.780,0.000,0.000,-184.440,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1169.489,384.769,1004.780,0.000,0.000,-9.420,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1715,1171.099,384.730,1004.780,0.000,0.000,-4.079,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(19377,1153.739,372.149,1008.219,0.000,90.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(19377,1153.739,372.149,1008.219,0.000,90.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2610,1164.209,386.019,1005.590,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2610,1163.709,386.019,1005.590,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(2610,1163.209,386.029,1005.590,0.000,0.000,0.000,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(18756,1175.136,385.470,1003.106,0.000,0.000,48.700,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(18756,1172.687,382.550,1003.106,0.000,0.000,-130.800,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1892,1171.089,364.092,1001.145,0.000,0.000,-89.999,-1,-1,-1,200.000);
    fbi = CreateDynamicObject(1892,1171.089,362.422,1001.145,0.000,0.000,-89.999,-1,-1,-1,200.000);
	  //herreria
    new herreriav2[156];
	herreriav2[0] = CreateObject(19377, -736.3825, -2406.6127, 5003.1176, 90.0000, 0.0000, 90.0000); //
	SetObjectMaterial(herreriav2[0], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[1] = CreateObject(19377, -731.0618, -2411.5993, 4999.6206, 90.0000, 0.0000, 360.0000); //
	SetObjectMaterial(herreriav2[1], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[2] = CreateObject(19377, -741.6986, -2423.9475, 5011.9555, 90.0000, 0.0000, 360.0000); //
	SetObjectMaterial(herreriav2[2], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[3] = CreateObject(19377, -736.3786, -2425.8713, 5003.1176, 90.0000, 0.0000, 90.0000); //
	SetObjectMaterial(herreriav2[3], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[4] = CreateObject(19433, -728.6906, -2407.7126, 5002.4033, 0.0000, 90.0000, 90.0000); //
	herreriav2[5] = CreateObject(19377, -720.7116, -2411.0727, 5003.1176, 90.0000, 0.0000, 360.0000); //
	SetObjectMaterial(herreriav2[5], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[6] = CreateObject(19377, -731.0504, -2421.3986, 5003.1176, 90.0000, 0.0000, 360.0000); //
	SetObjectMaterial(herreriav2[6], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[7] = CreateObject(19377, -739.5825, -2416.2387, 5003.1176, 90.0000, 0.0000, 90.0000); //
	SetObjectMaterial(herreriav2[7], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[8] = CreateObject(19377, -741.5510, -2411.7810, 5003.1176, 90.0000, 0.0000, 360.0000); //
	SetObjectMaterial(herreriav2[8], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[9] = CreateObject(19377, -725.8839, -2406.6064, 5003.1176, 90.0000, 0.0000, 90.0000); //
	SetObjectMaterial(herreriav2[9], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[10] = CreateObject(19433, -736.5878, -2426.4985, 5005.3784, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[10], 0, 14415, "carter_block_2", "mp_gs_woodpanel1", 0xFFDEB887);
	herreriav2[11] = CreateObject(19433, -731.1328, -2407.7126, 5004.1538, 0.0000, 90.0000, 90.0000); //
	herreriav2[12] = CreateObject(19433, -730.9094, -2407.7126, 5003.9780, 0.0000, 90.0000, 90.0000); //
	herreriav2[13] = CreateObject(19433, -730.6505, -2407.7126, 5003.8017, 0.0000, 90.0000, 90.0000); //
	herreriav2[14] = CreateObject(19433, -729.9146, -2407.7126, 5003.2709, 0.0000, 90.0000, 90.0000); //
	herreriav2[15] = CreateObject(19433, -730.3826, -2407.7126, 5003.6254, 0.0000, 90.0000, 90.0000); //
	herreriav2[16] = CreateObject(19433, -730.1546, -2407.7126, 5003.4482, 0.0000, 90.0000, 90.0000); //
	herreriav2[17] = CreateObject(19433, -729.6671, -2407.7126, 5003.1035, 0.0000, 90.0000, 90.0000); //
	herreriav2[18] = CreateObject(19806, -724.7697, -2412.5874, 5004.1420, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[18], 0, 19426, "all_walls", "mirror01", 0x00000000);
	herreriav2[19] = CreateObject(19433, -729.1785, -2407.7126, 5002.7553, 0.0000, 90.0000, 90.0000); //
	herreriav2[20] = CreateObject(19433, -728.9384, -2407.7126, 5002.5795, 0.0000, 90.0000, 90.0000); //
	herreriav2[21] = CreateObject(19377, -741.6986, -2423.9475, 5000.5380, 90.0000, 0.0000, 360.0000); //
	SetObjectMaterial(herreriav2[21], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[22] = CreateObject(19433, -728.4426, -2407.7126, 5002.2275, 0.0000, 90.0000, 90.0000); //
	herreriav2[23] = CreateObject(19433, -728.1945, -2407.7126, 5002.0517, 0.0000, 90.0000, 90.0000); //
	herreriav2[24] = CreateObject(19433, -727.9342, -2407.7126, 5001.8759, 0.0000, 90.0000, 90.0000); //
	herreriav2[25] = CreateObject(19433, -727.6660, -2407.7126, 5001.7080, 0.0000, 90.0000, 90.0000); //
	herreriav2[26] = CreateObject(19433, -727.4381, -2407.7126, 5001.5322, 0.0000, 90.0000, 90.0000); //
	herreriav2[27] = CreateObject(19433, -727.1901, -2407.7126, 5001.3559, 0.0000, 90.0000, 90.0000); //
	herreriav2[28] = CreateObject(19433, -726.9500, -2407.7126, 5001.1879, 0.0000, 90.0000, 90.0000); //
	herreriav2[29] = CreateObject(19377, -731.3447, -2409.5383, 4999.5869, 90.0000, 0.0000, 90.0000); //
	SetObjectMaterial(herreriav2[29], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[30] = CreateObject(19385, -732.7310, -2416.2319, 5006.1923, 0.0000, 0.0000, 90.0000); //
	SetObjectMaterial(herreriav2[30], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[31] = CreateObject(19371, -731.5269, -2412.6059, 5003.5175, 0.0000, 90.0000, 271.0000); //
	SetObjectMaterial(herreriav2[31], 0, 13235, "ce_ground09", "des_ranchwall1", 0xFFDEB887);
	herreriav2[32] = CreateObject(19929, -737.2398, -2419.4621, 5004.4365, 0.0000, 0.0000, -90.0000); //
	SetObjectMaterial(herreriav2[32], 1, 14581, "ab_mafiasuitea", "ab_wood01", 0x00000000);
	herreriav2[33] = CreateObject(19929, -740.0947, -2419.4645, 5004.4365, 0.0000, 0.0000, -90.0000); //
	SetObjectMaterial(herreriav2[33], 1, 14581, "ab_mafiasuitea", "ab_wood01", 0x00000000);
	herreriav2[34] = CreateObject(19590, -740.4434, -2416.3374, 5007.2866, 90.0000, 0.0000, 90.0000); //
	herreriav2[35] = CreateObject(335, -740.5313, -2416.3671, 5006.1420, 0.0000, 0.0000, 0.0000); //
	herreriav2[36] = CreateObject(335, -740.3875, -2416.3671, 5006.1420, 0.0000, 0.0000, 0.0000); //
	herreriav2[37] = CreateObject(335, -740.2435, -2416.3671, 5006.1420, 0.0000, 0.0000, 0.0000); //
	herreriav2[38] = CreateObject(339, -739.3212, -2416.3737, 5006.3959, 0.0000, 25.0000, 0.0000); //
	herreriav2[39] = CreateObject(339, -738.9210, -2416.3583, 5006.3959, 0.0000, 25.0000, 180.0000); //
	herreriav2[40] = CreateObject(357, -741.0468, -2417.1584, 5005.7875, -20.0000, 90.0000, 344.8750); //
	herreriav2[41] = CreateObject(350, -738.3248, -2416.3564, 5006.8823, 0.0000, 0.0000, 0.0000); //
	herreriav2[42] = CreateObject(350, -738.3248, -2416.3564, 5007.0200, 0.0000, 0.0000, 0.0000); //
	herreriav2[43] = CreateObject(337, -738.1234, -2416.4724, 5004.8046, 0.0000, 7.0000, 106.9544); //
	herreriav2[44] = CreateObject(1271, -741.1038, -2416.7250, 5004.7812, 0.0000, 0.0000, 0.0000); //
	herreriav2[45] = CreateObject(1271, -741.0833, -2416.7119, 5005.4746, 0.0000, 0.0000, 0.0000); //
	herreriav2[46] = CreateObject(1271, -741.1010, -2417.4521, 5004.7812, 0.0000, 0.0000, 90.0000); //
	herreriav2[47] = CreateObject(19590, -741.2747, -2417.1372, 5005.7211, 60.0000, 90.0000, 0.0000); //
	herreriav2[48] = CreateObject(357, -739.4691, -2416.3847, 5007.5498, 0.0000, 0.0000, 6.3365); //
	herreriav2[49] = CreateObject(337, -737.7794, -2416.4724, 5004.8046, 0.0000, 7.0000, 106.9544); //
	herreriav2[50] = CreateObject(337, -737.4514, -2416.4724, 5004.8046, 0.0000, 7.0000, 106.9544); //
	herreriav2[51] = CreateObject(2040, -741.1959, -2416.5390, 5005.9179, 0.0000, 0.0000, 90.0000); //
	herreriav2[52] = CreateObject(1271, -740.3956, -2416.6909, 5004.7812, 0.0000, 0.0000, 0.0000); //
	herreriav2[53] = CreateObject(2040, -741.1928, -2416.7114, 5005.9179, 0.0000, 0.0000, 90.0000); //
	herreriav2[54] = CreateObject(2040, -740.5255, -2416.4567, 5005.2246, 0.0000, 0.0000, 90.0000); //
	herreriav2[55] = CreateObject(2040, -740.5280, -2416.6220, 5005.2246, 0.0000, 0.0000, 90.0000); //
	herreriav2[56] = CreateObject(19590, -741.2078, -2419.2165, 5005.3696, 0.0000, 90.0000, 90.0000); //
	herreriav2[57] = CreateObject(19590, -741.1937, -2419.6010, 5005.3696, 0.0000, 90.0000, 90.0000); //
	herreriav2[58] = CreateObject(326, -736.7672, -2416.3383, 5005.3725, 170.0000, 0.0000, 0.0000); //
	herreriav2[59] = CreateObject(326, -737.0189, -2416.3386, 5005.3725, 170.0000, 0.0000, 0.0000); //
	herreriav2[60] = CreateObject(335, -739.2736, -2419.8642, 5005.3344, 90.0000, 90.0000, 0.0000); //
	herreriav2[61] = CreateObject(335, -739.2675, -2419.6833, 5005.3344, 90.0000, 90.0000, 0.0000); //
	herreriav2[62] = CreateObject(335, -739.2628, -2419.4816, 5005.3344, 90.0000, 90.0000, 0.0000); //
	herreriav2[63] = CreateObject(335, -739.2595, -2419.2609, 5005.3344, 90.0000, 90.0000, 0.0000); //
	herreriav2[64] = CreateObject(335, -738.9204, -2419.2351, 5005.3344, 90.0000, 0.0000, 0.0000); //
	herreriav2[65] = CreateObject(335, -738.7791, -2419.2368, 5005.3344, 90.0000, 0.0000, 0.0000); //
	herreriav2[66] = CreateObject(3052, -739.6859, -2416.5566, 5004.5590, 0.0000, 0.0000, 0.0000); //
	herreriav2[67] = CreateObject(3052, -738.9273, -2416.5566, 5004.5590, 0.0000, 0.0000, 0.0000); //
	herreriav2[68] = CreateObject(19385, -726.0501, -2408.0205, 5002.6655, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[68], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[69] = CreateObject(1504, -738.1879, -2425.7873, 5004.4423, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[69], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0x00000000);
	herreriav2[70] = CreateObject(19433, -731.3640, -2407.7126, 5004.3295, 0.0000, 90.0000, 90.0000); //
	herreriav2[71] = CreateObject(19433, -737.4658, -2427.4489, 5007.0258, 0.0000, 90.0000, 90.0000); //
	SetObjectMaterial(herreriav2[71], 0, 14415, "carter_block_2", "mp_gs_woodpanel1", 0xFFDEB887);
	herreriav2[72] = CreateObject(19433, -738.2537, -2426.4694, 5005.3784, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[72], 0, 14415, "carter_block_2", "mp_gs_woodpanel1", 0xFFDEB887);
	herreriav2[73] = CreateObject(1421, -732.3643, -2425.3190, 5005.2485, 0.0000, 0.0000, 0.0000); //
	herreriav2[74] = CreateObject(2063, -731.4135, -2421.8840, 5005.3413, 0.0000, 0.0000, 90.0000); //
	herreriav2[75] = CreateObject(19385, -726.0507, -2414.8830, 5006.1923, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[75], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[76] = CreateObject(19447, -726.0501, -2408.5114, 5006.1547, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[76], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[77] = CreateObject(1491, -726.0659, -2414.0917, 5004.4379, 0.0000, 0.0000, 270.1701); //
	herreriav2[78] = CreateObject(19378, -736.3458, -2420.9487, 5007.9477, 0.0000, 90.0000, 0.0000); //
	SetObjectMaterial(herreriav2[78], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFDEB887);
	herreriav2[79] = CreateObject(19378, -736.3198, -2411.4377, 5007.8676, 0.0000, 90.0000, 0.0000); //
	SetObjectMaterial(herreriav2[79], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFDEB887);
	herreriav2[80] = CreateObject(19378, -725.9063, -2414.4338, 5007.8632, 0.0000, 90.0000, 0.0000); //
	herreriav2[81] = CreateObject(19378, -725.9415, -2411.4426, 5007.8540, 0.0000, 90.0000, 0.0000); //
	SetObjectMaterial(herreriav2[81], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFDEB887);
	herreriav2[82] = CreateObject(19378, -725.7468, -2411.3547, 5001.0483, 0.0000, 90.0000, 0.0000); //
	herreriav2[83] = CreateObject(19378, -736.3698, -2411.2175, 5004.3574, 0.0000, 90.0000, 0.0000); //
	herreriav2[84] = CreateObject(19378, -725.9063, -2414.4338, 5004.3579, 0.0000, 90.0000, 0.0000); //
	herreriav2[85] = CreateObject(19378, -720.7066, -2411.3032, 5004.4179, 0.0000, 90.0000, 0.0000); //
	herreriav2[86] = CreateObject(19378, -736.3657, -2430.4631, 5004.3378, 0.0000, 90.0000, 0.0000); //
	herreriav2[87] = CreateObject(19377, -741.6713, -2415.9274, 5003.1176, 90.0000, 0.0000, 360.0000); //
	SetObjectMaterial(herreriav2[87], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[88] = CreateObject(19377, -741.6911, -2429.0190, 5003.1176, 90.0000, 0.0000, 360.0000); //
	SetObjectMaterial(herreriav2[88], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[89] = CreateObject(19433, -729.4265, -2407.7126, 5002.9233, 0.0000, 90.0000, 90.0000); //
	herreriav2[90] = CreateObject(19531, -802.4022, -2429.7192, 5004.4252, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[90], 0, 18231, "cs_coast", "grasstype4", 0x00000000);
	herreriav2[91] = CreateObject(3598, -749.6806, -2403.7941, 5006.4736, 0.0000, 0.0000, 209.7545); //
	herreriav2[92] = CreateObject(3598, -756.3471, -2422.5561, 5006.4736, 0.0000, 0.0000, 89.9549); //
	herreriav2[93] = CreateObject(3598, -749.1140, -2438.5764, 5006.4736, 0.0000, 0.0000, 178.8959); //
	herreriav2[94] = CreateObject(19304, -741.6488, -2422.6469, 5007.1357, 0.0000, 0.0000, 90.2011); //
	herreriav2[95] = CreateObject(19304, -741.6488, -2422.6469, 5005.8901, 0.0000, 0.0000, 90.2011); //
	herreriav2[96] = CreateObject(695, -748.7091, -2417.4531, 4993.6982, 0.0000, 0.0000, 334.9656); //
	herreriav2[97] = CreateObject(1458, -750.8610, -2423.8598, 5004.6831, 0.0000, 0.0000, 279.8380); //
	herreriav2[98] = CreateObject(18260, -739.5521, -2408.8146, 5005.9394, 0.0000, 0.0000, 267.7218); //
	herreriav2[99] = CreateObject(18260, -750.0656, -2415.8364, 5005.5795, 0.0000, 0.0000, 256.6586); //
	herreriav2[100] = CreateObject(19371, -731.4959, -2410.9516, 5000.6416, 0.0000, 0.0000, 271.4692); //
	SetObjectMaterial(herreriav2[100], 0, 13235, "ce_ground09", "des_ranchwall1", 0xFFD2B48C);
	herreriav2[101] = CreateObject(19378, -736.3657, -2420.8359, 5004.3378, 0.0000, 90.0000, 0.0000); //
	herreriav2[102] = CreateObject(19632, -730.7218, -2413.2426, 5002.0253, 0.0000, 0.0000, 0.0000); //
	herreriav2[103] = CreateObject(19899, -725.5383, -2415.6635, 5001.0869, 0.0000, 0.0000, 89.9303); //
	SetObjectMaterial(herreriav2[103], 0, 14415, "carter_block_2", "mp_gs_woodpanel1", 0xFFFAEBD7);
	herreriav2[104] = CreateObject(19371, -722.9658, -2415.0786, 5000.1499, 0.0000, 0.0000, 181.0684); //
	SetObjectMaterial(herreriav2[104], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFDEB887);
	herreriav2[105] = CreateObject(19371, -731.5391, -2412.5446, 5001.9394, 0.0000, 90.0000, -91.0000); //
	SetObjectMaterial(herreriav2[105], 0, 13235, "ce_ground09", "des_ranchwall1", 0xFFDEB887);
	herreriav2[106] = CreateObject(19632, -730.7218, -2412.9323, 5002.0253, 0.0000, 0.0000, 0.0000); //
	herreriav2[107] = CreateObject(19371, -731.5385, -2414.6337, 5001.9726, 0.0000, 30.0000, 92.6457); //
	SetObjectMaterial(herreriav2[107], 0, 13235, "ce_ground09", "des_ranchwall1", 0xFFDEB887);
	herreriav2[108] = CreateObject(11691, -721.6339, -2410.2290, 5001.1347, 0.0000, 0.0000, 270.3207); //
	SetObjectMaterial(herreriav2[108], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0x00000000);
	SetObjectMaterial(herreriav2[108], 2, 14652, "ab_trukstpa", "mp_diner_wood", 0x00000000);
	SetObjectMaterial(herreriav2[108], 3, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFF5EE);
	herreriav2[109] = CreateObject(1728, -724.2614, -2407.1608, 5004.5043, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[109], 0, 2562, "cj_hotel_sw", "CJ-COUCHL1", 0xFFDEB887);
	herreriav2[110] = CreateObject(19632, -730.7218, -2412.6220, 5002.0253, 0.0000, 0.0000, 0.0000); //
	herreriav2[111] = CreateObject(19632, -730.7318, -2412.3017, 5002.0253, 0.0000, 0.0000, 0.0000); //
	herreriav2[112] = CreateObject(19929, -735.3809, -2418.4670, 5004.4365, 0.0000, 0.0000, 180.0000); //
	SetObjectMaterial(herreriav2[112], 1, 14581, "ab_mafiasuitea", "ab_wood01", 0x00000000);
	herreriav2[113] = CreateObject(11724, -725.6746, -2410.6281, 5004.9960, 0.0000, 0.0000, 90.1508); //
	herreriav2[114] = CreateObject(2870, -722.6278, -2414.8154, 5005.4306, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[114], 0, 3850, "carshowglass_sfsx", "ws_glass_balustrade_better", 0x00000000);
	herreriav2[115] = CreateObject(19433, -724.2194, -2407.2441, 5004.3129, 0.0000, 90.0998, 0.4000); //
	SetObjectMaterial(herreriav2[115], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFDEB887);
	herreriav2[116] = CreateObject(19378, -725.7957, -2414.4477, 5004.3203, 0.0000, 90.0000, 0.0000); //
	SetObjectMaterial(herreriav2[116], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFDEB887);
	herreriav2[117] = CreateObject(19371, -731.5595, -2414.3876, 5000.6020, 0.0000, 0.0000, 271.4692); //
	SetObjectMaterial(herreriav2[117], 0, 13235, "ce_ground09", "des_ranchwall1", 0xFFD2B48C);
	herreriav2[118] = CreateObject(19371, -721.4754, -2413.4206, 5000.1503, 0.0000, 0.0000, 268.6958); //
	SetObjectMaterial(herreriav2[118], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFDEB887);
	herreriav2[119] = CreateObject(19793, -728.2874, -2415.8269, 5001.3608, 0.0000, 0.0000, 91.9156); //
	herreriav2[120] = CreateObject(19793, -728.1306, -2415.8271, 5001.1962, 0.0000, 0.0000, 91.9156); //
	herreriav2[121] = CreateObject(19793, -728.6115, -2415.8393, 5001.5209, 0.0000, 0.0000, 91.9156); //
	herreriav2[122] = CreateObject(19793, -728.4437, -2415.8391, 5001.5151, 0.0000, 0.0000, 91.9156); //
	herreriav2[123] = CreateObject(19793, -729.2578, -2415.8593, 5001.1962, 0.0000, 0.0000, 91.9156); //
	herreriav2[124] = CreateObject(19793, -729.0977, -2415.8593, 5001.3535, 0.0000, 0.0000, 91.9156); //
	herreriav2[125] = CreateObject(19793, -728.7725, -2415.8474, 5001.5063, 0.0000, 0.0000, 91.9156); //
	herreriav2[126] = CreateObject(19793, -728.9370, -2415.8471, 5001.5117, 0.0000, 0.0000, 91.9156); //
	herreriav2[127] = CreateObject(19793, -728.2874, -2415.8269, 5001.1962, 0.0000, 0.0000, 91.9156); //
	herreriav2[128] = CreateObject(19793, -728.4437, -2415.8391, 5001.1962, 0.0000, 0.0000, 91.9156); //
	herreriav2[129] = CreateObject(19793, -728.6115, -2415.8393, 5001.1962, 0.0000, 0.0000, 91.9156); //
	herreriav2[130] = CreateObject(19793, -728.7725, -2415.8474, 5001.1962, 0.0000, 0.0000, 91.9156); //
	herreriav2[131] = CreateObject(19793, -728.9370, -2415.8471, 5001.1962, 0.0000, 0.0000, 91.9156); //
	herreriav2[132] = CreateObject(19793, -729.0977, -2415.8593, 5001.1962, 0.0000, 0.0000, 91.9156); //
	herreriav2[133] = CreateObject(19793, -728.4437, -2415.8391, 5001.3632, 0.0000, 0.0000, 91.9156); //
	herreriav2[134] = CreateObject(19793, -728.6115, -2415.8393, 5001.3662, 0.0000, 0.0000, 91.9156); //
	herreriav2[135] = CreateObject(19793, -728.7725, -2415.8474, 5001.3686, 0.0000, 0.0000, 91.9156); //
	herreriav2[136] = CreateObject(19793, -728.9370, -2415.8471, 5001.3510, 0.0000, 0.0000, 91.9156); //
	herreriav2[137] = CreateObject(11687, -726.8753, -2410.5166, 5001.0751, 0.0000, 0.0000, 0.0000); //
	SetObjectMaterial(herreriav2[137], 0, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	SetObjectMaterial(herreriav2[137], 1, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	herreriav2[138] = CreateObject(19631, -726.8330, -2410.4379, 5001.8520, 0.0000, -90.0000, 319.5162); //
	herreriav2[139] = CreateObject(19590, -730.0537, -2411.4382, 5002.0478, 0.0000, 90.0000, 308.6329); //
	SetObjectMaterial(herreriav2[139], 0, 3967, "cj_airprt", "CJ_G_CHROME", 0x00000000);
	herreriav2[140] = CreateObject(19832, -726.8604, -2410.5378, 5001.7558, -90.0000, 0.0000, 0.0000); //
	herreriav2[141] = CreateObject(19832, -726.8604, -2410.5378, 5001.7558, -90.0000, 0.0000, 180.0019); //
	herreriav2[142] = CreateObject(19433, -724.2092, -2408.8457, 5004.3129, 0.0000, 90.0998, 0.4000); //
	SetObjectMaterial(herreriav2[142], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFDEB887);
	herreriav2[143] = CreateObject(19433, -720.7280, -2407.2226, 5004.3125, 0.0000, 90.0998, 0.4000); //
	SetObjectMaterial(herreriav2[143], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFDEB887);
	herreriav2[144] = CreateObject(19603, -720.3966, -2415.8735, 5001.8281, 0.0000, 0.0000, 0.0000); //
	herreriav2[145] = CreateObject(19433, -720.7175, -2408.8242, 5004.3125, 0.0000, 90.0998, 0.4000); //
	SetObjectMaterial(herreriav2[145], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFDEB887);
	herreriav2[146] = CreateObject(19371, -731.4946, -2410.6914, 5001.9755, 0.0000, 30.0000, 271.0000); //
	SetObjectMaterial(herreriav2[146], 0, 13235, "ce_ground09", "des_ranchwall1", 0xFFD2B48C);
	herreriav2[147] = CreateObject(19806, -736.4022, -2422.2021, 5007.7758, 0.0000, 0.0000, 0.0000); //
	herreriav2[148] = CreateObject(2206, -722.6281, -2414.5991, 5004.4985, 0.0000, 0.0000, 90.0000); //
	herreriav2[149] = CreateObject(2894, -722.5181, -2413.6911, 5005.4306, 0.0000, 0.0000, 90.0000); //
	herreriav2[150] = CreateObject(2124, -721.2407, -2413.6738, 5005.3369, 0.0000, 0.0000, 0.0000); //
	herreriav2[151] = CreateObject(2273, -721.2960, -2409.0952, 5006.2812, 0.0000, 0.0000, -90.0000); //
	herreriav2[152] = CreateObject(2868, -722.6436, -2412.7507, 5005.4340, 0.0000, 0.0000, 0.0000); //
	herreriav2[153] = CreateObject(19377, -725.8817, -2416.2326, 5003.1176, 90.0000, 0.0000, 90.0000); //
	SetObjectMaterial(herreriav2[153], 0, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFDEB887);
	herreriav2[154] = CreateObject(1491, -726.0150, -2408.7653, 5000.9326, 0.0000, 0.0000, 90.8701); //
	herreriav2[155] = CreateObject(1491, -733.5119, -2416.2426, 5004.4379, 0.0000, 0.0000, 1.1701); //


	//interior sheriff's
	CreateObject(19378, -429.32666, 688.50739, 3851.97876,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, -439.80161, 688.50116, 3851.97876,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, -439.77103, 678.93237, 3851.97876,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, -450.26227, 675.72791, 3851.97876,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, -450.26334, 685.35339, 3851.97876,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, -450.25583, 694.93939, 3851.97876,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, -439.91370, 698.14307, 3851.97876,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, -422.22537, 696.90210, 3855.55664,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, -422.21741, 687.29901, 3855.55664,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, -422.25711, 677.68604, 3855.55664,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, -439.75583, 669.31036, 3851.97876,   0.00000, 90.00000, 0.00000);
	CreateObject(14409, -429.30475, 685.08038, 3852.45483,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -449.89389, 699.24115, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -454.67795, 688.64520, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -453.00574, 686.94806, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -448.18436, 691.86469, 3853.61426,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -448.18994, 685.43738, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19389, -446.64975, 693.37299, 3853.61426,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -445.20831, 698.13873, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11611, -448.10919, 696.34833, 3852.28223,   0.00000, 0.00000, 44.87999);
	CreateDynamicObject(19451, -448.18073, 698.16394, 3851.46265,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -448.18073, 698.16394, 3856.05908,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -454.67197, 698.06769, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -441.27026, 690.32538, 3850.63525,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -440.25717, 693.38580, 3853.61426,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -446.60284, 680.67944, 3853.61426,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -443.36154, 683.71680, 3853.61426,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1649, -443.40936, 690.30707, 3853.18066,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1649, -438.99774, 690.29962, 3853.14185,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1649, -438.99771, 690.29962, 3853.18066,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1649, -443.40939, 690.30713, 3853.18066,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19359, -443.44830, 693.37909, 3850.73584,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -437.07324, 693.37659, 3850.73584,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -433.87802, 693.36633, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -434.52307, 688.57697, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19405, -440.16449, 683.71283, 3853.61426,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -436.96918, 683.72266, 3853.61426,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -434.50150, 691.78943, 3853.61426,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -434.53516, 679.01801, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -437.28442, 677.99805, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -445.03360, 678.98022, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -449.86768, 670.93707, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -445.04056, 669.34247, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -454.57904, 675.72620, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19389, -434.52417, 685.37640, 3853.61426,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -430.59494, 683.72888, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -429.61691, 687.05121, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -427.97244, 691.94269, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -427.48605, 693.36603, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1649, -437.09650, 693.34381, 3853.69702,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1649, -443.31451, 693.37927, 3853.68872,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19451, -435.38434, 698.25916, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -440.29700, 702.30042, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19458, -437.11185, 699.90240, 3850.82837,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19458, -441.83630, 704.63336, 3850.81763,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19458, -437.11240, 701.58331, 3852.49146,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19439, -441.98422, 701.00354, 3850.70923,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19439, -442.14536, 701.00989, 3850.71069,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19439, -442.32413, 701.00476, 3850.56836,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19439, -442.50443, 701.01080, 3850.56836,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1649, -437.09650, 693.34381, 3853.69702,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1649, -443.31451, 693.37927, 3853.68872,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -452.99881, 680.65747, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -452.49744, 677.45996, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -450.98129, 678.98718, 3853.61426,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19389, -450.97394, 675.81683, 3853.61426,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19359, -452.50589, 674.32129, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -450.97855, 672.66913, 3853.61426,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2700, -448.54816, 687.37085, 3854.78931,   0.00000, 0.00000, 132.96005);
	CreateDynamicObject(1721, -453.12830, 688.05560, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -453.12717, 688.70319, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -453.12088, 689.33673, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -453.12149, 689.95874, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -454.45901, 689.97284, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -454.46530, 689.33588, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -454.48743, 688.67206, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -454.50690, 688.02686, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -451.81540, 689.95673, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -451.81433, 689.33539, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -451.81995, 688.71442, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -451.80731, 688.05414, 3852.06665,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2315, -448.77304, 688.31702, 3852.06616,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2852, -448.73318, 689.53448, 3852.56079,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2855, -448.67346, 688.50580, 3852.56079,   0.00000, 0.00000, -53.28000);
	CreateDynamicObject(2010, -448.67334, 687.43542, 3852.04761,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2010, -454.26260, 698.91901, 3852.04761,   0.00000, 0.00000, 37.85999);
	CreateDynamicObject(2604, -447.64694, 696.19952, 3852.81641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1536, -454.60764, 692.58704, 3851.97485,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1536, -454.64819, 695.59259, 3851.97485,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1808, -454.38019, 696.53510, 3852.06665,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1721, -452.70074, 699.01776, 3852.06665,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1721, -452.02405, 699.01654, 3852.06665,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1721, -451.36371, 699.01721, 3852.06665,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1721, -450.72345, 699.01904, 3852.06665,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1671, -446.59723, 697.57977, 3852.48877,   0.00000, 0.00000, -85.56000);
	CreateDynamicObject(1671, -446.28513, 695.63452, 3852.48877,   0.00000, 0.00000, -85.56000);
	CreateDynamicObject(2199, -445.32648, 696.98334, 3852.01855,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(14740, -451.51373, 699.08270, 3854.28125,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(14740, -454.51538, 689.78320, 3854.22266,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2165, -438.12024, 688.79657, 3852.06592,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2165, -438.07257, 686.23120, 3852.06592,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2165, -441.15457, 686.17212, 3852.06592,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2165, -441.20642, 688.75909, 3852.06592,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2165, -444.14255, 688.77100, 3852.06592,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2165, -444.12204, 686.20013, 3852.06592,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2186, -446.67392, 698.79987, 3852.06738,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2011, -434.97681, 684.05682, 3852.06616,   0.00000, 0.00000, 35.09999);
	CreateDynamicObject(1671, -436.94028, 689.52118, 3852.48560,   0.00000, 0.00000, -79.25998);
	CreateDynamicObject(1671, -437.07016, 686.77722, 3852.48560,   0.00000, 0.00000, -102.17995);
	CreateDynamicObject(1671, -439.98611, 689.48792, 3852.48560,   0.00000, 0.00000, -78.83994);
	CreateDynamicObject(1671, -440.30960, 686.84027, 3852.48560,   0.00000, 0.00000, -92.87992);
	CreateDynamicObject(1671, -443.16577, 689.43982, 3852.48560,   0.00000, 0.00000, -92.87992);
	CreateDynamicObject(1671, -443.15182, 686.91962, 3852.48560,   0.00000, 0.00000, -92.87992);
	CreateDynamicObject(1649, -440.13962, 683.65717, 3853.14185,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1649, -440.13959, 683.65723, 3853.14185,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2205, -438.70709, 680.36749, 3852.06665,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2164, -435.86295, 678.17950, 3852.04688,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2011, -441.28577, 678.48730, 3852.05933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1714, -438.03058, 678.85425, 3852.04712,   0.00000, 0.00000, -169.62000);
	CreateDynamicObject(1671, -438.85925, 681.74451, 3852.50073,   0.00000, 0.00000, 20.82000);
	CreateDynamicObject(1671, -437.42776, 681.88892, 3852.50073,   0.00000, 0.00000, -24.18000);
	CreateDynamicObject(2286, -438.57727, 678.10529, 3854.19702,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1705, -441.30063, 681.38208, 3852.06616,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1705, -441.29599, 680.23663, 3852.06616,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1742, -434.48953, 680.77271, 3852.05225,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19100, -438.85449, 680.12860, 3853.06274,   0.00000, -90.00000, -118.32000);
	CreateDynamicObject(19807, -437.25595, 680.28589, 3853.04248,   0.00000, 0.00000, -32.10000);
	CreateDynamicObject(19893, -438.04971, 680.19238, 3853.00269,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2314, -436.26733, 700.57819, 3853.40381,   0.00000, 90.00000, 250.85997);
	CreateDynamicObject(19611, -436.54819, 700.22308, 3852.45972,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2314, -436.40454, 700.09991, 3851.84595,   0.00000, -90.00000, 250.86000);
	CreateDynamicObject(19610, -436.53070, 700.24103, 3854.10010,   19.46000, 1.86000, -35.88000);
	CreateDynamicObject(2614, -438.03018, 702.15625, 3854.03735,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2010, -444.72745, 701.89337, 3852.06616,   0.00000, 0.00000, -53.10002);
	CreateDynamicObject(1663, -444.60410, 695.04095, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -443.75854, 695.05975, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -442.94534, 695.07892, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -442.16528, 695.06604, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -441.40549, 695.06848, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -444.59036, 696.30048, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -443.72888, 696.30585, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -442.90359, 696.32941, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -442.14401, 696.30164, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -441.38272, 696.30988, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -441.37280, 697.48395, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -442.15274, 697.47906, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -442.95261, 697.45422, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -443.75253, 697.45264, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -444.59250, 697.45093, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -438.95810, 695.05042, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -438.19708, 695.03992, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -437.43585, 695.03253, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -436.67554, 695.04492, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -435.95523, 695.05560, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -438.94006, 696.29932, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -438.18048, 696.27380, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -437.40024, 696.26758, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -436.63885, 696.28363, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -435.91791, 696.30206, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -438.92654, 697.47351, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -438.16122, 697.50409, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -437.38962, 697.50342, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -436.64908, 697.48932, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1663, -435.92926, 697.50262, 3852.49707,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19171, -442.74609, 702.22559, 3854.02490,   90.00000, 90.00000, -90.00000);
	CreateDynamicObject(19805, -440.70346, 702.21655, 3853.93774,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1840, -435.56293, 702.16309, 3854.65723,   0.00000, 0.00000, 49.08001);
	CreateDynamicObject(1840, -445.06372, 702.15155, 3854.65723,   0.00000, 0.00000, 146.88013);
	CreateDynamicObject(11729, -434.18103, 687.44269, 3852.06616,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11729, -434.18530, 688.10999, 3852.06616,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11729, -434.19077, 688.77478, 3852.06616,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11729, -434.19595, 689.43958, 3852.06616,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11729, -434.19278, 690.09943, 3852.06616,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11729, -433.60413, 687.48242, 3852.06616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -432.94391, 687.48962, 3852.06616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -432.28357, 687.49707, 3852.06616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -431.62302, 687.50482, 3852.06616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -430.98276, 687.50360, 3852.06616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -430.32291, 687.50323, 3852.06616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -429.66312, 687.52930, 3852.06616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -429.00195, 687.52100, 3852.06616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -428.38086, 687.53156, 3852.06616,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19359, -431.66797, 692.43463, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2509, -431.56656, 691.91083, 3853.85010,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2509, -430.90994, 693.26471, 3853.85010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2509, -429.60260, 693.27374, 3853.85010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2509, -428.28265, 693.28210, 3853.85010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2509, -428.07462, 691.88593, 3853.85010,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(356, -431.18002, 693.20831, 3854.48975,   0.00000, 0.00000, 4.38000);
	CreateDynamicObject(356, -431.18002, 693.20831, 3854.06787,   0.00000, 0.00000, 4.38000);
	CreateDynamicObject(356, -431.18002, 693.20831, 3853.65674,   0.00000, 0.00000, 4.38000);
	CreateDynamicObject(353, -431.25595, 693.19177, 3853.10620,   -6.06000, -45.83999, 7.26000);
	CreateDynamicObject(353, -430.65149, 693.22717, 3853.10742,   -7.26000, -46.50000, 7.26000);
	CreateDynamicObject(358, -429.18713, 693.27618, 3854.45996,   0.00000, 0.00000, -175.50031);
	CreateDynamicObject(358, -429.18713, 693.27618, 3854.09595,   0.00000, 0.00000, -175.50031);
	CreateDynamicObject(358, -429.18713, 693.27618, 3853.74097,   0.00000, 0.00000, -175.50031);
	CreateDynamicObject(358, -429.18713, 693.27618, 3853.30933,   0.00000, 0.00000, -175.50031);
	CreateDynamicObject(18637, -428.68576, 693.29755, 3854.46216,   90.00000, 90.00000, -90.00000);
	CreateDynamicObject(18637, -428.68576, 693.29755, 3853.33569,   90.00000, 90.00000, -90.00000);
	CreateDynamicObject(19142, -428.24823, 691.86420, 3854.44116,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(19142, -428.24823, 691.86420, 3853.87891,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(19142, -428.24823, 691.86420, 3853.30688,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(349, -431.48462, 691.63464, 3854.51196,   0.00000, 0.00000, 98.52004);
	CreateDynamicObject(349, -431.48462, 691.63464, 3854.11987,   0.00000, 0.00000, 98.52004);
	CreateDynamicObject(349, -431.48462, 691.63464, 3853.72852,   0.00000, 0.00000, 98.52004);
	CreateDynamicObject(348, -431.51984, 691.38849, 3853.28662,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(348, -431.51984, 691.38849, 3853.02734,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(348, -431.50836, 691.76843, 3853.02734,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(348, -431.50839, 691.76837, 3853.28735,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2612, -428.10065, 689.58875, 3853.74878,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2611, -431.79642, 692.06213, 3853.69629,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2604, -447.23184, 672.90277, 3852.84497,   0.00000, 0.00000, 69.30000);
	CreateDynamicObject(2611, -446.24167, 671.08527, 3853.91455,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1800, -451.01041, 671.48248, 3852.06714,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -455.70398, 674.31970, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -455.70520, 677.45972, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2602, -453.93597, 673.83923, 3852.52368,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2602, -453.65112, 674.77838, 3852.52368,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1800, -450.98105, 676.58282, 3852.06714,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2602, -453.28546, 680.20709, 3852.52368,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -450.86261, 677.98645, 3852.06714,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19377, -450.23596, 685.35986, 3855.43359,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, -439.85721, 697.63715, 3855.43359,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, -439.76147, 687.99976, 3855.43359,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, -450.18353, 675.79492, 3855.43359,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, -439.75558, 678.40485, 3855.43359,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, -429.35489, 691.78400, 3855.43359,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, -450.25580, 694.93939, 3855.43359,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(14680, -449.46985, 692.95715, 3853.81641,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14680, -449.38974, 688.63525, 3853.81641,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14680, -442.13889, 693.60712, 3853.81641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -437.25223, 693.53448, 3853.81641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -437.07562, 689.23376, 3853.81641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -441.25980, 689.18347, 3853.81641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -435.68869, 682.71136, 3853.81641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -438.17480, 694.72229, 3853.81641,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14680, -445.82132, 673.35248, 3853.81641,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14680, -428.54321, 691.23718, 3853.81641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19273, -447.61444, 680.70770, 3853.21021,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1491, -436.22760, 683.74615, 3851.86743,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19273, -434.53113, 690.75220, 3853.36450,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1491, -441.04877, 693.36273, 3851.86743,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19359, -441.89404, 682.11658, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19359, -441.89529, 678.93488, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19389, -443.60059, 677.99005, 3853.61426,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1491, -442.61572, 683.73322, 3851.86743,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19451, -441.38721, 670.95142, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -434.80145, 673.23651, 3853.61279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2180, -437.93579, 674.67664, 3852.06641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2180, -442.36160, 671.56433, 3852.06641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2180, -442.34122, 674.68860, 3852.06641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2180, -440.19211, 674.69135, 3852.06641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1721, -443.57715, 672.57886, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -443.60617, 671.53668, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -441.63318, 671.63257, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -441.58017, 672.54193, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -441.46844, 674.59662, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -441.46515, 675.73560, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -443.56158, 674.54865, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -443.48526, 675.74658, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2011, -437.65009, 677.56775, 3852.06689,   0.00000, 0.00000, 51.35999);
	CreateDynamicObject(2614, -444.89691, 674.13367, 3854.05811,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19377, -439.75531, 668.81946, 3855.43359,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(14680, -438.79553, 675.86432, 3853.81641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1491, -442.85162, 678.00232, 3851.86743,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19451, -429.61691, 687.05121, 3857.02002,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -430.59494, 683.72888, 3857.06812,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -434.50256, 685.42389, 3857.07031,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19389, -425.87524, 685.40039, 3857.07007,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, -431.10260, 682.17017, 3858.74976,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19451, -431.76398, 670.94690, 3853.61279,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1721, -439.43491, 671.36829, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -439.39618, 672.52637, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2180, -438.02121, 671.46210, 3852.06641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2180, -440.22211, 671.51141, 3852.06641,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1721, -439.33838, 674.68445, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, -439.34991, 675.52460, 3852.04834,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19805, -434.94669, 674.98462, 3853.92578,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19805, -434.94516, 672.71069, 3853.92578,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2611, -439.77332, 677.85907, 3853.80396,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2611, -448.06039, 686.33685, 3853.90527,   0.00000, 0.00000, -270.00000);
	CreateDynamicObject(1721, -447.98117, 688.00537, 3852.06665,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1721, -447.97943, 688.61365, 3852.06665,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1721, -447.97610, 689.21490, 3852.06665,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1721, -447.97836, 689.81488, 3852.06665,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19389, -423.21240, 687.05841, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -424.17737, 683.69812, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3051, -434.62228, 688.94299, 3853.36450,   0.00000, 0.00000, 46.07998);
	CreateDynamicObject(3051, -434.62686, 687.75842, 3853.36450,   0.00000, 0.00000, 46.07998);
	CreateDynamicObject(19273, -434.55139, 686.98499, 3853.36450,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19451, -424.88824, 691.92474, 3857.01978,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19389, -420.01373, 687.04297, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -422.08670, 691.94263, 3854.81665,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19451, -417.09708, 691.92822, 3857.01978,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19359, -416.83731, 687.04065, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -421.37704, 692.87439, 3857.02002,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -422.08670, 691.94263, 3859.74463,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1651, -422.05008, 688.54767, 3857.02124,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1651, -422.05676, 691.37854, 3857.02124,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2165, -422.63123, 691.78906, 3855.64429,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2607, -419.39801, 690.56921, 3856.01001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, -419.45157, 691.94019, 3855.64526,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1721, -419.43750, 689.16943, 3855.64526,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19273, -422.79330, 692.82587, 3857.00562,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1886, -417.40408, 692.51508, 3858.65942,   15.18000, 0.00000, -34.73999);
	CreateDynamicObject(1886, -434.76944, 684.02161, 3855.62085,   13.68000, -0.24000, 227.76004);
	CreateDynamicObject(1886, -444.71713, 693.87860, 3855.60132,   10.80000, -0.78000, 128.94000);
	CreateDynamicObject(1886, -434.97272, 678.48566, 3855.46313,   13.68000, -0.24000, 224.03990);
	CreateDynamicObject(1886, -454.41370, 698.95404, 3855.48999,   5.82000, -0.24000, 30.72000);
	CreateDynamicObject(1886, -454.28165, 687.41339, 3855.58008,   5.82000, -0.24000, 134.76010);
	CreateDynamicObject(1671, -423.94376, 691.01477, 3856.08936,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -420.97314, 683.67426, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19451, -419.18738, 682.17261, 3857.01978,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19359, -417.77875, 683.68274, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -425.78864, 682.09259, 3857.01978,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19359, -425.78613, 678.91827, 3857.01978,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19359, -424.07983, 680.65985, 3854.83740,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -420.87531, 680.65405, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -424.07983, 680.65985, 3860.29980,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19389, -422.13187, 679.00702, 3857.01978,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19359, -423.64133, 677.41290, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -426.81967, 677.40460, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -425.76147, 675.68280, 3857.01978,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19359, -419.18893, 675.80780, 3857.01978,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19389, -420.43512, 677.40955, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -420.83853, 673.12177, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -424.05103, 673.11932, 3857.01978,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19359, -419.18347, 672.60339, 3857.01978,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19359, -425.76254, 672.49060, 3857.01978,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2604, -424.10263, 680.08606, 3856.28809,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2199, -424.73181, 677.56769, 3855.62695,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1671, -424.64215, 678.92407, 3856.06445,   0.00000, 0.00000, -185.94002);
	CreateDynamicObject(1671, -423.07825, 679.14557, 3856.06445,   0.00000, 0.00000, -176.22003);
	CreateDynamicObject(19273, -421.91727, 680.66943, 3856.76245,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19273, -421.44391, 677.43341, 3856.76245,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19273, -422.12085, 680.02966, 3856.76245,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19377, -420.63626, 688.43146, 3858.74976,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2063, -423.56689, 677.05121, 3856.44019,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2063, -423.55942, 674.90814, 3856.44019,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2063, -423.53421, 673.47937, 3856.44019,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2063, -419.54941, 675.24512, 3856.44019,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2063, -423.56390, 675.42822, 3856.44019,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19377, -424.39423, 678.78961, 3858.74976,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, -424.39224, 669.22101, 3858.74976,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(14680, -427.71277, 687.25879, 3857.16016,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -419.86896, 687.37219, 3857.16016,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -416.78323, 691.82043, 3857.16016,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -422.01538, 692.19696, 3857.16016,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -419.57916, 684.15729, 3857.16016,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -421.39987, 680.88568, 3857.16016,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14680, -420.09000, 677.15466, 3857.16016,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(348, -437.45889, 680.03961, 3853.00269,   90.00000, 0.00000, 152.09987);
	CreateDynamicObject(349, -437.39365, 678.23773, 3852.36621,   2.28000, -58.01998, 0.00000);
	//INTERIOR DEL GARAJE
	CreateObject(10051, 1411.61267, 18.33863, -92.45334,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8378, 1370.37451, 47.67143, -89.24210,   0.00000, 0.00000, 90.00000);
	//Sheriff's
	CreateObject(12855, 1370.75928, 17.28702, 39.67019,   0.00000, 0.00000, -49.38000,1000.000);
	CreateObject(18981, 1393.91724, 27.52244, 32.66498,   0.00000, 90.00000, -48.06000,1000.000);
	CreateObject(18981, 1376.59900, 11.99082, 32.68400,   0.00000, 90.00000, -48.06000,1000.000);
	CreateObject(18981, 1358.03662, -4.67822, 32.68399,   0.00000, 90.00000, -48.05999,1000.000);
	CreateDynamicObject(19540, 1374.77820, 34.16043, 33.06171,   0.00000, 0.00000, -49.37999);
	CreateDynamicObject(18981, 1401.98083, 18.53546, 22.30727,   0.00000, 0.00000, -48.06000);
	CreateDynamicObject(18981, 1403.06348, 35.69619, 22.28902,   0.00000, 0.00000, 40.79996);
	CreateDynamicObject(18981, 1383.39148, 1.83852, 22.30727,   0.00000, 0.00000, -48.06000);
	CreateDynamicObject(18981, 1378.90051, -2.19955, 22.28900,   0.00000, 0.00000, -48.06000);
	CreateDynamicObject(966, 1361.29883, -18.22197, 33.15251,   0.00000, 0.00000, -138.36009);
	CreateDynamicObject(967, 1360.10681, -18.73666, 33.23786,   0.00000, 0.00000, -49.31999);
	CreateDynamicObject(970, 1358.38525, -21.09526, 33.76724,   0.00000, 0.00000, 39.60001);
	CreateDynamicObject(970, 1368.21765, -12.20823, 33.76724,   0.00000, 0.00000, 39.60001);
	CreateDynamicObject(19540, 1381.14490, 27.40410, 33.06170,   0.00000, 0.00000, 38.04000);
	CreateDynamicObject(19539, 1367.10229, 15.17112, 32.94143,   0.00000, 0.00000, 130.98004);
	CreateDynamicObject(19540, 1358.05835, 7.33697, 32.85316,   0.00000, 0.00000, 131.52002);
	CreateDynamicObject(19540, 1355.40222, 10.26210, 32.82032,   0.00000, 0.00000, 220.08000);
	CreateDynamicObject(19377, 1350.67041, -15.91430, 29.40566,   0.00000, 0.00000, 40.62000);
	CreateDynamicObject(19377, 1344.40369, -8.61598, 29.40566,   0.00000, 0.00000, 40.62000);
	CreateDynamicObject(19377, 1338.14844, -1.32793, 29.40566,   0.00000, 0.00000, 40.62000);
	CreateDynamicObject(19377, 1335.60864, 1.61574, 29.40566,   0.00000, 0.00000, 40.62000);
	CreateDynamicObject(19377, 1336.12366, 8.29904, 29.40566,   0.00000, 0.00000, -49.38004);
	CreateDynamicObject(19377, 1343.38843, 14.53526, 29.40566,   0.00000, 0.00000, -49.38004);
	CreateDynamicObject(19377, 1350.66174, 20.79266, 29.40566,   0.00000, 0.00000, -49.38004);
	CreateDynamicObject(19377, 1352.25854, 22.20922, 29.40566,   0.00000, 0.00000, -49.38004);
	CreateDynamicObject(19377, 1355.58850, 25.78442, 29.40566,   0.00000, 0.00000, 40.62000);
	CreateDynamicObject(19377, 1356.10449, 32.47131, 29.40566,   0.00000, 0.00000, -49.38004);
	CreateDynamicObject(19377, 1363.40918, 38.72513, 29.40566,   0.00000, 0.00000, -49.38004);
	CreateDynamicObject(19377, 1370.71619, 44.97419, 29.40566,   0.00000, 0.00000, -49.38004);
	CreateDynamicObject(19377, 1377.99243, 51.21609, 29.40566,   0.00000, 0.00000, -49.38004);
	CreateDynamicObject(19377, 1381.44604, 54.18381, 29.40566,   0.00000, 0.00000, -49.38004);
	CreateDynamicObject(19377, 1388.14307, 53.69671, 29.40566,   0.00000, 0.00000, 40.62000);
	CreateDynamicObject(19377, 1394.35681, 46.42744, 29.40566,   0.00000, 0.00000, 40.62000);
	CreateDynamicObject(10183, 1392.85229, 15.92140, 33.18400,   0.00000, 0.00000, -92.52000);
	CreateDynamicObject(10183, 1381.57227, 5.85014, 33.18578,   0.00000, 0.00000, -92.51995);
	CreateDynamicObject(5043, 1349.12207, 4.98618, 36.13302,   0.00000, 0.00000, -49.37999);
	CreateDynamicObject(5043, 1352.52759, 7.90480, 36.13300,   0.00000, 0.00000, -49.38000);
	CreateDynamicObject(5043, 1352.52759, 7.90480, 33.13310,   0.00000, 0.00000, -49.38000);
	CreateDynamicObject(5043, 1349.12207, 4.98620, 33.13310,   0.00000, 0.00000, -49.38000);
	CreateDynamicObject(1569, 1376.57532, 17.48954, 34.76341,   0.00000, 0.00000, 40.61999);
	CreateDynamicObject(1226, 1357.33313, -23.10897, 37.10137,   0.00000, 0.00000, -227.04004);
	CreateDynamicObject(1226, 1370.84180, -10.99409, 37.10137,   0.00000, 0.00000, -227.04004);
	CreateDynamicObject(1226, 1411.80664, 25.81037, 37.10137,   0.00000, 0.00000, -227.04004);
	CreateDynamicObject(1226, 1390.05408, 6.33957, 37.10137,   0.00000, 0.00000, -227.04004);
	CreateDynamicObject(1223, 1379.87268, 18.49830, 31.51307,   0.00000, 0.00000, -47.28000);
	CreateDynamicObject(1223, 1376.30994, 15.26624, 31.51307,   0.00000, 0.00000, -47.28000);
	CreateDynamicObject(1226, 1325.13489, -65.54910, 38.47063,   0.00000, 0.00000, -48.48001);
	CreateDynamicObject(1226, 1336.94604, -54.83883, 37.99362,   0.00000, 0.00000, -48.48001);
	CreateDynamicObject(1226, 1349.79163, -43.67022, 37.59410,   0.00000, 0.00000, -48.48001);
	CreateDynamicObject(1226, 1431.59424, 28.99617, 34.51596,   0.00000, 0.00000, -48.48001);
	CreateDynamicObject(1226, 1448.83838, 43.50085, 34.09577,   0.00000, 0.00000, -48.48001);
	CreateDynamicObject(1226, 1467.85449, 58.87271, 33.58756,   0.00000, 0.00000, -48.48001);
	CreateDynamicObject(1226, 1485.14172, 72.26472, 33.14074,   0.00000, 0.00000, -48.48001);
	CreateDynamicObject(1569, 1375.68335, 25.94226, 42.96313,   0.00000, 0.00000, 40.62001);
	//bancos
	CreateDynamicObject(1215, 1782.54041, -1808.70654, 12.99153,   0.00000, 0.00000, 0.00000);//unity
	CreateDynamicObject(1215, 1778.45605, -1808.78601, 12.99153,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1777.16626, -1808.78345, 12.99153,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1773.10571, -1808.77344, 12.99153,   0.00000, 0.00000, 0.00000);

	//DIC - 27 objetos - By Jerry
	CreateObject(10051, 636.24695, -593.18921, -54.55059,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19355, 643.93750, -611.98480, 15.05871,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19355, 643.94196, -610.17450, 15.05871,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 642.25574, -607.41211, 15.87294,   0.00000, 0.00000, -33.65997);
	CreateDynamicObject(970, 639.27551, -605.42712, 15.87294,   0.00000, 0.00000, -33.65997);
	CreateDynamicObject(966, 637.24255, -603.92303, 15.31399,   0.00000, 0.00000, -57.06002);
	CreateDynamicObject(970, 632.82184, -595.68713, 15.87294,   0.00000, 0.00000, -78.41997);
	CreateDynamicObject(970, 631.98492, -590.81805, 15.87294,   0.00000, 0.00000, -82.67995);
	CreateDynamicObject(9131, 631.37524, -583.76324, 16.38192,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9131, 630.61829, -583.76318, 16.38190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9131, 629.86890, -583.76318, 16.38190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9131, 629.10663, -583.76318, 16.38190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9131, 628.36877, -583.76318, 16.38190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9131, 627.61963, -583.76318, 16.38190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9131, 628.36877, -583.01038, 16.38190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9131, 627.61963, -583.01038, 16.38190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 631.71265, -585.94818, 15.87290,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19121, 632.29169, -593.25928, 15.83083,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 631.65088, -588.41589, 15.83083,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1223, 627.92664, -574.05255, 14.16710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1223, 627.92657, -569.41040, 14.16710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13028, 617.96649, -601.50909, 17.94932,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13028, 617.96649, -597.02148, 17.94930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2885, 595.52039, -562.50897, -49.07603,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2885, 595.51172, -566.54590, -49.07603,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(13028, 595.64978, -570.22534, -52.84945,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13028, 595.64978, -565.73981, -52.84940,   0.00000, 0.00000, 0.00000);

	//Bug Puerta de Ganton - By Desconocido - 1 Objeto
	CreateDynamicObject(1498, 2401.76562500, -1714.42370600, 13.14058300, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);

	
	// Banco Int | By Max | 41 Objetos
	CreateDynamicObject(19450, -1537.65881, 329.22021, 54.27770, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -1542.52063, 319.61029, 54.27770, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -1531.46594, 329.24762, 54.27770, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -1532.86572, 330.07721, 54.27770, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -1528.27808, 324.38660, 54.27770, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -1542.40112, 324.47269, 54.27770, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -1536.29663, 310.22574, 54.27770, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -1533.06201, 319.65121, 54.27770, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -1533.06201, 310.08640, 54.27770, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -1541.02576, 314.97348, 54.27770, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1536, -1536.36438, 330.01147, 52.51820, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1536, -1533.34924, 330.05267, 52.51820, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1536, -1531.48962, 326.23535, 52.51820, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1703, -1533.66980, 322.07257, 52.57190, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1703, -1535.76660, 322.07260, 52.57190, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1703, -1533.66980, 318.92349, 52.57190, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1703, -1535.76660, 318.92349, 52.57190, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19450, -1533.34058, 309.28860, 54.27770, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1536, -1536.23059, 311.62656, 52.51820, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1536, -1535.43433, 309.31665, 52.51820, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, -1541.87512, 323.01889, 52.54990, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1806, -1541.87512, 320.79800, 52.54990, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1806, -1541.87512, 318.43799, 52.54990, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2008, -1540.63892, 323.80502, 52.55010, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2008, -1540.65002, 321.42059, 52.55010, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2008, -1540.66809, 319.14874, 52.55010, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19450, -1540.02429, 322.26819, 56.27690, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -1540.03186, 322.27670, 51.76950, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, -1539.04285, 322.19891, 53.03800, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2773, -1539.04285, 319.76730, 53.03800, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -1544.77551, 317.55533, 54.27770, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1536, -1542.45520, 320.03131, 52.51820, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(957, -1541.19080, 318.43799, 55.96720, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(957, -1541.19080, 320.79800, 55.96720, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(957, -1541.19080, 323.01889, 55.96720, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2195, -1533.59680, 322.89450, 53.14320, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2195, -1533.59680, 316.10858, 53.14320, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2108, -1535.60291, 319.49460, 52.51200, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2108, -1533.68872, 319.49460, 52.51200, 0.00000, 0.00000, 0.00000);
	new bank;
	bank = CreateDynamicObject(18981, -1536.10461, 321.48090, 52.03627, 0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(bank, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	bank = CreateDynamicObject(18981, -1536.10461, 321.48090, 56.42290, 0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(bank, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);

	// Hospital Int LA | By Max | 158 objetos
	new hosp;
	hosp = CreateDynamicObject(18981, -2055.64697, -191.79089, 38.18090,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(hosp, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	hosp = CreateDynamicObject(18981, -2055.65308, -216.80568, 38.18089,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(hosp, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	hosp = CreateDynamicObject(18981, -2055.65308, -216.80568, 33.94736,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(hosp, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	hosp = CreateDynamicObject(18981, -2055.64697, -191.79094, 33.94736,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(hosp, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	//-
	CreateDynamicObject(19450, -2057.25562, -189.01750, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2047.75464, -189.01750, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2066.78247, -189.01750, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2047.72083, -197.80702, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2049.06152, -192.92885, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -2043.25293, -202.52240, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -2043.25293, -212.05380, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -2047.76953, -209.17900, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2047.77869, -216.80090, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2058.37524, -220.16505, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2042.43066, -220.16510, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19388, -2052.50562, -215.26360, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, -2052.50562, -212.06310, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19431, -2052.50562, -209.73410, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, -2052.50562, -207.36301, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -2052.50562, -200.96567, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, -2052.03198, -220.16510, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2050.42358, -224.90660, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -2055.30371, -225.38638, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2060.09375, -224.96094, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -2047.70874, -212.95984, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2066.70605, -195.34921, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2068.12866, -193.74969, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -2066.72461, -203.47223, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2066.68066, -210.97029, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2061.94678, -219.82201, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -2061.94678, -203.26079, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, -2061.94678, -209.46111, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, -2061.94922, -196.85484, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -2068.12866, -203.35350, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, -2068.12866, -212.92380, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, -2045.15491, -207.30099, 34.40560, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, -2045.15491, -204.98730, 34.40560, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, -2045.15491, -202.63721, 34.40560, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, -2048.64502, -202.63721, 34.40560, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, -2048.64502, -205.01515, 34.40560, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, -2048.64502, -207.32069, 34.40560, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, -2051.94873, -204.98730, 34.40560, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, -2051.94873, -202.59647, 34.40560, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, -2044.52490, -208.95912, 34.41410, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, -2044.52490, -206.63451, 34.41410, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, -2044.52490, -204.38470, 34.41410, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, -2048.10352, -204.38071, 34.41410, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, -2048.10352, -206.73579, 34.41410, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, -2048.10352, -208.91582, 34.41410, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, -2051.42505, -206.49490, 34.41410, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, -2051.42505, -204.36809, 34.41410, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2206, -2047.11389, -200.47430, 34.42620, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2206, -2050.15576, -198.46889, 34.42620, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1714, -2047.94653, -198.16978, 34.45122, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11738, -2050.09668, -198.21970, 35.38040, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11738, -2050.07715, -198.48801, 35.38040, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11738, -2050.07227, -198.74249, 35.38040, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11736, -2050.55566, -198.14079, 35.36210, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11736, -2050.56641, -198.50124, 35.36210, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11736, -2050.57300, -198.79852, 35.36210, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2690, -2051.07910, -198.22130, 35.71930, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2690, -2051.09326, -198.60936, 35.71930, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2690, -2051.39600, -198.37161, 35.71930, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2737, -2044.85596, -197.94064, 36.27982, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14842, -2044.92004, -210.16261, 36.47880, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1368, -2048.49243, -209.69617, 35.09974, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1368, -2051.04712, -209.68222, 35.09974, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1368, -2051.09741, -213.62480, 35.09970, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1368, -2048.52368, -213.62480, 35.09970, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2411, -2048.22339, -200.43037, 35.44220, 270.00000, 90.00000, 0.00000);
	CreateDynamicObject(1491, -2052.49463, -212.80434, 34.38100, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1491, -2052.48047, -215.98424, 34.38100, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11729, -2051.10303, -216.29326, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -2050.41675, -216.31294, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -2049.71240, -216.32678, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -2048.96631, -216.32607, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -2048.21973, -216.32538, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -2047.51855, -216.32288, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -2046.81714, -216.32031, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -2046.13647, -216.31129, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -2045.41541, -216.31987, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -2044.73486, -216.32402, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11729, -2044.03418, -216.32829, 34.40156, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1368, -2045.89978, -213.62482, 35.09974, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1491, -2052.52466, -208.09216, 34.38100, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1491, -2052.83154, -220.17143, 34.38100, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2003, -2059.65381, -223.02640, 36.09550, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19362, -2058.49341, -221.91798, 35.54800, 0.00000, 90.00000, 90.00000);
	CreateDynamicObject(2003, -2059.65381, -222.01801, 36.09550, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2003, -2059.65381, -220.94980, 36.09550, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19944, -2058.19336, -220.83820, 35.61670, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19944, -2058.12109, -221.94569, 35.61670, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19944, -2058.08740, -223.01759, 35.61670, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1997, -2055.19385, -224.18877, 34.44610, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2146, -2054.57495, -220.69119, 34.93220, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19944, -2054.65332, -220.64870, 35.39670, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2994, -2052.23779, -224.81476, 34.96150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1491, -2061.93506, -210.20609, 34.38100, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1491, -2061.95825, -197.60623, 34.38100, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1240, -2061.86108, -209.37589, 37.29240, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1314, -2052.57178, -215.19930, 37.32730, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19388, -2048.85205, -220.16510, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2045.63904, -225.32625, 36.10150, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, -2043.14954, -221.66316, 36.10150, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1491, -2049.63696, -220.16455, 34.38100, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11714, -2043.23047, -218.48981, 35.70730, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19176, -2068.08569, -192.24257, 35.90060, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1241, -2061.88403, -196.79111, 37.26116, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1254, -2052.09741, -220.08475, 37.19442, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1239, -2052.59985, -207.27516, 37.22980, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1314, -2052.58179, -212.03786, 37.32730, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2604, -2052.07739, -194.23901, 35.25465, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2604, -2052.06348, -189.43942, 35.25465, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1671, -2049.86938, -190.06732, 34.88460, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1671, -2049.94800, -192.95781, 34.88460, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1671, -2049.84375, -194.75687, 34.88460, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2202, -2049.65894, -197.23244, 34.41020, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(932, -2062.06909, -194.60570, 34.43020, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(932, -2062.78979, -194.60414, 34.43020, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(932, -2063.84326, -194.59573, 34.43020, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2146, -2065.52417, -194.76796, 34.89560, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2146, -2063.68823, -189.64169, 34.89560, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2164, -2067.33203, -195.51440, 34.41610, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1997, -2063.07764, -202.93466, 34.42690, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2165, -2065.82324, -199.38211, 34.44620, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1663, -2067.66650, -199.92354, 34.95282, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1663, -2063.81738, -200.80528, 34.95280, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1663, -2063.88550, -199.01176, 34.95280, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2164, -2066.63647, -203.36124, 34.41610, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3864, -2071.83154, -207.34727, 37.66228, 180.00000, 90.00000, 0.00000);
	CreateDynamicObject(1997, -2065.97144, -207.32994, 34.42690, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3390, -2062.61377, -206.99448, 34.47982, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3391, -2065.19580, -204.16928, 34.47980, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3392, -2067.69824, -205.17572, 34.47980, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2131, -2066.58105, -210.41791, 34.40430, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2131, -2064.59790, -210.41789, 34.40430, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2994, -2067.56738, -208.67329, 34.94450, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -2057.87524, -198.27139, 35.12140, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -2057.87524, -201.42979, 35.12140, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -2057.87524, -204.73390, 35.12140, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -2057.87524, -208.13651, 35.12140, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -2057.87524, -211.19850, 35.12140, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -2057.87524, -214.81560, 35.12140, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, -2056.61304, -212.33051, 34.31920, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1703, -2056.61304, -215.88370, 34.31920, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1703, -2056.61304, -209.03050, 34.31920, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1703, -2056.61304, -205.69479, 34.31920, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1703, -2056.61304, -202.47169, 34.31920, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1703, -2056.61304, -199.34877, 34.31919, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1703, -2058.91943, -197.29430, 34.31920, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1703, -2058.91943, -200.39850, 34.31920, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1703, -2058.91943, -203.59900, 34.31920, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1703, -2058.91943, -206.96159, 34.31920, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1703, -2058.91943, -210.29300, 34.31920, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1703, -2058.91943, -213.97426, 34.31920, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1775, -2059.17041, -219.59901, 35.54470, 0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19825, -2049.19727, -193.48503, 36.92460, 0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19450, -2061.93018, -215.16446, 36.10150, 0.00000, 0.00000, 0.00000);

	// LSPD Exterior | by Edinson Walker | 71 Objetos
	CreateDynamicObject(1498, 1206.27795, -1641.85242, 12.43094,   0.00000, 0.00000, -90.00001);
	CreateDynamicObject(3055, 1206.32227, -1635.85901, 14.42550,   0.00000, 0.00000, 270.00000);
	CreateObject(8040, 1178.46973, -1622.12659, 13.34671,   0.00000, 0.00000, 269.99994);
	CreateObject(19538, 1225.06628, -1640.69434, 12.53659,   0.00000, 0.00000, 0.00000);
	CreateObject(19538, 1221.12219, -1644.74548, 12.51207,   0.00000, 0.00000, 90.00000);
	CreateObject(7009, 1246.52527, -1610.79236, 26.49000,   0.00000, 0.00000, 90.00000);
	CreateObject(7184, 1219.11609, -1686.38123, 14.64240,   0.00000, 0.00000, 180.00000);
	CreateObject(19538, 1225.31677, -1671.28528, 12.52766,   0.00000, 0.00000, 0.00000);
	CreateObject(7010, 1277.93616, -1593.88867, 14.12739,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, 1266.18616, -1602.47522, 9.67300,   0.00000, 0.00000, -30.00000);
	CreateDynamicObject(3578, 1212.39172, -1688.64270, 11.81174,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1533, 1252.20068, -1651.66516, 40.41380,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3578, 1286.88818, -1587.20142, 11.75556,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3578, 1286.87549, -1597.49707, 11.75556,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3578, 1287.38708, -1597.48914, 11.75556,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3578, 1287.39331, -1587.41382, 11.74744,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3578, 1182.35315, -1661.85339, 11.80484,   0.00000, 0.00000, 0.24000);
	CreateDynamicObject(3578, 1172.05859, -1661.83569, 11.80484,   0.00000, 0.00000, -0.30000);
	CreateDynamicObject(3660, 1161.18433, -1671.75342, 15.16877,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3660, 1163.16492, -1671.77930, 15.16877,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3660, 1161.17896, -1691.38037, 15.16877,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3660, 1169.72791, -1700.89197, 15.16880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3660, 1163.17029, -1691.40771, 15.16877,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(617, 1160.76660, -1700.87781, 12.60954,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(617, 1161.79883, -1664.25562, 12.60954,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 1187.28796, -1661.85571, 15.08646,   0.00000, 0.00000, -60.42001);
	CreateDynamicObject(1232, 1169.14063, -1661.80432, 15.08646,   0.00000, 0.00000, -117.72002);
	CreateDynamicObject(983, 1222.55872, -1582.29102, 13.15681,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1216.16736, -1582.30200, 13.15681,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1209.82336, -1582.30347, 13.15681,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1205.01038, -1582.30396, 13.15681,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1200.23755, -1582.30859, 13.15681,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(4021, 1172.16333, -1684.68774, 18.65858,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1533, 1277.18481, -1651.34827, 12.54270,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1533, 1250.31360, -1601.26086, 16.70670,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1364, 1278.17322, -1654.65613, 13.20397,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(7092, 1268.89868, -1692.21191, 31.76853,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(700, 1285.19287, -1694.57458, 13.53001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(700, 1285.56006, -1669.63660, 13.53001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(700, 1285.59460, -1677.92480, 13.53001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(700, 1285.63416, -1686.45752, 13.53001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3520, 1285.92419, -1600.07166, 12.61069,   0.00000, 0.00000, 179.70006);
	CreateDynamicObject(3520, 1286.00708, -1603.79285, 12.61069,   0.00000, 0.00000, 179.70006);
	CreateDynamicObject(3520, 1285.92944, -1607.53223, 12.61069,   0.00000, 0.00000, 180.90002);
	CreateDynamicObject(3520, 1285.86609, -1611.93164, 12.61069,   0.00000, 0.00000, 180.90002);
	CreateDynamicObject(3520, 1285.86499, -1616.05151, 12.61069,   0.00000, 0.00000, 180.90002);
	CreateDynamicObject(3520, 1285.88550, -1620.05200, 12.61069,   0.00000, 0.00000, 181.80002);
	CreateDynamicObject(3520, 1285.94336, -1624.33252, 12.61069,   0.00000, 0.00000, 181.80002);
	CreateDynamicObject(620, 1278.74414, -1616.59814, 1.35172,   0.00000, 0.00000, -93.11999);
	CreateDynamicObject(652, 1281.81958, -1621.08704, 7.22948,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1284.21631, -1600.59863, 1.35172,   0.00000, 0.00000, -93.11999);
	CreateDynamicObject(712, 1277.11023, -1606.52612, 18.76699,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(712, 1283.76514, -1609.92383, 19.51739,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(647, 1283.24890, -1615.66223, 13.77200,   0.00000, 0.00000, 27.48000);
	CreateDynamicObject(647, 1281.45593, -1620.17542, 13.77200,   0.00000, 0.00000, -18.06000);
	CreateDynamicObject(647, 1283.20544, -1602.04480, 13.77200,   0.00000, 0.00000, 83.45998);
	CreateDynamicObject(712, 1262.50330, -1586.48486, 23.69982,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1261.89478, -1594.97107, 1.35172,   0.00000, 0.00000, -49.07999);
	CreateDynamicObject(647, 1266.33948, -1586.15820, 16.82264,   17.22000, 6.66000, 96.41999);
	CreateDynamicObject(1231, 1264.57739, -1608.45789, 17.91649,   0.00000, 0.00000, -58.85999);
	//-
	CreateDynamicObject(3055, 2334.94092, 2443.80249, 6.87549,   0.00000, 0.00000, 59.21999);
	CreateDynamicObject(3055, 2294.24707, 2498.66553, 4.39810,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1498, 2294.43848, 2492.88940, 2.46963,   0.00000, 0.00000, 90.00000);
	//-int
	CreateDynamicObject(1535, 295.19067, 189.37677, 1006.17322,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1535, 298.15189, 189.40451, 1006.17322,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1535, 274.14661, 189.32817, 1006.17322,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1535, 277.13193, 189.36572, 1006.17322,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19377, 235.82520, 193.79520, 1007.16913,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1535, 229.99292, 169.83296, 1002.02551,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1535, 232.94814, 169.85588, 1002.02551,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1535, 228.22322, 159.80409, 1002.02289,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1535, 228.20541, 162.81633, 1002.02289,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19377, 228.24721, 145.96919, 1002.02618,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14782, 218.95338, 147.48479, 1002.94812,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14782, 223.10741, 149.22139, 1002.94812,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1431, 219.57713, 151.70505, 1002.00372,   0.00000, 0.00000, 0.00000);

	// Exterior Faro LA | By Edinson Walker | 11 Objetos
	CreateDynamicObject(1569, 153.45000, -1946.93994, 4.33000, 4.00000, 0.00000, 0.00000);
	CreateDynamicObject(1243, 188.90680, -1951.98840, -2.54000, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1243, 214.20268, -1953.18396, -2.54000, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1243, 236.72771, -1954.81482, -2.54000, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1243, 257.90262, -1956.55359, -2.54000, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1243, 280.64215, -1958.29749, -2.54000, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(4245, 272.48438, -2012.19531, -15.47656, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1243, 321.30383, -1961.31836, -2.54000, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1243, 344.17053, -1961.64429, -2.54000, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1243, 359.09616, -1961.35449, -2.54000, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1243, 299.94800, -1959.06873, -2.54000, 0.00000, 0.00000, 0.00000);

	// Trabajo Carpintero | By Edinson Walker | 40 Objetos
	CreateDynamicObject(19377, 2154.88550, -2168.93921, 12.47400, 0.00000, 90.00000, -45.00000);
	CreateDynamicObject(1360, 2145.66968, -2202.06348, 13.30077, 0.00000, 0.00000, 44.27999);
	CreateDynamicObject(1463, 2142.30347, -2206.33496, 12.76865, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1463, 2142.26904, -2206.45874, 12.78035, 0.00000, 0.00000, 1.02000);
	CreateDynamicObject(1463, 2141.43677, -2205.85156, 12.87394, 0.00000, 0.00000, -37.80000);
	CreateDynamicObject(1463, 2143.40112, -2205.66846, 12.87394, 0.00000, 0.00000, 47.88000);
	CreateDynamicObject(1463, 2144.07080, -2204.88867, 12.87394, 0.00000, 0.00000, 44.82000);
	CreateDynamicObject(1463, 2144.19019, -2204.50659, 12.88563, 0.00000, 0.00000, 67.56001);
	CreateDynamicObject(1463, 2140.68311, -2205.11353, 12.86224, 0.00000, 0.00000, -22.07999);
	CreateDynamicObject(1463, 2139.74780, -2204.26001, 12.86224, 0.00000, 0.00000, -36.18000);
	CreateDynamicObject(1232, 2142.11401, -2207.50708, 15.08308, 0.00000, 0.00000, -8.82000);
	CreateDynamicObject(1684, 2147.74048, -2161.64087, 14.00278, 0.00000, 0.00000, -135.83997);
	CreateDynamicObject(942, 2165.05371, -2182.29102, 14.85452, 0.00000, 0.00000, 44.15999);
	CreateDynamicObject(1569, 2109.92407, -2155.83179, 12.56777, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1560, 2109.97168, -2125.65674, 12.56780, 0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1568, 2110.32959, -2124.69556, 12.48906, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19377, 2154.88550, -2168.93921, 16.29481, 0.00000, 90.00000, -45.00000);
	CreateDynamicObject(4100, 2152.99097, -2163.49683, 15.15097, 0.00000, 0.00000, 5.22000);
	CreateDynamicObject(4100, 2152.99097, -2163.49683, 12.27675, 0.00000, 0.00000, 5.22000);
	CreateDynamicObject(3574, 2171.06152, -2173.90527, 12.52813, 0.00000, 0.00000, 44.33997);
	CreateDynamicObject(941, 2138.55542, -2188.58984, 13.01160, 0.00000, 0.00000, 45.00000);
	CreateDynamicObject(941, 2132.42310, -2182.28101, 13.01160, 0.00000, 0.00000, 45.00000);
	CreateDynamicObject(941, 2149.96655, -2178.01514, 13.01160, 0.00000, 0.00000, 45.00000);
	CreateDynamicObject(941, 2143.83301, -2171.79077, 13.01160, 0.00000, 0.00000, 45.00000);
	CreateDynamicObject(941, 2140.98608, -2179.90723, 13.01160, 0.00000, 0.00000, 45.00000);
	CreateDynamicObject(3624, 2143.78052, -2182.28003, 16.84410, 0.00000, 0.00000, -45.00000);
	CreateDynamicObject(1364, 2127.18018, -2177.96875, 13.31369, 0.00000, 0.00000, -134.81996);
	CreateDynamicObject(1364, 2139.78076, -2165.53931, 13.31369, 0.00000, 0.00000, -134.81996);
	CreateDynamicObject(1232, 2125.00391, -2180.91479, 13.47589, 0.00000, 0.00000, 2.58000);
	CreateDynamicObject(1232, 2142.45264, -2163.51245, 13.47589, 0.00000, 0.00000, 2.58000);
	CreateDynamicObject(2032, 2154.43970, -2164.99463, 12.48368, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1417, 2149.61523, -2169.91162, 12.83715, 0.00000, 0.00000, 131.34003);
	CreateDynamicObject(1416, 2151.23804, -2166.59497, 13.11654, 0.00000, 0.00000, 49.61996);
	CreateDynamicObject(2096, 2150.42554, -2168.37549, 12.57427, 0.00000, 0.00000, 78.18001);
	CreateDynamicObject(2096, 2153.01709, -2165.43701, 12.57427, 0.00000, 0.00000, 24.00001);
	CreateDynamicObject(2109, 2153.32544, -2170.61987, 12.78135, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2084, 2157.27417, -2167.52539, 12.47938, 0.00000, 0.00000, -38.34000);
	CreateDynamicObject(1416, 2159.84888, -2182.49219, 12.68232,   0.00000, 0.00000, 136.98003);
	CreateDynamicObject(1416, 2159.57642, -2182.78711, 12.47257,   0.00000, 0.00000, 136.98003);
	CreateDynamicObject(1416, 2159.34863, -2183.04248, 12.23284,   0.00000, 0.00000, 136.98003);

	// Interiores de negocios | by Edinson Walker
	CreateDynamicObject(2708, 183.31508, -88.59669, 1000.94312,   0.00000, 0.00000, 89.64000);
	CreateDynamicObject(2708, 183.31287, -88.98791, 1000.94312,   0.00000, 0.00000, 89.64000);

	// Interiores de garages | By Edinson Walker
	new garg;
	 //- Portones
	CreateObject(3354, -2460.04688, -626.38354, 13.01109,   0.00000, 0.00000, 90.00000);
	CreateObject(3354, -2412.56616, -642.18176, 12.99715,   0.00000, 0.00000, 90.00000);
	CreateObject(3354, -2397.39404, -598.26202, 13.01110,   0.00000, 0.00000, 133.32021);
	//- Pequeño
	garg = CreateObject(18981, -2461.87158, -633.33533, 11.23182,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	garg = CreateObject(18981, -2461.91162, -633.33679, 16.82644,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	garg = CreateDynamicObject(18981, -2458.95630, -637.70593, 11.71500,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	garg = CreateDynamicObject(18981, -2455.97437, -630.51752, 11.71500,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	garg = CreateDynamicObject(18981, -2466.09595, -630.39453, 11.71500,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	garg = CreateDynamicObject(18981, -2458.91211, -625.88312, 11.71500,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);

	//- Mediano
	garg = CreateObject(18981, -2413.29858, -636.12415, 11.23182,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	garg = CreateObject(18981, -2413.29858, -636.12415, 17.22640,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	garg = CreateDynamicObject(18981, -2406.50415, -634.00873, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	garg = CreateDynamicObject(18981, -2415.04199, -642.64331, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	garg = CreateDynamicObject(18981, -2423.60986, -639.16626, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	garg = CreateDynamicObject(18981, -2415.74731, -629.33917, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	//- Grande
	garg = CreateObject(18981, -2402.85938, -592.28430, 11.33661,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	garg = CreateObject(18981, -2402.85938, -592.28430, 18.15434,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	garg = CreateDynamicObject(18981, -2402.52710, -581.26819, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	garg = CreateDynamicObject(18981, -2396.96826, -598.51227, 11.23180,   0.00000, 0.00000, 133.32021);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	garg = CreateDynamicObject(18981, -2412.33765, -592.73846, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	garg = CreateDynamicObject(18981, -2408.76904, -603.04407, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
	garg = CreateDynamicObject(18981, -2391.55151, -589.30396, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 18082, "cj_barb", "ws_stationfloor", 0);
        //viplounge
	CreateObject(19450, 1289.95752, -623.91711, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19450, 1280.78296, -623.91711, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19377, 1280.44629, -630.60980, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1301.32410, -630.60980, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1280.44629, -640.16882, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1290.85437, -630.60980, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1301.35400, -640.16681, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1280.44629, -649.74890, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1301.35400, -649.74890, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1279.02612, -627.92041, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1289.52075, -627.92041, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1299.89880, -627.92041, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(18783, 1294.89465, -660.66913, 1085.83472,   0.00000, 0.00000, 0.00000);
	CreateObject(19129, 1294.95508, -660.72931, 1088.29004,   0.00000, 0.00000, 0.00000);
	CreateObject(19378, 1279.02612, -637.49182, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1289.52075, -637.49182, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1299.89880, -637.49182, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1279.02612, -647.10889, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1289.52075, -647.10889, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1299.89880, -647.10889, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1279.02612, -656.72717, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1289.52075, -656.72717, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1299.89880, -656.72717, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1279.02612, -666.29572, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1289.52075, -666.29572, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1299.89880, -666.29572, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19129, 1294.95508, -650.83978, 1078.28015,   270.00000, 90.00000, 90.00000);
	CreateObject(19129, 1285.01282, -660.72931, 1078.28015,   180.00000, 90.00000, 180.00000);
	CreateObject(18771, 1284.85718, -668.64008, 1038.44995,   0.00000, 0.00000, 270.00000);
	CreateObject(18771, 1286.98792, -650.69470, 1038.45300,   0.00000, 0.00000, 180.00000);
	CreateObject(19378, 1310.29639, -627.92041, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1310.29639, -637.49182, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1310.29639, -647.10889, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1310.29639, -656.72717, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1310.29639, -666.29572, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1310.29639, -675.82660, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1299.89880, -675.82660, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1289.52075, -675.82660, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1279.02612, -675.82660, 1087.22034,   0.00000, 90.00000, 0.00000);
	CreateObject(18783, 1294.89465, -680.59601, 1085.83472,   0.00000, 0.00000, 0.00000);
	CreateObject(19129, 1285.01282, -680.70349, 1078.28015,   180.00000, 90.00000, 180.00000);
	CreateObject(18783, 1314.72986, -660.66913, 1085.83472,   0.00000, 0.00000, 0.00000);
	CreateObject(19129, 1314.95544, -650.83978, 1078.28015,   270.00000, 90.00000, 90.00000);
	CreateObject(18783, 1314.72986, -680.59601, 1085.83472,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1309.09546, -623.91711, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19450, 1299.47888, -623.91711, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19450, 1271.25366, -623.91711, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19450, 1273.98889, -625.80157, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1280.78296, -623.91711, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1317.95483, -623.91711, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19450, 1271.25366, -623.91711, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1289.95752, -623.91711, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1299.47888, -623.91711, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1309.09546, -623.91711, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1317.95483, -623.91711, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1273.98889, -625.80157, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.11987, -628.07935, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.11987, -637.66492, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.11987, -647.09760, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.12329, -656.43976, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.12329, -665.98810, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.11987, -675.44208, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1277.51758, -680.12775, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19450, 1286.93750, -680.12769, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19450, 1296.50952, -680.12769, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19450, 1306.09888, -680.12769, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19450, 1315.30115, -680.12769, 1089.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19450, 1273.98889, -635.05298, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -644.62482, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -653.99957, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -663.55487, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -673.00000, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -682.10120, 1089.05005,   0.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -635.05298, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -644.62482, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -653.99957, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -663.55487, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -673.00000, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1273.98889, -682.10120, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1277.51758, -680.12769, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1286.93750, -680.12769, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1296.50952, -680.12769, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1306.09888, -680.12769, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1315.30115, -680.12769, 1092.50000,   180.00000, 0.00000, 90.00000);
	CreateObject(19450, 1315.11987, -675.44208, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.11987, -665.92218, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.11987, -656.53967, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.11987, -647.09760, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.11987, -637.66492, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(19450, 1315.11987, -628.07928, 1092.50000,   180.00000, 0.00000, 0.00000);
	CreateObject(3586, 1290.90002, -638.29340, 1090.81995,   0.00000, 0.00000, 0.00000);
	CreateObject(19377, 1290.92627, -649.74890, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1280.44629, -620.97882, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1290.85437, -620.97882, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1301.32410, -620.97882, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1270.13586, -620.97882, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1270.13586, -630.60980, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1270.13586, -640.16882, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1270.13586, -649.74890, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1311.66248, -620.97882, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1270.13586, -659.29999, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1270.13586, -668.84961, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1270.13586, -678.46997, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1280.44629, -659.29999, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1290.92627, -659.29999, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1301.35400, -659.29999, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1280.44629, -668.84961, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1280.44629, -678.46997, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1290.92627, -668.84961, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1290.92627, -678.46997, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1301.35400, -668.84961, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1301.35400, -678.46997, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1311.66248, -630.60980, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1311.66248, -640.16681, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1311.66248, -649.74890, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1311.66248, -659.29999, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1311.66248, -668.84961, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(19377, 1311.66248, -678.46997, 1094.09998,   0.00000, 90.00000, 0.00000);
	CreateObject(18090, 1313.59399, -644.88367, 1089.74658,   0.00000, 0.00000, 0.00000);
	CreateObject(1649, 1286.58521, -637.02332, 1094.08191,   90.00000, 0.00000, 0.00000);
	CreateObject(1649, 1290.92834, -637.02332, 1094.08191,   90.00000, 0.00000, 0.00000);
	CreateObject(1545, 1314.58997, -643.08063, 1089.11292,   0.00000, 0.00000, 90.00000);
	CreateObject(2429, 1314.85999, -646.99530, 1088.70667,   0.00000, 0.00000, 270.00000);
	CreateObject(1543, 1314.76563, -644.62311, 1089.97925,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -643.64093, 1089.37537,   0.00000, 0.00000, 100.00000);
	CreateObject(1486, 1314.91772, -644.16412, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(3378, 1323.60889, -635.49506, 1088.41663,   0.00000, 0.00000, 90.00000);
	CreateObject(19812, 1314.58069, -640.67749, 1088.72815,   0.00000, 0.00000, 0.00000);
	CreateObject(18102, 1303.40662, -657.28668, 1093.81018,   0.00000, 0.00000, 0.00000);
	CreateObject(14391, 1314.33643, -671.18683, 1089.30383,   0.00000, 0.00000, 180.00000);
	CreateObject(2313, 1311.95129, -679.78296, 1088.33618,   0.00000, 0.00000, 180.00000);
	CreateObject(2779, 1297.78308, -624.38135, 1087.20593,   0.00000, 0.00000, 0.00000);
	CreateObject(2778, 1296.43567, -624.43494, 1087.20593,   0.00000, 0.00000, 0.00000);
	CreateObject(2778, 1274.51685, -628.03601, 1087.20593,   0.00000, 0.00000, 90.00000);
	CreateObject(2779, 1274.51453, -629.31433, 1087.20593,   0.00000, 0.00000, 90.00000);
	CreateObject(1649, 1295.32410, -637.02332, 1094.08191,   90.00000, 0.00000, 0.00000);
	CreateObject(1649, 1295.32410, -637.02332, 1094.08191,   270.00000, 0.00000, 0.00000);
	CreateObject(1649, 1290.92834, -637.02332, 1094.08191,   270.00000, 0.00000, 0.00000);
	CreateObject(1649, 1286.58521, -637.02332, 1094.08191,   270.00000, 0.00000, 0.00000);
	CreateObject(1649, 1286.58521, -640.28741, 1094.08191,   90.00000, 0.00000, 0.00000);
	CreateObject(1649, 1286.58521, -643.53772, 1094.08191,   90.00000, 0.00000, 0.00000);
	CreateObject(1649, 1295.32410, -640.28741, 1094.08191,   90.00000, 0.00000, 0.00000);
	CreateObject(1649, 1295.32410, -643.53772, 1094.08191,   90.00000, 0.00000, 0.00000);
	CreateObject(1649, 1286.58521, -640.28741, 1094.08191,   270.00000, 0.00000, 0.00000);
	CreateObject(1649, 1286.58521, -643.53772, 1094.08191,   270.00000, 0.00000, 0.00000);
	CreateObject(1649, 1295.32410, -640.28741, 1094.08191,   270.00000, 0.00000, 0.00000);
	CreateObject(1649, 1295.32410, -643.53772, 1094.08191,   270.00000, 0.00000, 0.00000);
	CreateObject(19129, 1294.95508, -680.65070, 1088.29004,   0.00000, 0.00000, 0.00000);
	CreateObject(18102, 1290.84314, -672.86005, 1093.81921,   0.00000, 0.00000, 180.00000);
	CreateObject(18102, 1301.22424, -661.33246, 1093.81921,   0.00000, 0.00000, 90.00000);
	CreateObject(18102, 1289.34729, -671.07355, 1093.81921,   0.00000, 0.00000, 270.00000);
	CreateObject(1486, 1314.91772, -645.60931, 1089.00098,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -644.32178, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -643.64093, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -643.76459, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -643.88452, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -644.04462, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -644.70209, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -644.46252, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -644.58252, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -644.84210, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -644.94061, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -645.14142, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -645.26093, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -645.44177, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -645.70203, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -645.86188, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -646.02191, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1314.91772, -646.16180, 1089.00000,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -643.88452, 1089.37537,   0.00000, 0.00000, 280.00000);
	CreateObject(1544, 1314.91772, -643.76459, 1089.37537,   0.00000, 0.00000, 258.00000);
	CreateObject(1544, 1314.91772, -644.04462, 1089.37537,   0.00000, 0.00000, 100.00000);
	CreateObject(1544, 1314.91772, -644.16412, 1089.37537,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -644.32178, 1089.37537,   0.00000, 0.00000, 100.00000);
	CreateObject(1544, 1314.91772, -644.46252, 1089.37537,   0.00000, 0.00000, 180.00000);
	CreateObject(1544, 1314.91772, -644.58252, 1089.37537,   0.00000, 0.00000, 250.00000);
	CreateObject(1544, 1314.91772, -644.70209, 1089.37537,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -644.84210, 1089.37537,   0.00000, 0.00000, 100.00000);
	CreateObject(1544, 1314.91772, -644.94061, 1089.37537,   0.00000, 0.00000, 0.00000);
	CreateObject(1543, 1314.91772, -644.94061, 1089.97925,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -645.14142, 1089.37537,   0.00000, 0.00000, 250.00000);
	CreateObject(1543, 1314.91772, -645.14142, 1089.97925,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -645.26093, 1089.37537,   0.00000, 0.00000, 0.00000);
	CreateObject(1543, 1315.00183, -644.08374, 1089.97925,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -645.44177, 1089.37537,   0.00000, 0.00000, 450.00000);
	CreateObject(1543, 1314.91772, -645.44177, 1089.97925,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -645.60931, 1089.37537,   0.00000, 0.00000, 0.00000);
	CreateObject(1543, 1314.91772, -645.60931, 1089.97925,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -645.86188, 1089.37537,   0.00000, 0.00000, 135.00000);
	CreateObject(1543, 1314.82251, -644.39148, 1089.97925,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -646.02191, 1089.37537,   0.00000, 0.00000, 0.00000);
	CreateObject(1543, 1314.91772, -646.02191, 1089.97925,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1314.91772, -646.16180, 1089.37537,   0.00000, 0.00000, 789.00000);
	CreateObject(1543, 1314.93359, -643.69678, 1089.97925,   0.00000, 0.00000, 0.00000);
	CreateObject(19446, 1318.11194, -657.36469, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1314.55554, -657.55469, 1095.89990,   0.00000, 0.00000, 0.00000);
	CreateObject(19446, 1314.55554, -648.03491, 1095.89990,   0.00000, 0.00000, 0.00000);
	CreateObject(19446, 1314.55554, -638.51361, 1095.89990,   0.00000, 0.00000, 0.00000);
	CreateObject(19446, 1314.55554, -628.95032, 1095.89990,   0.00000, 0.00000, 0.00000);
	CreateObject(19446, 1314.55554, -619.42639, 1095.89990,   0.00000, 0.00000, 0.00000);
	CreateObject(19446, 1312.06702, -624.28595, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1302.52026, -624.28589, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1292.99902, -624.28589, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1283.37744, -624.28589, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1273.81433, -624.28589, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1274.49866, -626.73492, 1095.89990,   0.00000, 0.00000, 0.00000);
	CreateObject(19446, 1274.49866, -636.19800, 1095.89990,   0.00000, 0.00000, 0.00000);
	CreateObject(19446, 1274.49866, -645.71002, 1095.89990,   0.00000, 0.00000, 0.00000);
	CreateObject(19446, 1274.49866, -655.15991, 1095.89990,   0.00000, 0.00000, 0.00000);
	CreateObject(19373, 1290.81653, -646.48071, 1094.18640,   0.00000, 90.00000, 0.00000);
	CreateObject(19373, 1290.81653, -646.48071, 1093.87903,   0.00000, 90.00000, 0.00000);
	CreateObject(14651, 1277.86194, -634.03119, 1089.41125,   0.00000, 0.00000, 0.00000);
	CreateObject(14651, 1277.86194, -640.40649, 1089.41125,   0.00000, 0.00000, 0.00000);
	CreateObject(14651, 1277.86194, -647.75500, 1089.41125,   0.00000, 0.00000, 0.00000);
	CreateObject(19373, 1275.62268, -639.86682, 1091.67065,   0.00000, 90.00000, 0.00000);
	CreateObject(19373, 1275.62268, -633.47650, 1091.67065,   0.00000, 90.00000, 0.00000);
	CreateObject(19373, 1275.62268, -636.66711, 1091.67065,   0.00000, 90.00000, 0.00000);
	CreateObject(19373, 1275.62268, -643.00983, 1091.67065,   0.00000, 90.00000, 0.00000);
	CreateObject(19373, 1275.62268, -646.18219, 1091.67065,   0.00000, 90.00000, 0.00000);
	CreateObject(19373, 1275.62268, -649.23029, 1091.67065,   0.00000, 90.00000, 0.00000);
	CreateObject(1827, 1305.19714, -645.02008, 1087.42969,   0.00000, 0.00000, 0.00000);
	CreateObject(1827, 1297.09839, -645.02008, 1087.42969,   0.00000, 0.00000, 0.00000);
	CreateObject(14399, 1303.59985, -626.95447, 1087.18396,   0.00000, 0.00000, 180.00000);
	CreateObject(3378, 1323.60889, -635.49506, 1090.67761,   0.00000, 0.00000, 90.00000);
	CreateObject(1491, 1274.04907, -654.50244, 1087.22595,   0.00000, 0.00000, 90.00000);
	CreateObject(1491, 1274.04907, -655.94458, 1087.22595,   0.00000, 0.00000, 90.00000);
	CreateObject(2290, 1304.01831, -636.47906, 1087.28003,   0.00000, 0.00000, 0.00000);
	CreateObject(2290, 1295.94397, -636.17896, 1087.28003,   0.00000, 0.00000, 0.00000);
	CreateObject(2291, 1303.80920, -639.46405, 1087.28003,   0.00000, 0.00000, 135.00000);
	CreateObject(2293, 1305.34424, -637.98370, 1087.28003,   0.00000, 0.00000, 0.00000);
	CreateObject(2291, 1306.52063, -638.41241, 1087.28003,   0.00000, 0.00000, 225.00000);
	CreateObject(2293, 1297.51941, -637.64417, 1087.28003,   0.00000, 0.00000, 0.00000);
	CreateObject(2291, 1296.17969, -639.05872, 1087.28003,   0.00000, 0.00000, 135.00000);
	CreateObject(2291, 1298.21191, -638.50397, 1087.28003,   0.00000, 0.00000, 225.00000);
	CreateObject(1713, 1298.26160, -646.77130, 1087.24646,   0.00000, 0.00000, 180.00000);
	CreateObject(1708, 1295.31543, -644.20673, 1087.24646,   0.00000, 0.00000, 45.00000);
	CreateObject(1708, 1298.10229, -643.60321, 1087.24646,   0.00000, 0.00000, 315.00000);
	CreateObject(1713, 1306.17310, -646.53320, 1087.24646,   0.00000, 0.00000, 180.00000);
	CreateObject(1708, 1306.32837, -643.33197, 1087.24646,   0.00000, 0.00000, 315.00000);
	CreateObject(1708, 1303.47192, -644.49463, 1087.24646,   0.00000, 0.00000, 45.00000);
	CreateObject(1488, 1310.39490, -624.20599, 1089.29187,   0.00000, 0.00000, 0.00000);
	CreateObject(1488, 1310.95959, -624.20599, 1089.29187,   0.00000, 0.00000, 0.00000);
	CreateObject(1511, 1310.68469, -624.20599, 1089.30981,   0.00000, 0.00000, 0.00000);
	CreateObject(1511, 1311.24011, -624.20599, 1089.30981,   0.00000, 0.00000, 0.00000);
	CreateObject(1541, 1315.02698, -627.53937, 1089.41663,   0.00000, 0.00000, 270.00000);
	CreateObject(1669, 1313.25488, -624.28400, 1089.26001,   0.00000, 0.00000, 0.00000);
	CreateObject(1669, 1312.11804, -624.26532, 1089.26001,   0.00000, 0.00000, 0.00000);
	CreateObject(1669, 1312.64661, -624.26410, 1089.81995,   0.00000, 0.00000, 0.00000);
	CreateObject(1669, 1314.86096, -625.60156, 1089.81995,   0.00000, 0.00000, 0.00000);
	CreateObject(2099, 1311.23779, -680.03705, 1088.84521,   0.00000, 0.00000, 180.00000);
	CreateObject(2028, 1312.36743, -678.86340, 1088.40430,   0.00000, 0.00000, 0.00000);
	CreateObject(1788, 1313.54004, -675.36609, 1088.39893,   0.00000, 0.00000, 270.00000);
	CreateObject(1788, 1313.54004, -675.36609, 1088.52002,   0.00000, 0.00000, 250.00000);
	CreateObject(2827, 1305.34436, -644.87585, 1087.85352,   0.00000, 0.00000, 0.00000);
	CreateObject(1543, 1305.08411, -645.37305, 1087.88220,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1304.95728, -645.14532, 1087.88220,   0.00000, 0.00000, 0.00000);
	CreateObject(19818, 1304.89136, -645.59650, 1087.99878,   0.00000, 0.00000, 0.00000);
	CreateObject(19818, 1304.93884, -644.62268, 1087.99878,   0.00000, 0.00000, 0.00000);
	CreateObject(19818, 1305.87500, -644.74146, 1087.99878,   0.00000, 0.00000, 0.00000);
	CreateObject(19818, 1305.85498, -645.41199, 1087.99878,   0.00000, 0.00000, 0.00000);
	CreateObject(2825, 1297.19861, -644.53168, 1087.94958,   0.00000, 0.00000, 0.00000);
	CreateObject(2826, 1296.62415, -644.86890, 1088.06079,   0.00000, 0.00000, 0.00000);
	CreateObject(1543, 1297.15649, -645.30713, 1087.85596,   0.00000, 0.00000, 0.00000);
	CreateObject(1544, 1297.25623, -645.05078, 1087.89661,   0.00000, 0.00000, 0.00000);
	CreateObject(19818, 1297.73181, -644.71906, 1087.99878,   0.00000, 0.00000, 0.00000);
	CreateObject(19818, 1297.26416, -645.51385, 1087.99878,   0.00000, 0.00000, 0.00000);
	CreateObject(19818, 1296.52820, -645.28003, 1087.99878,   0.00000, 0.00000, 0.00000);
	CreateObject(19818, 1296.62207, -644.44470, 1087.99878,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1304.68665, -645.14447, 1087.98901,   0.00000, 0.00000, 0.00000);
	CreateObject(1486, 1297.46802, -645.16382, 1087.99805,   0.00000, 0.00000, 0.00000);
	CreateObject(2813, 1297.44800, -637.78790, 1087.78320,   0.00000, 0.00000, 0.00000);
	CreateObject(2293, 1296.46387, -637.65967, 1087.28003,   0.00000, 0.00000, 0.00000);
	CreateObject(2824, 1305.42297, -638.14746, 1087.82007,   0.00000, 0.00000, 0.00000);
	CreateObject(2293, 1304.28210, -637.96515, 1087.28003,   0.00000, 0.00000, 0.00000);
	CreateObject(2125, 1311.38330, -644.08008, 1087.62231,   0.00000, 0.00000, 0.00000);
	CreateObject(2125, 1311.35828, -645.27338, 1087.62231,   0.00000, 0.00000, 0.00000);
	CreateObject(2125, 1311.33643, -646.44696, 1087.62231,   0.00000, 0.00000, 0.00000);
	CreateObject(2125, 1311.32874, -642.99451, 1087.62231,   0.00000, 0.00000, 0.00000);
	CreateObject(1669, 1296.15564, -637.94147, 1087.90002,   0.00000, 0.00000, 0.00000);
	CreateObject(1664, 1296.65869, -637.75165, 1087.88989,   0.00000, 0.00000, 0.00000);
	CreateObject(1667, 1296.53113, -637.76727, 1087.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1667, 1296.15161, -637.40088, 1087.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1667, 1296.63770, -637.37708, 1087.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1667, 1297.64929, -637.33362, 1087.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1667, 1297.82874, -638.03894, 1087.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1520, 1297.67212, -637.58722, 1087.81982,   0.00000, 0.00000, 0.00000);
	CreateObject(1664, 1314.87000, -625.31958, 1089.83618,   0.00000, 0.00000, 0.00000);
	CreateObject(1664, 1314.27551, -624.12018, 1089.83618,   0.00000, 0.00000, 0.00000);
	CreateObject(1520, 1313.48340, -624.22144, 1089.73279,   0.00000, 0.00000, 0.00000);
	CreateObject(1520, 1313.16467, -624.16644, 1089.73279,   0.00000, 0.00000, 0.00000);
	CreateObject(1520, 1312.94177, -624.14685, 1089.73279,   0.00000, 0.00000, 0.00000);
	CreateObject(1520, 1312.08594, -624.23438, 1089.73279,   0.00000, 0.00000, 0.00000);
	CreateObject(1520, 1314.88074, -625.83734, 1089.73279,   0.00000, 0.00000, 0.00000);
	CreateObject(1487, 1314.81616, -624.99194, 1089.28918,   0.00000, 0.00000, 0.00000);
	CreateObject(1487, 1314.89478, -625.60736, 1089.28918,   0.00000, 0.00000, 0.00000);
	CreateObject(1487, 1314.00146, -624.21094, 1089.28918,   0.00000, 0.00000, 0.00000);
	CreateObject(1487, 1312.47827, -624.15552, 1089.28918,   0.00000, 0.00000, 0.00000);
	CreateObject(1487, 1312.37610, -624.15863, 1089.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1517, 1313.88513, -624.11407, 1089.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1517, 1314.86121, -624.92157, 1089.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1517, 1314.79260, -624.65002, 1089.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1517, 1314.75281, -624.32996, 1089.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1664, 1314.60229, -624.14960, 1089.83618,   0.00000, 0.00000, 0.00000);
	CreateObject(1520, 1313.16467, -624.16644, 1089.12683,   0.00000, 0.00000, 0.00000);
	CreateObject(1520, 1312.80957, -624.10760, 1089.12683,   0.00000, 0.00000, 0.00000);
	CreateObject(1520, 1314.91406, -624.51392, 1089.12683,   0.00000, 0.00000, 0.00000);
	CreateObject(1517, 1314.75281, -624.32996, 1089.26099,   0.00000, 0.00000, 0.00000);
	CreateObject(1667, 1303.95801, -637.72858, 1087.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1667, 1303.94373, -638.34180, 1087.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1667, 1304.63696, -637.68170, 1087.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1667, 1305.70691, -637.67322, 1087.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1667, 1305.02100, -638.31476, 1087.87000,   0.00000, 0.00000, 0.00000);
	CreateObject(1664, 1304.58447, -638.23041, 1087.88989,   0.00000, 0.00000, 0.00000);
	CreateObject(1520, 1304.26135, -638.03241, 1087.81982,   0.00000, 0.00000, 0.00000);
	CreateObject(1517, 1305.19897, -637.92218, 1087.96997,   0.00000, 0.00000, 0.00000);
	CreateObject(19825, 1310.62830, -624.03357, 1090.03723,   0.00000, 0.00000, 0.00000);
	CreateObject(1775, 1274.45837, -676.02448, 1088.33093,   0.00000, 0.00000, 90.00000);
	CreateObject(1302, 1274.45911, -673.24951, 1087.21008,   0.00000, 0.00000, 90.00000);
	CreateObject(1977, 1274.35999, -674.66620, 1087.31262,   0.00000, 0.00000, 90.00000);
	CreateObject(18885, 1274.30090, -671.79108, 1088.34680,   0.00000, 0.00000, 90.00000);
	CreateObject(1776, 1274.46021, -677.52765, 1088.32788,   0.00000, 0.00000, 90.00000);
	CreateObject(3066, 1275.18958, -665.52917, 1087.66553,   0.00000, 0.00000, 0.00000);
	CreateObject(2358, 1275.58643, -671.11078, 1087.40894,   0.00000, 0.00000, 90.00000);
	CreateObject(2358, 1275.58643, -671.11078, 1087.60986,   0.00000, 0.00000, 135.00000);
	CreateObject(1736, 1293.54871, -624.65875, 1096.56458,   0.00000, 0.00000, 0.00000);
	CreateObject(2207, 1292.74109, -627.89441, 1094.09839,   0.00000, 0.00000, 0.00000);
	CreateObject(16378, 1312.25000, -626.07391, 1094.92505,   0.00000, 0.00000, 0.00000);
	CreateObject(2332, 1296.09192, -624.75269, 1094.55005,   0.00000, 0.00000, 0.00000);
	CreateObject(1663, 1293.54114, -626.18591, 1094.62048,   0.00000, 0.00000, 0.00000);
	CreateObject(1707, 1275.15002, -654.53082, 1094.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(14455, 1305.80005, -654.95569, 1095.73694,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1308.95251, -657.36469, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1299.34888, -657.36469, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1289.77942, -657.36469, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1280.29211, -657.36469, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(19446, 1270.69995, -657.36469, 1095.89990,   0.00000, 0.00000, 90.00000);
	CreateObject(1707, 1275.15002, -651.78638, 1094.05005,   0.00000, 0.00000, 90.00000);
	CreateObject(19787, 1274.55005, -626.74738, 1095.58411,   0.00000, 0.00000, 90.00000);
	CreateObject(19786, 1277.46179, -657.40198, 1095.69836,   0.00000, 0.00000, 180.00000);
	CreateObject(1705, 1279.66858, -653.25171, 1094.10461,   0.00000, 0.00000, 270.00000);
	CreateObject(1706, 1276.81909, -649.39301, 1094.08862,   0.00000, 0.00000, 0.00000);
	CreateObject(1705, 1279.66858, -650.56952, 1094.10461,   0.00000, 0.00000, 270.00000);
	CreateObject(14455, 1305.80005, -648.43433, 1095.73694,   0.00000, 0.00000, 90.00000);
	CreateObject(14455, 1306.15002, -644.09003, 1095.73694,   0.00000, 0.00000, 270.00000);
	CreateObject(14455, 1306.15002, -650.60999, 1095.73694,   0.00000, 0.00000, 270.00000);
	CreateObject(1825, 1308.22864, -652.25177, 1094.20764,   0.00000, 0.00000, 0.00000);
	CreateObject(1825, 1308.63440, -646.33984, 1094.20764,   0.00000, 0.00000, 0.00000);
	CreateObject(1825, 1312.13879, -648.76123, 1094.20764,   0.00000, 0.00000, 0.00000);
	CreateObject(1825, 1311.54138, -654.20471, 1094.20764,   0.00000, 0.00000, 0.00000);
	CreateObject(1825, 1302.43896, -652.29480, 1094.20764,   0.00000, 0.00000, 0.00000);
	CreateObject(1825, 1302.09607, -646.34033, 1094.20764,   0.00000, 0.00000, 0.00000);
	CreateObject(2754, 1291.74622, -657.11639, 1095.08228,   0.00000, 0.00000, 270.00000);
	CreateObject(1830, 1276.19556, -628.07422, 1094.18896,   0.00000, 0.00000, 180.00000);
	CreateObject(1831, 1281.57202, -628.07416, 1094.18896,   0.00000, 0.00000, 180.00000);
	CreateObject(1832, 1278.42871, -628.07422, 1094.18896,   0.00000, 0.00000, 180.00000);
	CreateObject(1833, 1277.48633, -628.07422, 1094.18896,   0.00000, 0.00000, 180.00000);
	CreateObject(1834, 1280.52661, -628.07422, 1094.17004,   0.00000, 0.00000, 180.00000);
	CreateObject(1835, 1279.44434, -628.07422, 1094.17004,   0.00000, 0.00000, 180.00000);
	CreateObject(1836, 1277.33936, -624.59833, 1094.17004,   0.00000, 0.00000, 0.00000);
	CreateObject(1837, 1280.68469, -624.51190, 1094.17004,   0.00000, 0.00000, 0.00000);
	CreateObject(2008, 1307.00989, -625.96722, 1094.16003,   0.00000, 0.00000, 0.00000);
	CreateObject(2165, 1313.50403, -633.85956, 1094.15076,   0.00000, 0.00000, 180.00000);
	CreateObject(2181, 1310.73999, -634.03046, 1094.10840,   0.00000, 0.00000, 180.00000);
	CreateObject(2172, 1308.38550, -633.94684, 1094.08850,   0.00000, 0.00000, 180.00000);
	CreateObject(2198, 1306.12366, -634.05255, 1094.11646,   0.00000, 0.00000, 180.00000);
	CreateObject(2183, 1307.45239, -630.49878, 1094.05505,   0.00000, 0.00000, 0.00000);
	CreateObject(1671, 1307.77869, -626.63434, 1094.72827,   0.00000, 0.00000, 177.97589);
	CreateObject(1671, 1307.93506, -631.12549, 1094.72827,   0.00000, 0.00000, 180.00000);
	CreateObject(1671, 1309.66321, -631.11584, 1094.72827,   0.00000, 0.00000, 180.00000);
	CreateObject(1671, 1309.70679, -628.50885, 1094.72827,   0.00000, 0.00000, 0.00000);
	CreateObject(1671, 1307.91699, -628.53601, 1094.72827,   0.00000, 0.00000, 0.00000);
	CreateObject(1671, 1312.88818, -633.03448, 1094.72827,   0.00000, 0.00000, 342.48486);
	CreateObject(1671, 1310.02502, -633.33685, 1094.72827,   0.00000, 0.00000, 32.56406);
	CreateObject(1671, 1307.78943, -633.18402, 1094.72827,   0.00000, 0.00000, 45.63129);
	CreateObject(1671, 1305.47754, -633.26312, 1094.72827,   0.00000, 0.00000, 77.83284);
	CreateObject(19317, 1274.61340, -641.42389, 1094.96899,   0.00000, 0.00000, 90.00000);
	CreateObject(19609, 1277.17603, -642.58862, 1094.11230,   0.00000, 0.00000, 0.00000);
	CreateObject(19611, 1276.76953, -641.34296, 1094.24927,   0.00000, 0.00000, 0.00000);
	CreateObject(19610, 1276.73962, -641.33508, 1095.90002,   45.00000, 0.00000, 95.00000);
	CreateObject(1716, 1277.26184, -642.20374, 1094.17004,   0.00000, 0.00000, 0.00000);
	CreateObject(19612, 1274.76428, -640.18097, 1094.76965,   0.00000, 0.00000, 90.00000);
	CreateObject(19613, 1274.73071, -640.13251, 1094.05725,   0.00000, 0.00000, 90.00000);
	CreateObject(19378, 1290.85437, -620.97882, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1301.32410, -620.97882, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1311.66248, -620.97882, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1311.66248, -630.60980, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1280.44629, -620.97882, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1270.13586, -620.97882, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1311.66248, -640.16681, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1311.66248, -649.74890, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1311.66248, -659.29999, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1301.35400, -659.29999, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1290.92627, -659.29999, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1280.44629, -659.29999, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1270.13586, -659.29999, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1301.32410, -630.60980, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1301.35400, -640.16681, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1301.35400, -649.74890, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1290.92627, -649.74890, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1280.44629, -649.74890, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1270.13586, -649.74890, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1270.13586, -640.16681, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1270.13586, -630.60980, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1290.85437, -630.60980, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1280.44629, -630.60980, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1280.44629, -640.16681, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(19378, 1290.92627, -640.16681, 1097.49146,   0.00000, 90.00000, 0.00000);
	CreateObject(16780, 1294.07300, -628.20483, 1097.39917,   0.00000, 0.00000, 0.00000);
	CreateObject(3812, 1274.38123, -654.16577, 1097.03870,   0.00000, 0.00000, 0.00000);
	CreateObject(3812, 1274.38123, -652.81488, 1097.03870,   0.00000, 0.00000, 0.00000);
	CreateObject(3812, 1274.38123, -651.50031, 1097.03870,   0.00000, 0.00000, 0.00000);
	CreateObject(3812, 1274.38123, -650.21820, 1097.03870,   0.00000, 0.00000, 0.00000);
	CreateObject(3812, 1314.55554, -627.01398, 1096.97388,   0.00000, 0.00000, 180.00000);
	CreateObject(3812, 1314.55554, -628.41382, 1096.97388,   0.00000, 0.00000, 180.00000);
	CreateObject(3812, 1314.55554, -629.69171, 1096.97388,   0.00000, 0.00000, 180.00000);
	CreateObject(3812, 1314.55554, -630.95422, 1096.97388,   0.00000, 0.00000, 180.00000);
	CreateObject(3812, 1314.55554, -632.17181, 1096.97388,   0.00000, 0.00000, 180.00000);
	CreateObject(3812, 1314.55554, -633.37689, 1096.97388,   0.00000, 0.00000, 180.00000);
	CreateObject(16780, 1281.56042, -627.70868, 1097.39917,   0.00000, 0.00000, 0.00000);
	CreateObject(16780, 1279.41907, -634.66846, 1097.39917,   0.00000, 0.00000, 0.00000);
	CreateObject(16780, 1280.17053, -639.86768, 1097.39917,   0.00000, 0.00000, 0.00000);
	//GN
    new playerid;
	RemoveBuildingForPlayer(playerid, 8544, 2844.250, 874.718, 15.445, 0.250);
	RemoveBuildingForPlayer(playerid, 8549, 2836.093, 928.281, 11.367, 0.250);
	RemoveBuildingForPlayer(playerid, 8737, 2814.343, 993.843, 13.140, 0.250);
	RemoveBuildingForPlayer(playerid, 8739, 2844.250, 874.718, 15.445, 0.250);
	RemoveBuildingForPlayer(playerid, 8960, 2787.000, 953.437, 13.250, 0.250);
	RemoveBuildingForPlayer(playerid, 8961, 2797.625, 885.453, 13.250, 0.250);
	RemoveBuildingForPlayer(playerid, 8962, 2797.625, 865.406, 13.250, 0.250);
	RemoveBuildingForPlayer(playerid, 8963, 2885.531, 919.226, 13.250, 0.250);
	RemoveBuildingForPlayer(playerid, 1365, 2801.070, 858.101, 10.851, 0.250);
	RemoveBuildingForPlayer(playerid, 1358, 2808.796, 857.203, 10.929, 0.250);
	RemoveBuildingForPlayer(playerid, 1343, 2821.875, 858.187, 10.484, 0.250);
	RemoveBuildingForPlayer(playerid, 1365, 2848.484, 857.179, 10.851, 0.250);
	RemoveBuildingForPlayer(playerid, 1343, 2836.953, 858.195, 10.484, 0.250);
	RemoveBuildingForPlayer(playerid, 1344, 2879.085, 858.156, 10.539, 0.250);
	RemoveBuildingForPlayer(playerid, 1358, 2863.789, 857.203, 10.929, 0.250);
	RemoveBuildingForPlayer(playerid, 1278, 2782.664, 899.281, 23.929, 0.250);
	RemoveBuildingForPlayer(playerid, 1219, 2800.945, 879.304, 9.976, 0.250);
	RemoveBuildingForPlayer(playerid, 1219, 2800.945, 876.640, 9.976, 0.250);
	RemoveBuildingForPlayer(playerid, 8886, 2797.625, 865.406, 13.250, 0.250);
	RemoveBuildingForPlayer(playerid, 1219, 2806.609, 892.382, 9.976, 0.250);
	RemoveBuildingForPlayer(playerid, 8885, 2797.625, 885.453, 13.250, 0.250);
	RemoveBuildingForPlayer(playerid, 1219, 2887.304, 871.914, 9.976, 0.250);
	RemoveBuildingForPlayer(playerid, 1219, 2887.304, 874.578, 9.976, 0.250);
	RemoveBuildingForPlayer(playerid, 1373, 2773.968, 919.250, 12.078, 0.250);
	RemoveBuildingForPlayer(playerid, 1374, 2773.312, 920.843, 10.867, 0.250);
	RemoveBuildingForPlayer(playerid, 1278, 2782.664, 929.296, 23.929, 0.250);
	RemoveBuildingForPlayer(playerid, 3458, 2818.460, 928.648, 11.242, 0.250);
	RemoveBuildingForPlayer(playerid, 8883, 2885.531, 919.226, 13.250, 0.250);
	RemoveBuildingForPlayer(playerid, 8884, 2787.000, 953.437, 13.250, 0.250);
	RemoveBuildingForPlayer(playerid, 3458, 2818.460, 938.718, 11.242, 0.250);
	RemoveBuildingForPlayer(playerid, 1365, 2849.539, 945.015, 10.781, 0.250);
	RemoveBuildingForPlayer(playerid, 1219, 2858.273, 944.976, 9.976, 0.250);
	RemoveBuildingForPlayer(playerid, 1343, 2863.468, 946.015, 10.484, 0.250);
	RemoveBuildingForPlayer(playerid, 1358, 2796.843, 977.695, 10.804, 0.250);
	RemoveBuildingForPlayer(playerid, 1365, 2796.601, 984.820, 10.781, 0.250);
	RemoveBuildingForPlayer(playerid, 1219, 2796.546, 996.757, 9.976, 0.250);
	RemoveBuildingForPlayer(playerid, 1219, 2796.546, 1000.351, 9.976, 0.250);
	RemoveBuildingForPlayer(playerid, 1278, 2806.210, 1017.937, 23.929, 0.250);
	RemoveBuildingForPlayer(playerid, 8546, 2814.343, 993.843, 13.140, 0.250);
 //Nuevas casas unity
	CreateDynamicObject(947, 1868.65076, -1864.25232, 14.74390,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(918, 1868.26526, -1879.28101, 12.95360,   0.00000, 0.00000, 141.00000);
	CreateDynamicObject(3167, 1884.00745, -1844.67383, 12.56160,   0.00000, 0.00000, -107.00000);
	CreateDynamicObject(1413, 1864.10461, -1836.48462, 13.85970,   360.00000, 0.00000, -17.00000);
	CreateDynamicObject(1412, 1874.17871, -1839.62744, 13.83970,   360.00000, 0.00000, -17.00000);
	CreateDynamicObject(1413, 1869.12720, -1838.07837, 13.85970,   360.00000, 0.00000, -17.00000);
	CreateDynamicObject(1413, 1879.21643, -1841.16467, 13.85970,   360.00000, 0.00000, -17.00000);
	CreateDynamicObject(1413, 1884.28162, -1842.76428, 13.85970,   360.00000, 0.00000, -17.00000);
	CreateDynamicObject(1412, 1889.32336, -1844.32361, 13.83970,   360.00000, 0.00000, -17.00000);
	CreateDynamicObject(1413, 1894.32043, -1845.94617, 13.85970,   360.00000, 0.00000, -17.00000);
	CreateDynamicObject(1413, 1899.09778, -1847.50696, 13.85970,   360.00000, 0.00000, -17.00000);
	CreateDynamicObject(3174, 1873.20093, -1887.54041, 12.46610,   0.00000, 0.00000, -105.00000);
	CreateDynamicObject(3168, 1899.56946, -1853.14026, 12.56160,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3170, 1863.40356, -1853.13782, 12.56160,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3171, 1864.57312, -1840.73975, 12.56160,   0.00000, 0.00000, 125.00000);
	CreateDynamicObject(3169, 1899.73254, -1870.37695, 12.42090,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3175, 1865.12354, -1866.41101, 12.56160,   0.00000, 0.00000, 50.00000);
	CreateDynamicObject(1413, 1870.54089, -1879.67017, 13.67970,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 1875.76086, -1879.69507, 13.67970,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(853, 1891.42883, -1846.69604, 12.94380,   0.00000, 0.00000, -18.00000);
	CreateDynamicObject(1347, 1865.54175, -1856.44543, 13.13880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1327, 1862.70508, -1859.81995, 13.39950,   0.00000, -33.00000, 0.00000);
	CreateDynamicObject(1265, 1862.23755, -1843.51758, 13.03970,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1372, 1862.23572, -1845.85071, 12.69990,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1440, 1869.67212, -1839.43591, 13.10560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1415, 1881.58643, -1846.86743, 12.69410,   0.00000, 0.00000, -107.00000);
	CreateDynamicObject(3593, 1871.07800, -1876.25500, 12.97130,   0.00000, 0.00000, -135.00000);
	CreateDynamicObject(1349, 1871.82129, -1839.79736, 12.94590,   91.00000, 25.00000, 0.00000);
	CreateDynamicObject(1368, 1866.73730, -1862.64880, 13.26850,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(852, 1899.85974, -1863.48999, 12.56380,   0.00000, 0.00000, 32.00000);
	CreateDynamicObject(1299, 1899.59692, -1860.04199, 13.04100,   0.00000, 0.00000, -40.00000);
	CreateDynamicObject(2672, 1863.03979, -1844.66125, 12.87860,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2670, 1871.72974, -1840.33704, 12.77873,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2677, 1870.30676, -1843.69836, 12.55808,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2677, 1899.95569, -1862.88770, 12.87960,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1450, 1893.71582, -1846.39624, 13.04990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1372, 1897.33069, -1847.46045, 12.60650,   0.00000, 0.00000, -18.00000);
	CreateDynamicObject(929, 1868.51965, -1871.46619, 13.49350,   0.00000, 0.00000, 0.00000);
	RemoveBuildingForPlayer(playerid, 1413, 1879.9922, -1879.8906, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1413, 1885.2578, -1879.8984, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1413, 1864.1797, -1879.6641, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1413, 1869.4609, -1879.6641, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1874.7344, -1879.6641, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1890.5234, -1879.6641, 13.6797, 0.25);
	//GNEXT
	new tmpobjid;
	tmpobjid = CreateDynamicObject(19905, 2820.414794, 867.156677, 9.697360, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 13691, "bevcunto2_lahills", "stonewall3_la", 0x00000000);
	SetDynamicObjectMaterial(tmpobjid, 1, 13691, "bevcunto2_lahills", "stonewall3_la", 0x00000000);
	tmpobjid = CreateDynamicObject(19907, 2852.487792, 872.375976, 9.762840, 0.000000, 0.000000, 269.819976, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 2, 13691, "bevcunto2_lahills", "stonewall3_la", 0x00000000);
	tmpobjid = CreateDynamicObject(19905, 2877.537109, 914.409973, 9.732299, 0.000000, 0.000000, -90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 1, 13691, "bevcunto2_lahills", "stonewall3_la", 0x00000000);
	SetDynamicObjectMaterial(tmpobjid, 3, 13691, "bevcunto2_lahills", "stonewall3_la", 0x00000000);
	tmpobjid = CreateDynamicObject(10763, 2814.137939, 991.912414, 42.351600, 0.000000, 0.000000, 135.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 1, 13691, "bevcunto2_lahills", "stonewall3_la", 0x00000000);
	SetDynamicObjectMaterial(tmpobjid, 2, 13691, "bevcunto2_lahills", "stonewall3_la", 0x00000000);
	SetDynamicObjectMaterial(tmpobjid, 4, 13691, "bevcunto2_lahills", "stonewall3_la", 0x00000000);
	tmpobjid = CreateDynamicObject(3626, 2817.526123, 898.877319, 11.128580, 0.000000, 0.000000, -90.120018, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 3, 13691, "bevcunto2_lahills", "stonewall3_la", 0x00000000);
	tmpobjid = CreateDynamicObject(3170, 2783.825683, 949.255126, 9.532270, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 2, 13691, "bevcunto2_lahills", "stonewall3_la", 0x00000000);
	tmpobjid = CreateDynamicObject(9623, 2776.714599, 913.637512, 11.716910, 0.000000, 0.000000, 89.579986, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 1, 13361, "ce_pizza", "brickred2", 0x00000000);
	////////////////////////////////////////////////////////////////////// 2 /////////////////
	tmpobjid = CreateDynamicObject(16326, 2788.688476, 1010.723754, 9.879890, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1278, 2779.695556, 934.142211, 23.929689, 356.858398, 0.000000, 3.141590, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19909, 2878.500000, 890.037109, 9.877960, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3279, 2784.680175, 927.736938, 9.673689, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2985, 2783.392333, 927.060119, 25.739070, 0.000000, 0.000000, -164.099990, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2977, 2785.954101, 926.257324, 25.583339, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2977, 2785.910400, 927.344543, 25.583339, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(16641, 2804.468017, 1002.176818, 11.279190, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3885, 2822.815673, 851.233825, 10.424360, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3884, 2822.896728, 851.417541, 10.428099, 0.000000, 0.000000, 68.279991, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3885, 2855.358642, 852.106079, 10.424360, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3884, 2855.402832, 851.979736, 10.428099, 0.000000, 0.000000, 138.179992, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8613, 2798.419433, 867.250854, 11.461520, 0.000000, 0.000000, -88.439987, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1278, 2778.474853, 899.588195, 23.929689, 356.858398, 0.000000, 3.141590, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8168, 2784.669189, 898.937683, 11.450900, 0.000000, 0.000000, 106.439987, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(14782, 2819.274902, 898.496765, 10.883150, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(16327, 2784.642578, 892.123962, 9.517120, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(16375, 2831.893554, 855.888793, 15.464200, 0.000000, 0.200000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3928, 2823.187988, 868.382995, 15.517629, 0.000000, 0.000000, 90.120002, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8613, 2880.978027, 935.692871, 11.945540, 0.000000, 0.000000, -180.059875, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3928, 2877.244140, 908.027343, 15.554619, 0.000000, 0.000000, 181.199966, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3928, 2876.981445, 921.720031, 15.554619, 0.000000, 0.000000, 181.199966, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19545, 2833.531738, 887.338439, 9.693260, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19545, 2833.215820, 902.205749, 9.693260, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19545, 2896.010253, 887.313171, 9.693260, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19545, 2855.325195, 859.823120, 9.718720, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19545, 2845.214355, 845.031677, 9.718720, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19545, 2793.861816, 859.914245, 9.718720, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8210, 2776.770019, 951.213134, 9.877900, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8210, 2776.766113, 1006.792480, 9.877900, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8210, 2804.921875, 1034.435302, 9.877900, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8210, 2860.472656, 1034.431274, 9.877900, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8313, 2901.586914, 1035.368041, 10.279910, 0.000000, 0.000000, 111.059997, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8210, 2894.960205, 880.449768, 9.237640, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8150, 2894.994140, 971.271972, 9.447210, 0.000000, 0.000000, -90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8313, 2895.333496, 846.717956, 10.279899, 0.000000, 0.000000, 16.260000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8150, 2840.160400, 832.928833, 10.540780, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(8210, 2776.924560, 860.911804, 10.415349, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3475, 2777.374755, 891.349670, 11.923870, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3475, 2777.416748, 897.253906, 11.923870, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3475, 2777.450927, 900.243469, 11.923870, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(16378, 2786.520263, 1015.155578, 13.243209, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(16378, 2817.778076, 897.218811, 10.669900, 0.000000, 0.000000, -89.999992, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3390, 2884.410644, 892.817932, 9.875340, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3389, 2884.425781, 890.571533, 9.875200, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3393, 2884.139648, 888.167053, 9.875769, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3386, 2884.253662, 885.865295, 9.875209, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3394, 2880.630615, 895.724792, 9.875269, 0.000000, 0.000000, 90.059989, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3787, 2876.887939, 895.486572, 10.393230, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3786, 2876.898681, 895.398132, 11.133729, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(9362, 2844.301757, 878.967651, 10.639829, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(14782, 2838.829345, 875.135375, 10.883099, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(16770, 2800.858398, 1015.636230, 11.536100, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1278, 2810.258056, 1018.888671, 23.929689, 356.858398, 0.000000, -1.570799, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1583, 2805.185791, 1023.631958, 9.893150, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1583, 2802.535888, 1025.447998, 9.893150, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1583, 2797.980468, 1030.342651, 9.893150, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1583, 2793.728759, 1027.682617, 9.893150, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1583, 2796.562744, 1026.285034, 9.893150, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1583, 2804.075439, 1029.752807, 9.893150, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1583, 2807.220947, 1028.531372, 9.893150, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1583, 2800.657958, 1028.436157, 9.893150, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1583, 2792.834716, 1031.040893, 9.893150, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1584, 2807.219238, 1024.954833, 9.888990, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1584, 2804.035888, 1027.276000, 9.888990, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1584, 2800.959960, 1025.937622, 9.888990, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1584, 2798.148681, 1028.037231, 9.888990, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1584, 2795.494873, 1030.204589, 9.888990, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1584, 2794.103027, 1026.088500, 9.888990, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1584, 2792.136474, 1025.135009, 9.888990, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2944, 2787.406005, 1007.134338, 10.860579, 0.000000, 0.000000, -91.199989, -1, -1, -1, 300.00, 300.00);
	// SAEM Int
	tmpobjid = CreateDynamicObject(19462, 1024.662841, 998.408813, 565.569824, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1026.433837, 993.517761, 565.569763, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1021.715942, 985.651550, 565.569824, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19375, 1021.741333, 990.932250, 563.846801, 0.000000, 90.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4849, "ground3_las", "floorboard256128", 0x00000000);
	tmpobjid = CreateDynamicObject(19375, 1012.207824, 990.970520, 564.646545, 0.000000, 90.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4849, "ground3_las", "floorboard256128", 0x00000000);
	tmpobjid = CreateDynamicObject(1472, 1017.807250, 987.117309, 564.317077, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 13007, "sw_bankint", "woodfloor1", 0x00000000);
	SetDynamicObjectMaterial(tmpobjid, 1, 13007, "sw_bankint", "woodfloor1", 0x00000000);
	tmpobjid = CreateDynamicObject(19375, 1021.750305, 1001.366638, 563.846801, 0.000000, 90.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4849, "ground3_las", "floorboard256128", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1012.214599, 985.656860, 566.353637, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1007.279663, 991.560485, 566.361022, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19375, 1012.135498, 1001.428588, 563.846801, 0.000000, 90.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4849, "ground3_las", "floorboard256128", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1021.742736, 1006.634521, 565.569824, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1026.614135, 1003.100708, 565.569763, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1013.596679, 998.402526, 565.569824, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1007.282165, 1001.152160, 565.559692, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1007.301269, 981.984802, 566.361022, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1017.133850, 1003.283142, 565.569763, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1012.123535, 1006.622985, 565.569824, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1007.285949, 1010.761840, 565.559692, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(3787, 1015.303588, 1006.049621, 564.468933, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19786, 1007.309448, 994.217834, 566.702575, 0.000000, 0.000000, 90.599990, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19380, 1021.275390, 990.461120, 567.361633, 0.000000, 90.800041, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4550, "skyscr1_lan2", "gm_labuld2_b", 0x00000000);
	tmpobjid = CreateDynamicObject(19380, 1021.275756, 1000.030761, 567.391662, 0.000000, 90.800041, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4550, "skyscr1_lan2", "gm_labuld2_b", 0x00000000);
	tmpobjid = CreateDynamicObject(19380, 1021.275756, 1009.620605, 567.391662, 0.000000, 90.800041, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4550, "skyscr1_lan2", "gm_labuld2_b", 0x00000000);
	tmpobjid = CreateDynamicObject(19380, 1010.824768, 1001.191528, 567.367309, 0.000000, 90.800041, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4550, "skyscr1_lan2", "gm_labuld2_b", 0x00000000);
	tmpobjid = CreateDynamicObject(19380, 1010.824768, 1010.811218, 567.367309, 0.000000, 90.800041, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4550, "skyscr1_lan2", "gm_labuld2_b", 0x00000000);
	tmpobjid = CreateDynamicObject(19380, 1010.836364, 991.701538, 568.167541, 0.000000, 90.800041, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4550, "skyscr1_lan2", "gm_labuld2_b", 0x00000000);
	tmpobjid = CreateDynamicObject(19380, 1010.836364, 982.111877, 568.167541, 0.000000, 90.800041, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 4550, "skyscr1_lan2", "gm_labuld2_b", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1016.139587, 991.700012, 569.241149, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1016.139587, 982.060119, 569.241149, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1011.256774, 996.482299, 569.089416, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	tmpobjid = CreateDynamicObject(19462, 1026.483886, 983.917358, 568.179382, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	SetDynamicObjectMaterial(tmpobjid, 0, 10386, "mountainsfs", "ws_stonewall", 0x00000000);
	///////////////////////////////////////////////////////2/////////////////////////
	tmpobjid = CreateDynamicObject(1569, 1026.451171, 988.704589, 563.925842, 0.000000, 0.000000, -90.000022, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1569, 1026.456665, 985.719665, 563.925842, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19375, 1016.943359, 991.382751, 559.415466, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19375, 1016.953796, 981.759338, 559.415466, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(970, 1017.041015, 989.959899, 565.248168, 0.000000, 0.000000, -89.999977, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(970, 1017.042053, 994.079711, 565.248168, 0.000000, 0.000000, -89.999977, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(970, 1014.992858, 996.155456, 565.248229, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19375, 1012.186401, 996.272766, 559.415527, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(970, 1010.869995, 996.162963, 565.248229, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(970, 1006.742736, 996.161499, 565.248229, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(970, 1017.027221, 984.307800, 565.248168, 0.000000, 0.000000, -89.999977, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(16151, 1008.308044, 990.629394, 565.068237, 0.000000, 0.000000, 180.720016, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2188, 1012.806091, 985.711425, 565.692626, 0.000000, 0.000000, 179.759979, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1432, 1012.843811, 989.580993, 564.810607, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1432, 1012.020690, 993.417968, 564.810607, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1432, 1015.598876, 991.484130, 564.810607, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1432, 1014.635375, 994.644653, 564.810607, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(11729, 1018.063659, 1006.287963, 563.933654, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(11729, 1018.739990, 1006.280944, 563.933654, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(11729, 1019.412231, 1006.283142, 563.933654, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(11729, 1020.071533, 1006.280029, 563.933654, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(11729, 1020.769287, 1006.267395, 563.933654, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(11729, 1017.490600, 1005.308593, 563.933715, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(11729, 1017.482055, 1004.488525, 563.933715, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(11729, 1017.476379, 1003.652709, 563.933715, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(11729, 1017.504211, 1002.901977, 563.933715, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2603, 1021.983642, 1005.031250, 564.265991, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2603, 1023.886901, 1005.025329, 564.265991, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2603, 1025.658081, 1005.028320, 564.265991, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2603, 1025.779785, 999.885559, 564.265991, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2603, 1023.866027, 999.912109, 564.265991, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2603, 1022.072143, 999.918884, 564.265991, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19860, 1026.539794, 1001.720397, 565.121093, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1516, 1019.390319, 1003.159545, 563.933776, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1516, 1019.386291, 1004.319519, 563.933776, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(356, 1019.494445, 1003.080871, 564.496887, -84.899978, 76.019989, 187.799987, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(360, 1019.532897, 1004.235961, 564.515991, -97.020011, -13.680000, 100.199989, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2358, 1019.080505, 1003.019592, 564.573181, 0.000000, 0.000000, 116.039993, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(2619, 1017.239257, 1001.432006, 565.980895, 0.000000, 0.000000, 180.000045, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3392, 1007.885742, 1004.927856, 563.932556, 0.000000, 0.000000, 180.120086, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3386, 1007.725952, 1002.558959, 563.932189, 0.000000, 0.000000, 180.000122, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(3395, 1011.965270, 1005.910644, 563.932556, 0.000000, 0.000000, 90.060028, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(16378, 1014.903808, 1000.246826, 564.714050, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1721, 1009.679504, 998.610351, 563.934326, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1721, 1010.332031, 998.624328, 563.934326, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1721, 1011.015930, 998.608764, 563.934326, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1721, 1026.157470, 989.458618, 563.930480, 0.000000, 0.000000, 90.059982, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1721, 1026.202392, 990.178405, 563.930480, 0.000000, 0.000000, 90.059982, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1721, 1026.227661, 990.900451, 563.930480, 0.000000, 0.000000, 90.059982, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1721, 1026.235351, 991.644836, 563.930480, 0.000000, 0.000000, 90.059982, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1713, 1025.827636, 994.595214, 563.931823, 0.000000, 0.000000, -90.059982, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(1713, 1022.201965, 997.788879, 563.931823, 0.000000, 0.000000, 0.000009, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19466, 1019.233093, 998.397094, 567.318420, 0.000000, 0.000000, -89.399993, -1, -1, -1, 300.00, 300.00);
	tmpobjid = CreateDynamicObject(19466, 1008.152648, 998.391540, 567.318420, 0.000000, 0.000000, -89.399993, -1, -1, -1, 300.00, 300.00);
	CreateDynamicObject(1523, 1018.34363, 998.41138, 563.83209,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1523, 1007.26501, 998.44885, 563.83209,   0.00000, 0.00000, 0.00000);
	//mapeo blackmarket
    	
	//- habitaciones east las flores
	new p3;
	p3 = CreateDynamicObject(18981, 1455.85291, -2593.50708, 12.06690,   0.00000, 90.00000, 0.00000, -1, 11, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(p3, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	p3 = CreateDynamicObject(18981, 1456.10400, -2594.02612, 16.44500,   0.00000, 90.00000, 0.00000, -1, 11, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(p3, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	CreateDynamicObject(19461, 1457.31653, -2589.10718, 14.24630,   0.00000, 0.00000, 90.00000, -1, 11, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1457.31763, -2601.19775, 14.24630,   0.00000, 0.00000, 90.00000, -1, 11, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1452.59973, -2590.64624, 14.24630,   0.00000, 0.00000, 0.00000, -1, 11, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1452.59973, -2600.28223, 14.24630,   0.00000, 0.00000, 0.00000, -1, 11, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1461.98145, -2590.64624, 14.24630,   0.00000, 0.00000, 0.00000, -1, 11, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1461.98145, -2600.28223, 14.24630,   0.00000, 0.00000, 0.00000, -1, 11, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1458.03894, -2589.13232, 12.52330,   0.00000, 0.00000, 180.00000, -1, 11, -1, MAX_RADIO_STREAM);
	new p2;
	p2 = CreateDynamicObject(18981, 1466.16956, -2542.34424, 12.06690,   0.00000, 90.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(p2, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	p2 = CreateDynamicObject(18981, 1491.16748, -2542.34424, 12.06690,   0.00000, 90.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(p2, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	p2 = CreateDynamicObject(18981, 1441.17310, -2542.34424, 12.06690,   0.00000, 90.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(p2, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	p2 = CreateDynamicObject(18981, 1491.16748, -2542.34424, 16.44500,   0.00000, 90.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(p2, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	p2 = CreateDynamicObject(18981, 1466.16956, -2542.34424, 16.44500,   0.00000, 90.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(p2, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	p2 = CreateDynamicObject(18981, 1441.17310, -2542.34424, 16.44500,   0.00000, 90.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(p2, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	CreateDynamicObject(1498, 1487.93604, -2548.10571, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1472.09241, -2546.42798, 12.87720,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1223, 1491.57666, -2547.80908, 10.61761,   0.00000, 0.00000, -56.39999, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1289, 1572.92749, -2535.50562, 13.08251,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1287, 1572.50940, -2535.51807, 13.08250,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1286, 1492.83630, -2534.14624, 13.08250,   0.00000, 0.00000, 180.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1432, 1434.35608, -2550.30762, 12.64345,   0.00000, 0.00000, 32.46000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19875, 1469.77344, -2552.13354, 12.54590,   0.00000, 0.00000, 180.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1499.04944, -2547.89355, 14.24630,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1499.04944, -2538.27075, 14.24630,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1495.23987, -2533.99146, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1495.23987, -2552.20313, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1485.60828, -2552.20313, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1475.97717, -2552.20313, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1466.34692, -2552.20313, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1456.72827, -2552.20386, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1447.08789, -2552.20728, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1437.45508, -2552.19971, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1485.60828, -2533.99146, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1475.97717, -2533.99146, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1466.34692, -2533.99146, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1456.72827, -2533.99146, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1447.08789, -2533.99146, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1437.45508, -2533.99146, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1433.07959, -2538.34741, 14.24630,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1433.07959, -2547.96973, 14.24630,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4227, 1499.04321, -2549.35742, 14.28630,   0.00000, 0.00000, -90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1486.96204, -2548.03052, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1486.96204, -2538.57764, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1491.70923, -2543.30347, 14.24630,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1477.33386, -2548.03052, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1477.33386, -2538.57764, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1472.50610, -2543.30347, 14.24630,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1461.03894, -2543.30347, 14.24630,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1441.90503, -2543.30347, 14.24630,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1456.30457, -2548.03052, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1446.68164, -2548.03052, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1456.30457, -2538.57764, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19461, 1446.68164, -2538.57764, 14.24630,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1368, 1492.29871, -2539.99780, 13.26430,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1368, 1492.29871, -2544.36230, 13.26430,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1300, 1492.41150, -2542.13599, 12.91361,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(18665, 1491.82092, -2546.93066, 14.05790,   0.00000, 0.00000, 180.29990, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1481.87402, -2548.10571, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1475.67554, -2548.10571, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1456.89832, -2548.10571, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1443.16858, -2548.10571, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1448.62646, -2548.10571, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1443.38342, -2538.52734, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1449.29077, -2538.52734, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1458.55786, -2538.52734, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1454.33203, -2538.52734, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1474.85962, -2538.52734, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1480.23462, -2538.52734, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1484.96277, -2538.52734, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1489.51440, -2538.52734, 12.52330,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1536, 1472.47546, -2542.52002, 12.53714,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1536, 1461.10107, -2545.93140, 12.53714,   0.00000, 0.00000, 90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19875, 1453.54932, -2552.13354, 12.54590,   0.00000, 0.00000, 180.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19875, 1496.03906, -2534.08228, 12.54590,   0.00000, 0.00000, 180.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19875, 1436.82788, -2534.08228, 12.54586,   0.00000, 0.00000, 180.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1368, 1441.37878, -2546.74048, 13.26430,   0.00000, 0.00000, -90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1368, 1441.37878, -2541.78564, 13.26430,   0.00000, 0.00000, -90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1300, 1441.31128, -2544.25122, 12.91360,   0.00000, 0.00000, -90.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(18661, 1461.16003, -2542.18140, 14.05790,   12.00000, 0.00000, 180.29990, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(18665, 1472.39575, -2539.69995, 14.05790,   -12.00000, 0.00000, 360.24020, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1461.45752, -2540.17896, 12.87720,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1223, 1472.68433, -2548.01318, 10.61761,   0.00000, 0.00000, -201.54008, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1223, 1460.73474, -2538.60376, 10.61761,   0.00000, 0.00000, -3.60009, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1223, 1442.13013, -2538.74292, 10.61761,   0.00000, 0.00000, 152.87993, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(18660, 1441.79822, -2539.87646, 14.05790,   -12.00000, 0.00000, 360.24020, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4227, 1473.08557, -2533.99268, 14.09178,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1433.51550, -2535.39429, 12.87720,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1433.53955, -2538.07007, 12.87720,   0.00000, 0.00000, 0.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1285, 1492.09937, -2534.14624, 13.08250,   0.00000, 0.00000, 180.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1287, 1491.28552, -2534.14624, 13.08250,   0.00000, 0.00000, 180.00000, -1, 10, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1288, 1490.39587, -2534.14624, 13.08250,   0.00000, 0.00000, 180.00000, -1, 10, -1, MAX_RADIO_STREAM);

	//- habitaciones ganton
	p2 = CreateDynamicObject(18981, 1569.89795, -2540.39478, 16.44608,   0.00000, 90.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);//techo
	SetDynamicObjectMaterial(p2, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	p2 = CreateDynamicObject(18981, 1544.92480, -2540.26367, 16.44500,   0.00000, 90.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(p2, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	p2 = CreateDynamicObject(18981, 1569.89795, -2540.39478, 12.06688,   0.00000, 90.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);//piso
	SetDynamicObjectMaterial(p2, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	p2 = CreateDynamicObject(18981, 1544.92480, -2540.26367, 12.06690,   0.00000, 90.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(p2, 0, 19371, "all_walls", "stormdrain3_nt", 0);
	CreateDynamicObject(19456, 1571.91248, -2531.25073, 14.24631,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1553.87878, -2538.86768, 12.61490,   0.00000, 0.00000, 90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1562.38989, -2531.26782, 14.24631,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1576.59875, -2535.83521, 14.24630,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1576.57275, -2545.12305, 14.24630,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1571.94836, -2546.27954, 14.24631,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1562.48938, -2546.29370, 14.24631,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1568.25195, -2535.78711, 14.24631,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19364, 1573.06201, -2537.32715, 14.24630,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19364, 1573.04883, -2540.01367, 14.25898,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1568.31116, -2541.53174, 14.24631,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1558.69177, -2541.53491, 14.24631,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1558.68835, -2535.77466, 14.24631,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19364, 1553.92102, -2537.29126, 14.25898,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19364, 1553.91931, -2539.99219, 14.25898,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1552.96936, -2531.26294, 14.24631,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1552.99951, -2546.28125, 14.24631,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1548.40051, -2541.81958, 14.24630,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19456, 1548.38708, -2532.50562, 14.24630,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1555.23877, -2541.61865, 12.52330,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1560.97803, -2541.60376, 12.52330,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1571.34827, -2541.60669, 12.52330,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1566.19934, -2541.62891, 12.52330,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1573.13281, -2537.90405, 12.52330,   0.00000, 0.00000, 90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1567.33643, -2535.72583, 12.52330,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1561.01965, -2535.73706, 12.52330,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1498, 1555.62927, -2535.71362, 12.52330,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4227, 1576.55444, -2539.17847, 14.28627,   0.00000, 0.00000, -90.06001, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4227, 1534.67871, -2546.28027, 13.90712,   0.00000, 0.00000, -180.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1575.17554, -2531.68628, 12.87717,   0.00000, 0.00000, 90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1553.51575, -2540.27710, 12.87720,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1223, 1548.43079, -2531.26660, 10.61761,   0.00000, 0.00000, -52.14001, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1223, 1548.32971, -2546.25879, 10.61761,   0.00000, 0.00000, 40.26001, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1223, 1576.61572, -2546.35205, 10.61761,   0.00000, 0.00000, 131.70001, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1223, 1576.71289, -2531.32690, 10.61761,   0.00000, 0.00000, 214.02007, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1289, 1572.92749, -2535.50562, 13.08251,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1287, 1572.50940, -2535.51807, 13.08250,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1286, 1572.07324, -2535.51465, 13.08250,   0.00000, 0.00000, 0.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1256, 1574.24841, -2545.88232, 13.19855,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1256, 1555.06787, -2545.91382, 13.19855,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1256, 1559.03540, -2535.36694, 13.19855,   0.00000, 0.00000, -90.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1432, 1549.63550, -2544.92529, 12.64345,   0.00000, 0.00000, 10.44000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(632, 1549.48804, -2531.48779, 12.57872,   0.00000, 0.00000, 5.04000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1256, 1548.79089, -2534.88013, 13.19860,   0.00000, 0.00000, -180.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19875, 1558.63586, -2546.17993, 12.53852,   0.00000, 0.00000, 180.00000, -1, 8, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19875, 1570.66467, -2531.35254, 12.53852,   0.00000, 0.00000, 180.00000, -1, 8, -1, MAX_RADIO_STREAM);

	// VIP Int | By Edinson Walker | 48 Objetos
	new vip;
	vip = CreateDynamicObject(18981, -2312.12012, 176.00507, 40.90909,   0.00000, 90.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	vip = CreateDynamicObject(18981, -2312.12012, 176.00507, 33.84071,   0.00000, 90.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "a51_labs", "ws_trainstationwin1", 0);
	vip = CreateDynamicObject(18981, -2310.21997, 185.58154, 34.33010,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "pagodaroof4", 0);
	vip = CreateDynamicObject(18981, -2306.54492, 168.78226, 34.33010,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "pagodaroof4", 0);
	vip = CreateDynamicObject(18981, -2300.25610, 176.28162, 34.33012,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "walpaper_dragn", 0);
	vip = CreateDynamicObject(18981, -2317.55054, 176.00523, 34.33012,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "walpaper_dragn", 0);
	CreateDynamicObject(14782, -2301.08594, 173.50267, 35.27818,   0.00000, 0.00000, -90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2302.33643, 176.29814, 34.85120,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2303.31592, 175.35020, 34.83290,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(18885, -2304.57178, 169.64328, 35.41940,   0.00000, 0.00000, 180.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2305.49854, 171.11031, 34.83290,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2304.23950, 174.37891, 34.85120,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19125, -2305.56519, 169.54500, 34.53240,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2302.63916, 169.61447, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2299.97900, 169.61218, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19125, -2301.00928, 172.50560, 34.53237,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2315.71436, 184.32672, 34.29805,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1569, -2300.83130, 181.89047, 34.25342,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.95142, 183.70245, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2317.14917, 185.42450, 36.64207,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2300.29199, 185.29639, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2300.25146, 169.14325, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2317.29077, 169.08047, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2312.09448, 184.31015, 34.29810,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91797, 176.08099, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91870, 173.34589, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.93628, 170.60448, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91748, 180.99863, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.89819, 181.89952, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.92456, 186.22101, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.89355, 175.18550, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.90820, 170.87070, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14608, -2313.09473, 171.20479, 35.76169,   0.00000, 0.00000, -44.27999, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2300.75024, 182.61356, 35.94881,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(11725, -2301.32983, 180.70349, 34.72287,   0.00000, 0.00000, -97.25999, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2725, -2312.99316, 182.97859, 34.71739,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2726, -2313.06274, 183.00795, 35.49006,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19128, -2312.42822, 175.15434, 34.32055,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2316.30835, 179.53941, 34.29810,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2316.38892, 175.74800, 34.29810,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3524, -2316.35669, 178.62827, 34.60627,   0.00000, 0.00000, 91.80000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2316.98535, 173.88535, 36.64071,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2317.02515, 183.12483, 36.64071,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2310.48535, 185.00037, 36.64070,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2307.42261, 184.73531, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2304.75415, 184.71144, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2302.06519, 184.70569, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2301.51392, 179.32788, 34.29810,   0.00000, 0.00000, -90.00000, -1, 5, -1, MAX_RADIO_STREAM);

	// CNN Ext | by Edinson Walker | 60 Objetos
	CreateDynamicObject(11544, 733.21167, -1365.43005, 24.45701,   0.00000, 0.00000, 179.79999);
	CreateDynamicObject(11544, 733.28497, -1359.12000, 24.45701,   0.00000, 0.00000, 359.79675);
	CreateDynamicObject(3934, 742.88409, -1371.27698, 24.69221,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3876, 721.75098, -1376.67383, 27.56019,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1694, 719.47748, -1339.83081, 36.57013,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 751.20898, -1330.85742, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 759.44531, -1330.94824, 13.09969,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 755.33008, -1330.90234, 13.09979,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 749.14319, -1332.90100, 13.09540,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 757.37109, -1332.99170, 13.09520,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 753.26263, -1332.95496, 13.09528,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 761.50116, -1333.04150, 13.09509,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(5837, 768.58295, -1332.14124, 14.26333,   0.00000, 0.00000, 177.99500);
	CreateDynamicObject(1223, 761.48291, -1335.24841, 12.53876,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1223, 754.40918, -1361.43262, 11.11260,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 648.04456, -1330.14172, 20.19147,   0.00000, 0.00000, 297.99866);
	CreateDynamicObject(1232, 647.73792, -1348.21631, 20.19147,   0.00000, 0.00000, 297.99316);
	CreateDynamicObject(2921, 781.89844, -1330.33691, 16.26960,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2921, 773.99976, -1384.79834, 16.42263,   0.00000, 0.00000, 186.00000);
	CreateDynamicObject(3522, 755.38379, -1368.49609, 12.59153,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(862, 755.23096, -1370.29395, 12.68120,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 754.36847, -1369.00464, 12.92332,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(859, 755.22089, -1366.68433, 12.68145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(861, 755.28284, -1367.66296, 12.68145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 647.84656, -1367.07043, 20.19147,   0.00000, 0.00000, 297.99316);
	CreateDynamicObject(1232, 647.81659, -1384.33496, 20.19147,   0.00000, 0.00000, 297.99316);
	CreateDynamicObject(1280, 647.23267, -1339.24219, 12.94823,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1280, 647.15228, -1375.67383, 13.07805,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(738, 644.89606, -1366.99109, 12.72225,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(792, 644.88678, -1348.50513, 12.64688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3873, 699.70898, -1355.22559, 28.24851,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(7586, 699.70801, -1355.12500, 49.63910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(10357, 702.12280, -1354.90942, 20.87460,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 678.35925, -1388.48865, 12.70875,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 699.71106, -1388.52637, 12.78964,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 724.66650, -1388.47412, 12.78557,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 675.83221, -1326.12366, 12.76604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 698.34253, -1326.02344, 12.76604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 721.59460, -1326.03455, 12.76604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 738.95190, -1374.79175, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 746.64551, -1367.93359, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 746.58398, -1374.79785, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 739.00482, -1367.96008, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8550, 655.64587, -1357.12720, 25.01492,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 754.41406, -1359.99023, 25.19000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 754.29749, -1384.08496, 25.25653,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 750.94049, -1359.19177, 21.33766,   0.00000, 0.00000, 269.98901);
	CreateDynamicObject(638, 743.58636, -1359.17859, 21.33766,   0.00000, 0.00000, 269.98901);
	CreateDynamicObject(2946, 748.85895, -1359.59802, 20.64063,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2946, 745.69000, -1359.59766, 20.64063,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1215, 740.78064, -1354.32971, 21.20292,   0.00000, 0.00000, 12.00000);
	CreateDynamicObject(1483, 747.22998, -1358.35999, 22.40000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(970, 747.10284, -1330.83691, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 744.99109, -1332.86707, 13.09540,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 742.97632, -1330.78296, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 740.86353, -1332.82605, 13.09540,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 738.83606, -1330.73743, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 736.74249, -1332.77893, 13.09540,   0.00000, 0.00000, 89.35687);
	CreateDynamicObject(1223, 736.72314, -1334.92969, 12.53876,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(717, 785.45599, -1383.00586, 12.78366,   0.00000, 0.00000, 0.06000);

	// CNN Int | By Un Player 2012 | 45 Objetos
	CreateDynamicObject(3494, 1111.9545898438, 1265.6226806641, 13.834089279175, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1100.6721191406, 1257.6921386719, 12.593704223633, 0, 360, 90, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1100.4470214844, 1257.6870117188, 12.593704223633, 0, 360, 90, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1101.2202148438, 1259.3446044922, 12.593704223633, 0, 360, 90, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14570, 1123.7626953125, 1246.51171875, 10.65, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14643, 1107.9813232422, 1266.003, 11.105, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14639, 1108, 1266, 11.130000114441, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1107.4444580078, 1266.6223144531, 12.593704223633, 0, 0, 359.99853515625, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1104.4404296875, 1266.5126953125, 12.593704223633, 0, 2.999267578125, 1.494140625, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1101.357421875, 1260.8046875, 12.593704223633, 0, 3.746337890625, 90.741577148438, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1124.6591796875, 1249.3427734375, 12.593704223633, 0, 0.7305908203125, 91.483154296875, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1108.6279296875, 1242.74, 12.593704223633, 0, 2.2247314453125, 179.97802734375, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1099.689453125, 1243.36328125, 12.593704223633, 0, 0.7196044921875, 179.97253417969, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1100.2064208984, 1249.3635253906, 12.593704223633, 0, 359.97198486328, 89.972442626953, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1100.908203125, 1257.6767578125, 12.593704223633, 0, 0.714111328125, 89.961547851563, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1100.81640625, 1240.3361816406, 12.593704223633, 0, 0.7196044921875, 89.967041015625, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2239, 1119.4477539063, 1256.0649414063, 9.8203125, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2071, 1114.3017578125, 1262.240234375, 11.335710525513, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3494, 1101.5737304688, 1266.3975830078, 13.834089279175, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3494, 1124.2316894531, 1243.8117675781, 13.834089279175, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3494, 1101.2893066406, 1244.0222167969, 13.834089279175, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3935, 1103.462890625, 1264.3916015625, 11, 0, 0, 230.24597167969, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3494, 1112.0048828125, 1253.9541015625, 13.834089279175, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(11411, 1121.6123046875, 1204.333984375, 187.28453063965, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14434, 1126.4398193359, 1259.7183837891, 15.189729690552, 0, 0, 227.25001525879, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14805, 1106.7786865234, 1257.6723632813, 10.5, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, 1103.7802734375, 1262.4442138672, 10.418188095093, 0, 0, 38.25, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, 1105.4312744141, 1263.8988037109, 10.418188095093, 0, 0, 40.498901367188, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2184, 1116.5101318359, 1260.6485595703, 9.8203125, 0, 0, 313.5, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 1118.0439453125, 1261.3361816406, 9.8203125, 0, 0, 316.5, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 1118.7813720703, 1260.6511230469, 9.8203125, 0, 0, 316.49963378906, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2885, 1118.8818359375, 1243.1650390625, 16.531167984009, 0, 0, 0, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, 1115.5650634766, 1266.2930908203, 12.284889221191, 0, 0, 349.5, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, 1119.5104980469, 1264.8681640625, 12.284889221191, 0, 0, 333.7470703125, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, 1121.4139404297, 1263.4202880859, 12.284889221191, 0, 0, 321.74267578125, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, 1122.9835205078, 1261.3603515625, 12.284889221191, 0, 0, 306.74011230469, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, 1124.1115722656, 1258.9637451172, 12.284889221191, 0, 0, 293.98828125, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, 1124.6114501953, 1256.2707519531, 12.284889221191, 0, 0, 279.73315429688, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14391, 1116.6700439453, 1247.9782714844, 10.780397415161, 0, 0, 179.78149414063, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 1114.6756591797, 1245.7924804688, 9.8203125, 0, 0, 86.241943359375, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3031, 1116.3475341797, 1254.9689941406, 11.424069404602, 0, 0, 59.999969482422, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3031, 1113.8498535156, 1258.5340576172, 11.424069404602, 0, 0, 29.996337890625, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14632, 1109.8618164063, 1253.2811279297, 11.319982528687, 0, 0, 180, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 1114.6750488281, 1247.2475585938, 9.8203125, 0, 0, 86.241943359375, -1, 1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 1114.6557617188, 1248.8068847656, 9.8203125, 0, 0, 86.241943359375, -1, 1, -1, MAX_RADIO_STREAM);

	// VIP Ext | By Edinson Walker | 7 Objetos
	CreateDynamicObject(19449, -210.23521, -1742.93494, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19446, 1500.17993, -1580.18250, 14.00400,   90.00000, 90.00000, -90.00000);
	CreateDynamicObject(19446, 1498.47900, -1580.08606, 14.00400,   90.00000, 0.00000, -90.00000);
	CreateDynamicObject(19128, 1498.47705, -1579.97144, 12.50309,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2755, 1498.33606, -1580.19666, 14.13558,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 1497.58850, -1580.27576, 12.54142,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19446, 1496.64233, -1580.22351, 14.00400,   90.00000, 90.00000, -90.00000);

	// Mercado Negro Ext - Int | By Edinson Walker | 50 Objetos
	CreateDynamicObject(18981, 2113.49634, -1999.67468, -0.58289,   0.00000, 0.00000, -50.00000);
	CreateDynamicObject(3050, 2119.14551, -2012.48022, 9.15464,   0.00000, 0.00000, 17.34000);
	CreateDynamicObject(3050, 2127.13770, -2005.59766, 9.15464,   0.00000, 0.00000, 41.34000);
	CreateDynamicObject(3050, 2123.64917, -2008.59717, 9.15464,   0.00000, 0.00000, 75.30000);
	CreateDynamicObject(1271, 2120.17993, -2001.39001, 7.31000,   0.00000, 0.00000, 41.88000);
	CreateDynamicObject(1271, 2119.64990, -2000.79004, 7.31000,   0.00000, 0.00000, 41.88000);
	CreateDynamicObject(3014, 2118.83008, -2000.48999, 7.19000,   0.00000, 0.00000, 41.40000);
	CreateDynamicObject(2359, 2119.04004, -2000.43994, 7.92000,   0.00000, 0.00000, -37.50000);
	CreateDynamicObject(2040, 2118.84009, -2000.34998, 7.80000,   0.00000, 0.00000, 52.92000);
	CreateDynamicObject(2358, 2119.35010, -1999.95996, 7.83000,   0.00000, 0.00000, -26.64000);
	CreateDynamicObject(2041, 2119.76001, -2000.37000, 7.91000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2042, 2119.39990, -1999.94995, 8.03000,   0.00000, 0.00000, -29.94000);
	CreateDynamicObject(2037, 2119.76001, -2000.77002, 7.78000,   0.00000, 0.00000, -39.48000);
	CreateDynamicObject(2038, 2119.76001, -2000.60999, 7.80000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2037, 2119.56006, -2000.78003, 7.78000,   0.00000, 0.00000, 13.50000);
	CreateDynamicObject(1650, 2120.70996, -2002.05005, 8.02000,   0.00000, 0.00000, -115.02000);
	CreateDynamicObject(3016, 2120.82007, -2001.65002, 7.86000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1650, 2120.40991, -2001.96997, 8.02000,   0.00000, 0.00000, -153.66000);
	CreateDynamicObject(3028, 2119.92993, -2001.91003, 7.72000,   98.16000, 46.74000, 0.00000);
	CreateDynamicObject(2358, 2121.06006, -2001.45996, 7.10000,   0.00000, 0.00000, 78.36000);
	CreateDynamicObject(2358, 2120.54004, -2002.04004, 7.08000,   0.00000, 0.00000, 45.30000);
	CreateDynamicObject(2358, 2121.81006, -2001.07996, 7.10000,   0.00000, 0.00000, 219.42000);
	CreateDynamicObject(335, 2120.51001, -2001.70996, 7.70000,   90.78000, 26.40000, 110.52000);
	CreateDynamicObject(3862, 2120.33008, -2000.53003, 8.09000,   0.00000, 0.00000, -45.60000);
	CreateDynamicObject(335, 2120.38989, -2001.40002, 7.70000,   90.78000, 26.40000, 238.74001);
	CreateDynamicObject(335, 2120.35010, -2001.87000, 7.70000,   90.78000, 26.40000, 70.44000);
	CreateDynamicObject(2359, 2121.39990, -2000.66003, 7.19000,   0.00000, 0.00000, -147.48000);
	CreateDynamicObject(2619, 2121.61011, -2000.05005, 8.35000,   2.16000, 1.02000, 44.28000);
	CreateDynamicObject(2619, 2120.65991, -1999.09998, 8.35000,   -18.96000, -0.06000, 44.28000);
	CreateDynamicObject(337, 2111.14990, -2005.28003, 7.33000,   -1.02000, -6.78000, 28.50000);
	CreateDynamicObject(337, 2111.02002, -2004.97998, 7.33000,   -1.02000, -6.78000, 28.50000);
	CreateDynamicObject(18633, 2110.98999, -2005.38000, 7.77000,   -1.20000, 95.64000, 26.94000);
	CreateDynamicObject(18634, 2110.43994, -2005.78003, 7.77000,   -0.30000, -96.12000, -132.42000);
	CreateDynamicObject(3863, 2110.31006, -2006.71997, 8.12000,   0.00000, 0.00000, 114.06000);
	CreateDynamicObject(18635, 2110.82007, -2006.59998, 7.81000,   -88.80000, -76.86000, 0.00000);
	CreateDynamicObject(18635, 2110.88989, -2006.72998, 7.81000,   -88.80000, -76.86000, 66.84000);
	CreateDynamicObject(18633, 2111.56006, -2007.35999, 7.77000,   0.00000, 0.00000, -31.32000);
	CreateDynamicObject(18633, 2111.48999, -2007.37000, 7.77000,   0.00000, 0.00000, -32.82000);
	CreateDynamicObject(1575, 2114.52002, -2010.56006, 7.69000,   -0.30000, 15.72000, 21.78000);
	CreateDynamicObject(3861, 2114.65991, -2011.63000, 8.05000,   0.00000, 0.00000, 136.80000);
	CreateDynamicObject(1575, 2114.17993, -2010.60999, 7.65000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1577, 2115.63086, -2011.59753, 7.65000,   0.00000, 0.00000, -86.04000);
	CreateDynamicObject(18451, 2126.25684, -2010.36853, 7.51649,   0.00000, 0.00000, 70.56002);
	CreateDynamicObject(4227, 2116.98584, -1997.30798, 9.49283,   0.00000, 0.00000, 39.91999);
	CreateDynamicObject(1458, 2123.44482, -2005.02600, 7.20789,   0.00000, 0.00000, -196.80000);
	CreateDynamicObject(2969, 2123.73999, -2002.88000, 7.31000,   0.00000, 0.00000, 46.56000);
	CreateDynamicObject(2969, 2124.12988, -2003.46997, 7.09000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2969, 2123.73999, -2002.88000, 7.10000,   0.00000, 0.00000, 46.56000);
	CreateDynamicObject(2969, 2124.68994, -2003.84998, 7.07000,   0.00000, 0.00000, 63.36000);
	CreateDynamicObject(1438, 2117.82373, -2014.41174, 6.96544,   0.00000, 0.00000, 17.64000);

	//Vallas del canal de desagüe - nexusrp
	CreateDynamicObject(973,1579.9000000,-1757.4000000,13.0000000,0.0000000,0.0000000,90.0000000); //object(sub_roadbarrier) (2)
	CreateDynamicObject(973,1579.9000000,-1751.0000000,13.0000000,0.0000000,0.0000000,90.0000000); //object(sub_roadbarrier) (3)
	CreateDynamicObject(973,1580.5110000,-1771.5000000,12.7500000,0.0000000,358.0000000,93.0000000); //object(sub_roadbarrier) (4)
	CreateDynamicObject(973,1579.9000000,-1757.4000000,13.9000000,0.0000000,0.0000000,90.0000000); //object(sub_roadbarrier) (5)
	CreateDynamicObject(973,1579.9000000,-1751.0000000,13.8900000,0.0000000,0.0000000,90.0000000); //object(sub_roadbarrier) (6)
	CreateDynamicObject(973,1580.5100000,-1771.5000000,13.7000000,0.0000000,357.9950000,92.9990000); //object(sub_roadbarrier) (7)
	CreateDynamicObject(973,1679.0000000,-1788.0000000,12.8000000,0.0000000,0.0000000,269.9950000); //object(sub_roadbarrier) (9)
	CreateDynamicObject(973,1358.7000000,-1722.1000000,13.0000000,0.0000000,0.0000000,180.0000000); //object(sub_roadbarrier) (12)
	CreateDynamicObject(973,1358.7000000,-1722.0900000,13.9000000,0.0000000,0.0000000,179.9950000); //object(sub_roadbarrier) (13)
	CreateDynamicObject(973,1360.0000000,-1722.1000000,13.0000000,0.0000000,0.0000000,179.9950000); //object(sub_roadbarrier) (14)
	CreateDynamicObject(973,1360.0000000,-1722.0800000,13.8900000,0.0000000,0.0000000,179.9950000); //object(sub_roadbarrier) (15)
	CreateDynamicObject(973,1359.9000000,-1684.2000000,13.3000000,0.0000000,0.0000000,0.0000000); //object(sub_roadbarrier) (16)
	CreateDynamicObject(973,1359.9000000,-1684.1900000,14.2000000,0.0000000,0.0000000,0.0000000); //object(sub_roadbarrier) (17)
	CreateDynamicObject(973,1358.8000000,-1684.1900000,13.3000000,0.0000000,0.0000000,0.0000000); //object(sub_roadbarrier) (18)
	CreateDynamicObject(973,1358.8000000,-1684.1800000,14.1900000,0.0000000,0.0000000,0.0000000); //object(sub_roadbarrier) (19)
	CreateDynamicObject(973,1359.7000000,-1618.7000000,13.3000000,0.0000000,0.0000000,180.0000000); //object(sub_roadbarrier) (20)
	CreateDynamicObject(973,1358.4000000,-1618.6900000,13.3000000,0.0000000,0.0000000,179.9950000); //object(sub_roadbarrier) (21)
	CreateDynamicObject(973,1359.7000000,-1618.7000000,14.2000000,0.0000000,0.0000000,179.9950000); //object(sub_roadbarrier) (22)
	CreateDynamicObject(973,1358.4000000,-1618.6900000,14.2000000,0.0000000,0.0000000,179.9950000); //object(sub_roadbarrier) (23)
	CreateDynamicObject(973,1363.6000000,-1592.5000000,13.2000000,0.0000000,0.0000000,344.0000000); //object(sub_roadbarrier) (24)
	CreateDynamicObject(973,1363.6000000,-1592.5000000,14.1000000,0.0000000,0.0000000,343.9980000); //object(sub_roadbarrier) (25)
	CreateDynamicObject(973,1362.4000200,-1592.1099900,13.2000000,0.0000000,0.0000000,344.0000000); //object(sub_roadbarrier) (26)
	CreateDynamicObject(973,1362.4000000,-1592.1000000,14.1200000,0.0000000,0.0000000,343.9980000); //object(sub_roadbarrier) (27)
	CreateDynamicObject(973,1367.5000000,-1573.7000000,13.2000000,0.0000000,0.0000000,164.0000000); //object(sub_roadbarrier) (28)
	CreateDynamicObject(973,1368.6000000,-1574.0000000,13.2000000,0.0000000,0.0000000,163.9980000); //object(sub_roadbarrier) (29)
	CreateDynamicObject(973,1368.6500000,-1573.9000000,13.9000000,0.0000000,0.0000000,163.9980000); //object(sub_roadbarrier) (30)
	CreateDynamicObject(973,1367.4000000,-1573.5400000,13.8900000,0.0000000,0.0000000,163.9980000); //object(sub_roadbarrier) (31)
	CreateDynamicObject(973,1402.4000000,-1450.4000000,13.1000000,0.0000000,0.0000000,0.0000000); //object(sub_roadbarrier) (32)
	CreateDynamicObject(973,1401.2000000,-1450.4000000,13.1000000,0.0000000,0.0000000,0.0000000); //object(sub_roadbarrier) (33)
	CreateDynamicObject(973,1402.4000000,-1450.4000000,13.8000000,0.0000000,0.0000000,0.0000000); //object(sub_roadbarrier) (34)
	CreateDynamicObject(973,1401.1900000,-1450.4000000,13.8000000,0.0000000,0.0000000,0.0000000); //object(sub_roadbarrier) (35)

	// Ayuntamiento Ext | by Un Player 2010 | 49 Objetos
	CreateDynamicObject(1226, 1504.877197, -1736.882934, 16.426883, 0.000000, 0.000000, -90.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, 1484.863403, -1736.882934, 16.426883, 0.000000, 0.000000, -90.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, 1467.689819, -1736.882934, 16.426883, 0.000000, 0.000000, -90.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, 1451.385986, -1736.882934, 16.426883, 0.000000, 0.000000, -90.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(10838, 1481.226440, -1750.957641, 39.503593, 0.000000, 0.000000, -89.999984, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(8397, 1479.464965, -1681.291625, 23.246871, -179.000091, -180.900238, -720.100463, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(640, 1466.453979, -1665.462524, 13.748857, -359.509613, -1.999999, -179.690155, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(640, 1492.224609, -1665.509521, 13.746873, 0.000000, -0.100000, -0.200000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, 1468.342163, -1699.439941, 13.826877, -0.000001, 0.699998, 0.600000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1361, 1468.298950, -1696.698242, 13.796873, 0.000000, 0.000000, -267.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1361, 1468.279907, -1702.252563, 13.796869, 0.000000, 0.000000, 0.600000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, 1488.714477, -1699.098144, 13.827877, -0.410079, 0.000023, -0.000004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1361, 1488.658081, -1701.910034, 13.846874, -2.500000, -0.299998, -406.399200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1361, 1488.689697, -1696.335449, 13.806873, 360.199554, -0.620565, 307.749328, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1364, 1468.516723, -1709.048583, 13.886873, -1.591999, 0.000000, -269.679809, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(982, 1466.66992200, -1737.48706100, 13.23043000, 0, 0, 89.999981280, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(982, 1495.47729500, -1737.48925800, 13.23043000, 0, 0, -89.999981280, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(982, 1466.66418500, -1727.07727100, 13.23043000, 0, 0, 89.999981280, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(982, 1495.30554200, -1727.12695300, 13.23043000, 0, 0, 89.999981280, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1508.50415000, -1739.91247600, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1508.52563500, -1742.29907200, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1508.48754900, -1737.54711900, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1453.63903800, -1737.49414100, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1453.66101100, -1739.92492700, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1453.66931200, -1742.23474100, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1508.30969200, -1727.05542000, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1508.25805700, -1724.13305700, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1453.63818400, -1727.08581500, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1453.56311000, -1724.17895500, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1508.22204600, -1721.37829600, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1214, 1453.52661100, -1721.40271000, 12.54088600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1257, 1429.00903300, -1741.30810500, 13.82606700, 0, 0, -89.99998128, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1342, 1487.54370100, -1709.58252000, 14.08056800, 0, 0, -179.99996255, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(8843, 1480.69018600, -1734.49389600, 12.38276600, 0, 0, -89.99998128, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(8843, 1480.53710900, -1730.04406700, 12.38276600, 0, 0, 89.99998128, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1492.16516100, -1751.54089400, 15.14234600, 0, 0, -89.99998128, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1486.57580600, -1751.55139200, 15.14234600, 0, 0, -89.99998128, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1475.61254900, -1751.57775900, 15.14234600, 0, 0, -89.99998128, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1470.13769500, -1751.54724100, 15.14234600, 0, 0, -89.99998128, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1469.97326700, -1759.87085000, 17.22828300, 0, 0, -89.99998128, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1492.47021500, -1759.88391100, 17.22828300, 0, 0, -89.99998128, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1551.10156300, -1672.41613800, 15.56120900, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1551.07373000, -1678.82873500, 15.58620800, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1546.50573700, -1672.46130400, 13.88464500, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1546.48291000, -1678.73571800, 13.85964600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1497.29235800, -1750.05432100, 15.00963600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1465.04834000, -1750.06726100, 15.00963600, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1484.78051800, -1772.23620600, 18.36007900, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1477.35937500, -1772.21044900, 18.36007900, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);

	//- Trabajo camionero | By Edinson Walker | 11 Objetos
	CreateDynamicObject(717, 2421.37012, -2081.01270, 12.71183,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 2422.03711, -2097.62891, 12.71183,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1684, 2426.90503, -2112.05518, 13.99277,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1232, 2428.79932, -2107.21509, 13.26234,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1364, 2426.25952, -2102.92749, 13.29314,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1568, 2424.36816, -2080.06616, 12.50528,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1568, 2424.33032, -2099.17065, 12.50528,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1568, 2449.07715, -2101.66602, 12.52106,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1568, 2472.17480, -2101.76831, 12.52106,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1568, 2496.68506, -2101.69653, 12.52106,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1568, 2520.12964, -2101.64722, 12.52106,   0.00000, 0.00000, 0.00000);
	//
	CreateDynamicObject(978, 2408.51001, -2135.92993, 13.35000,   0.00000, 0.00000, 270.20001);
	CreateDynamicObject(978, 2408.53003, -2125.20996, 13.35000,   0.00000, 0.00000, 270.20001);
	CreateDynamicObject(978, 2408.43994, -2114.62988, 13.35000,   0.00000, 0.00000, 270.20001);
	CreateDynamicObject(978, 2408.37988, -2104.32007, 13.35000,   0.00000, 0.00000, 270.20001);
	CreateDynamicObject(978, 2408.31006, -2093.93994, 13.35000,   0.00000, 0.00000, 270.20001);
	CreateDynamicObject(978, 2408.22998, -2083.37988, 13.35000,   0.00000, 0.00000, 270.20001);
	CreateDynamicObject(978, 2408.20996, -2073.33008, 13.35000,   0.00000, 0.00000, 270.20001);
	CreateDynamicObject(978, 2408.15991, -2063.02002, 13.35000,   0.00000, 0.00000, 270.20001);
	CreateDynamicObject(978, 2413.84009, -2141.87988, 13.35000,   0.00000, 0.00000, 359.35999);
	CreateDynamicObject(978, 2421.29004, -2137.77002, 13.35000,   0.00000, 0.00000, 419.42001);
	CreateDynamicObject(3722, 2181.42554, -1981.38647, 16.86720,   3.14000, 0.00000, -89.76000);

	//- Fabrica + negocio | By Edinson Walker | 7 objetos
	CreateDynamicObjectEx(1533, 622.52405, 1225.68018, 10.67059,   0.00000, 0.00000, -59.94001,1000.000,1000.000);
	CreateDynamicObjectEx(1533, 621.76257, 1226.93848, 10.67059,   0.00000, 0.00000, -59.94001,1000.000,1000.000);
	CreateDynamicObjectEx(1568, 623.40692, 1223.71777, 10.58137,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(638, 620.75806, 1227.96863, 11.35501,   0.00000, 0.00000, 30.65999,1000.000,1000.000);
	CreateDynamicObjectEx(1568, 619.97693, 1229.50708, 10.58137,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1504, 589.42957, 1231.96130, 10.67465,   0.00000, 0.00000, 29.94001,1000.000,1000.000);
	CreateDynamicObjectEx(1568, 591.41644, 1232.82788, 10.64983,   0.00000, 0.00000, 0.00000,1000.000,1000.000);

	// Parking Ayuntamiento Ext | by Un Player | 29 Objetos
	CreateDynamicObject(1233, 1760.712890, -1703.806640, 13.999656, 0.000000, 0.000000, 270.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(8407, 1759.801147, -1696.069946, 13.926782, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 1760.415649, -1694.674438, 12.431350, 0.000000, 0.000000, 270.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(997, 1757.726440, -1686.241088, 12.496453, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(997, 1757.636230, -1706.022705, 12.513443, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1758.261718, -1696.066772, 12.486967, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1231, 1757.457885, -1686.228637, 15.234344, 0.000000, 0.000000, 268.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1231, 1757.309570, -1705.977539, 15.251253, 0.000000, 0.000000, 87.989501, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1290, 1761.366088, -1695.887207, 15.000000, 0.000000, 0.000000, 270.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 1760.415039, -1697.449951, 12.431350, 0.000000, 0.000000, 90.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1759.355834, -1686.723266, 13.149484, 0.000000, 0.000000, 90.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1759.238647, -1705.460937, 13.173467, 0.000000, 0.000000, 270.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(18014, 1768.739379, -1704.993652, 12.904925, 0.000000, 0.000000, 90.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(18014, 1789.099487, -1705.031005, 12.904925, 0.000000, 0.000000, 90.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1223, 1778.787109, -1705.353515, 12.523742, 0.000000, 0.000000, 93.999023, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, 1798.859985, -1703.989990, 14.230421, 0.000000, 0.000000, 49.998779, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1760.383789, -1704.794921, 13.013949, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1760.408203, -1687.358642, 12.987615, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1290, 1797.464843, -1696.687500, 18.549365, 0.000000, 0.000000, 272.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, 1798.917968, -1693.704101, 14.222685, 0.000000, 0.000000, 49.998779, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(8674, 1804.234497, -1722.292358, 14.016066, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(8674, 1798.890014, -1717.130004, 14.008999, 0.000000, 0.000000, 92.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(737, 1805.132324, -1703.090820, 12.600000, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(737, 1805.172851, -1717.090820, 12.600000, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1280, 1793.017822, -1705.042358, 12.928818, 0.000000, 0.000000, 270.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1280, 1764.819458, -1705.093139, 12.863092, 0.000000, 0.000000, 269.994995, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1232, 1790.909790, -1686.569458, 15.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1232, 1770.192626, -1686.642700, 15.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1779.264648, -1687.367187, 12.983853, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);

	// Motel Ext - Int | by Un Player | 4 Objetos
	CreateObjectEx(3596, -333.24868800, -888.47235100, 50.13629500, 0, 0, 157.49996723, MAX_RADIO_STREAM); // Motel
	CreateDynamicObject(3051, 966.39483642578, -52.608592987061, 1001.4867553711, 0, 0, 45.75, -1, -1, -1, MAX_RADIO_STREAM); // PUERTA INTERIOR Motel
	CreateDynamicObject(3051, 966.40460205078, -53.733352661133, 1001.4867553711, 0, 0, 226.97766113281, -1, -1, -1, MAX_RADIO_STREAM); // PUERTA INTERIOR Motel
	CreateDynamicObject(3051, 966.38757324219, -53.166976928711, 1003.3112182617, 40.500152587891, 270, 89.7275390625, -1, -1, -1, MAX_RADIO_STREAM); // PUERTA INTERIOR Motel

	// Peaje LS a SF | by Un Player | 12 Objetos
	CreateDynamicObject(10829, 53.38740500, -1530.82275400, 4.23331200, 0, 0, 261.40569149, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, 49.49018100, -1535.80004900, 5.10075600, 0, 0, -7.81222224, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, 56.90186300, -1528.36621100, 4.94125500, 0, 0, -189.53111547, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 52.45056900, -1536.86682100, 4.13187900, 0, 0, 82.18770174, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 53.85026600, -1527.02954100, 4.04501200, 0, 0, -97.81226081, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 52.71272300, -1535.98632800, 4.11685200, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 53.69006300, -1527.92981000, 4.05946000, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(981, 53.37887600, -1532.02929700, 5.17495900, 0, 0, -7.81222224, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 58.17239400, -1529.47949200, 7.76852800, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 57.22160700, -1535.73974600, 7.76852800, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 48.21346300, -1534.41394000, 7.79353100, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 49.14834200, -1528.10168500, 7.76852800, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);

	// PEAJE TUNEL LS-SF | by Un Player | 30 Objetos
	CreateDynamicObject(3881, 21.725189208984, -1337.69921875, 10.884397506714, 0, 0, 127.99624633789, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1229, 0.81767272949219, -1350.5227050781, 11.182644844055, 0, 358, 326, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1229, 29.807426452637, -1305.7475585938, 13.680694580078, 0, 0, 137.99819946289, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 5.8136596679688, -1318.0822753906, 10.491556167603, 0, 0, 308, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3881, 8.0947265625, -1319.5322265625, 12.374582290649, 2, 0, 307.99072265625, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 24.058776855469, -1339.3756103516, 9.0782928466797, 0, 0, 127, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1.1815948486328, -1312.3275146484, 10.625079154968, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 0.63788604736328, -1311.6704101563, 10.62234210968, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 7.8622055053711, -1323.7741699219, 10.51996421814, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 8.9713439941406, -1325.1451416016, 10.524433135986, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 8.4533996582031, -1324.4155273438, 10.525453567505, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 12.862800598145, -1319.7994384766, 10.892798423767, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 13.341445922852, -1320.4438476563, 10.892894744873, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 13.875946044922, -1321.0935058594, 10.895431518555, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 21.994239807129, -1333.2845458984, 9.296199798584, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 21.4658203125, -1332.6513671875, 9.2857971191406, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 20.924598693848, -1331.9898681641, 9.2833709716797, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 16.800422668457, -1337.3845214844, 9.1594905853271, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 16.252136230469, -1336.7543945313, 9.1571731567383, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 15.767974853516, -1336.1346435547, 9.1540622711182, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 4.6870498657227, -1321.0655517578, 11.051753044128, 0, 0, 37.997192382813, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 25.096939086914, -1336.2210693359, 9.8576593399048, 0, 0, 38, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 12.970481872559, -1318.7416992188, 12.179617881775, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 10.357467651367, -1315.0864257813, 12.215191841125, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 11.637405395508, -1316.7788085938, 12.200326919556, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 19.141761779785, -1341.8201904297, 10.481678009033, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 16.424407958984, -1338.3818359375, 10.577231407166, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 17.670070648193, -1339.9815673828, 10.537045478821, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 28.550834655762, -1345.267578125, 9.2166137695313, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 29.104434967041, -1346.00390625, 9.2180452346802, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);

	// Peaje SF segunda parte | by Un Player | 48 Objetos
	CreateDynamicObject(3512, -1807.288940, -565.044372, 14.772957, 2.500000, 0.100000, 142.600036, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1796.270141, -564.775085, 15.135938, 0.000000, 0.000000, 185.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1786.097778, -564.944946, 15.335949, 0.000000, 0.000000, -179.890014, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1776.341308, -564.976196, 15.025930, -0.100000, 0.000000, -180.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.991821, -595.136108, 15.333843, -0.100000, 0.000000, -355.800048, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1776.374145, -595.055969, 15.014341, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1796.064208, -595.140747, 15.266344, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1786.323852, -595.143005, 15.289156, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1829.222045, -595.235717, 15.485933, 0.099999, 0.000000, -0.200000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1841.366088, -595.353149, 18.134471, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1853.167480, -595.198364, 20.320365, 0.000000, 0.000000, 20.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1866.774169, -595.183044, 22.795808, 0.000000, 0.000000, 10.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1829.533813, -564.717163, 15.450329, 0.000000, 0.000000, -169.990005, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1842.357910, -564.784545, 18.037948, 0.000000, 0.000000, -170.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1866.210693, -564.681152, 22.782173, 0.019998, -0.009998, -170.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1853.807373, -564.632263, 20.866249, 0.000000, 0.009998, -180.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1808.151489, -554.086608, 14.988426, 0.000000, 0.000000, 70.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1828.740234, -607.135131, 15.485115, 0.000000, 0.000000, -97.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1830.299804, -554.086242, 14.863436, 0.000000, 0.000000, -60.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1828.465820, -618.333190, 15.637722, 0.000000, 0.000000, -101.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1809.508178, -544.486206, 14.623051, 0.000000, 0.000000, 90.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1831.618164, -544.486267, 14.668955, 0.000000, 0.000000, -70.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1828.104003, -628.938232, 15.810362, 0.000000, 0.000000, -80.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.991821, -607.135131, 15.430706, 0.000000, 0.000000, 100.040008, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.991088, -617.812316, 15.495907, 0.000000, 0.000000, 100.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.991210, -628.938781, 15.870945, -1.000000, -0.300000, 79.700004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(13640, -1751.605590, -705.459655, 26.239706, -1.059998, -9.029978, -63.389858, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(13640, -1756.967651, -708.122436, 26.375986, -1.500000, -8.729998, -64.809928, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1752.835693, -674.303894, 25.930097, -3.599998, 0.000000, 4.099998, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1769.772338, -675.065917, 26.072746, 3.000000, -0.200000, 183.499969, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1769.035766, -686.239624, 27.718904, 0.500020, 0.999998, -171.620117, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1752.290527, -683.768859, 27.313936, 0.000000, 0.000000, 9.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1750.546020, -692.530090, 28.927730, -2.000000, -1.000000, 19.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1766.332885, -698.618103, 29.586671, 2.900000, 0.000000, 200.899993, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1747.967895, -702.537475, 31.210563, -4.000000, 0.000000, 26.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1762.455322, -709.418701, 31.464319, 4.500000, -0.299997, -153.090042, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3863, -1740.162841, -568.766723, 16.635938, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3862, -1735.316894, -568.750366, 16.635938, 0.000000, 0.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -1759.822387, -658.516967, 19.700702, 3.100000, 2.100000, -182.100006, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1341, -1733.520751, -591.238281, 16.395324, -0.100000, -0.000000, -270.100006, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -1761.518066, -658.625671, 19.533575, -8.600000, 2.000000, -0.900000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -1759.564697, -658.349487, 20.464641, -1.000000, 4.400000, 86.099983, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -1762.313476, -658.651977, 20.462463, -2.099999, -7.399999, -97.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1278, -1761.160522, -661.169189, 10.152952, -2.119999, 0.019999, -2.890020, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(689, -1782.079467, -668.098022, 22.252614, 4.800000, -2.000000, -189.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(683, -1787.410278, -648.303344, 19.924051, 0.510000, 1.599999, -435.800048, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1731.937377, -750.672546, 36.584953, -0.599999, 0.600000, 4.099999, -1, -1, -1, MAX_RADIO_STREAM);

	// PEAJE SF | by Un Player | 26 Objetos
	CreateDynamicObject(4100, -1761.276733, -709.357849, 29.065689, 174.899276, 893.901367, -286.697875, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(690, -1790.693359, -682.899291, 19.724456, 0.200000, 0.000000, 27.199951, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(9623, -1760.566772, -658.931396, 22.545537, -7.269996, -0.319999, -361.540191, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(683, -1795.819213, -655.490844, 20.392150, 0.000000, 0.000000, 90.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(690, -1778.964233, -639.420593, 17.294948, 0.000000, 0.000000, 625.080139, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1747.408325, -703.278991, 28.935468, -187.169998, -186.380004, -286.750122, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1751.466064, -689.693176, 26.330606, -9.455986, 6.595993, 61.900115, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1765.752685, -696.392395, 26.967699, 6.599997, -6.499997, -114.299964, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1768.564331, -682.444824, 24.692520, -7.799986, 4.899998, 58.399948, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1752.645751, -676.150878, 23.876680, -9.000000, 4.899999, -309.500030, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, -1770.014282, -674.625549, 22.864875, -7.899997, 4.099996, 3.609998, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1361, -1769.984497, -672.340881, 22.541616, 3.589920, -8.599974, -145.700012, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, -1769.865356, -670.023071, 22.198516, -7.500000, 4.000000, -362.799224, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(983, -1752.282714, -666.517944, 21.666206, 367.999603, 3.799436, 175.149291, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(983, -1769.719360, -665.449584, 21.598058, -6.699998, -1.000000, -2.489896, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1755.420898, -605.391906, 19.384372, 0.000000, 0.000000, -361.399902, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1768.171997, -604.605895, 19.252986, 0.400001, -1.400009, -183.069900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1754.196777, -618.606933, 20.021398, -0.500000, 0.000000, -1.799865, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1768.311523, -618.626403, 19.855361, 0.220001, -1.300000, 180.409988, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1767.969482, -630.605041, 20.967771, 179.119857, 178.999908, -0.089996, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1753.818969, -630.645568, 20.836133, 0.000000, 0.000000, 1.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1753.864257, -645.164489, 22.188409, 0.000000, -1.000000, -2.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1767.699218, -643.656250, 22.062906, 0.000000, 0.000000, 175.100006, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1425, -1760.717651, -648.318725, 18.793287, 1.500000, 0.099999, 178.599853, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1425, -1761.397827, -669.678283, 21.588069, -6.849999, 0.400000, -2.000000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1278, -1761.160522, -661.169189, 10.152952, -2.119999, 0.019999, -2.890020, -1, -1, -1, MAX_RADIO_STREAM);

	// OTROS PAISAJES LS - SF | by Un Player | 21 Objetos
	CreateDynamicObject(624, -157.10893200, -1416.48730500, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -160.80497700, -1393.60376000, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -162.71316500, -1370.66857900, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -161.72607400, -1346.89636200, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -160.08486900, -1323.20019500, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -157.84442100, -1299.03161600, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(7595, -126.32838400, -1222.41723600, 3.71471100, 0, 0, -14.76506508, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(7595, -137.60986300, -1415.79858400, 3.71471100, 0, 0, 15.54715248, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(7595, -114.72329700, -1463.70532200, 3.71471100, 0, 0, 36.32833170, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -120.85666700, -1502.96057100, 8.50689300, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -106.24447600, -1345.55786100, 7.58680700, 0, 0, -101.25000758, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -54.91997100, -1088.66503900, 10.02390700, 0, 0, -101.25000758, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -146.34655800, -1139.85803200, 7.56457900, 0, 0, -101.25000758, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(16777, -312.20611600, -879.20336900, 46.19380600, 0, 0, -22.49999532, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -321.80581700, -879.71093800, 49.40503300, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -324.20513900, -878.81939700, 49.01303100, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -332.60559100, -875.14221200, 49.29985000, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -335.84845000, -874.01001000, 49.39725500, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -318.56030300, -878.86377000, 47.40609000, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -337.35534700, -870.91387900, 47.22341900, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -131.24736000, -951.70269800, 27.37740700, 0, 0, -112.49997660, -1, -1, -1, MAX_RADIO_STREAM);

	// Trabajo Carguero | By Edinson Walker | 6 Objetos
	CreateDynamicObject(3630, 2221.27808, -2286.73950, 15.19218, 0.00000, 0.00000, 43.92002);
	CreateDynamicObject(3574, 2187.30566, -2297.99097, 15.23288, 0.00000, 0.00000, 44.58000);
	CreateDynamicObject(3630, 2197.31274, -2219.38672, 15.60193, 0.00000, 0.00000, -45.18001);
	CreateDynamicObject(3630, 2189.92603, -2226.58301, 15.60193, 0.00000, 0.00000, -45.18001);
	CreateDynamicObject(3630, 2204.87305, -2212.06567, 15.60193, 0.00000, 0.00000, -45.18001);
	CreateDynamicObject(3630, 2211.88721, -2205.31030, 15.60193, 0.00000, 0.00000, -45.18001);

	// Casino Ext | By Desconocido | 50 Objetos
	CreateDynamicObject(7315, 1310.10803, -1335.05005, 30.34462, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 1306.42053, -1372.10107, 13.29847, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 1313.84070, -1372.05042, 13.30332, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1307.02710, -1383.83582, 13.27290, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1307.08813, -1380.28052, 13.22501, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1307.11707, -1376.52087, 13.17261, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1307.07410, -1372.82336, 13.12385, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1306.99109, -1369.21167, 13.07622, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1313.26050, -1383.79980, 13.28011, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1313.30701, -1380.63232, 13.23464, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1313.30273, -1376.64038, 13.18200, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1313.23901, -1372.79626, 13.13130, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1313.25818, -1369.03516, 13.08171, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1302.30847, -1384.94348, 13.34524, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1317.91455, -1384.93958, 13.45719, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 1287.37378, -1371.94580, 13.31286, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 1332.47986, -1371.96167, 13.39501, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1325.23364, -1384.79285, 13.44418, 0.00000, 0.00000, 271.99951);
	CreateDynamicObject(2773, 1310.09351, -1384.85535, 13.28277, 0.00000, 0.00000, 270.74951);
	CreateDynamicObject(646, 1312.23206, -1366.96814, 13.93383, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(646, 1307.87683, -1366.93616, 13.92502, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1294.76709, -1384.90283, 13.30326, 0.00000, 0.00000, 270.74707);
	CreateDynamicObject(870, 1321.24231, -1383.05737, 13.85229, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1321.31958, -1380.71729, 13.82829, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1321.36768, -1378.02759, 13.80070, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1321.42407, -1375.37695, 13.77352, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1321.37634, -1373.12427, 13.75041, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1298.89429, -1383.05688, 13.72650, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1298.87634, -1380.51184, 13.72650, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1298.88184, -1377.78284, 13.72650, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1298.87769, -1375.40247, 13.72650, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1298.86401, -1373.57397, 13.72650, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1291.01794, -1383.13440, 13.72650, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1291.03967, -1381.15063, 13.72650, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1291.08447, -1378.96228, 13.72650, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1291.11157, -1376.56213, 13.72650, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1329.16309, -1383.07593, 13.85248, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1329.14612, -1380.82227, 13.82937, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1329.21216, -1378.36560, 13.80417, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1329.19275, -1375.90906, 13.77897, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1329.21814, -1373.23682, 13.75157, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1291.01135, -1373.58606, 13.72650, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3660, 1304.90491, -1375.37842, 15.29981, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3660, 1314.72974, -1375.29871, 15.30014, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(6965, 1325.20874, -1377.41174, 15.32215, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(6965, 1295.08472, -1377.67749, 15.35001, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1280, 1321.36768, -1367.52344, 12.96872, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1280, 1329.25818, -1367.52026, 12.96852, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1280, 1298.77551, -1367.61560, 12.97518, 0.00000, 0.00000, 90.50000);
	CreateDynamicObject(1280, 1291.28979, -1367.61108, 12.97493, 0.00000, 0.00000, 90.49988);

	// Rejas vías del tren debajo del vip | By Edinson Walker | 14 Objetos
	CreateDynamicObject(970, 850.40, -1392.67, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 845.85, -1388.55, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 841.92, -1384.99, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 836.89, -1380.43, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 832.98, -1376.85, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 827.97, -1372.22, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 824.12, -1368.70, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 810.35, -1355.69, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 806.60, -1352.27, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 801.66, -1347.68, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 797.81, -1344.15, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 792.84, -1339.48, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 788.95, -1335.98, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 784.07, -1331.50, -0.98, 0.00, 0.00, -42.36);

	//- Hospital Hollywood | By Bradley | 11 Objetos
	CreateDynamicObject(3928, 1161.63867, -1320.49695, 30.49780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3928, 1161.71204, -1300.93469, 30.61580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3578, 1112.84229, -1291.60425, 13.36130,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3578, 1142.68127, -1347.45032, 13.36130,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3578, 1123.13721, -1291.60425, 13.36130,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(966, 1131.03235, -1291.36438, 12.51630,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3578, 1144.88135, -1291.46216, 13.36130,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3578, 1152.97717, -1347.46338, 13.36130,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1498, 1150.05762, -1297.78979, 12.57600,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1498, 1160.68872, -1330.49524, 30.42221,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11008, 1099.08643, -1189.92358, 23.40820,   0.00000, 0.00000, 269.81992);

	// Trabajo Granjero | Edinson Walker | 1 Objeto
	CreateDynamicObject(1522, -383.50250, -1438.09363, 25.28196, 0.00000, 0.00000, -89.88002);

	//Paso autopista | By Logan | 26 Objetos
	CreateDynamicObject(1698, 1052.56140137, -1844.63635254, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (1)
	CreateDynamicObject(1698, 1052.56054688, -1847.93579102, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (2)
	CreateDynamicObject(1698, 1052.56054688, -1851.23559570, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (3)
	CreateDynamicObject(1698, 1052.56054688, -1854.23535156, 12.48390198, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (4)
	CreateDynamicObject(1698, 1052.56054688, -1857.53540039, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (5)
	CreateDynamicObject(1698, 1053.90551758, -1844.63574219, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (6)
	CreateDynamicObject(1698, 1053.91052246, -1847.93554688, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (7)
	CreateDynamicObject(1698, 1053.90051270, -1851.23535156, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (8)
	CreateDynamicObject(1698, 1053.90051270, -1854.23535156, 12.48390198, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (9)
	CreateDynamicObject(1698, 1053.90051270, -1857.53515625, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (10)
	CreateDynamicObject(1698, 1054.90527344, -1844.63574219, 12.48190212, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (11)
	CreateDynamicObject(1698, 1054.91015625, -1847.93554688, 12.48290253, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (12)
	CreateDynamicObject(1698, 1054.90039062, -1851.23535156, 12.48690224, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (13)
	CreateDynamicObject(1698, 1054.90039062, -1854.23535156, 12.48190212, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (14)
	CreateDynamicObject(1698, 1054.90039062, -1857.53515625, 12.48490238, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (15)
	CreateDynamicObject(1283, 1055.66955566, -1854.27990723, 15.47527790, 0.00000000, 0.00000000, 270.00000000); //object(mtraffic1) (1)
	CreateDynamicObject(1215, 1052.10522461, -1859.23962402, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (1)
	CreateDynamicObject(1215, 1055.42968750, -1842.87402344, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (2)
	CreateDynamicObject(1215, 1051.96875000, -1842.81640625, 13.13820648, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (3)
	CreateDynamicObject(1215, 1055.33630371, -1859.27746582, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (4)
	CreateDynamicObject(1215, 1053.69738770, -1859.27380371, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (5)
	CreateDynamicObject(1233, 1052.94128418, -1859.45385742, 14.12999249, 0.00000000, 0.00000000, 180.00000000); //object(noparkingsign1) (1)
	CreateDynamicObject(1214, 1055.34387207, -1851.12438965, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (1)
	CreateDynamicObject(1214, 1054.34375000, -1851.12402344, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (2)
	CreateDynamicObject(1214, 1053.34375000, -1851.12402344, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (3)
	CreateDynamicObject(1214, 1052.34375000, -1851.12402344, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (4)

	//- Pescador + Puerto | by Edinson Walker | 64 objetos
	CreateObject(18981, 2796.71777, -2574.34961, 1.46670,   0.00000, 90.00000, 90.05999);
	CreateObject(18981, 2772.75903, -2574.36133, 1.44997,   0.00000, 90.00000, 90.00000);
	CreateDynamicObjectEx(982, 2740.03345, -2562.23511, 13.30185,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1278, 2752.69238, -2561.69775, 9.03240,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(982, 2773.55420, -2562.23975, 13.30185,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(982, 2794.33765, -2562.22656, 13.30185,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1278, 2760.71240, -2561.63428, 9.03240,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(982, 2807.15112, -2549.39087, 13.30180,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(982, 2807.15967, -2523.76294, 13.30180,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(982, 2807.15942, -2498.16333, 13.30180,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(967, 2763.79639, -2514.57617, 12.66170,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(983, 2771.00464, -2514.52319, 13.30180,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(983, 2774.22510, -2509.73096, 13.30180,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(966, 2762.82617, -2513.86548, 12.52060,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1232, 2755.44287, -2514.02734, 13.92930,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(983, 2767.80127, -2514.53516, 13.30180,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(983, 2774.21265, -2511.32617, 13.30180,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(968, 2762.81079, -2513.93164, 13.31720,   0.00000, -26.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(995, 2804.35010, -2507.11938, 13.25016,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(3627, 2798.96387, -2540.62061, 16.29110,   0.00000, 0.00000, 180.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1232, 2807.21582, -2562.23682, 14.63261,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1232, 2807.15649, -2507.77661, 14.63261,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(3620, 2779.46143, -2512.35254, 25.14360,   0.00000, 0.00000, -90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1607, 2764.97217, -2512.54858, 27.89170,   90.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(3577, 2749.46484, -2559.52954, 13.30744,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(18981, 2796.72021, -2586.36475, -10.56528,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(18981, 2808.72827, -2574.35010, -10.56530,   0.00000, 0.00000, 180.06000,1000.000,1000.000);
	CreateDynamicObjectEx(18981, 2772.75146, -2586.37012, -10.56528,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(18981, 2760.74219, -2574.35938, -10.56530,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(3043, 2768.08960, -2584.30518, 3.43103,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(11469, 2786.24487, -2565.31104, 1.99874,   0.00000, 0.00000, -90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1536, 2795.13110, -2569.41821, 1.97412,   0.00000, 0.00000, 52.37999,1000.000,1000.000);
	CreateDynamicObjectEx(902, 2796.51172, -2566.01123, 3.39950,   0.00000, 90.00000, -2.87999,1000.000,1000.000);
	CreateDynamicObjectEx(3886, 2813.13916, -2569.23022, 0.97596,   0.00000, 0.00000, -90.30003,1000.000,1000.000);
	CreateDynamicObjectEx(3886, 2823.61548, -2569.27881, 0.97596,   0.00000, 0.00000, -90.30003,1000.000,1000.000);
	CreateDynamicObjectEx(3886, 2830.86499, -2571.33228, 1.03461,   0.00000, 0.00000, -359.69995,1000.000,1000.000);
	CreateDynamicObjectEx(3886, 2830.90845, -2581.80396, 1.03461,   0.00000, 0.00000, -359.69995,1000.000,1000.000);
	CreateDynamicObjectEx(3886, 2830.96436, -2592.27856, 1.03461,   0.00000, 0.00000, -359.69995,1000.000,1000.000);
	CreateDynamicObjectEx(3886, 2831.01294, -2602.73657, 1.03461,   0.00000, 0.00000, -359.69995,1000.000,1000.000);
	CreateDynamicObjectEx(1608, 2791.07568, -2583.98804, 11.70770,   90.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(3620, 2778.85645, -2575.47949, 11.26760,   0.00000, 0.00000, 57.17342,1000.000,1000.000);
	CreateDynamicObjectEx(2669, 2752.24780, -2551.18799, 13.90114,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(2433, 2752.05054, -2551.58960, 12.67408,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(2894, 2752.12891, -2551.07104, 13.69245,   0.00000, 0.00000, 77.93999,1000.000,1000.000);
	CreateDynamicObjectEx(2406, 2754.92480, -2550.06470, 13.58701,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1885, 2754.58154, -2553.08936, 12.59276,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1885, 2794.15771, -2570.64087, 1.94893,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(12925, 2756.08105, -2540.95190, 12.64330,   0.00000, 0.00000, -180.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1232, 2755.61035, -2536.57837, 13.92930,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1232, 2755.43506, -2545.32007, 13.92930,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(3576, 2757.26343, -2531.49292, 14.11383,   0.00000, 0.00000, 180.00000,1000.000,1000.000);
	CreateDynamicObjectEx(982, 2796.35034, -2586.78931, 2.64097,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(982, 2773.99854, -2586.78442, 2.64097,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(984, 2809.18042, -2580.38892, 2.6128,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(984, 2809.17798, -2578.81104, 2.6128,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(19075, 2798.53467, -2583.18750, 3.45666,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1609, 2797.37598, -2583.37915, 2.24079,   0.00000, 0.00000, -15.96000,1000.000,1000.000);
	CreateDynamicObjectEx(1609, 2799.55493, -2583.60596, 2.24079,   0.00000, 0.00000, 12.42000,1000.000,1000.000);
	CreateDynamicObjectEx(1231, 2795.34570, -2585.70728, 4.55984,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	CreateDynamicObjectEx(1280, 2804.99121, -2585.96533, 2.30235,   0.00000, 0.00000, -89.39999,1000.000,1000.000);
	CreateDynamicObjectEx(1280, 2808.48633, -2581.88086, 2.30235,   0.00000, 0.00000, -0.66000,1000.000,1000.000);
	CreateDynamicObjectEx(1231, 2774.45825, -2580.31323, 4.55984,   0.00000, 0.00000, 47.88000,1000.000,1000.000);
	CreateDynamicObjectEx(3504, 2770.96973, -2581.74487, 3.24511,   0.00000, 0.00000, 90.00000,1000.000,1000.000);
	CreateDynamicObjectEx(2001, 2796.75073, -2567.99536, 1.88014,   0.00000, 0.00000, 0.00000,1000.000,1000.000);
	
	// Casas Aeropuerto LA | By Edinson Walker | 18 Objetos
	CreateDynamicObject(3446, 1611.25476, -2170.29565, 15.98737, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3445, 1592.76025, -2170.42407, 15.57749, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3443, 1568.22144, -2172.17188, 15.42373, 0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3446, 1543.69141, -2170.46045, 15.98989, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3445, 1525.27795, -2170.47461, 15.57749, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3443, 1500.49377, -2172.07642, 15.42373, 0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3446, 1475.92859, -2170.36133, 15.99751, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3660, 1466.23865, -2165.68555, 15.09532, 0.00000, 0.00000, -90.17998);
	CreateDynamicObject(3660, 1466.22314, -2175.36133, 15.05779, 0.00000, 0.00000, -90.17998);
	CreateDynamicObject(1232, 1601.75281, -2185.13159, 15.12457, 0.00000, 0.00000, 27.66000);
	CreateDynamicObject(1232, 1583.48755, -2185.13330, 15.12457, 0.00000, 0.00000, 27.66000);
	CreateDynamicObject(1232, 1552.69458, -2185.14648, 15.12457, 0.00000, 0.00000, 27.66000);
	CreateDynamicObject(1232, 1534.30249, -2185.16577, 15.12457, 0.00000, 0.00000, 27.66000);
	CreateDynamicObject(1232, 1516.00769, -2185.07593, 15.12457, 0.00000, 0.00000, 27.66000);
	CreateDynamicObject(1232, 1484.95874, -2185.02710, 15.12457, 0.00000, 0.00000, 27.66000);
	CreateDynamicObject(12951, 1624.94666, -2178.78516, 12.55664, 0.00000, 0.00000, -91.02000);
	CreateDynamicObject(1257, 1633.10571, -2187.59937, 13.68826, 0.00000, 0.00000, 93.17999);
	CreateDynamicObject(713, 1473.03271, -2154.11279, 11.08298, 0.00000, 0.00000, 0.00000);

	//- Aero puerto | By Edinson Walker | x objetos
	CreateDynamicObject(8674, 1999.69214, -2227.01709, 13.78318,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1989.38684, -2227.02393, 13.78318,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1968.77393, -2226.98364, 13.78318,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(8674, 1979.07739, -2226.97949, 13.78318,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1958.49536, -2226.96069, 13.78318,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(8674, 1943.04834, -2226.94629, 13.78318,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(8674, 2055.19556, -2221.80518, 13.78320,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2055.19092, -2211.54932, 13.78320,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2055.19263, -2201.25269, 13.78320,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2055.19531, -2193.55469, 13.78320,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1231, 2055.18970, -2188.36060, 15.15286,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1231, 1953.27795, -2226.91382, 15.14463,   0.00000, 0.00000, -101.16002);
	CreateDynamicObject(1231, 1948.27185, -2226.91528, 15.14463,   0.00000, 0.00000, -101.16002);
	CreateDynamicObject(10838, 1961.69995, -2179.39990, 28.40000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(10757, 1962.35999, -2181.00000, 31.80000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3578, 2055.25537, -2183.28857, 11.77260,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1257, 1977.22314, -2174.51855, 13.74172,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3660, 1981.64587, -2178.26318, 14.34776,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3660, 2001.23376, -2178.27734, 14.34776,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3660, 2020.66382, -2178.28320, 14.34776,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3660, 2040.05566, -2178.27808, 14.34776,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3660, 2054.43384, -2198.38135, 14.34780,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3660, 2054.44727, -2217.88965, 14.34780,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3660, 2043.49573, -2226.27563, 14.34780,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(3660, 2024.05859, -2226.27100, 14.34780,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(3660, 2004.49133, -2226.27197, 14.34780,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(3660, 1985.00049, -2226.23242, 14.34780,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(3660, 1966.64990, -2226.20337, 14.34780,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(3660, 1938.26758, -2226.20190, 14.34780,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(3660, 1963.20618, -2226.19287, 14.34780,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(3660, 1944.36401, -2215.79883, 14.34780,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3660, 1944.35962, -2200.06860, 14.34780,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3660, 1944.35608, -2191.04346, 14.34780,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3526, 1956.40369, -2176.86597, 12.61258,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3526, 1966.93481, -2176.85669, 12.61258,   0.00000, 0.00000, -90.00000);
	//- Trabajo Jardinero
	CreateDynamicObject(1684, 2021.04541, -1275.74463, 24.42756,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(994,1930.06762695,-1195.10400391,19.03111267,0.00000000,0.00000000,54.00000000); //object(lhouse_barrier2) (1)
	CreateDynamicObject(994,1933.77380371,-1190.03076172,19.03111267,0.00000000,0.00000000,36.24780273); //object(lhouse_barrier2) (2)
	CreateDynamicObject(994,1938.80236816,-1186.33972168,19.03111267,0.00000000,0.00000000,26.99389648); //object(lhouse_barrier2) (3)
	CreateDynamicObject(994,1944.53820801,-1183.43493652,19.03111267,0.00000000,0.00000000,18.99340820); //object(lhouse_barrier2) (4)
	CreateDynamicObject(994,1950.47802734,-1181.38256836,19.03111267,0.00000000,0.00000000,5.73986816); //object(lhouse_barrier2) (5)
	CreateDynamicObject(994,1955.08984375,-1180.83020020,19.03111267,0.00000000,0.00000000,16.73498535); //object(lhouse_barrier2) (6)
	CreateDynamicObject(994,1961.09252930,-1179.05603027,19.03111267,0.00000000,0.00000000,2.73217773); //object(lhouse_barrier2) (7)
	CreateDynamicObject(994,1967.35742188,-1178.74487305,19.03111267,0.00000000,0.00000000,352.73010254); //object(lhouse_barrier2) (8)
	CreateDynamicObject(994,1971.26062012,-1179.23913574,19.03111267,0.00000000,0.00000000,0.72705078); //object(lhouse_barrier2) (9)
	CreateDynamicObject(994,1977.50341797,-1179.15734863,19.03111267,0.00000000,0.00000000,354.47509766); //object(lhouse_barrier2) (10)
	CreateDynamicObject(994,1983.75317383,-1179.76293945,19.03111267,0.00000000,0.00000000,346.97387695); //object(lhouse_barrier2) (11)
	CreateDynamicObject(994,1929.41613770,-1201.37170410,19.03111267,0.00000000,0.00000000,83.99780273); //object(lhouse_barrier2) (12)
	CreateDynamicObject(994,1931.97705078,-1207.10449219,19.03111267,0.00000000,0.00000000,113.99597168); //object(lhouse_barrier2) (13)
	CreateDynamicObject(994,1936.43469238,-1211.50549316,19.03111267,0.00000000,0.00000000,135.24414062); //object(lhouse_barrier2) (14)
	CreateDynamicObject(994,1941.81494141,-1214.75793457,19.03111267,0.00000000,0.00000000,148.99169922); //object(lhouse_barrier2) (15)
	CreateDynamicObject(994,1947.64465332,-1217.07971191,19.03111267,0.00000000,0.00000000,158.24108887); //object(lhouse_barrier2) (16)
	CreateDynamicObject(994,1953.66333008,-1219.03588867,19.03111267,0.00000000,0.00000000,162.23608398); //object(lhouse_barrier2) (17)
	CreateDynamicObject(994,1959.74768066,-1220.54516602,19.03111267,0.00000000,0.00000000,165.98510742); //object(lhouse_barrier2) (18)
	CreateDynamicObject(994,1965.99462891,-1221.04443359,19.03111267,0.00000000,0.00000000,175.48144531); //object(lhouse_barrier2) (19)
	CreateDynamicObject(994,1972.27966309,-1220.91674805,19.03111267,0.00000000,0.00000000,181.22912598); //object(lhouse_barrier2) (20)
	CreateDynamicObject(994,1978.55810547,-1220.51733398,19.03111267,0.00000000,0.00000000,183.72497559); //object(lhouse_barrier2) (21)
	CreateDynamicObject(994,1984.73999023,-1219.58398438,19.03111267,0.00000000,0.00000000,188.47436523); //object(lhouse_barrier2) (22)
	CreateDynamicObject(994,1989.90246582,-1181.15686035,19.03111267,0.00000000,0.00000000,342.72021484); //object(lhouse_barrier2) (23)
	CreateDynamicObject(994,1995.89355469,-1182.99206543,19.03111267,0.00000000,0.00000000,334.21850586); //object(lhouse_barrier2) (24)
	CreateDynamicObject(994,2001.55249023,-1185.71228027,19.03111267,0.00000000,0.00000000,324.71508789); //object(lhouse_barrier2) (25)
	CreateDynamicObject(994,2006.68322754,-1189.31005859,19.03111267,0.00000000,0.00000000,309.71191406); //object(lhouse_barrier2) (26)
	CreateDynamicObject(994,2010.72058105,-1194.13781738,19.03111267,0.00000000,0.00000000,283.71008301); //object(lhouse_barrier2) (27)
	CreateDynamicObject(994,2012.20556641,-1200.26452637,19.03111267,0.00000000,0.00000000,250.20544434); //object(lhouse_barrier2) (28)
	CreateDynamicObject(994,1990.81201172,-1218.02111816,19.03111267,0.00000000,0.00000000,194.47045898); //object(lhouse_barrier2) (29)
	CreateDynamicObject(994,1996.81604004,-1216.02038574,19.03111267,0.00000000,0.00000000,198.46899414); //object(lhouse_barrier2) (30)
	CreateDynamicObject(994,2010.11608887,-1206.13574219,19.03111267,0.00000000,0.00000000,227.45263672); //object(lhouse_barrier2) (31)
	CreateDynamicObject(994,2005.76611328,-1210.80932617,19.03111267,0.00000000,0.00000000,212.94995117); //object(lhouse_barrier2) (32)
	CreateDynamicObject(997,1997.25329590,-1215.84448242,19.02343750,0.00000000,0.00000000,26.25000000); //object(lhouse_barrier3) (2)

	//- Trabajo leñador
	CreateDynamicObject(727, -418.76709, -1793.77551, 2.25781,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(731, -431.82001, -1787.10413, 2.45866,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(734, -441.89230, -1768.45129, 4.60836,   0.00000, 0.00000, -100.80001);
	CreateDynamicObject(791, -456.07584, -1788.44702, 3.37143,   0.00000, 0.00000, -63.30000);
	CreateDynamicObject(726, -397.75208, -1770.27917, 3.63385,   0.00000, 0.00000, -99.96001);

	//- Deposito | By Edinson
	CreateDynamicObject(5837, -481.48563, -558.42505, 25.97714,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3458, -517.94897, -558.83051, 25.93505,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1597, -480.77600, -480.04428, 27.05149,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1597, -501.88507, -479.65829, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -522.32013, -480.08255, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -543.15369, -480.01431, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -562.80817, -480.17029, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -583.58685, -480.20047, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(6296, -504.66312, -522.02258, 26.62269,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -469.13492, -559.99615, 24.63004,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -504.24918, -506.07968, 24.67746,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -504.05792, -539.75946, 24.67746,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -485.51678, -561.37286, 24.83320,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -488.17297, -561.37085, 24.83320,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -483.79755, -562.34674, 24.83315,   0.00000, 0.00000, 90.00000);

	//- Casas
	CreateObject(14865, 259.13370, 305.38049, 1000.14838,   0.00000, 0.00000, 0.00000);
	CreateObject(15033, 2205.65869, -1085.48645, 1049.47656,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2218.36011, -1088.38489, 1049.46875,   0.00000, 0.00000, -90.00000);
	CreateObject(1567, 2214.59668, -1087.06494, 1049.46875,   0.00000, 0.00000, 0.00000);
	CreateObject(14718, 219.61659, 1277.26379, 1081.13281,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 221.85809, 1272.29016, 1081.12500,   0.00000, 0.00000, 0.00000);
	CreateObject(14713, 258.33710, 1271.09192, 1081.06250,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 262.73065, 1266.04517, 1079.24219,   0.00000, 0.00000, 0.00000);
	CreateObject(14712, 273.61560, 1244.68835, 1084.82813,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 275.82266, 1237.10156, 1083.23438,   0.00000, 0.00000, 0.00000);
	CreateObject(14714, 294.78439, 1454.53613, 1081.06250,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 294.02231, 1446.28625, 1079.24219,   0.00000, 0.00000, 0.00000);
	CreateObject(14750, 1.75480, 1348.52454, 1089.87500,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, -2.28832, 1339.14124, 1083.35938,   0.00000, 0.00000, 0.00000);
	CreateObject(14754, 56.82720, 1331.97510, 1086.80469,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 53.36470, 1322.73560, 1082.85156,   0.00000, 0.00000, 0.00000);
	CreateObject(14758, 110.28250, 1364.65344, 1084.73438,   0.00000, 0.00000, 0.00000);
	CreateObject(14757, 125.01830, 1368.62329, 1084.52344,   0.00000, 0.00000, 0.00000);
	CreateObject(14764, 110.25930, 1364.63989, 1084.73438,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 111.04979, 1364.57605, 1082.85156,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 109.54440, 1364.56702, 1082.85156,   0.00000, 0.00000, 0.00000);
	CreateObject(14708, 243.76343, 1139.50049, 1081.75781,   0.00000, 0.00000, 0.00000);
	CreateObject(14706, 198.15530, 1071.49500, 1086.41406,   0.00000, 0.00000, 0.00000);
	CreateObject(14707, 200.94640, 1021.23450, 1087.60156,   0.00000, 0.00000, 0.00000);
	CreateObject(14701, 446.51010, 1375.65417, 1085.37500,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 445.39056, 1365.22546, 1083.28125,   0.00000, 0.00000, 0.00000);

	
	//-- Barco
	CreateDynamicObjectEx(5166, 2829.95288, -2479.57007, 3.76500,   0.00000, 0.00000, 270.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(3069, 2810.70898, -2388.07202, 12.59900,   -22.00000, 0.00000, 270.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(3069, 2810.70898, -2438.07202, 12.59900,   -22.00000, 0.00000, 270.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2384.69897, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2391.50000, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2434.69897, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2441.50000, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);

	//- gobierno
	CreateDynamicObject(14782, 350.81250, 213.92087, 1008.35974,   0.00000, 0.00000, 90.00005);
	CreateDynamicObject(8614, 1533.56799, -1773.52100, 33.91440,   0.00000, 0.00000, 180.51010);
	CreateDynamicObject(1557, 1497.39673, -1774.74841, 32.37910,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(1557, 1494.40466, -1774.75940, 32.37910,   0.00000, 0.00000, 0.00000);
	CreateObject(18850, 1538.27295, -1790.62805, 23.02915,   0.00000, 0.00000, 0.00000);

	// Lugares de Modificaciones "Cerradas" | By Edinson Walker | 20 Objetos
	CreateDynamicObject(980, -2716.371826, 217.276764, 6.192754, 0, 0, 89, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, -2716.371826, 217.276764, 6.192754, 0, 0, 89, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, -1936.045898, 238.765091, 36.085892, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, -1903.888550, 277.860413, 42.820267, 0, 0, 180, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 488.477295, -1735.528442, 12.917402, 0, 0, 171, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(976, 2071.255859, -1827.541138, 12.708785, 0, 0, -89, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(976, 1028.865479, -1029.366455, 31.263472, 0, 0, 179, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1043.933350, -1026.021729, 33.874954, 0, 0, 180, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(975, 720.169312, -462.474487, 17.010628, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 1968.566895, 2162.555664, 12.621687, 0, 0, 270, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, 2386.587402, 1043.470947, 12.593704, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(986, -99.714607, 1111.534424, 20.452366, 0, 0, 179, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, -2425.477051, 1028.070923, 52.171051, 0, 0, 180, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(976, 2001.490601, 2317.493164, 9.982223, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(985, 2393.687256, 1483.140381, 11.530980, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(985, 2405.697510, 1483.226807, 11.570413, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(969, 1843.411621, -1858.589478, 12.549690, 0, 0, 89, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(980, -1421.735718, 2591.065430, 57.616653, 0, 0, 179, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(976, 2000.855103, 2303.761963, 10.004567, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(971, 2644.899902, -2039.394531, 11.919919, 0.000000, 90.000000, 0.000000, -1, -1, -1, MAX_RADIO_STREAM);
	return 1;
}

forward CreateObjectEx(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ, Float: DrawDistance);
public CreateObjectEx(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ, Float: DrawDistance)
{
	MAX_OBJECT_FIJOS++;
	return CreateObject(modelid, X, Y, Z, rX, rY, rZ, DrawDistance);
}
