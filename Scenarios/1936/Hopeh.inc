##############################
# Country definition for U61 #
##############################
province = {
  id = 1205 # Beiping
  air_base = { size = 5 current_size = 5 }
}

#####################
# Country main data #
#####################

country = {
  tag                = U61
  regular_id         = CHI
  puppet             = CHI
  capital            = 1205 # Beiping
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

  nationalprovinces      = { 1205 1203 2527 1204 2526 2576 1210 2525 1211 1212 2523 5637 5634 6916 }
  ownedprovinces         = { 1205 1204 2526 1210 2525 1211 1212 2523 5637 }
  controlledprovinces    = { 1205 1204 2526 1210 2525 1211 1212 2523 5637 }

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
    id       = { type = 22301 id = 1 }
    name     = "3. Lujun"
    location = 1205
    division = {
      id             = { type = 22301 id = 2 }
      name           = "22. Jun"
      type           = militia
      model          = 5
      strength       = 40
    }
    division = {
      id             = { type = 22301 id = 3 }
      name           = "23. Jun"
      type           = militia
      model          = 5
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22301 id = 4 }
    name     = "Hebei Zhujun"
    location = 1205
    division = {
      id             = { type = 22301 id = 5 }
      name           = "Hebei Minbing"
      type           = militia
      model          = 5
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 22001 id = 6 }
    name     = "53. Jun"
    location = 1205
    division = {
      id             = { type = 22001 id = 7 }
      name           = "53. Jun"
      type           = militia
      model          = 5
      strength       = 40
    }
  }
}
