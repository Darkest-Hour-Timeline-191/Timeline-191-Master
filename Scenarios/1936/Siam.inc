##############################
# Country definition for SIA #
##############################
province = {
  id = 1345 # Nakhon Sawan
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 3128 # Nakhon Pathom
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SIA
  capital            = 1343 # Krung Thep
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
    relation = { tag = JAP value = 75 }
    relation = { tag = MAN value = 75 }
  }

  nationalprovinces      = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1289 2951 3124 3125 3126 3127 3128 3130 3131 7016 7017 7018 7019 7020 7021 7022 7023 7905 7915 7916 }
  ownedprovinces         = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1289 2951 3124 3125 3126 3127 3128 3130 3131 7016 7017 7018 7019 7020 7021 7022 7023 7905 7915 7916 }
  controlledprovinces    = { 1348 1347 1345 1343 1342 1331 1330 1344 1303 1289 2951 3124 3125 3126 3127 3128 3130 3131 7016 7017 7018 7019 7020 7021 7022 7023 7905 7915 7916 }
  claimedprovinces       = { 1305 1589 3116 3122 1341 1554 1553 5737 5734 7025 1340 3121 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 2800 2450 21180 21190 2810 2820 2510 5810 5820 5800 5080 3010 3020 3030 3040 3110 3120 3130 3610 3620 8010 8050 1830 1840 3720 3730 3736 3740 3750 3900 3810 5600 5610 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 62001 }
  headofgovernment       = { type = 9 id = 62002 }
  foreignminister        = { type = 9 id = 62003 }
  armamentminister       = { type = 9 id = 62004 }
  ministerofsecurity     = { type = 9 id = 62005 }
  ministerofintelligence = { type = 9 id = 62006 }
  chiefofstaff           = { type = 9 id = 62007 }
  chiefofarmy            = { type = 9 id = 62008 }
  chiefofnavy            = { type = 9 id = 62009 }
  chiefofair             = { type = 9 id = 62010 }

  landunit = {
    id       = { type = 23600 id = 1 }
    name     = "Royal Thai Army"
    location = 1343
    division = {
      id             = { type = 23600 id = 2 }
      name           = "1. Thai Infantry Div."
      type           = infantry
      model          = 7
      strength       = 90
    }
    division = {
      id             = { type = 23600 id = 3 }
      name           = "2. Thai Infantry Div."
      type           = infantry
      model          = 6
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23600 id = 4 }
    name     = "Royal Thai Police Force"
    location = 1343
    division = {
      id             = { type = 23600 id = 5 }
      name           = "1. Royal Thai Police Div."
      type           = garrison
      model          = 3
      extra          = police
      brigade_model  = 1
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 23600 id = 6 }
    name     = "Royal Thai Navy"
    location = 3128
    base     = 3128
    division = {
      id             = { type = 23600 id = 7 }
      name           = "RTNS Sri Ayuthia"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23600 id = 8 }
      name           = "RTNS Dhonburi"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23600 id = 10 }
      name           = "Phra Ruang Flotille"
      type           = destroyer
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 23600 id = 12 }
    name     = "Royal Thai Airforce"
    location = 1345
    base     = 1345
    division = {
      id             = { type = 23600 id = 13 }
      name           = "1. RTAF Fighter Group"
      type           = interceptor
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 23600 id = 14 }
      name           = "1. RTAF Tactic Bomb Group"
      type           = tactical_bomber
      model          = 3
      strength       = 44
    }
  }
}
