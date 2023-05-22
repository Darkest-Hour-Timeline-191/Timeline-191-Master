##############################
# Country definition for POL #
##############################
province = {
  id = 480 # Czestochowa
  anti_air = 3
  air_base = { size = 3 current_size = 3 }
}
province = {
  id = 485 # Warszawa
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
}
province = { id = 509 anti_air = 1 } # Suwalki
province = {
  id = 1876 # Siedlce
  air_base = { size = 3 current_size = 3 }
}
province = { id = 7050 landfort = 2 } # Modlin

#####################
# Country main data #
#####################

country = {
  tag                = POL
  puppet             = GER
  control            = GER
  capital            = 485 # Warszawa
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = {
      tag        = CZE
      value      = -1
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = ENG value = 50 }
    relation = { tag = EST value = 75 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = -10 }
    relation = { tag = GRE value = 35 }
    relation = { tag = HUN value = 50 }
    relation = { tag = LAT value = 75 }
    relation = { tag = LIT value = -75 }
    relation = {
      tag        = ROM
      value      = 40
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = SOV value = -50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 1 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 1 }
  SpyInfo                = { country = "EST" NumberOfSpies = 1 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }

  nationalprovinces      = { 485 306 307 479 480 481 483 484 305 486 3396 95 3271 1884 501 3273 229 487 489 488 504 505 1595 2296 2628 1811 3261 508 509 209 208 213 211 222 214 1875 1876 102 3263 3264 3265 3266 3267 3268 3269 3270 3272 3277 3278 3279 6515 6516 6517 7048 7049 7050 7262 7263 7264 7335 7978 7979 7980 3276 210 500 }
  ownedprovinces         = { 480 481 484 485 487 502 503 504 505 506 508 509 209 211 222 214 1875 1876 1885 102 3266 3267 3268 3270 3272 3274 3278 3279 3395 6515 6516 7048 7049 7050 7262 7263 7264 7335 7980 6517 }
  controlledprovinces    = { 480 481 484 485 487 502 503 504 505 506 508 509 209 211 222 214 1875 1876 1885 102 3266 3267 3268 3270 3272 3274 3278 3279 3395 6515 6516 7048 7049 7050 7262 7263 7264 7335 7980 6517 }
  claimedprovinces       = { 303 2647 267 161 507 506 502 1885 3274 3275 562 503 3395 1153 212 272 6519 7065 7984 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1910 1920 1930 1940 1950 1960 14000 14010 14020 1830 1840 1850 1860 7600 7610 2620 2010 2630 2640 2860 2870 2880 2020 2290 2300 2310 2900 2800 2450 2810 2820 3210 3220 3010 3020 3030 3040 3050 3060 3610 3620 3630 3640 3720 3730 3736 3740 3750 3900 3810 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4800 4810 5700 5710 5310 54010 54020 5316 5326 5810 5820 5050 5830 5800 5080 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 8010 8040 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    freedom           = 4
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 13001 }
  headofgovernment       = { type = 9 id = 13002 }
  foreignminister        = { type = 9 id = 13003 }
  armamentminister       = { type = 9 id = 13004 }
  ministerofsecurity     = { type = 9 id = 13005 }
  ministerofintelligence = { type = 9 id = 13006 }
  chiefofstaff           = { type = 9 id = 13007 }
  chiefofarmy            = { type = 9 id = 13008 }
  chiefofnavy            = { type = 9 id = 13009 }
  chiefofair             = { type = 9 id = 13010 }

  landunit = {
    id       = { type = 18600 id = 1 }
    name     = "1 Okreg Wojskowy"
    location = 485
    division = {
      id             = { type = 18600 id = 2 }
      name           = "8 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 3 }
      name           = "9 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 4 }
      name           = "28 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 5 }
      name           = "1 Dywizja Kawalerii"
      type           = cavalry
      model          = 6
      extra          = artillery
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 6 }
      name           = "Podlaska Brygada Kawalerii"
      type           = cavalry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 25
      max_strength   = 60
    }
    division = {
      id             = { type = 18600 id = 7 }
      name           = "Mazowiecka Brygada Kawalerii"
      type           = cavalry
      model          = 8
      extra          = armored_car
      brigade_model  = 3
      strength       = 25
      max_strength   = 60
    }
  }
  landunit = {
    id       = { type = 18600 id = 8 }
    name     = "2 Okreg Wojskowy"
    location = 485
    division = {
      id             = { type = 18600 id = 9 }
      name           = "3 Dywizja Piechoty Legionów"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 10 }
      name           = "13 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 11 }
      name           = "27 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 12 }
      name           = "Wolynska Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
    division = {
      id             = { type = 18600 id = 13 }
      name           = "41 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 14 }
    name     = "3 Okreg Wojskowy"
    location = 485
    division = {
      id             = { type = 18600 id = 15 }
      name           = "1 Dywizja Piechoty Legionów"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 16 }
      name           = "19 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 17 }
      name           = "29 Dywizja Piechoty"
      type           = infantry
      model          = 8
      strength       = 45
    }
    division = {
      id             = { type = 18600 id = 18 }
      name           = "Suwalska Brygada Kawalerii"
      type           = cavalry
      model          = 8
      strength       = 25
      max_strength   = 60
    }
    division = {
      id             = { type = 18600 id = 19 }
      name           = "Wilenska Brygada Kawalerii"
      type           = cavalry
      model          = 8
      strength       = 25
      max_strength   = 60
    }
    division = {
      id             = { type = 18600 id = 20 }
      name           = "39 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 18600 id = 21 }
      name           = "35 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 18600 id = 22 }
      name           = "33 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 23 }
    name     = "4 Okreg Wojskowy"
    location = 485
    division = {
      id             = { type = 18600 id = 24 }
      name           = "7 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 25 }
      name           = "10 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 26 }
      name           = "26 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 27 }
      name           = "Lodzka Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
    division = {
      id             = { type = 18600 id = 28 }
      name           = "45 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 29 }
    name     = "5 Okreg Wojskowy"
    location = 485
    division = {
      id             = { type = 18600 id = 30 }
      name           = "6 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 31 }
      name           = "21 Dywizja Piechoty Górskiej"
      type           = bergsjaeger
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 32 }
      name           = "23 Dywizja Piechoty"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 33 }
      name           = "Krakowska Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
    division = {
      id             = { type = 18600 id = 34 }
      name           = "55 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 35 }
    name     = "6 Okreg Wojskowy"
    location = 485
    division = {
      id             = { type = 18600 id = 36 }
      name           = "5 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 37 }
      name           = "11 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 38 }
      name           = "12 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 39 }
      name           = "Podolska Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
    division = {
      id             = { type = 18600 id = 40 }
      name           = "36 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 41 }
    name     = "7 Okreg Wojskowy"
    location = 485
    division = {
      id             = { type = 18600 id = 42 }
      name           = "14 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 43 }
      name           = "17 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 3
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 44 }
      name           = "25 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 45 }
      name           = "Wielkopolska Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 18600 id = 46 }
    name     = "8 Okreg Wojskowy"
    location = 485
    division = {
      id             = { type = 18600 id = 47 }
      name           = "4 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 48 }
      name           = "15 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 49 }
      name           = "16 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 50 }
      name           = "Pomorska Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 18600 id = 51 }
    name     = "9 Okreg Wojskowy"
    location = 485
    division = {
      id             = { type = 18600 id = 52 }
      name           = "18 Dywizja Piechoty"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 53 }
      name           = "20 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 54 }
      name           = "30 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 55 }
      name           = "Nowogródzka Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
    division = {
      id             = { type = 18600 id = 56 }
      name           = "38 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 18600 id = 57 }
      name           = "44 Dywizja Piechoty"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 18600 id = 58 }
    name     = "10 Okreg Wojskowy"
    location = 485
    division = {
      id             = { type = 18600 id = 59 }
      name           = "2 Dywizja Piechoty Legionów"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 4
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 60 }
      name           = "22 Dywizja Piechoty Górskiej"
      type           = bergsjaeger
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 61 }
      name           = "24 Dywizja Piechoty"
      type           = infantry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 18600 id = 62 }
      name           = "Kresowa Brygada Kawalerii"
      type           = cavalry
      model          = 7
      strength       = 30
      max_strength   = 70
    }
  }

  airunit = { 
    id       = { type = 18600 id = 63 }
    name     = "Wojska Lotnicze"
    location = 485
    base     = 485
    division = {
      id             = { type = 18600 id = 64 }
      name           = "3 Korpus Lotnictwa Mysliwskiego"
      type           = interceptor
      model          = 7
    }
    division = {
      id             = { type = 18600 id = 65 }
      name           = "4 Korpus Lotnictwa Szturmowego"
      type           = interceptor
      model          = 7
    }
    division = {
      id             = { type = 18600 id = 66 }
      name           = "15 Dywizja Lotnictwa Bombowego"
      type           = tactical_bomber
      model          = 4
    }
  }
}
