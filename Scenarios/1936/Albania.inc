##############################
# Country definition for ALB #
##############################
province = {
  id = 390 # Tiran�
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}
province = {
  id = 391 # Vlor�
  anti_air = 1
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = ALB
  capital            = 390 # Tiran�
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ITA value = 10 }
  }

  nationalprovinces      = { 390 391 415 665 664 1169 3372 2609 3393 5465 5466 6562 413 7163 7961 7315 7936 }
  ownedprovinces         = { 390 391 665 664 5465 5466 7163 7961 }
  controlledprovinces    = { 390 391 665 664 5465 5466 7163 7961 }
  claimedprovinces       = { 392 393 7269 7270 7316 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1910 1920 1930 1940 1950 1960 2800 2450 21180 21190 2810 2820 2510 5810 5800 5080 5600 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 7
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 32001 }
  headofgovernment       = { type = 9 id = 32002 }
  foreignminister        = { type = 9 id = 32003 }
  armamentminister       = { type = 9 id = 32004 }
  ministerofsecurity     = { type = 9 id = 32005 }
  ministerofintelligence = { type = 9 id = 32006 }
  chiefofstaff           = { type = 9 id = 32007 }
  chiefofarmy            = { type = 9 id = 32008 }
  chiefofnavy            = { type = 9 id = 32009 }
  chiefofair             = { type = 9 id = 32010 }
}
