##############################
# Country definition for COS #
##############################
province = {
  id = 540 # San José
  anti_air = 1
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = COS
  capital            = 540 # San José
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 540 2652 4290 }
  ownedprovinces         = { 540 2652 4290 }
  controlledprovinces    = { 540 2652 4290 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5020 5800 5080 1830 5600 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 5
    free_market       = 8
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 47001 }
  headofgovernment       = { type = 9 id = 47002 }
  foreignminister        = { type = 9 id = 47003 }
  armamentminister       = { type = 9 id = 47004 }
  ministerofsecurity     = { type = 9 id = 47005 }
  ministerofintelligence = { type = 9 id = 47006 }
  chiefofstaff           = { type = 9 id = 47007 }
  chiefofarmy            = { type = 9 id = 47008 }
  chiefofnavy            = { type = 9 id = 47009 }
  chiefofair             = { type = 9 id = 47010 }
}
