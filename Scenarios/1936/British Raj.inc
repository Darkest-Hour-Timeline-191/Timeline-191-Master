##############################
# Country definition for U02 #
##############################
province = {
  id = 1296 # Lahri:
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 1299 # Rankun
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 1457 # Kalkata
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 1469 # Delhi
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 1481 # Karachi
  anti_air = 1
  air_base = { size = 5 current_size = 5 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 1505 # Bombay
  anti_air = 3
  air_base = { size = 7 current_size = 7 }
  naval_base = { size = 7 current_size = 7 }
}

#####################
# Country main data #
#####################

country = {
  tag                = U02
  regular_id         = IND
  puppet             = ENG
  capital            = 1469 # Delhi
  manpower           = 200
  # Resource Reserves
  energy         = 5520
  metal          = 2760
  rare_materials = 1380
  oil            = 500
  supplies       = 500
  money          = 70
  transports     = 200
  escorts        = 20

  diplomacy = {
    relation = { tag = ENG value = 50 access = yes }
  }
  SpyInfo                = { country = "U02" NumberOfSpies = 3 }

  nationalprovinces      = { 1469 1477 1476 1474 1454 1287 1284 1516 1517 1518 1519 1285 1286 1288 1456 1457 1878 1465 1466 1479 1478 1470 1471 1472 1468 1467 1464 1463 1460 1459 1458 1461 1508 1462 1505 1506 1507 1509 1510 1511 1512 1513 1514 1515 1591 2106 1694 774 773 775 1758 2639 777 2638 2085 1817 2175 702 771 1695 2099 2640 635 729 781 769 697 703 726 1699 714 597 2637 2636 669 631 1721 611 722 785 2198 2124 791 2091 1701 2104 2592 2952 1877 1590 2043 2094 2133 2641 599 2642 2199 2092 685 687 736 1705 2835 1430 1728 2828 1731 593 2922 1299 1304 1292 1295 1291 1898 1290 1296 1297 1298 1300 1301 1302 1346 1305 2834 1480 1481 2833 2825 2824 2826 1494 1483 2827 1482 2831 2830 1475 2829 2832 1592 5181 5182 5183 5184 5185 5186 5187 5188 5189 5190 5191 5192 5193 5194 5195 5196 5197 5198 5199 5200 5201 5202 5203 5204 5205 5206 5207 5208 5209 5210 5211 5212 5213 5214 5215 5216 5217 5218 5219 5220 5221 5222 5223 5224 5225 5226 5227 5228 5229 5230 5231 5232 5233 5234 5235 5236 5237 5238 5239 5240 5241 5242 5243 5244 5245 5246 5247 5248 5249 5250 5251 5252 5253 5254 5255 5256 5257 5258 5259 5260 5261 5262 5263 5264 5265 5266 5267 5268 5269 5270 5271 5272 5273 5274 5275 5276 5277 5278 5279 5280 5281 5282 5283 5284 5285 5286 5287 5288 5289 5290 5291 5292 5293 5294 5295 5296 5297 5298 5299 5300 5301 5302 5303 5304 5305 5306 5307 5308 5309 5310 5311 5312 5313 5314 5315 5316 5317 5318 5319 5320 5321 5322 5323 5324 5325 5326 5327 5328 5329 5330 5331 5332 5333 5334 5335 5336 5337 5338 5339 5340 5341 5342 5343 5344 5345 5346 5347 5348 5349 5350 5351 5352 5353 5354 5355 5356 5357 5358 5359 5360 5361 5362 5363 5364 5365 5366 5367 5368 5369 5370 5371 5372 5373 5374 5375 5376 5377 5378 5175 5176 6496 6920 6921 6922 7192 7193 7305 7306 7307 7924 7925 7926 7904 7983 }
  ownedprovinces         = { 1469 1494 2834 1480 1481 2833 2832 1475 2830 2829 2831 1476 1705 1483 1482 2828 736 685 1878 1877 2952 1454 1284 2592 2104 1288 1286 1590 1456 1285 1457 1519 2094 2133 1472 2199 2642 1471 2092 2641 599 1470 1477 1466 597 714 1463 669 1462 785 2124 1458 1461 2091 1459 1701 1699 1505 726 703 2175 1508 2099 1695 1509 1510 1513 1515 2106 773 774 1694 2922 1518 1346 1302 1301 1299 1298 1297 1305 1304 1296 1300 1290 1291 1292 1295 1898 5181 5182 5183 5184 5185 5187 5188 5189 5190 5191 5192 5193 5194 5195 5196 5197 5198 5199 5200 5202 5203 5205 5207 5208 5209 5210 5211 5212 5213 5214 5215 5216 5217 5218 5219 5220 5221 5223 5224 5226 5227 5228 5229 5230 5231 5232 5249 5250 5254 5255 5272 5273 5274 5278 5281 5282 5286 5287 5289 5290 5291 5292 5293 5294 5295 5296 5297 5298 5299 5300 5302 5303 5304 5305 5306 5307 5311 5312 5313 5315 5316 5318 5320 5321 5322 5329 5346 5347 5348 5349 5350 5351 5352 5355 5356 5357 5358 5359 5360 5361 5362 5363 5364 5365 5374 5376 5377 5378 6496 7193 7305 7307 7924 7925 7926 }
  controlledprovinces    = { 1469 1494 2834 1480 1481 2833 2832 1475 2830 2829 2831 1476 1705 1483 1482 2828 736 685 1878 1877 2952 1454 1284 2592 2104 1288 1286 1590 1456 1285 1457 1519 2094 2133 1472 2199 2642 1471 2092 2641 599 1470 1477 1466 597 714 1463 669 1462 785 2124 1458 1461 2091 1459 1701 1699 1505 726 703 2175 1508 2099 1695 1509 1510 1513 1515 2106 773 774 1694 2922 1518 1346 1302 1301 1299 1298 1297 1305 1304 1296 1300 1290 1291 1292 1295 1898 5181 5182 5183 5184 5185 5187 5188 5189 5190 5191 5192 5193 5194 5195 5196 5197 5198 5199 5200 5202 5203 5205 5207 5208 5209 5210 5211 5212 5213 5214 5215 5216 5217 5218 5219 5220 5221 5223 5224 5226 5227 5228 5229 5230 5231 5232 5249 5250 5254 5255 5272 5273 5274 5278 5281 5282 5286 5287 5289 5290 5291 5292 5293 5294 5295 5296 5297 5298 5299 5300 5302 5303 5304 5305 5306 5307 5311 5312 5313 5315 5316 5318 5320 5321 5322 5329 5346 5347 5348 5349 5350 5351 5352 5355 5356 5357 5358 5359 5360 5361 5362 5363 5364 5365 5374 5376 5377 5378 6496 7193 7305 7307 7924 7925 7926 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1396 2860 2870 2880 2020 2290 2300 2310 7600 7610 2620 2010 1830 1840 1850 1860 2800 2450 3010 3020 3030 3040 3110 3120 3130 3140 3210 3220 3230 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 3720 3730 3736 3740 3750 3900 3810 5600 8010 8020 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 3
    free_market       = 5
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 825001 } # Victor Lord Linlithgow
  headofgovernment       = { type = 9 id = 825002 } # John Edward Golightly
  foreignminister        = { type = 9 id = 825003 } # Sir Jilendra Vayaphrasattar
  armamentminister       = { type = 9 id = 825004 } # Anyang Bhula
  ministerofsecurity     = { type = 9 id = 825005 } # George H. Douglas
  ministerofintelligence = { type = 9 id = 825006 } # Archibald Angus
  chiefofstaff           = { type = 9 id = 825007 } # Victor Lord Linlithgow
  chiefofarmy            = { type = 9 id = 825008 } # Arthur A. Barrett
  chiefofnavy            = { type = 9 id = 825009 } # William E. Parry
  chiefofair             = { type = 9 id = 825010 } # Bruce W. McPherson

  landunit = {
    id       = { type = 12700 id = 1001 }
    name     = "Bombay District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1002 }
      name           = "Mhow Area"
      type           = garrison
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1003 }
    name     = "Deccan District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1004 }
      name           = "4th Indian Division"
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1005 }
      name           = "4th Indian Cavalry Brigade"
      type           = cavalry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 12700 id = 1006 }
      name           = "Poona Area"
      type           = garrison
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1007 }
    name     = "Kohat District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1008 }
      name           = "Thal Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1009 }
      name           = "Kohat Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 12700 id = 1010 }
    name     = "Lahore District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1011 }
      name           = "Sialkot Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1012 }
      name           = "Ferozepore Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1013 }
      name           = "Jullundur Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1014 }
      name           = "Lahore Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1015 }
      name           = "Ambala Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 12700 id = 1016 }
    name     = "Lucknow District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1017 }
      name           = "Allahabad Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1018 }
      name           = "Delhi Area"
      type           = garrison
      model          = 3
      extra          = artillery
      brigade_model  = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1019 }
    name     = "Madras District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1020 }
      name           = "Madras Brigade"
      type           = garrison
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1021 }
    name     = "Meerut District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1022 }
      name           = "3rd Indian Division"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1023 }
      name           = "3rd Indian Cavalry Brigade"
      type           = cavalry
      model          = 6
      extra          = armored_car
      brigade_model  = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12700 id = 1024 }
    name     = "Peshawar District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1025 }
      name           = "Landikotal Brigade"
      type           = militia
      model          = 4
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1026 }
      name           = "Peshawar Brigade"
      type           = militia
      model          = 4
      extra          = artillery
      brigade_model  = 5
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1027 }
      name           = "Nowshera Brigade"
      type           = militia
      model          = 4
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1028 }
      name           = "1st Indian Cavalry Brigade"
      type           = cavalry
      model          = 6
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12700 id = 1029 }
    name     = "Presidency & Assam District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1030 }
      name           = "Eastern Bengal Brigade"
      type           = garrison
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1031 }
    name     = "Rawalpindi District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1032 }
      name           = "1st Indian Division"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 1033 }
    name     = "Waziristan District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1034 }
      name           = "Razmak Brigade"
      type           = militia
      model          = 4
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1035 }
      name           = "Bannu Brigade"
      type           = militia
      model          = 4
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1036 }
      name           = "Wana Brigade"
      type           = militia
      model          = 4
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 12700 id = 1037 }
    name     = "Western District"
    location = 1469
    division = {
      id             = { type = 12700 id = 1038 }
      name           = "2nd Indian Division"
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1039 }
      name           = "Quetta Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1040 }
      name           = "Khojak Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1041 }
      name           = "Zhob Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 1042 }
      name           = "Sind Brigade"
      type           = militia
      model          = 4
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 12700 id = 1057 }
    name     = "Burma Command"
    location = 1469
    division = {
      id             = { type = 12700 id = 1058 }
      name           = "Rangoon Brigade"
      type           = militia
      model          = 4
      extra          = artillery
      brigade_model  = 5
      strength       = 100
    }
    division = {
      id             = { type = 12700 id = 1059 }
      name           = "Mandalay Brigade"
      type           = militia
      model          = 4
      extra          = police
      brigade_model  = 1
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 12700 id = 288 }
    name     = "Royal Indian Navy"
    location = 1505
    base     = 1505
    division = {
      id             = { type = 12700 id = 284 }
      name           = "HMIS 2nd Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 12700 id = 286 }
      name           = "HMIS 4th Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 12700 id = 2318 }
      name           = "2nd DD. Division"
      type           = destroyer
    }
    division = {
      id             = { type = 12700 id = 2319 }
      name           = "3rd DD. Division"
      type           = destroyer
    }
  }
  navalunit = {
    id       = { type = 12700 id = 2332 }
    name     = "1st Squadron"
    location = 1505
    base     = 1505
    division = {
      id             = { type = 12700 id = 289 }
      name           = "HMIS 1st Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 12700 id = 285 }
      name           = "HMIS 3rd Transport Flotilla"
      type           = transport
    }
    division = {
      id             = { type = 12700 id = 287 }
      name           = "HMIS Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 12700 id = 2317 }
      name           = "1st DD. Division"
      type           = destroyer
    }
  }

  airunit = { 
    id       = { type = 12700 id = 80 }
    name     = "Royal Indian Air Force"
    location = 1469
    base     = 1469
    division = {
      id             = { type = 12700 id = 81 }
      name           = "Indian Group"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
}
