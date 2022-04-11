##############################
# Country definition for CGX #
##############################

country = {
  tag                = CGX
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 559 # Guilin
  extra_tc           = 10
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 3 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 2 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }

  nationalprovinces      = { 674 695 1309 1319 1310 720 557 1258 559 1311 5606 5607 }
  ownedprovinces         = { 1258 1310 1311 1309 1319 695 674 720 559 557 5606 5607 }
  controlledprovinces    = { 1258 1310 1311 1309 1319 695 674 720 559 557 5606 5607 }

  techapps               = { 5810 5820 5050 5800 5080 5316 5326 5327 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 13060 13070 13080 1310 1320 1330 1340 1830 1910 1920 1930 1940 1950 1960 2860 2870 2290 2300 2310 2900 2910 6570 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 3010 3110 3120 3130 3140 3210 3220 3810 3720 3730 3410 3420 8010 8020 8050 8060 8070 8080 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 4700 4740 4750 4760 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1090 1560 1230 1350 1360 1840 1850 5700 5600 1970 7600 7610 2620 2010 2880 2920 2930 2800 6210 4120 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 502001 }
  headofgovernment       = { type = 9 id = 502002 }
  foreignminister        = { type = 9 id = 502003 }
  armamentminister       = { type = 9 id = 502004 }
  ministerofsecurity     = { type = 9 id = 502005 }
  ministerofintelligence = { type = 9 id = 502006 }
  chiefofstaff           = { type = 9 id = 502007 }
  chiefofarmy            = { type = 9 id = 502008 }
  chiefofnavy            = { type = 9 id = 502009 }
  chiefofair             = { type = 9 id = 502010 }

  landunit = {
    id       = { type = 22400 id = 17 }
    name     = "4. Juntuan"
    location = 559
    division = {
      id             = { type = 22400 id = 18 }
      name           = "19. Lujun"
      type           = infantry
      model          = 3
      strength       = 30
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 19 }
    name     = "7. Jun"
    location = 559
    division = {
      id             = { type = 22400 id = 20 }
      name           = "19. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 21 }
      name           = "21. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 22 }
      name           = "22. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 23 }
      name           = "24. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 24 }
    name     = "15. Jun"
    location = 559
    division = {
      id             = { type = 22400 id = 25 }
      name           = "42. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 26 }
      name           = "43. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 27 }
      name           = "44. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 28 }
      name           = "45. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 31 }
    name     = "Guangxi Xianbing"
    location = 559
    division = {
      id             = { type = 22400 id = 32 }
      name           = "Guangxi Xianbing"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 33 }
      name           = "Guangdong Bubing Jun"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 20 }
    name     = "9. Jun"
    location = 559
    division = {
      id             = { type = 22000 id = 21 }
      name           = "9. Jun"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 67 }
    name     = "28. Jun"
    location = 559
    division = {
      id             = { type = 22000 id = 68 }
      name           = "28. Jun"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 192 }
    name     = "Hunan Xi Jingbei"
    location = 559
    division = {
      id             = { type = 22000 id = 193 }
      name           = "34. Xin Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 50
      max_strength   = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 215 }
    name     = "Ningbo Jingbei"
    location = 559
    division = {
      id             = { type = 22000 id = 216 }
      name           = "37. Duli Bubing Lü"
      type           = infantry
      model          = 3
      strength       = 25
      max_strength   = 25
    }
  }
  landunit = {
    id       = { type = 22000 id = 161 }
    name     = "14. Lujun"
    location = 559
    division = {
      id             = { type = 22000 id = 162 }
      name           = "14. Lujun"
      type           = infantry
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 38 }
    name     = "18. Jun"
    location = 559
    division = {
      id             = { type = 22000 id = 39 }
      name           = "18. Jun"
      type           = infantry
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 62 }
    name     = "26. Jun"
    location = 559
    division = {
      id             = { type = 22000 id = 63 }
      name           = "26. Jun"
      type           = infantry
      model          = 3
      strength       = 40
    }
  }
}
