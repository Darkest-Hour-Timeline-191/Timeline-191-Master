##############################
# Country definition for U09 #
##############################
province = { id = 53 landfort = 4 } # Prachatice
province = {
  id = 229 # Tarnopol
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 371 # Trento
  ic = { size = 2 current_size = 2 }
}
province = {
  id = 377 # Innsbruck
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = { id = 382 anti_air = 2 } # Zagreb
province = {
  id = 384 # Split
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 3 current_size = 3 }
}
province = { id = 388 anti_air = 2 } # Dubrovnik
province = {
  id = 457 # Budapest
  anti_air = 2
  air_base = { size = 8 current_size = 8 }
}
province = { id = 461 anti_air = 1 } # Klagenfurt
province = {
  id = 463 # Wien
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
}
province = { id = 466 landfort = 4 } # Karlovy Vary
province = { id = 467 landfort = 5 } # Znojmo
province = { id = 468 landfort = 2 } # Hradec Králové
province = {
  id = 469 # Praha
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
}
province = { id = 471 landfort = 3 } # Liberec
province = { id = 472 landfort = 6 } # Opava
province = { id = 475 anti_air = 2 } # Brno
province = {
  id = 476 # Bratislava
  landfort = 3
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
}
province = { id = 479 anti_air = 2 } # Kraków
province = { id = 490 landfort = 3 } # Kosice
province = {
  id = 666 # Trieste
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}
province = { id = 1889 landfort = 2 } # Komárno
province = { id = 2296 landfort = 3 } # Tesín
province = { id = 2302 landfort = 1 } # Uzhorod
province = { id = 2326 landfort = 2 } # Capodistria
province = { id = 3262 landfort = 3 } # Usti nad Labem
province = {
  id = 3357 # Pola
  landfort = 2
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}
province = { id = 6518 landfort = 6 } # Sumperk

#####################
# Country main data #
#####################

