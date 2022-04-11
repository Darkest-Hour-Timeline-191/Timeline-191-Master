##############################
# Country definition for CHI #
##############################
province = {
  id = 1237 # Shanghai
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1238 # Hangzhou
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 1244 # Fuzhou
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 2569 # Nanchang
  air_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  capital            = 1235 # Nanjing
  dissent            = 25
  manpower           = 500
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 10
  transports     = 10
  escorts        = 2

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -100 }
    relation = { tag = MAN value = -100 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 3 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 2 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }

  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272 1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394 1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 1293 1294 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443 1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320 1321 1322 1323 1324 1385 1404 1419 1420 1434 1438 1903 2559 1984 1993 2560 2551 2000 2311 1913 2561 2550 2505 1996 2502 1997 1995 1910 1922 1921 1914 2507 2516 2515 2513 2508 1966 2556 2558 1965 1964 1939 2571 1936 1937 2572 2570 2568 2573 2574 2567 2569 1941 1938 1728 1406 1878 1877 1898 1905 1918 1978 1928 1983 695 674 559 557 720 568 570 1880 1912 746 1923 696 1316 1315 2503 2504 2517 2518 2520 2525 2527 2526 2576 2523 2528 2534 2522 2533 2531 1215 2530 2529 1214 2318 2317 2347 2348 2349 2346 2345 2340 2341 2344 2338 2333 2487 2241 2511 2337 2246 2486 2281 2485 3133 2941 2942 3090 3110 3750 3751 3752 3753 3754 3775 3737 3738 3739 3740 3741 3742 3743 3744 3745 3746 3747 3748 3749 3755 3756 3757 3758 3759 3760 3774 3762 3763 3764 3765 3766 3767 3768 3769 3770 3771 3772 3773 3761 1418 3594 3595 5184 5205 5472 5473 5474 5475 5476 5477 5478 5479 5480 5481 5482 5483 5484 5485 5486 5487 5488 5489 5490 5491 5492 5493 5494 5495 5496 5497 5498 5499 5500 5501 5502 5503 5504 5505 5506 5507 5508 5509 5510 5511 5512 5513 5514 5515 5516 5517 5518 5519 5520 5521 5522 5523 5524 5525 5526 5527 5528 5529 5530 5531 5532 5533 5534 5535 5536 5537 5538 5539 5540 5541 5542 5543 5544 5545 5546 5547 5548 5549 5550 5551 5552 5553 5554 5555 5556 5557 5558 5559 5560 5561 5562 5563 5564 5565 5566 5567 5568 5569 5570 5571 5572 5573 5574 5575 5576 5577 5578 5579 5580 5581 5582 5583 5584 5585 5586 5587 5588 5589 5590 5591 5592 5593 5594 5595 5596 5597 5598 5599 5600 5601 5602 5603 5604 5605 5606 5607 5608 5609 5610 5611 5612 5613 5614 5615 5616 5617 5618 5619 5620 5621 5622 5623 5624 5625 5626 5627 5628 5629 5630 5631 5632 5633 5634 5635 5636 5637 5638 5639 5640 5641 5642 5643 5644 5645 5646 5647 5648 5649 5650 5651 5652 5655 5656 5657 5658 5659 5660 5661 5662 5663 5664 5665 5666 5667 5668 5669 5670 5671 5672 5673 5674 5675 5676 5677 5678 5679 5680 5681 5682 5683 5684 5685 5686 5687 5688 5689 5690 5691 5692 5693 6497 6498 6496 6916 7911 7918 7917 6920 5185 }
  ownedprovinces         = { 1222 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 1984 1993 2000 2311 1996 2502 1997 1995 1910 1966 2556 2558 1965 1964 1939 2571 1936 1937 2572 2570 2568 2573 2574 2567 2569 1941 1938 5611 5612 5613 5618 5619 5620 5621 5642 5643 5644 5645 5646 5647 5648 5649 5650 5651 6497 6498 }
  controlledprovinces    = { 1222 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 1984 1993 2000 2311 1996 2502 1997 1995 1910 1966 2556 2558 1965 1964 1939 2571 1936 1937 2572 2570 2568 2573 2574 2567 2569 1941 1938 5611 5612 5613 5618 5619 5620 5621 5642 5643 5644 5645 5646 5647 5648 5649 5650 5651 6497 6498 }
  claimedprovinces       = { 1487 3485 5872 5836 5873 5891 5892 5893 6953 }

  techapps               = { 5810 5820 5050 5800 5080 5190 5310 54010 5316 5326 5327 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 1230 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1830 1840 1910 1920 1930 1940 1950 1960 1970 2860 2870 2290 2300 2310 2900 2910 2920 2930 5600 5610 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6570 3010 3110 3120 3130 3140 3210 3220 3810 3720 3730 3410 3420 8010 8020 8050 8060 8070 8080 4500 4510 4520 4530 4540 4550 4300 4310 4320 4600 4610 4620 4630 4120 4800 4810 4700 4740 4750 4760 4770 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1090 1850 5830 54030 5700 5620 1980 7600 7610 2620 2010 2880 6210 6300 4010 4330 4400 3150 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 9
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 52001 }
  headofgovernment       = { type = 9 id = 52002 }
  foreignminister        = { type = 9 id = 52003 }
  armamentminister       = { type = 9 id = 52004 }
  ministerofsecurity     = { type = 9 id = 52005 }
  ministerofintelligence = { type = 9 id = 52006 }
  chiefofstaff           = { type = 9 id = 52007 }
  chiefofarmy            = { type = 9 id = 52008 }
  chiefofnavy            = { type = 9 id = 52009 }
  chiefofair             = { type = 9 id = 52010 }
  dormant_leaders        = { 50370 50377 }

  landunit = {
    id       = { type = 22000 id = 1 }
    name     = "1. Jun"
    location = 1235
    division = {
      id             = { type = 22000 id = 2 }
      name           = "1. Jun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 30 }
    name     = "14. Jun"
    location = 1235
    leader   = 55329
    division = {
      id             = { type = 22000 id = 31 }
      name           = "14. Jun"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 54 }
    name     = "22. Jun"
    location = 1235
    division = {
      id             = { type = 22000 id = 55 }
      name           = "22. Jun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 65 }
    name     = "27. Jun"
    location = 1235
    leader   = 55209
    division = {
      id             = { type = 22000 id = 66 }
      name           = "27. Jun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 95 }
    name     = "39. Jun"
    location = 1235
    leader   = 55207
    division = {
      id             = { type = 22000 id = 96 }
      name           = "39. Jun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 142 }
    name     = "1. Xin Jun"
    location = 1235
    leader   = 55285
    division = {
      id             = { type = 22000 id = 143 }
      name           = "1. Xin Jun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 151 }
    name     = "4. Lujun"
    location = 1235
    division = {
      id             = { type = 22000 id = 152 }
      name           = "4. Lujun"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 165 }
    name     = "20. Lujun"
    location = 1235
    leader   = 55008
    division = {
      id             = { type = 22000 id = 166 }
      name           = "20. Lujun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 168 }
    name     = "26. Lujun"
    location = 1235
    division = {
      id             = { type = 22000 id = 169 }
      name           = "26. Lujun"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 170 }
    name     = "2. Jun"
    location = 1235
    leader   = 55044
    division = {
      id             = { type = 22000 id = 171 }
      name           = "2. Jun"
      type           = infantry
      model          = 6
      strength       = 80
      max_strength   = 80
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 172 }
    name     = "21. Jun"
    location = 1235
    leader   = 55177
    division = {
      id             = { type = 22000 id = 173 }
      name           = "21. Jun"
      type           = infantry
      model          = 6
      strength       = 50
      max_strength   = 50
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 176 }
    name     = "51. Jun"
    location = 1235
    leader   = 55326
    division = {
      id             = { type = 22000 id = 177 }
      name           = "51. Jun"
      type           = infantry
      model          = 6
      strength       = 50
      max_strength   = 50
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 178 }
    name     = "Jiangxi Zhujun"
    location = 1235
    division = {
      id             = { type = 22000 id = 179 }
      name           = "Jiangxi Zhujun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 194 }
    name     = "Fujian Zhujun"
    location = 1235
    division = {
      id             = { type = 22000 id = 195 }
      name           = "Fujian Zhujun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 208 }
    name     = "Anhui Zhujun"
    location = 1235
    division = {
      id             = { type = 22000 id = 209 }
      name           = "Anhui Zhujun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 224 }
    name     = "Hubei Zhujun"
    location = 1235
    division = {
      id             = { type = 22000 id = 225 }
      name           = "Hubei Zhujun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 232 }
    name     = "Xibei Zhujun"
    location = 1235
    division = {
      id             = { type = 22000 id = 233 }
      name           = "Xibei Zhujun"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 242 }
    name     = "Jiaodao Zongdui"
    location = 1235
    leader   = 55157
    division = {
      id             = { type = 22000 id = 243 }
      name           = "Jiaodao Zongdui"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 244 }
    name     = "Suijing Zongtuan"
    location = 1235
    leader   = 55126
    division = {
      id             = { type = 22000 id = 245 }
      name           = "Customs Police 1st Detachment"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 246 }
      name           = "Customs Police 2nd Detachment"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 247 }
    name     = "Shanghai Zhujun"
    location = 1235
    leader   = 55339
    division = {
      id             = { type = 22000 id = 248 }
      name           = "Shanghai Zhujun"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 251 }
    name     = "Marine Brigade"
    location = 1235
    division = {
      id             = { type = 22000 id = 252 }
      name           = "Marine Brigade"
      type           = garrison
      model          = 3
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 254 }
    name     = "Jiangsu Minbing"
    location = 1235
    division = {
      id             = { type = 22000 id = 255 }
      name           = "Jiangsu Minbing"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 256 }
    name     = "Anhui Minbing"
    location = 1235
    division = {
      id             = { type = 22000 id = 257 }
      name           = "Anhui Minbing"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 258 }
    name     = "Zhejiang Minbing"
    location = 1235
    division = {
      id             = { type = 22000 id = 259 }
      name           = "Zhejiang Minbing"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 262 }
    name     = "Hubei Minbing"
    location = 1235
    division = {
      id             = { type = 22000 id = 263 }
      name           = "Hubei Minbing"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 268 }
    name     = "Gansu Minbing"
    location = 1235
    division = {
      id             = { type = 22000 id = 269 }
      name           = "Gansu Minbing"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 274 }
    name     = "Jiangxi Minbing"
    location = 1235
    division = {
      id             = { type = 22000 id = 275 }
      name           = "Jiangxi Minbing"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 276 }
    name     = "Fujian Minbing"
    location = 1235
    division = {
      id             = { type = 22000 id = 278 }
      name           = "Fujian Minbing"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 20
    }
  }

  navalunit = {
    id       = { type = 22000 id = 300 }
    name     = "1st Fleet"
    location = 1237
    base     = 1237
    division = {
      id             = { type = 22000 id = 301 }
      name           = "Ning-Hai"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 22000 id = 302 }
      name           = "Ying-Swei"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 303 }
      name           = "Chao-Ho"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 304 }
      name           = "Hai-Shen"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 308 }
      name           = "Hai-Chou"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 310 }
      name           = "Hai-Yung"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 305 }
      name           = "Yat-Sen"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 306 }
      name           = "Hai Chi"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 307 }
      name           = "1. Quzujian Dadui"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 309 }
      name           = "1. Yunshujian Dadui"
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 22000 id = 400 }
    name     = "1. Kongjun"
    location = 1238
    base     = 1238
    division = {
      id             = { type = 22000 id = 401 }
      name           = "1. Kongjun"
      type           = tactical_bomber
      model          = 4
      strength       = 54
      max_strength   = 60
    }
  }
  airunit = { 
    id       = { type = 22000 id = 407 }
    name     = "2. Kongjun"
    location = 1238
    base     = 1238
    division = {
      id             = { type = 22000 id = 408 }
      name           = "2. Kongjun"
      type           = interceptor
      model          = 4
      strength       = 52
      max_strength   = 60
    }
  }

  division_development = {
    id             = { type = 22000 id = 311 }
    name           = "Ping-Hai"
    type           = light_cruiser
    model          = 1
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = june day = 18 }
  }
}
