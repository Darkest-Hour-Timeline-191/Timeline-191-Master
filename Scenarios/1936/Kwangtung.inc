##############################
# Country definition for U59 #
##############################
province = {
  id = 1313 # Guangzhou
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 1318 # Yangjiang
  naval_base = { size = 5 current_size = 5 }
}

#####################
# Country main data #
#####################

country = {
  tag                = U59
  regular_id         = CHI
  capital            = 1313 # Guangzhou
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

  nationalprovinces      = { 1313 1325 1320 1318 1317 568 570 1312 1880 1912 1249 1248 1314 1321 746 696 1316 1315 5608 5609 5610 }
  ownedprovinces         = { 1313 1325 1320 1318 1317 568 570 1312 1880 1912 1249 1248 1314 5608 5609 }
  controlledprovinces    = { 1313 1325 1320 1318 1317 568 570 1312 1880 1912 1249 1248 1314 5608 5609 }
  claimedprovinces       = { 5872 5836 5873 5891 5892 5893 }

  techapps               = { 5810 5820 5050 5800 5080 5316 5326 5327 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 13060 13070 13080 1310 1320 1330 1340 1830 1910 1920 1930 1940 1950 1960 2860 2870 2290 2300 2310 2900 2910 6570 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 3010 3110 3120 3130 3140 3210 3220 3810 3720 3730 3410 3420 8010 8020 8050 8060 8070 8080 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 4700 4740 4750 4760 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }

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

  landunit = {
    id       = { type = 22400 id = 1 }
    name     = "1. Juntuan"
    location = 1313
    division = {
      id             = { type = 22400 id = 2 }
      name           = "Xunlian Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 3 }
      name           = "1. Duli Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 4 }
      name           = "Jingbei Lü"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 5 }
    name     = "1. Jun"
    location = 1313
    division = {
      id             = { type = 22400 id = 6 }
      name           = "1. Bubing Shi"
      type           = garrison
      model          = 2
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 7 }
      name           = "2. Bubing Shi"
      type           = garrison
      model          = 2
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 8 }
      name           = "3. Bubing Shi"
      type           = garrison
      model          = 2
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 9 }
    name     = "2. Jun"
    location = 1313
    division = {
      id             = { type = 22400 id = 10 }
      name           = "4. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 11 }
      name           = "5. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 12 }
      name           = "6. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 13 }
    name     = "3. Jun"
    location = 1313
    division = {
      id             = { type = 22400 id = 14 }
      name           = "7. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 15 }
      name           = "8. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 16 }
      name           = "9. Bubing Shi"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 29 }
    name     = "Guangdong Xianbing"
    location = 1313
    division = {
      id             = { type = 22400 id = 30 }
      name           = "Guangdong Xianbing"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 34 }
    name     = "Hainan Xianbing"
    location = 1313
    division = {
      id             = { type = 22400 id = 35 }
      name           = "9. Duli Lü"
      type           = infantry
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 106 }
    name     = "20. Jun"
    location = 1313
    division = {
      id             = { type = 22000 id = 107 }
      name           = "20. Jun"
      type           = infantry
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 6 }
    name     = "2. Jun"
    location = 1313
    division = {
      id             = { type = 22000 id = 7 }
      name           = "2. Jun"
      type           = infantry
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 36 }
    name     = "16. Jun"
    location = 1313
    division = {
      id             = { type = 22000 id = 37 }
      name           = "16. Jun"
      type           = infantry
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 87 }
    name     = "36. Jun"
    location = 1313
    division = {
      id             = { type = 22000 id = 88 }
      name           = "36. Jun"
      type           = infantry
      model          = 3
      strength       = 40
    }
  }

  navalunit = {
    id       = { type = 22400 id = 40 }
    name     = "Guangdong Haijun"
    location = 1313
    base     = 1369
    division = {
      id             = { type = 22400 id = 43 }
      name           = "1. Yunshuji Dadui"
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 22400 id = 38 }
    name     = "Guangxi Kongjun"
    location = 1313
    base     = 1369
    division = {
      id             = { type = 22400 id = 39 }
      name           = "Guangxi Hang Kong Dui"
      type           = interceptor
      model          = 5
      strength       = 20
      max_strength   = 40
    }
  }
}
