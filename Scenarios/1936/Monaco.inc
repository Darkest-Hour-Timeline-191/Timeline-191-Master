##############################
# Country definition for U55 #
##############################

country = {
  tag                = U55
  capital            = 2583 # Monaco
  manpower           = 100
  # Resource Reserves
  energy         = 100
  metal          = 100
  rare_materials = 50
  oil            = 50
  supplies       = 100
  money          = 50
  transports     = 50

  diplomacy = {
    relation = { tag = GER value = 80 }
  }
  SpyInfo                = { country = "U06" NumberOfSpies = 3 }

  nationalprovinces      = { 2583 }
  ownedprovinces         = { 2583 }
  controlledprovinces    = { 2583 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 5700 5710 5010 5020 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 14000 14010 14020 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 10
    free_market       = 8
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 2
  }
}
