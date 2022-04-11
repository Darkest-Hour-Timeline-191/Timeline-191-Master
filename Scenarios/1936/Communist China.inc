##############################
# Country definition for CHC #
##############################
province = { id = 1270 landfort = 3 } # Yan'an
province = { id = 1271 landfort = 3 } # Shenmu
province = {
  id = 1321 # Qiongshan
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 5554 landfort = 3 } # Qingyang
province = { id = 5569 landfort = 3 } # Dingbian
province = { id = 5570 landfort = 3 } # Fuxian
province = { id = 5571 landfort = 3 } # Suide

#####################
# Country main data #
#####################

country = {
  tag                = CHC
  intrinsic_gov_type = leninist
  capital            = 1270 # Yan'an
  extra_tc           = 7
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 800
  money          = 50

  diplomacy = {
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -100 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CGX value = -200 }
    relation = { tag = CYN value = -200 }
    relation = { tag = CSX value = -200 }
    relation = { tag = CXB value = -200 }
    relation = { tag = SOV value = 100 }
    relation = { tag = MON value = 25 }
    relation = { tag = SIK value = 40 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 1 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 1 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }

  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272 1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394 1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247 1293 1294 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443 1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320 1321 1322 1323 1324 1385 1404 1419 1420 1434 1438 1903 2559 1984 1993 2560 2551 2000 2311 1913 2561 2550 2505 1996 2502 1997 1995 1910 1922 1921 1914 2507 2516 2515 2513 2508 1966 2556 2558 1965 1964 1939 2571 1936 1937 2572 2570 2568 2573 2574 2567 2569 1941 1938 1728 1406 1878 1877 1898 1905 1918 1978 1928 1983 695 674 559 557 720 568 570 1880 1912 746 1923 696 1316 1315 2503 2504 2517 2518 2520 2525 2527 2526 2576 2523 2528 2534 2522 2533 2531 1215 2530 2529 1214 2318 2317 2347 2348 2349 2346 2345 2340 2341 2344 2338 2333 2487 2241 2511 2337 2246 2486 2281 2485 3133 2941 2942 3090 3110 3750 3751 3752 3753 3754 3775 3737 3738 3739 3740 3741 3742 3743 3744 3745 3746 3747 3748 3749 3755 3756 3757 3758 3759 3760 3774 3762 3763 3764 3765 3766 3767 3768 3769 3770 3771 3772 3773 3761 1418 3594 3595 5184 5205 5472 5473 5474 5475 5476 5477 5478 5479 5480 5481 5482 5483 5484 5485 5486 5487 5488 5489 5490 5491 5492 5493 5494 5495 5496 5497 5498 5499 5500 5501 5502 5503 5504 5505 5506 5507 5508 5509 5510 5511 5512 5513 5514 5515 5516 5517 5518 5519 5520 5521 5522 5523 5524 5525 5526 5527 5528 5529 5530 5531 5532 5533 5534 5535 5536 5537 5538 5539 5540 5541 5542 5543 5544 5545 5546 5547 5548 5549 5550 5551 5552 5553 5554 5555 5556 5557 5558 5559 5560 5561 5562 5563 5564 5565 5566 5567 5568 5569 5570 5571 5572 5573 5574 5575 5576 5577 5578 5579 5580 5581 5582 5583 5584 5585 5586 5587 5588 5589 5590 5591 5592 5593 5594 5595 5596 5597 5598 5599 5600 5601 5602 5603 5604 5605 5606 5607 5608 5609 5610 5611 5612 5613 5614 5615 5616 5617 5618 5619 5620 5621 5622 5623 5624 5625 5626 5627 5628 5629 5630 5631 5632 5633 5634 5635 5636 5637 5638 5639 5640 5641 5642 5643 5644 5645 5646 5647 5648 5649 5650 5651 5652 5655 5656 5657 5658 5659 5660 5661 5662 5663 5664 5665 5666 5667 5668 5669 5670 5671 5672 5673 5674 5675 5676 5677 5678 5679 5680 5681 5682 5683 5684 5685 5686 5687 5688 5689 5690 5691 5692 5693 6497 6498 6496 6916 7911 7918 7917 6920 5185 }
  ownedprovinces         = { 1270 1271 1321 746 5569 5570 5571 5610 5554 }
  controlledprovinces    = { 1270 1271 1321 746 5569 5570 5571 5610 5554 }
  claimedprovinces       = { 1487 3485 5872 5836 5873 5891 5892 5893 6953 }

  techapps               = { 5800 5080 5310 5316 5326 5327 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 1230 13060 13070 13080 1310 1320 1330 1910 1920 1930 1940 1950 1960 2290 2300 2310 2900 2910 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6570 6300 }
  blueprints             = { 5810 5820 54010 1340 1350 1360 1370 2860 5600 4500 4510 4520 4300 4310 4600 4610 4620 4800 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 2
    free_market       = 1
    professional_army = 2
    defense_lobby     = 10
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 51001 }
  headofgovernment       = { type = 9 id = 51002 }
  foreignminister        = { type = 9 id = 51003 }
  armamentminister       = { type = 9 id = 51004 }
  ministerofsecurity     = { type = 9 id = 51005 }
  ministerofintelligence = { type = 9 id = 51006 }
  chiefofstaff           = { type = 9 id = 51007 }
  chiefofarmy            = { type = 9 id = 51008 }
  chiefofnavy            = { type = 9 id = 51009 }
  chiefofair             = { type = 9 id = 51010 }

  landunit = {
    id       = { type = 24000 id = 1 }
    name     = "1. Fangmianjun"
    location = 1270
    division = {
      id             = { type = 24000 id = 2 }
      name           = "1. Juntuan"
      type           = bergsjaeger
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 3 }
      name           = "3. Juntuan"
      type           = bergsjaeger
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 4 }
      name           = "5. Juntuan"
      type           = bergsjaeger
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 5 }
      name           = "8. Juntuan"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 6 }
      name           = "9. Juntuan"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 24000 id = 7 }
    name     = "2. Fangmianjun"
    location = 1270
    division = {
      id             = { type = 24000 id = 8 }
      name           = "2. Juntuan"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 9 }
      name           = "6. Juntuan"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 24000 id = 10 }
    name     = "4. Fangmianjun"
    location = 1270
    division = {
      id             = { type = 24000 id = 11 }
      name           = "4. Jun"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 12 }
      name           = "9. Jun"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 13 }
      name           = "30. Jun"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 14 }
      name           = "31. Jun"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 24000 id = 15 }
    name     = "15. Juntuan"
    location = 1270
    division = {
      id             = { type = 24000 id = 16 }
      name           = "25. Jun"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 17 }
      name           = "26. Jun"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 18 }
      name           = "27. Jun"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    division = {
      id             = { type = 24000 id = 19 }
      name           = "28. Jun"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 60
    }
    dig_in   = 20.000
  }
}