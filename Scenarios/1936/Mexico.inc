##############################
# Country definition for MEX #
##############################
province = { id = 747 anti_air = 1 } # León de los Aldama
province = {
  id = 751 # Acapulco de Juárez
  anti_air = 1
  naval_base = { size = 4 current_size = 4 }
}
province = { id = 752 anti_air = 2 } # Ciudad de México
province = {
  id = 754 # Oaxaca de Juárez
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = MEX
  capital            = 752 # Ciudad de México
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = IRE value = 30 }
    relation = { tag = USA value = 125 }
  }

  nationalprovinces      = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 737 738 2693 2694 2695 2696 2697 2699 2700 2701 2702 2703 2704 2707 4307 4308 4309 4310 4311 4312 4313 4314 4315 4316 4317 4318 4319 4320 4321 4322 4323 4324 4325 4326 4327 4328 4329 4330 4331 4332 4333 4334 4335 4336 4337 4338 4339 4340 4341 4342 4343 4344 4345 4346 4347 4348 4349 4350 4351 4352 4353 4354 4355 4356 4369 4370 4371 4372 4373 4374 4375 4376 4377 4378 4379 4380 4381 4382 6490 6533 7375 7376 7377 7378 7379 7381 7382 }
  ownedprovinces         = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 737 738 2693 2694 2695 2696 2697 2699 2700 2701 2702 2703 2704 2707 4307 4308 4309 4310 4311 4312 4313 4314 4315 4316 4317 4318 4319 4320 4321 4322 4323 4324 4325 4326 4327 4328 4329 4330 4331 4332 4333 4334 4335 4336 4337 4338 4339 4340 4341 4342 4343 4344 4345 4346 4347 4348 4349 4350 4351 4352 4353 4354 4355 4356 4369 4370 4371 4372 4373 4374 4375 4376 4377 4378 4379 4380 4381 4382 6490 6533 7375 7376 7377 7378 7379 7381 7382 }
  controlledprovinces    = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 737 738 2693 2694 2695 2696 2697 2699 2700 2701 2702 2703 2704 2707 4307 4308 4309 4310 4311 4312 4313 4314 4315 4316 4317 4318 4319 4320 4321 4322 4323 4324 4325 4326 4327 4328 4329 4330 4331 4332 4333 4334 4335 4336 4337 4338 4339 4340 4341 4342 4343 4344 4345 4346 4347 4348 4349 4350 4351 4352 4353 4354 4355 4356 4369 4370 4371 4372 4373 4374 4375 4376 4377 4378 4379 4380 4381 4382 6490 6533 7375 7376 7377 7378 7379 7381 7382 }
  claimedprovinces       = { 4383 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1910 1920 1930 1940 1950 1960 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 4500 4510 4520 4530 4540 4550 4010 5700 5710 5010 5310 54010 54020 54030 5316 5326 5810 5820 5050 5800 5080 5090 1830 1840 1850 3810 5600 14000 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 8
    freedom           = 6
    free_market       = 6
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 36001 }
  headofgovernment       = { type = 9 id = 36002 }
  foreignminister        = { type = 9 id = 36003 }
  armamentminister       = { type = 9 id = 36004 }
  ministerofsecurity     = { type = 9 id = 36005 }
  ministerofintelligence = { type = 9 id = 36006 }
  chiefofstaff           = { type = 9 id = 36007 }
  chiefofarmy            = { type = 9 id = 36008 }
  chiefofnavy            = { type = 9 id = 36009 }
  chiefofair             = { type = 9 id = 36010 }

  landunit = {
    id       = { type = 29500 id = 1 }
    name     = "Ejercito de Mexico"
    location = 752
    division = {
      id             = { type = 29500 id = 2 }
      name           = "Guardia del Presidente"
      type           = infantry
      model          = 8
      strength       = 50
    }
    division = {
      id             = { type = 29500 id = 3 }
      name           = "I División de Infantería"
      type           = infantry
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 29500 id = 4 }
      name           = "II División de Infantería"
      type           = infantry
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 29500 id = 5 }
      name           = "III División de Infantería"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 5
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 29500 id = 6 }
    name     = "Caballería de Mexico"
    location = 752
    division = {
      id             = { type = 29500 id = 7 }
      name           = "I División de Caballería"
      type           = cavalry
      model          = 7
      strength       = 50
    }
    division = {
      id             = { type = 29500 id = 8 }
      name           = "II División de Caballería"
      type           = cavalry
      model          = 7
      strength       = 50
    }
  }

  airunit = { 
    id       = { type = 29500 id = 11 }
    name     = "Fuerza Aérea Mexicana"
    location = 754
    base     = 754
    division = {
      id             = { type = 29500 id = 12 }
      name           = "1a Grupo Aéreo de Caza"
      type           = interceptor
      model          = 4
      strength       = 50
    }
  }
}
