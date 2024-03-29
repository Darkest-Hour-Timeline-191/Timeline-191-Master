##############################
# Country definition for GRE #
##############################
province = { id = 392 landfort = 5 } # Ioannina
province = {
  id = 396 # Hrakleio
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
  supplypool = 3
}
province = {
  id = 401 # Athina
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 412 landfort = 5 anti_air = 2 } # Thessaloniki
province = { id = 2319 landfort = 5 } # Kastoria
province = { id = 7319 landfort = 5 } # Kozani

#####################
# Country main data #
#####################

country = {
  tag                = GRE
  capital            = 401 # Athina
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 40
  escorts        = 15

  diplomacy = {
    relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 15 }
    relation = { tag = GRE value = 75 }
    relation = { tag = ITA value = -35 }
    relation = { tag = POL value = 35 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 100 }
    relation = {
      tag        = YUG
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
  }

  nationalprovinces      = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399 444 2319 2321 653 563 664 2610 2625 2872 418 3355 3392 5412 5413 6508 6509 6918 7055 7316 7317 7318 7319 7320 7352 7914 7163 }
  ownedprovinces         = { 392 393 394 395 396 400 401 402 403 405 410 411 412 2319 2321 653 563 2610 2625 2872 3355 3392 6508 6509 6918 7055 7316 7317 7318 7319 7320 7352 7914 }
  controlledprovinces    = { 392 393 394 395 396 400 401 402 403 405 410 411 412 2319 2321 653 563 2610 2625 2872 3355 3392 6508 6509 6918 7055 7316 7317 7318 7319 7320 7352 7914 }
  claimedprovinces       = { 2611 2322 2613 409 3374 3398 4132 391 5465 7936 7056 7057 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4300 4310 4320 4330 4800 4810 4820 4700 4710 2860 2870 2880 2020 2290 2300 2310 1830 1840 1850 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5810 5820 5050 5830 5800 5080 5310 54010 54020 5316 5326 5600 5610 5620 5630 3010 3020 3030 3040 3050 3060 3110 3120 3130 3210 3220 3230 3610 3620 3630 3640 8020 8040 8050 3720 3730 3736 3740 3750 3900 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 18001 }
  headofgovernment       = { type = 9 id = 18002 }
  foreignminister        = { type = 9 id = 18003 }
  armamentminister       = { type = 9 id = 18004 }
  ministerofsecurity     = { type = 9 id = 18005 }
  ministerofintelligence = { type = 9 id = 18006 }
  chiefofstaff           = { type = 9 id = 18007 }
  chiefofarmy            = { type = 9 id = 18008 }
  chiefofnavy            = { type = 9 id = 18009 }
  chiefofair             = { type = 9 id = 18010 }

  landunit = {
    id       = { type = 15500 id = 1 }
    name     = "I. Soma Stratou"
    location = 401
    division = {
      id             = { type = 15500 id = 2 }
      name           = "2. Merarchia Pezikou"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 15500 id = 3 }
      name           = "3. Merarchia Pezikou"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 15500 id = 4 }
      name           = "4. Merarchia Pezikou"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 15500 id = 5 }
    name     = "II. Soma Stratou"
    location = 401
    division = {
      id             = { type = 15500 id = 6 }
      name           = "1. Merarchia Pezikou"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 15500 id = 7 }
      name           = "9. Merarchia Pezikou"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 15500 id = 8 }
    name     = "III. Soma Stratou"
    location = 401
    division = {
      id             = { type = 15500 id = 9 }
      name           = "6. Merarchia Pezikou"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 40
    }
    division = {
      id             = { type = 15500 id = 10 }
      name           = "10. Merarchia Pezikou"
      type           = infantry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 15500 id = 11 }
      name           = "11. Merarchia Pezikou"
      type           = infantry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 15500 id = 12 }
      name           = "17. Merarchia Pezikou"
      type           = infantry
      model          = 7
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 15500 id = 13 }
    name     = "IV. Soma Stratou"
    location = 401
    division = {
      id             = { type = 15500 id = 14 }
      name           = "7. Merarchia Pezikou"
      type           = infantry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 15500 id = 15 }
      name           = "14. Merarchia Pezikou"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 15500 id = 16 }
    name     = "V. Soma Stratou"
    location = 401
    division = {
      id             = { type = 15500 id = 17 }
      name           = "12. Merarchia Pezikou"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 15500 id = 18 }
      name           = "13. Merarchia Pezikou"
      type           = infantry
      model          = 7
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 15500 id = 19 }
    name     = "VI. Soma Stratou"
    location = 401
    division = {
      id             = { type = 15500 id = 20 }
      name           = "5. Merarchia Pezikou"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 15500 id = 21 }
      name           = "8. Merarchia Pezikou"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 6
      strength       = 40
    }
    division = {
      id             = { type = 15500 id = 22 }
      name           = "1. Merarchia Ippikou"
      type           = cavalry
      model          = 6
      extra          = artillery
      brigade_model  = 7
      strength       = 40
    }
  }

  navalunit = {
    id       = { type = 15500 id = 23 }
    name     = "Ellinikos Vasilikos Stolos"
    location = 401
    base     = 401
    division = {
      id             = { type = 15500 id = 24 }
      name           = "1. Metaforiko"
      type           = transport
    }
    division = {
      id             = { type = 15500 id = 25 }
      name           = "2. Metaforiko"
      type           = transport
    }
    division = {
      id             = { type = 15500 id = 28 }
      name           = "3. Stoliskos Antitorpillikon"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 15500 id = 32 }
      name           = "4. Stoliskos Antitorpillikon"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 15500 id = 1522 }
    name     = "Polemikos Stolos"
    location = 401
    base     = 401
    division = {
      id             = { type = 15500 id = 30 }
      name           = "BEN Georgios Averoff"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 15500 id = 31 }
      name           = "BEN Helle"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 15500 id = 132 }
      name           = "1. Stoliskos Antitorpillikon"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 15500 id = 232 }
      name           = "2. Stoliskos Antitorpillikon"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 15500 id = 2436 }
    name     = "Stoliskos Ypovrychion"
    location = 401
    base     = 401
    division = {
      id             = { type = 15500 id = 29 }
      name           = "1. Ypobrychio"
      type           = submarine
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 19111 id = 50 }
    name     = "Polemiki Aeroporia"
    location = 401
    base     = 401
    division = {
      id             = { type = 19111 id = 51 }
      name           = "Dioikisi Aeroporias Dioksis"
      type           = interceptor
      model          = 1
      strength       = 36
      max_strength   = 55
    }
  }
}
