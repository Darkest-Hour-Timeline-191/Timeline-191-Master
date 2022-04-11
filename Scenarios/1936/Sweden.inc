##############################
# Country definition for SWE #
##############################
province = { id = 96 supplypool = 2 } # Visby
province = {
  id = 98 # Göteborg
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 101 # Stockholm
  anti_air = 5
  air_base = { size = 3 current_size = 3 }
  naval_base = { size = 5 current_size = 5 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SWE
  capital            = 101 # Stockholm
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "EST" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 1 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }

  nationalprovinces      = { 126 127 121 119 115 113 106 105 101 100 99 98 97 93 96 103 2629 3300 3301 3302 3303 3304 3305 3306 3307 3308 3309 3311 3312 3313 3314 3315 3316 3317 3318 3319 3320 3321 3322 6528 6529 6530 6531 6532 7168 7169 7451 7452 7453 7454 }
  ownedprovinces         = { 126 127 121 119 115 113 106 105 101 100 99 98 97 93 96 3300 3301 3302 3303 3304 3305 3306 3307 3308 3309 3311 3312 3313 3314 3315 3316 3317 3318 3319 3320 3321 3322 6528 6529 6530 6531 6532 2629 7168 7169 7451 7452 7453 7454 }
  controlledprovinces    = { 126 127 121 119 115 113 106 105 101 100 99 98 97 93 96 3300 3301 3302 3303 3304 3305 3306 3307 3308 3309 3311 3312 3313 3314 3315 3316 3317 3318 3319 3320 3321 3322 6528 6529 6530 6531 6532 2629 7168 7169 7451 7452 7453 7454 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4700 4710 4300 4310 4320 4330 4800 4810 4820 1910 1920 1930 1940 1950 1960 1970 1980 1830 1840 1850 1860 2860 2870 2880 2020 7600 7610 2620 2010 2630 2290 2300 2310 3210 3220 3230 2800 2450 21180 21190 21200 2810 2820 2510 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5800 5080 5090 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3610 3620 3630 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 5470 3720 3730 3736 3740 3750 3900 3810 5600 5610 5620 5630 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 8010 8020 8040 8050 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 6
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 7001 }
  headofgovernment       = { type = 9 id = 7033 }
  foreignminister        = { type = 9 id = 7038 }
  armamentminister       = { type = 9 id = 7047 }
  ministerofsecurity     = { type = 9 id = 7058 }
  ministerofintelligence = { type = 9 id = 7006 }
  chiefofstaff           = { type = 9 id = 7007 }
  chiefofarmy            = { type = 9 id = 7008 }
  chiefofnavy            = { type = 9 id = 7009 }
  chiefofair             = { type = 9 id = 7010 }

  landunit = {
    id       = { type = 29600 id = 1 }
    name     = "Södra Distrikt"
    location = 101
    division = {
      id             = { type = 29600 id = 2 }
      name           = "Södra Arméfördelning"
      type           = infantry
      model          = 7
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 29600 id = 3 }
    name     = "Västra Distrikt"
    location = 101
    division = {
      id             = { type = 29600 id = 4 }
      name           = "Västra Arméfördelning"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 29600 id = 5 }
    name     = "Östra Distrikt"
    location = 101
    division = {
      id             = { type = 29600 id = 6 }
      name           = "Östra Arméfördelning"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 2
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 29600 id = 7 }
    name     = "Norra Distrikt"
    location = 101
    division = {
      id             = { type = 29600 id = 8 }
      name           = "Norra Arméfördelning"
      type           = infantry
      model          = 7
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 29600 id = 9 }
    name     = "Östra Brigad Distrikt"
    location = 101
    division = {
      id             = { type = 29600 id = 10 }
      name           = "Östra Brigade"
      type           = infantry
      model          = 7
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 29600 id = 11 }
    name     = "Övre Norrland Militär Område"
    location = 101
    division = {
      id             = { type = 29600 id = 12 }
      name           = "Övre Norrlandstrupper"
      type           = infantry
      model          = 7
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 29600 id = 13 }
    name     = "Gotland Militär Område"
    location = 101
    division = {
      id             = { type = 29600 id = 14 }
      name           = "Gotlandstrupper"
      type           = garrison
      model          = 3
      strength       = 10
    }
  }

  navalunit = {
    id       = { type = 29600 id = 15 }
    name     = "Kustflottan"
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 16 }
      name           = "HMS Sverige"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 29600 id = 17 }
      name           = "HMS Drottning Victoria"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 29600 id = 18 }
      name           = "HMS Gustav V"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 29600 id = 19 }
      name           = "HMS Clas Fleming"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 20 }
      name           = "HMS Gotland"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 29600 id = 21 }
      name           = "HMS Äran"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 22 }
      name           = "HMS Tapperheten"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 23 }
      name           = "HMS Wasa"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 24 }
      name           = "HMS Dristigheten"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 29600 id = 25 }
      name           = "1. Jagarflottiljen"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 29600 id = 26 }
      name           = "3. Jagarflottiljen"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 29600 id = 28 }
    name     = "Ålandshavseskader"
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 29 }
      name           = "1. Trängflottiljen"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 30 }
      name           = "2. Jagarflottiljen"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 29600 id = 31 }
    name     = "Göteborgseskadern"
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 32 }
      name           = "HMS Manligheten"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 33 }
      name           = "5. Jagarflottiljen"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 29600 id = 34 }
    name     = "2nd Squadron"
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 35 }
      name           = "1. Ubåtsflottiljen"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 135 }
      name           = "2. Ubåtsflottiljen"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 29600 id = 235 }
      name           = "3. Ubåtsflottiljen"
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 29600 id = 36 }
    name     = "1a Flygkåren"
    location = 101
    base     = 101
    division = {
      id             = { type = 29600 id = 37 }
      name           = "1. Taktiska Bombflyggruppen"
      type           = tactical_bomber
      model          = 4
    }
    division = {
      id             = { type = 29600 id = 38 }
      name           = "1. Marinbombflyggruppen"
      type           = naval_bomber
      model          = 1
    }
  }
}