country = {
  tag                = U09
  regular_id         = GER
  intrinsic_gov_type = social_liberal
  capital            = 463 # Wien
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = -65 }
    relation = { tag = FIN value = 55 }
    relation = { tag = FRA value = -65 }
    relation = { tag = GER value = 100 }
    relation = {
      tag        = HUN
      value      = 100
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = IRE value = 10 }
    relation = { tag = ITA value = 125 }
    relation = { tag = SCH value = 50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "RUS" NumberOfSpies = 3 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 4 }
  SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 1 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 4 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }

  nationalprovinces      = { 463 373 377 460 461 462 464 465 2327 2328 2329 3217 3375 3376 7040 456 457 458 491 492 497 224 1890 2447 1889 1899 2302 2616 3384 498 3386 3235 3236 3237 6513 6514 7072 7265 7300 496 428 471 472 466 467 470 469 468 474 475 478 477 490 499 476 1888 1887 53 2296 3228 3229 3230 3231 3232 3233 3262 6518 7261 371 381 666 1408 2325 2326 3357 7123 7124 7125 7126 229 479 488 489 500 501 507 1884 2628 3269 3271 3273 3396 7978 7979 7984 427 430 495 1173 1402 1403 1449 2602 3385 6512 7051 7052 7053 7054 7071 291 380 382 383 384 385 386 387 388 454 455 459 493 494 1891 1892 1893 2289 2607 3359 3360 3361 3362 3363 3364 3365 3366 3367 3368 3369 3370 3382 6534 6535 6536 6537 6538 6558 6559 6560 6561 7122 7267 7937 1897 }
  ownedprovinces         = { 463 373 377 460 461 462 464 465 2327 2328 2329 3217 3375 3376 7040 456 457 458 491 492 497 224 1890 2447 1899 2302 2616 3384 498 3386 3235 3236 3237 6513 6514 7072 7265 7300 496 428 471 472 466 467 470 469 468 474 475 478 477 490 499 476 1888 1889 1887 53 2296 3228 3229 3230 3231 3232 3233 3262 6518 7261 371 381 666 1408 2325 2326 3357 7123 7124 7125 229 479 488 489 500 501 507 1884 2628 3269 3271 3273 3396 7978 7979 7984 427 430 495 1173 1402 1403 1449 2602 3385 6512 7051 7052 7053 7054 7071 291 380 382 383 384 385 386 387 388 454 455 459 493 494 1891 1892 1893 2289 2607 3359 3360 3361 3362 3363 3364 3365 3366 3367 3368 3369 3370 3382 6534 6535 6536 6537 6538 6558 6559 6560 6561 7122 7267 7937 1897 }
  controlledprovinces    = { 463 373 377 460 461 462 464 465 2327 2328 2329 3217 3375 3376 7040 456 457 458 491 492 497 490 224 1890 2447 1889 1899 2302 2616 3384 498 3386 3235 3236 3237 6513 6514 7072 7265 7300 496 428 471 472 466 467 470 469 468 474 475 478 477 499 476 1888 1887 53 2296 3228 3229 3230 3231 3232 3233 3262 6518 7261 371 381 666 1408 2325 2326 3357 7123 7124 7125 229 479 488 489 500 501 507 1884 2628 3269 3271 3273 3396 7978 7979 7984 427 430 495 1173 1402 1403 1449 2602 3385 6512 7051 7052 7053 7054 7071 291 380 382 383 384 385 386 387 388 454 455 459 493 494 1891 1892 1893 2289 2607 3359 3360 3361 3362 3363 3364 3365 3366 3367 3368 3369 3370 3382 6534 6535 6536 6537 6538 6558 6559 6560 6561 7122 7267 7937 1897 }
  claimedprovinces       = { 371 6560 7122 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 1830 1840 1850 1860 5600 5610 5620 5630 2860 2870 2880 2020 7600 7610 2620 2010 2630 2640 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 1970 1980 14000 14010 14020 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5090 5310 54010 54020 54030 5316 5326 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 3
    freedom           = 7
    free_market       = 8
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 860068 } # S.K.u.K.M Karl I
  headofgovernment       = { type = 9 id = 860073 } # Leopold Figl
  foreignminister        = { type = 9 id = 860082 } # Karl Gruber
  armamentminister       = { type = 9 id = 860088 } # Josef Dobretsberger
  ministerofsecurity     = { type = 9 id = 860094 } # Karl Tuppy
  ministerofintelligence = { type = 9 id = 860100 } # Karl Tuppy
  chiefofstaff           = { type = 9 id = 860106 } # Alfred von Jansa
  chiefofarmy            = { type = 9 id = 860109 } # Alfred von Jansa
  chiefofnavy            = { type = 9 id = 860112 } # Edgar Angeli
  chiefofair             = { type = 9 id = 860113 } # Milan Emil Uzelac

  landunit = {
    id       = { type = 14000 id = 9000 }
    name     = "Oberkommando des Bundesheeres"
    location = 463
    division = {
      id             = { type = 14000 id = 9001 }
      name           = "Schnelle Division"
      type           = cavalry
      model          = 7
      extra          = armored_car
      brigade_model  = 2
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 9002 }
      name           = "1. Division"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 35
    }
    division = {
      id             = { type = 14000 id = 9003 }
      name           = "2. Division"
      type           = infantry
      model          = 7
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 14000 id = 9004 }
    name     = "3. 'Niederösterreich' Division"
    location = 463
    division = {
      id             = { type = 14000 id = 9005 }
      name           = "3. Division"
      type           = infantry
      model          = 6
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 14000 id = 9006 }
    name     = "4. 'Oberösterreich' Division"
    location = 463
    division = {
      id             = { type = 14000 id = 9007 }
      name           = "4. Division"
      type           = infantry
      model          = 7
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 14000 id = 9008 }
    name     = "5. 'Steiermark' Division"
    location = 463
    division = {
      id             = { type = 14000 id = 9009 }
      name           = "5. Division"
      type           = bergsjaeger
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 14000 id = 9010 }
    name     = "6. 'Salzburg, Nordtirol und Vorarlberg' Division"
    location = 463
    division = {
      id             = { type = 14000 id = 9011 }
      name           = "6. Division"
      type           = bergsjaeger
      model          = 7
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 14000 id = 9012 }
    name     = "7. 'Kärnten und Osttirol' Division"
    location = 463
    division = {
      id             = { type = 14000 id = 9013 }
      name           = "7. Division"
      type           = bergsjaeger
      model          = 7
      strength       = 25
    }
  }

  division_development = {
    id             = { type = 14000 id = 9014 }
    name           = "SMS Weyprecht" # named after Karl Weyprecht
    type           = light_cruiser
    model          = 4
    cost           = 0.4
    new_model      = no
    date           = { year = 1934 month = november day = 15 }
  }
}
