##############################
# Country definition for NOR #
##############################
province = {
  id = 107 # Oslo
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = { id = 118 coastalfort = 2 } # Trondheim
province = {
  id = 2276 # Narvik
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 3294 # Alesund
  coastalfort = 3
  anti_air = 2
  air_base = { size = 5 current_size = 5 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = NOR
  capital            = 107 # Oslo
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 200
  escorts        = 5

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 150 }
    relation = { tag = ENG value = 90 }
    relation = { tag = FIN value = 75 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 4 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }

  nationalprovinces      = { 107 108 109 110 111 116 117 118 124 125 128 129 114 112 104 2276 3290 3291 3292 3293 3294 3295 3296 3297 3298 3299 7170 7171 7176 }
  ownedprovinces         = { 107 108 109 110 111 116 117 118 124 125 128 129 114 112 104 2276 3290 3291 3292 3293 3294 3295 3296 3297 3298 3299 7170 7171 7176 }
  controlledprovinces    = { 107 108 109 110 111 116 117 118 124 125 128 129 114 112 104 2276 3290 3291 3292 3293 3294 3295 3296 3297 3298 3299 7170 7171 7176 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 2860 2870 2880 2020 7600 7610 2620 2010 2630 2640 2290 2300 2310 2800 2450 21180 21190 21200 3210 3220 3230 2810 2820 2510 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1910 1920 1930 1940 1950 1960 1970 1980 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5800 5080 5090 3010 3020 3030 3040 3110 3120 3130 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 8010 8020 8040 8050 4300 4310 4320 4330 4800 4810 4820 4700 4710 1830 1840 1850 1860 3720 3730 3736 3740 3750 3900 3810 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 7
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 14001 }
  headofgovernment       = { type = 9 id = 14002 }
  foreignminister        = { type = 9 id = 14003 }
  armamentminister       = { type = 9 id = 14004 }
  ministerofsecurity     = { type = 9 id = 14005 }
  ministerofintelligence = { type = 9 id = 14006 }
  chiefofstaff           = { type = 9 id = 14007 }
  chiefofarmy            = { type = 9 id = 14008 }
  chiefofnavy            = { type = 9 id = 14009 }
  chiefofair             = { type = 9 id = 14010 }

  landunit = {
    id       = { type = 12600 id = 1 }
    name     = "1. Divisjon"
    location = 107
    division = {
      id             = { type = 12600 id = 2 }
      name           = "1. Infanteridivisjon"
      type           = infantry
      model          = 5
      extra          = engineer
      brigade_model  = 2
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 12600 id = 3 }
    name     = "2. Divisjon"
    location = 107
    division = {
      id             = { type = 12600 id = 4 }
      name           = "2. Infanteridivisjon"
      type           = infantry
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 12600 id = 5 }
    name     = "3. Divisjon"
    location = 107
    division = {
      id             = { type = 12600 id = 6 }
      name           = "3. Infanteridivisjon"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 12600 id = 7 }
    name     = "4. Divisjon"
    location = 107
    division = {
      id             = { type = 12600 id = 8 }
      name           = "4. Infanteridivisjon"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 12600 id = 9 }
    name     = "5. Divisjon"
    location = 107
    division = {
      id             = { type = 12600 id = 10 }
      name           = "5. Infanteridivisjon"
      type           = infantry
      model          = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 12600 id = 11 }
    name     = "6. Divisjon"
    location = 107
    division = {
      id             = { type = 12600 id = 12 }
      name           = "6. Infanteridivisjon"
      type           = infantry
      model          = 5
      strength       = 15
    }
  }

  navalunit = {
    id       = { type = 12600 id = 20 }
    name     = "2. Kystvaktdistrikt"
    location = 2276
    base     = 2276
    division = {
      id             = { type = 12600 id = 21 }
      name           = "1. Undervannsbåteskadre"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 12600 id = 22 }
      name           = "2. Undervannsbåteskadre"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 12600 id = 25 }
    name     = "1. Kystvaktdistrikt"
    location = 2276
    base     = 2276
    division = {
      id             = { type = 12600 id = 26 }
      name           = "KNM Norge"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 12600 id = 30 }
      name           = "KNM Eidsvold"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 12600 id = 2422 }
      name           = "1. Destroyereskadre"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 12600 id = 2423 }
      name           = "2. Destroyereskadre"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12600 id = 2424 }
      name           = "3. Destroyereskadre"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12600 id = 2425 }
      name           = "4. Destroyereskadre"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12600 id = 2426 }
      name           = "5. Destroyereskadre"
      type           = destroyer
      model          = 0
    }
  }
}
