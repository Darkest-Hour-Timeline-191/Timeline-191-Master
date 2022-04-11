##############################
# Country definition for ITA #
##############################
province = {
  id = 368 # Genova
  ic = { size = 4 current_size = 4 }
  landfort = 4
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 369 # Parma
  ic = { size = 3 current_size = 3 }
  anti_air = 1
}
province = {
  id = 370 # Milano
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 378 # Venezia
  ic = { size = 4 current_size = 4 }
  coastalfort = 2
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 6 current_size = 6 }
}
province = {
  id = 398 # Kalymnos
  coastalfort = 4
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
  supplypool = 2
  oilpool = 2
}
province = { id = 399 anti_air = 1 } # Rodos
province = {
  id = 512 # Bologna
  ic = { size = 4 current_size = 4 }
  anti_air = 1
}
province = {
  id = 514 # Ancona
  coastalfort = 1
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 515 # Roma
  ic = { size = 4 current_size = 4 }
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 521 # Napoli
  ic = { size = 4 current_size = 4 }
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}
province = {
  id = 523 # Taranto
  ic = { size = 3 current_size = 3 }
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 525 # Palermo
  ic = { size = 1 current_size = 1 }
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 531 # Torino
  ic = { size = 5 current_size = 5 }
  landfort = 4
  anti_air = 1
  air_base = { size = 8 current_size = 8 }
}
province = {
  id = 534 # Cagliari
  coastalfort = 1
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 545 # Sassari
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
  supplypool = 2
}
province = {
  id = 920 # Tubruq
  landfort = 3
  coastalfort = 2
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
  supplypool = 5
  oilpool = 5
}
province = {
  id = 924 # Bangazi
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 932 # Tarabulus
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 1033 # Mussuwa'
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
  supplypool = 20
  oilpool = 5
}
province = {
  id = 1038 # Asab'
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 1056 # Muqdisho
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
  supplypool = 10
  oilpool = 5
}
province = {
  id = 1058 # Kismaayo
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 2621 # Bari
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 3057 # Siracusa
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = ITA
  capital            = 515 # Roma
  manpower           = 500
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 50
  transports     = 400
  escorts        = 100

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = {
      tag        = ALB
      value      = 10
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = 1 }
    relation = {
      tag        = AUS
      value      = 125
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = BEL value = -5 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 30 }
    relation = { tag = CZE value = 15 }
    relation = { tag = ENG value = -50 }
    relation = { tag = ETH value = -200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = -50 }
    relation = { tag = GER value = 50 }
    relation = {
      tag        = GRE
      value      = -35
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = HOL value = -20 }
    relation = {
      tag        = HUN
      value      = 125
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = IRE value = 20 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
    relation = {
      tag        = ROM
      value      = 50
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = SAF value = 1 }
    relation = { tag = SAU value = -25 }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SPR value = -50 }
    relation = {
      tag        = TUR
      value      = 1
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = YEM value = 50 }
    relation = { tag = YUG value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 3 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 4 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 2 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 1 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 4 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }

  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 2326 2325 1408 542 543 545 544 668 372 2509 366 2399 2457 2300 3056 3057 3058 3059 3218 3219 3220 3221 3222 3223 3224 3225 3226 3227 3356 2622 2621 2871 2870 2623 2624 6525 6546 6547 6548 6549 6550 6551 6552 6553 6554 6555 7123 7124 7125 7126 3137 }
  ownedprovinces         = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 378 534 398 399 927 933 932 930 929 925 924 923 922 921 920 919 916 917 926 928 931 1017 1033 1039 1038 1055 1056 1058 542 543 545 544 668 952 2399 2621 2622 2623 2624 2635 2870 2871 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2916 3056 3057 3058 3059 3218 3219 3220 3221 3222 3223 3224 3225 3226 3227 3356 3358 4535 4536 4537 4538 4539 4540 4541 4542 4543 4544 4545 4546 4547 4548 4549 4550 4551 4552 4553 4554 4682 4683 4684 4685 4686 4687 4688 4689 4690 4691 4692 4693 4694 4695 6525 6546 6547 6548 6549 6550 6551 6552 6553 6554 6555 6544 6545 4599 4600 6938 6939 6940 6941 6942 7936 7343 7344 7345 7346 7446 7447 7450 7935 }
  controlledprovinces    = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 378 534 398 399 927 933 932 930 929 925 924 923 922 921 920 919 916 917 926 928 931 1017 1033 1039 1038 1055 1056 1058 542 543 545 544 668 952 2399 2621 2622 2623 2624 2635 2870 2871 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2916 3056 3057 3058 3059 3218 3219 3220 3221 3222 3223 3224 3225 3226 3227 3356 3358 4535 4536 4537 4538 4539 4540 4541 4542 4543 4544 4545 4546 4547 4548 4549 4550 4551 4552 4553 4554 4682 4683 4684 4685 4686 4687 4688 4689 4690 4691 4692 4693 4694 4695 6525 6546 6547 6548 6549 6550 6551 6552 6553 6554 6555 6544 6545 4599 4600 6938 6939 6940 6941 6942 7936 7343 7344 7345 7346 7446 7447 7450 7935 }
  claimedprovinces       = { 3215 365 3134 528 3135 2626 527 2583 3060 367 31 380 384 389 2608 1894 415 1169 665 390 391 664 3373 3359 3372 3358 5464 5465 5466 6559 7936 7937 7270 7269 7315 7961 7163 7914 399 398 }

  techapps               = { 5810 5820 5050 5830 5060 5800 5080 5090 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5327 5190 5600 5610 5620 5630 5560 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1396 1560 1570 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 7600 7610 2620 2010 2630 2640 2646 2650 2860 2870 2880 2020 2290 2300 2310 2900 2910 2920 2930 2800 2450 21180 21190 2810 2820 2510 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 3110 3120 3130 3140 3150 3160 3410 3420 3430 3440 3450 3456 3460 3470 3310 3320 3330 3210 3220 3230 3240 3250 3260 3010 3020 3030 3040 3050 3060 3610 3620 3630 3640 3650 12100 3720 3730 3736 3740 3750 3900 3810 3820 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 8940 8100 8110 8120 8150 8160 8200 8210 4500 4510 4520 4530 4540 4550 4010 4020 4300 4310 4320 4330 4340 4400 4600 4610 4620 4630 4120 4130 4800 4810 4820 4700 4710 4740 4750 4760 4770 4780 4290 4250 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 3
    free_market       = 7
    professional_army = 7
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 3001 }
  headofgovernment       = { type = 9 id = 3002 }
  foreignminister        = { type = 9 id = 3003 }
  armamentminister       = { type = 9 id = 3076 }
  ministerofsecurity     = { type = 9 id = 3005 }
  ministerofintelligence = { type = 9 id = 3006 }
  chiefofstaff           = { type = 9 id = 3007 }
  chiefofarmy            = { type = 9 id = 3008 }
  chiefofnavy            = { type = 9 id = 3009 }
  chiefofair             = { type = 9 id = 3010 }

  landunit = {
    id       = { type = 23500 id = 1 }
    name     = "Superesercito"
    location = 515
    division = {
      id             = { type = 23500 id = 2 }
      name           = "Comando Supremo"
      type           = hq
      model          = 2
      extra          = anti_air
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 3 }
    name     = "Comando Superiore Truppe Alpini"
    location = 515
    division = {
      id             = { type = 23500 id = 4 }
      name           = "1a Divisione Alpini 'Taurinense'"
      type           = bergsjaeger
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 5 }
      name           = "2a Divisione Alpini 'Tridentina'"
      type           = bergsjaeger
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 6 }
      name           = "3a Divisione Alpini 'Julia'"
      type           = bergsjaeger
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 7 }
      name           = "4a Divisione Alpini 'Cuneense'"
      type           = bergsjaeger
      model          = 8
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 8 }
    name     = "Corpo Celere"
    location = 515
    division = {
      id             = { type = 23500 id = 9 }
      name           = "1a Divisione Celere 'Eugenio di Savoia'"
      type           = cavalry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 10 }
      name           = "2a Divisione Celere 'Emanuele Filiberto Testa di Ferro'"
      type           = cavalry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 11 }
      name           = "3a Divisione Celere 'Principe Amedeo Duca d'Aosta'"
      type           = cavalry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 12 }
    name     = "I Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 13 }
      name           = "1a Divisione 'Superga'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 14 }
      name           = "2a Divisione 'Sforzesca'"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 15 }
    name     = "II Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 16 }
      name           = "3a Divisione 'Ravenna'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 17 }
      name           = "4a Divisione 'Livorno'"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 18 }
    name     = "III Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 19 }
      name           = "6a Divisione 'Cuneo'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 20 }
      name           = "8a Divisione 'Po'"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 21 }
    name     = "IV Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 22 }
      name           = "7a Divisione 'Lupi di Toscana'"
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 23 }
      name           = "9a Divisione 'Pasubio'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 24 }
      name           = "11a Divisione 'Brennero'"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 25 }
    name     = "V Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 26 }
      name           = "12a Divisione 'Sassari'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 27 }
      name           = "15a Divisione 'Bergamo'"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 28 }
    name     = "VI Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 29 }
      name           = "16a Divisione 'Pistoia'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 30 }
      name           = "17a Divisione 'Pavia'"
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 31 }
      name           = "18a Divisione 'Messina'"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 32 }
    name     = "VII Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 33 }
      name           = "20a Divisione 'Friuli'"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 34 }
    name     = "VIII Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 35 }
      name           = "21a Divisione 'Granatieri di Sardegna'"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 36 }
      name           = "22a Divisione 'Cacciatore delle Alpi'"
      type           = infantry
      model          = 8
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 37 }
    name     = "IX Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 38 }
      name           = "23a Divisione 'Ferrara'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 39 }
    name     = "X Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 40 }
      name           = "25a Divisione 'Bologna'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 41 }
    name     = "XI Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 42 }
      name           = "10a Divisione 'Piave'"
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 43 }
      name           = "13a Divisione 'Re'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 44 }
      name           = "14a Divisione 'Isonzo'"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 45 }
    name     = "XII Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 46 }
      name           = "28a Divisione 'Aosta'"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 47 }
    name     = "XIII Corpo d'Armata"
    location = 515
    division = {
      id             = { type = 23500 id = 48 }
      name           = "31a Divisione 'Calabria'"
      type           = infantry
      model          = 7
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 49 }
    name     = "Comando Superiore della Libia"
    location = 515
    division = {
      id             = { type = 23500 id = 50 }
      name           = "7a Divisione CCNN 'Cirene'"
      type           = infantry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 51 }
    name     = "Comando Superiore dell'AOI"
    location = 1056
    division = {
      id             = { type = 23500 id = 52 }
      name           = "Comando Superiore dell'AOI"
      type           = hq
      model          = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 53 }
    name     = "I Corpo d'Armata dell'AOI"
    location = 1056
    division = {
      id             = { type = 23500 id = 54 }
      name           = "26a Divisione 'Assietta'"
      type           = infantry
      model          = 8
      extra          = armored_car
      brigade_model  = 2
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 55 }
      name           = "30a Divisione 'Sabauda'"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 56 }
      name           = "5a Divisione Alpini 'Pusteria'"
      type           = bergsjaeger
      model          = 9
      extra          = engineer
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 57 }
      name           = "4a Divisione CCNN '3 Gennaio'"
      type           = militia
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 58 }
      name           = "X/XV Battaglioni Indigeni"
      type           = militia
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 59 }
    name     = "II Corpo d'Armata dell'AOI"
    location = 1056
    division = {
      id             = { type = 23500 id = 60 }
      name           = "19a Divisione 'Venezia'"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 61 }
      name           = "24a Divisione 'Pinerolo'"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 62 }
      name           = "3a Divisione CCNN '21 Aprile'"
      type           = militia
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 63 }
    name     = "III Corpo d'Armata dell'AOI"
    location = 1056
    division = {
      id             = { type = 23500 id = 64 }
      name           = "27a Divisione 'Brescia'"
      type           = infantry
      model          = 8
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 65 }
    name     = "IV Corpo d'Armata dell'AOI"
    location = 1056
    division = {
      id             = { type = 23500 id = 66 }
      name           = "5a Divisione 'Cosseria'"
      type           = infantry
      model          = 8
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 67 }
      name           = "2a Divisione CCNN '28 Ottobre'"
      type           = militia
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 68 }
      name           = "5a Divisione CCNN '1 Febbraio'"
      type           = militia
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 69 }
    name     = "Corpo d'Armata Eritreo"
    location = 1039
    division = {
      id             = { type = 23500 id = 70 }
      name           = "1a Divisione Indigini"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 71 }
      name           = "2a Divisione Indigini"
      type           = infantry
      model          = 6
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 72 }
      name           = "1a Divisione CCNN '23 Marzo'"
      type           = militia
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 73 }
      name           = "1o Gruppo di Battaglioni CCNN dell'Eritrea"
      type           = militia
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 74 }
    name     = "Zone di pianura occidentale"
    location = 1039
    division = {
      id             = { type = 23500 id = 75 }
      name           = "XXVII/XXVIII Battaglioni Indigeni"
      type           = militia
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 76 }
    name     = "Zone di pianura orientale"
    location = 1039
    division = {
      id             = { type = 23500 id = 77 }
      name           = "XIV/XXVI Battaglioni Indigeni"
      type           = militia
      model          = 3
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 78 }
    name     = "Colonna Graziani"
    location = 1039
    division = {
      id             = { type = 23500 id = 79 }
      name           = "29a Divisione 'Piemonte'"
      type           = infantry
      model          = 8
      extra          = armored_car
      brigade_model  = 2
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 80 }
      name           = "Divisione 'Libia'"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 81 }
      name           = "6a Divisione CCNN 'Tevere'"
      type           = militia
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 82 }
    name     = "1o Gruppo RCTC"
    location = 1039
    division = {
      id             = { type = 23500 id = 83 }
      name           = "1o Gruppo di Battaglioni Regio Corpo Truppe Coloniali"
      type           = militia
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 84 }
    name     = "2o Gruppo RCTC"
    location = 1039
    division = {
      id             = { type = 23500 id = 85 }
      name           = "2o Gruppo di Battaglioni Regio Corpo Truppe Coloniali"
      type           = militia
      model          = 3
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 23500 id = 178 }
    name     = "Prima Squadra"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 101 }
      name           = "RN Alberico da Barbiano"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 102 }
      name           = "RN Alberto da Giussano"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 103 }
      name           = "RN Armando Diaz"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 104 }
      name           = "RN Luigi Cadorna"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 105 }
      name           = "RN Giuseppe Miraglia"
      type           = escort_carrier
    }
    division = {
      id             = { type = 23500 id = 106 }
      name           = "VIII Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 5
    }
  }
  navalunit = {
    id       = { type = 23500 id = 107 }
    name     = "Seconda Squadra"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 108 }
      name           = "RN Pola"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 23500 id = 109 }
      name           = "RN Trento"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 23500 id = 110 }
      name           = "RN Bolzano"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 23500 id = 111 }
      name           = "RN Trieste"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 23500 id = 112 }
      name           = "RN Duca d'Aosta"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 113 }
      name           = "RN Muzio Attendolo"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 114 }
      name           = "RN Raimondo Montecuccoli"
      type           = light_cruiser
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 23500 id = 115 }
    name     = "Comando Navale Mar Egeo"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 116 }
      name           = "IV Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 117 }
      name           = "VIII Squadriglia Torpediniere"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 23500 id = 118 }
    name     = "V Gruppo Sottomarini"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 119 }
      name           = "LI Squadriglia Sottomarini"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 120 }
      name           = "LII Squadriglia Sottomarini"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 23500 id = 121 }
    name     = "XI Squadriglia Torpediniera"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 122 }
      name           = "XI Squadriglia Torpediniera"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 23500 id = 123 }
    name     = "Comando Navale Libia"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 124 }
      name           = "RN San Giorgio"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 125 }
      name           = "RN Libia"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 126 }
      name           = "I Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 127 }
      name           = "XII Squadriglia Torpediniere"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 128 }
    name     = "VI Gruppo Sommergibili"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 129 }
      name           = "LXI Squadra Sommergibili"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 23500 id = 130 }
    name     = "Comando Navale AOI"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 131 }
      name           = "III Squadriglia Cacciatorpediere"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 132 }
      name           = "V Squadriglia Cacciatorpediere"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 23500 id = 133 }
    name     = "VIII Gruppo Sottomarini"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 134 }
      name           = "LXXXI Squadra"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 135 }
      name           = "LXXXII Squadra"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 23500 id = 136 }
    name     = "Comando Flotta Sommergibili-I Gruppo"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 137 }
      name           = "XI Squadriglia Sommergibili"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 138 }
      name           = "XII Squadriglia Sommergibili"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 139 }
      name           = "XIII Squadriglia Sommergibili"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 140 }
      name           = "XIV Squadriglia Sommergibili"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 141 }
      name           = "XV Squadriglia Sommergibili"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 142 }
      name           = "XVII Squadriglia Sommergibili"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 23500 id = 143 }
    name     = "Comando Flotta Sommergibili-II Gruppo"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 144 }
      name           = "XXI Squadriglia Sommergibili"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 145 }
      name           = "XXII Squadriglia Sommergibili"
      type           = submarine
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 23500 id = 146 }
    name     = "Dip. Mil. Mar. 'Jonio e Basso Adriatico'"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 147 }
      name           = "RN Taranto"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 148 }
      name           = "RN Bari"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 149 }
      name           = "II Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 150 }
      name           = "RN Zara"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 23500 id = 151 }
      name           = "RN Gorizia"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 23500 id = 152 }
      name           = "RN Fiume"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 23500 id = 153 }
      name           = "XIV Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 23500 id = 155 }
    name     = "I Squadra di Marina Trasporti"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 156 }
      name           = "Squadrone Sagittario"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 157 }
      name           = "Squadrone Aventino"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 158 }
      name           = "4a Flottiglia Torpediniere"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 159 }
      name           = "6a Flottiglia Torpediniere"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 160 }
    name     = "II Squadra di Marina Trasporti"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 161 }
      name           = "Squadrone Vallelunga"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 162 }
      name           = "Squadrone Asmara"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 163 }
      name           = "1a Flottiglia Torpediniere"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 164 }
      name           = "2a Flottiglia Torpediniere"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 165 }
    name     = "1a Squadra di Marina"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 166 }
      name           = "Squadrone Giorgio Orsini"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 167 }
      name           = "Squadrone Tarquinia"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 168 }
      name           = "3a Flottiglia Torpediniere"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 169 }
      name           = "5a Flottiglia Torpediniere"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 170 }
    name     = "3a Squadra di Marina"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 171 }
      name           = "VI Squadriglia Torpediniere"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 172 }
      name           = "XVI Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 173 }
      name           = "XV Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 174 }
    name     = "4a Squadra di Marina"
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 175 }
      name           = "X Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 176 }
      name           = "RN Bartolomeo Colleoni"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 177 }
      name           = "RN Giovanni dalle Bande Nere"
      type           = light_cruiser
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 23500 id = 201 }
    name     = "1a Zona Aerea Territoriale"
    location = 515
    base     = 515
    division = {
      id             = { type = 23500 id = 202 }
      name           = "2a Divisione Caccia 'Borea'"
      type           = interceptor
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 203 }
      name           = "4a Divisione Bombardieri 'Drago'"
      type           = tactical_bomber
      model          = 5
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 23500 id = 204 }
    name     = "2a Zona Aerea Territoriale"
    location = 515
    base     = 515
    division = {
      id             = { type = 23500 id = 205 }
      name           = "1a Divisione Caccia 'Aquila'"
      type           = interceptor
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 206 }
      name           = "3a Divisione Bombardieri 'Centauro'"
      type           = naval_bomber
      model          = 1
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 23500 id = 207 }
    name     = "3a Zona Aerea Territoriale"
    location = 515
    base     = 515
    division = {
      id             = { type = 23500 id = 208 }
      name           = "8a Divisione Caccia 'Ibis'"
      type           = multi_role
      model          = 4
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 23500 id = 209 }
    name     = "Regia Aeronautica"
    location = 515
    base     = 515
    division = {
      id             = { type = 23500 id = 210 }
      name           = "Comando Servici Aerei Speciali"
      type           = transport_plane
      model          = 1
      strength       = 25
    }
  }
  airunit = { 
    id       = { type = 23500 id = 211 }
    name     = "Comando Aviazione di Sardegna"
    location = 515
    base     = 515
    division = {
      id             = { type = 23500 id = 212 }
      name           = "10a Brigata Caccia 'Marte'"
      type           = interceptor
      model          = 7
      strength       = 40
    }
  }
  airunit = { 
    id       = { type = 23500 id = 213 }
    name     = "Comando Aerea della Libia"
    location = 515
    base     = 515
    division = {
      id             = { type = 23500 id = 214 }
      name           = "14a Divisione Caccia 'Rex'"
      type           = multi_role
      model          = 4
      strength       = 80
    }
  }
  airunit = { 
    id       = { type = 23500 id = 215 }
    name     = "Comando Aeronautica dell'AOI"
    location = 515
    base     = 515
    division = {
      id             = { type = 23500 id = 216 }
      name           = "5a Divisione Bombardieri 'Eolo'"
      type           = cas
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 217 }
      name           = "6a Brigata Bombardieri 'Falco'"
      type           = tactical_bomber
      model          = 4
      strength       = 40
    }
  }
  airunit = { 
    id       = { type = 23500 id = 218 }
    name     = "7a Brigata Bombardieri"
    location = 515
    base     = 515
    division = {
      id             = { type = 23500 id = 219 }
      name           = "7a Brigata Bombardieri"
      type           = tactical_bomber
      model          = 4
      strength       = 40
    }
  }

  division_development = {
    id             = { type = 23500 id = 301 }
    name           = "RN Eugenio di Savoia"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = january day = 16 }
  }
  division_development = {
    id             = { type = 23500 id = 302 }
    name           = "RN Duca degli Abruzzi"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1937 month = december day = 1 }
  }
  division_development = {
    id             = { type = 23500 id = 303 }
    name           = "RN Giuseppe Garibaldi"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1937 month = december day = 1 }
  }
  division_development = {
    id             = { type = 23500 id = 304 }
    name           = "RN Conte di Cavour"
    type           = battleship
    model          = 5
    cost           = 1.1
    unitcost       = no
    new_model      = no
    date           = { year = 1937 month = june day = 1 }
  }
  division_development = {
    id             = { type = 23500 id = 305 }
    name           = "RN Giulio Cesare"
    type           = battleship
    model          = 5
    cost           = 1.1
    unitcost       = no
    new_model      = no
    date           = { year = 1937 month = june day = 1 }
  }
  division_development = {
    id             = { type = 23500 id = 310 }
    name           = "7a Flottiglia Torpediniere"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = june day = 1 }
  }
  division_development = {
    id             = { type = 23500 id = 306 }
    name           = "RN Andrea Doria"
    type           = battleship
    model          = 5
    cost           = 1.1
    unitcost       = no
    new_model      = no
    date           = { year = 1939 month = june day = 1 }
  }
  division_development = {
    id             = { type = 23500 id = 307 }
    name           = "RN Caio Duilio"
    type           = battleship
    model          = 5
    cost           = 1.1
    unitcost       = no
    new_model      = no
    date           = { year = 1939 month = june day = 1 }
  }
  division_development = {
    id             = { type = 23500 id = 308 }
    name           = "RN Littorio"
    type           = battleship
    model          = 7
    cost           = 0.2
    new_model      = no
    date           = { year = 1940 month = may day = 6 }
  }
  division_development = {
    id             = { type = 23500 id = 309 }
    name           = "RN Vittorio Veneto"
    type           = battleship
    model          = 7
    cost           = 0.2
    new_model      = no
    date           = { year = 1940 month = april day = 28 }
  }
}
