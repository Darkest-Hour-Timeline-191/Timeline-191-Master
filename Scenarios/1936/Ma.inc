##############################
# Country definition for CXB #
##############################

country = {
  tag                = CXB
  regular_id         = CHI
  puppet             = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1442 # Na-gor-mo
  extra_tc           = 2
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  diplomacy = {
    relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }

  nationalprovinces      = { 1442 1444 1443 1441 1440 1276 2503 1277 1275 1274 2504 3750 1439 5527 5528 5529 5530 5531 5532 5533 5534 5535 5536 5537 5538 5539 5540 5541 5542 5543 5544 5545 5546 5547 5548 5549 5550 5551 5552 5553 5554 5555 5556 5557 5558 5622 }
  ownedprovinces         = { 1442 1441 1440 1443 1274 1444 1439 1276 1277 2504 2503 1275 3750 5527 5528 5529 5530 5531 5532 5533 5534 5535 5536 5537 5538 5539 5540 5541 5542 5543 5544 5545 5546 5547 5548 5549 5550 5551 5552 5553 5555 5556 5557 5558 5622 }
  controlledprovinces    = { 1442 1441 1440 1443 1274 1444 1439 1276 1277 2504 2503 1275 3750 5527 5528 5529 5530 5531 5532 5533 5534 5535 5536 5537 5538 5539 5540 5541 5542 5543 5544 5545 5546 5547 5548 5549 5550 5551 5552 5553 5555 5556 5557 5558 5622 }

  techapps               = { 5810 5800 5080 5316 5326 1010 1020 1030 1040 1050 1060 1070 1160 1170 1180 1190 1200 1210 1220 1230 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1830 1910 1920 1930 1940 1950 1960 2290 2300 2310 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }
  blueprints             = { 5050 5820 5327 5700 5600 7600 7610 2620 2010 2860 2870 2920 2900 2910 6570 8010 8020 8050 8060 8070 8080 3010 3110 3120 3210 3220 3810 3720 3410 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 4700 4740 4750 4760 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 10
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 504001 }
  headofgovernment       = { type = 9 id = 504002 }
  foreignminister        = { type = 9 id = 504003 }
  armamentminister       = { type = 9 id = 504004 }
  ministerofsecurity     = { type = 9 id = 504005 }
  ministerofintelligence = { type = 9 id = 504006 }
  chiefofstaff           = { type = 9 id = 504007 }
  chiefofarmy            = { type = 9 id = 504008 }
  chiefofnavy            = { type = 9 id = 504009 }
  chiefofair             = { type = 9 id = 504010 }

  landunit = {
    id       = { type = 22200 id = 1 }
    name     = "15. Lujun"
    location = 1442
    division = {
      id             = { type = 22200 id = 2 }
      name           = "35. Bubing Shi"
      type           = garrison
      model          = 2
      strength       = 40
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22200 id = 3 }
    name     = "11. Jun"
    location = 1442
    division = {
      id             = { type = 22200 id = 4 }
      name           = "Xin 7. Bubing Shi"
      type           = militia
      model          = 3
      strength       = 40
      experience     = 40
    }
    division = {
      id             = { type = 22200 id = 5 }
      name           = "Xin 7. Qibing Shi"
      type           = cavalry
      model          = 6
      strength       = 100
      max_strength   = 60
      experience     = 40
    }
    division = {
      id             = { type = 22200 id = 6 }
      name           = "10. Duli Lü"
      type           = militia
      model          = 3
      strength       = 50
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22200 id = 7 }
    name     = "Xin 2. Jun"
    location = 1442
    division = {
      id             = { type = 22200 id = 8 }
      name           = "Xin 9. Bubing Shi"
      type           = militia
      model          = 3
      strength       = 40
      experience     = 40
    }
    division = {
      id             = { type = 22200 id = 9 }
      name           = "1. Qibing Lü"
      type           = cavalry
      model          = 5
      strength       = 40
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22200 id = 11 }
    name     = "Tunganistan Jun"
    location = 1442
    division = {
      id             = { type = 22200 id = 12 }
      name           = "Tungan Shi"
      type           = militia
      model          = 3
      strength       = 50
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 9 }
    name     = "3. Jun"
    location = 1442
    division = {
      id             = { type = 22000 id = 10 }
      name           = "3. Jun"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 23 }
    name     = "10. Jun"
    location = 1442
    division = {
      id             = { type = 22000 id = 24 }
      name           = "10. Jun"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 33 }
    name     = "15. Jun"
    location = 1442
    division = {
      id             = { type = 22000 id = 34 }
      name           = "15. Jun"
      type           = garrison
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 60 }
    name     = "25. Jun"
    location = 1442
    division = {
      id             = { type = 22000 id = 61 }
      name           = "25. Jun"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 75 }
    name     = "31. Jun"
    location = 1442
    division = {
      id             = { type = 22000 id = 76 }
      name           = "31. Jun"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 99 }
    name     = "41. Jun"
    location = 1442
    division = {
      id             = { type = 22000 id = 100 }
      name           = "41. Jun"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 174 }
    name     = "25. Bubing Shi"
    location = 1442
    division = {
      id             = { type = 22000 id = 175 }
      name           = "25. Bubing Shi"
      type           = militia
      model          = 3
      strength       = 50
      max_strength   = 50
      experience     = 40
    }
    dig_in   = 20.000
  }
}
