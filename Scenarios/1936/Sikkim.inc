##############################
# Country definition for U68 #
##############################

country = {
  tag                = U68
  regular_id         = U02
  puppet             = U02
  capital            = 2043 # Gangtok
  manpower           = 200
  # Resource Reserves
  energy         = 100
  metal          = 100
  rare_materials = 50
  oil            = 50
  supplies       = 100
  money          = 50
  transports     = 50

  diplomacy = {
    relation = { tag = ENG value = 80 }
  }
  SpyInfo                = { country = "U06" NumberOfSpies = 3 }

  nationalprovinces      = { 2043 }
  ownedprovinces         = { 2043 }
  controlledprovinces    = { 2043 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1396 2860 2870 2880 2020 2290 2300 2310 7600 7610 2620 2010 1830 1840 1850 1860 2800 2450 3010 3020 3030 3040 3110 3120 3130 3140 3210 3220 3230 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 3720 3730 3736 3740 3750 3900 3810 5600 8010 8020 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 3
    free_market       = 5
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 3
  }
}
