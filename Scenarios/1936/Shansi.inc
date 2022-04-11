##############################
# Country definition for CSX #
##############################

country = {
  tag                = CSX
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1225 # Taiyuan
  extra_tc           = 20
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
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }

  nationalprovinces      = { 1209 2520 1225 2518 2517 1226 5563 5564 5565 5566 5567 5568 }
  ownedprovinces         = { 1209 2520 1225 2518 2517 1226 5563 5564 5565 5566 5567 5568 }
  controlledprovinces    = { 1209 2520 1225 2518 2517 1226 5563 5564 5565 5566 5567 5568 }

  techapps               = { 5810 5820 5800 5080 5316 5326 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 1230 13060 13070 13080 1310 1320 1330 1340 1830 1910 1920 1930 1940 1950 1960 2290 2300 2310 2900 2910 2920 2930 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6570 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1350 1360 5050 5327 5700 5600 7600 7610 2620 2010 2860 2870 2880 8010 8020 8050 8060 8070 8080 3010 3110 3120 3210 3220 3810 3720 3410 4500 4510 4520 4530 4540 4550 4300 4310 4320 4600 4610 4620 4630 4120 4800 4810 4700 4740 4750 4760 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 503001 }
  headofgovernment       = { type = 9 id = 503002 }
  foreignminister        = { type = 9 id = 503003 }
  armamentminister       = { type = 9 id = 503004 }
  ministerofsecurity     = { type = 9 id = 503005 }
  ministerofintelligence = { type = 9 id = 503006 }
  chiefofstaff           = { type = 9 id = 503007 }
  chiefofarmy            = { type = 9 id = 503008 }
  chiefofnavy            = { type = 9 id = 503009 }
  chiefofair             = { type = 9 id = 503010 }

  landunit = {
    id       = { type = 22300 id = 1 }
    name     = "Shanxi Jingbei"
    location = 1225
    division = {
      id             = { type = 22300 id = 2 }
      name           = "1. Duli Lü"
      type           = militia
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 22300 id = 7 }
      name           = "1. Qibing Shi"
      type           = cavalry
      model          = 6
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22300 id = 9 }
    name     = "34. Jun"
    location = 1225
    division = {
      id             = { type = 22300 id = 10 }
      name           = "66. Bubing Shi"
      type           = militia
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 22300 id = 12 }
      name           = "71. Bubing Shi"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22300 id = 18 }
    name     = "29. Jun"
    location = 1225
    division = {
      id             = { type = 22300 id = 19 }
      name           = "37. Bubing Shi"
      type           = militia
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 22300 id = 20 }
      name           = "37. Bubing Shi"
      type           = militia
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 22300 id = 21 }
      name           = "37. Bubing Shi"
      type           = militia
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 22300 id = 22 }
      name           = "37. Bubing Shi"
      type           = militia
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 22300 id = 23 }
      name           = "9. Qibing Shi"
      type           = cavalry
      model          = 5
      strength       = 40
    }
    division = {
      id             = { type = 22300 id = 24 }
      name           = "39. Duli Lü"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 43 }
    name     = "19. Jun"
    location = 1225
    division = {
      id             = { type = 22000 id = 44 }
      name           = "19. Jun"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 79 }
    name     = "32. Jun"
    location = 1225
    division = {
      id             = { type = 22000 id = 80 }
      name           = "32. Jun"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 83 }
    name     = "33. Jun"
    location = 1225
    division = {
      id             = { type = 22000 id = 84 }
      name           = "33. Jun"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 103 }
    name     = "42. Jun"
    location = 1225
    division = {
      id             = { type = 22000 id = 104 }
      name           = "42. Jun"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 136 }
    name     = "63. Jun"
    location = 1225
    division = {
      id             = { type = 22000 id = 137 }
      name           = "63. Jun"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 145 }
    name     = "Dongbei Qibing Jun"
    location = 1225
    division = {
      id             = { type = 22000 id = 146 }
      name           = "Dongbei Qibing Jun"
      type           = cavalry
      model          = 6
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 205 }
    name     = "Ji-Cai-Sui-Jing Gongshu"
    location = 1225
    division = {
      id             = { type = 22000 id = 206 }
      name           = "Ji-Cai-Sui-Jing Gongshu"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 266 }
    name     = "Shanxi Baoantui"
    location = 1225
    division = {
      id             = { type = 22000 id = 267 }
      name           = "Shanxi Baoantui"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
}
