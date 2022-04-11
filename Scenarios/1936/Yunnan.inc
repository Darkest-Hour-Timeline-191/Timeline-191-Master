##############################
# Country definition for CYN #
##############################

country = {
  tag                = CYN
  regular_id         = CHI
  intrinsic_gov_type = paternal_autocrat
  capital            = 1307 # Kunming
  extra_tc           = 4
  manpower           = 200
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  diplomacy = {
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }

  nationalprovinces      = { 1293 1294 1307 1308 1327 1362 1905 1918 1978 1928 1983 5184 1898 5595 5596 5597 5598 5599 5600 5601 5602 5603 5604 5605 6496 5185 }
  ownedprovinces         = { 1293 1294 1307 1308 1327 1362 1905 1918 1978 1928 1983 5595 5596 5597 5598 5599 5600 5601 5602 5603 5604 5605 }
  controlledprovinces    = { 1293 1294 1307 1308 1327 1362 1905 1918 1978 1928 1983 5595 5596 5597 5598 5599 5600 5601 5602 5603 5604 5605 }

  techapps               = { 5810 5820 5800 5080 5316 5326 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 1220 13060 13070 13080 1310 1830 1910 1920 1930 1940 1950 2290 2300 2310 2900 2910 5600 5610 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 4500 4510 4520 4530 4540 4550 4300 4310 4320 4600 4610 4620 4630 4120 4800 4810 4700 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1070 1230 1320 1330 1340 1350 5050 5327 1960 7600 7610 2620 2010 2860 2870 2880 6570 8010 8020 8050 8060 8070 8080 3010 3110 3120 3210 3220 3810 3720 3410 4700 4740 4750 4760 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 501001 }
  headofgovernment       = { type = 9 id = 501002 }
  foreignminister        = { type = 9 id = 501003 }
  armamentminister       = { type = 9 id = 501004 }
  ministerofsecurity     = { type = 9 id = 501005 }
  ministerofintelligence = { type = 9 id = 501006 }
  chiefofstaff           = { type = 9 id = 501007 }
  chiefofarmy            = { type = 9 id = 501008 }
  chiefofnavy            = { type = 9 id = 501009 }
  chiefofair             = { type = 9 id = 501010 }

  landunit = {
    id       = { type = 22100 id = 1 }
    name     = "Yunnan Jingbei"
    location = 1307
    leader   = 615007
    division = {
      id             = { type = 22100 id = 2 }
      name           = "21. Duli Lü"
      type           = garrison
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 22100 id = 3 }
      name           = "22. Duli Lü"
      type           = garrison
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 22100 id = 4 }
      name           = "23. Duli Lü"
      type           = garrison
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 57 }
    name     = "23. Jun"
    location = 1307
    division = {
      id             = { type = 22000 id = 58 }
      name           = "23. Jun"
      type           = militia
      model          = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 109 }
    name     = "44. Jun"
    location = 1307
    division = {
      id             = { type = 22000 id = 110 }
      name           = "44. Jun"
      type           = militia
      model          = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 113 }
    name     = "45. Jun"
    location = 1307
    division = {
      id             = { type = 22000 id = 114 }
      name           = "45. Jun"
      type           = militia
      model          = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 156 }
    name     = "7. Lujun"
    location = 1307
    division = {
      id             = { type = 22000 id = 157 }
      name           = "7. Lujun"
      type           = militia
      model          = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 12 }
    name     = "4. Jun"
    location = 1307
    division = {
      id             = { type = 22000 id = 13 }
      name           = "4. Jun"
      type           = militia
      model          = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 15 }
    name     = "5. Jun"
    location = 1307
    division = {
      id             = { type = 22000 id = 16 }
      name           = "5. Jun"
      type           = militia
      model          = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 45 }
    name     = "20. Jun"
    location = 1307
    division = {
      id             = { type = 22000 id = 46 }
      name           = "20. Jun"
      type           = militia
      model          = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 218 }
    name     = "Guizhou Silingbu"
    location = 1307
    division = {
      id             = { type = 22000 id = 219 }
      name           = "Guizhou Silingbu"
      type           = militia
      model          = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 272 }
    name     = "Guizhou Baoantui"
    location = 1307
    division = {
      id             = { type = 22000 id = 273 }
      name           = "Guizhou Baoantui"
      type           = militia
      model          = 3
      strength       = 50
    }
  }
}
