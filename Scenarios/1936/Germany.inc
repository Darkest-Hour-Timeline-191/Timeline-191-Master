##############################
# Country definition for GER #
##############################
province = {
  id = 67 # Essen
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 72 # Metz
  landfort = 10
  anti_air = 3
  air_base = { size = 6 current_size = 6 }
}
province = { id = 73 landfort = 10 anti_air = 2 } # Strasbourg
province = { id = 74 landfort = 1 anti_air = 2 } # Saarbrücken
province = {
  id = 82 # Kassel
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 87 # Bremen
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 88 # Hamburg
  anti_air = 2
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 89 anti_air = 1 } # Lübeck
province = {
  id = 90 # Kiel
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 208 anti_air = 1 } # Bydgoszcz
province = {
  id = 296 # Rostock
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 300 # West-Berlin
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = { id = 302 landfort = 1 } # Stettin
province = {
  id = 303 # Danzig
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}
province = { id = 305 anti_air = 1 } # Plock
province = {
  id = 306 # Gdynia
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 8 current_size = 8 }
}
province = { id = 307 anti_air = 2 } # Torun
province = { id = 308 landfort = 2 } # Meseritz
province = { id = 310 anti_air = 1 } # Leipzig
province = { id = 312 anti_air = 1 } # Nürnberg
province = {
  id = 313 # Frankfurt am Main
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 314 # Stuttgart
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}
province = { id = 315 landfort = 1 } # Freiburg im Breisgau
province = { id = 316 landfort = 10 anti_air = 2 } # Mulhouse
province = {
  id = 376 # München
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 473 # Breslau
  anti_air = 2
  air_base = { size = 10 current_size = 10 }
}
province = {
  id = 483 # Poznan
  anti_air = 4
  air_base = { size = 4 current_size = 4 }
}
province = {
  id = 510 # Königsberg
  landfort = 4
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
  supplypool = 10
  oilpool = 10
}
province = { id = 1014 landfort = 1 } # Karlsruhe
province = {
  id = 1666 # Lae
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 1668 # Lorengau
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 1669 # Kavieng
  naval_base = { size = 2 current_size = 2 }
}
province = {
  id = 1670 # Rabaul
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 7 current_size = 7 }
}
province = {
  id = 1672 # Buna
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 1681 # Wewak
  air_base = { size = 1 current_size = 1 }
}
province = {
  id = 1682 # Kieta
  naval_base = { size = 1 current_size = 1 }
}
province = {
  id = 1753 # Apia
  naval_base = { size = 1 current_size = 1 }
}
province = { id = 1779 landfort = 1 } # Stolp
province = { id = 1810 landfort = 1 } # Schneidemühl
province = {
  id = 2529 # Qingdao
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 2643 # Walvis Bay
  anti_air = 2
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 2798 # Swakompmund
  air_base = { size = 1 current_size = 1 }
}
province = { id = 3172 landfort = 2 } # Longwy
province = { id = 3243 anti_air = 2 } # Magdeburg
province = { id = 3250 landfort = 1 } # Baden-Baden
province = {
  id = 3256 # Oldenburg
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}
province = { id = 7189 landfort = 1 } # Ludwigshafen am Rhein
province = { id = 7266 anti_air = 2 } # Ost-Berlin

#####################
# Country main data #
#####################

country = {
  tag                = GER
  flag_ext           = _1871
  capital            = 300 # West-Berlin
  manpower           = 1000
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 70
  transports     = 35
  escorts        = 23

  diplomacy = {
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 1 }
    relation = {
      tag        = AUS
      value      = 100
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = {
      tag        = BUL
      value      = 25
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation = {
      tag        = CZE
      value      = -25
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = ENG value = 1 }
    relation = {
      tag        = DEN
      value      = 25
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = EST value = 10 }
    relation = {
      tag        = FIN
      value      = 25
      guaranteed = { year = 1934 month = august day = 22 }
    }
    relation = { tag = FRA value = -35 }
    relation = { tag = GRE value = 15 }
    relation = { tag = HOL value = 1 }
    relation = { tag = HUN value = 100 }
    relation = { tag = IRE value = 15 }
    relation = { tag = IRQ value = 25 }
    relation = {
      tag        = ITA
      value      = 50
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 1 }
    relation = {
      tag        = POL
      value      = -10
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = POR value = 75 }
    relation = {
      tag        = ROM
      value      = 50
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = SAF value = 1 }
    relation = {
      tag        = SCH
      value      = 50
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = -50 }
    relation = {
      tag        = SWE
      value      = 50
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = TUR
      value      = 10
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = USA value = -10 }
    relation = { tag = YEM value = 1 }
    relation = {
      tag        = YUG
      value      = 50
      guaranteed = { year = 1932 month = december day = 29 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 4 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 2 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 3 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 5 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }

  nationalprovinces      = { 66 67 70 72 73 74 75 76 80 81 82 83 84 85 86 87 88 89 90 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 316 374 375 376 473 482 510 73 316 223 1779 1810 1811 1400 1623 1595 1405 546 547 1014 970 989 1018 1016 1015 2606 486 2381 2292 2597 1904 2292 2370 2627 2647 3172 3238 3239 3240 3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3257 3258 3259 3260 3261 2273 466 3262 471 472 6500 6519 6520 6521 6518 6917 7044 7045 7046 7047 7177 7178 7179 7180 7181 7182 7183 7184 7185 7186 7187 7188 7189 7190 7260 7266 7986 303 306 307 3265 208 3264 483 3263 91 71 }
  ownedprovinces         = { 66 67 70 72 73 74 75 76 80 81 82 83 84 85 86 87 88 89 90 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 316 374 375 376 473 482 510 223 1779 1810 1811 1400 1623 1595 1405 546 547 1014 970 989 1018 1016 1015 2292 2381 2597 1904 2370 2627 2647 3172 3238 3239 3240 3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3257 3258 3259 3260 3261 6500 6519 6520 6521 6917 7044 7045 7046 7047 7177 7178 7179 7180 7181 7182 7183 7184 7185 7186 7187 7188 7189 7190 7260 7266 7986 303 306 307 3265 208 3264 483 3263 91 71 305 486 4753 1140 4752 2805 4749 2806 4748 2538 4754 4743 2804 4733 4750 4751 1141 4747 4745 4744 4734 4742 4746 4738 1139 4739 2808 4741 4740 4737 2807 4736 1062 7039 7036 1063 4730 2283 4731 7037 4735 5071 5070 5069 5068 7369 5066 7368 7366 1109 7370 5067 5065 1110 2797 7365 7367 2798 2643 7372 1108 5063 5062 7371 1107 5057 1106 5064 5058 7374 7373 5059 5060 5061 1003 1004 1089 1126 4803 4804 2764 1077 4805 4806 2746 4763 1088 4807 2749 1087 4808 4802 4810 5862 1666 1667 1672 3113 5859 3114 1681 5861 5860 3112 5867 1668 1669 5866 1670 5864 1671 5863 1682 5865 1753 7221 2529 5640 2941 1214 4503 }
  controlledprovinces    = { 66 67 70 72 73 74 75 76 80 81 82 83 84 85 86 87 88 89 90 296 297 298 299 300 301 302 304 308 309 310 311 312 313 314 315 316 374 375 376 473 482 510 223 1779 1810 1811 1400 1623 1595 1405 546 547 1014 970 989 1018 1016 1015 2381 2597 1904 2292 2370 2627 2647 3172 3238 3239 3240 3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3257 3258 3259 3260 3261 6500 6519 6520 6521 6917 7044 7045 7046 7047 7177 7178 7179 7180 7181 7182 7183 7184 7185 7186 7187 7188 7189 7190 7260 7266 7986 303 306 307 3265 208 3264 483 3263 91 71 305 486 4749 4752 1140 4753 2806 4748 2538 4754 4743 2804 4733 4750 4751 1141 4747 4745 4744 4734 4742 4746 4738 1139 4739 2808 4741 4740 4737 2807 4736 1062 7039 7036 1063 4730 2283 4731 7037 4735 5071 5070 5069 5068 7369 5066 7368 7366 1109 7370 5067 5065 1110 2797 7365 7367 2798 2643 7372 1108 5063 5062 7371 1107 5057 1106 5064 5058 7374 7373 5059 5060 5061 1003 1004 1089 1126 4803 4804 2764 1077 4805 4806 2746 4763 1088 4807 2749 1087 4808 4802 4810 5862 1666 1667 1672 3113 5859 3114 1681 5861 5860 3112 5867 1668 1669 5866 1670 5864 1671 5863 1682 5865 1753 7221 2529 5640 2941 1214 2805 4503 }
  claimedprovinces       = { 305 4749 4752 1140 4753 2806 4748 2538 4754 4743 2804 4733 4750 4751 1141 4747 4745 4744 4734 4742 4746 4738 1139 4739 2808 4741 4740 4737 2807 4736 1062 7039 7036 1063 4730 2283 4731 7037 4735 5071 5070 5069 5068 7369 5066 7368 7366 1109 7370 5067 5065 1110 2797 7365 7367 2798 2643 7372 1108 5063 5062 7371 1107 5057 1106 5064 5058 7374 7373 5059 5060 5061 4503 1003 1004 1089 1126 4803 4804 2764 1077 4805 4806 2746 4763 1088 4807 2749 1087 4808 4802 4810 5862 1666 1667 1672 3113 5859 3114 1681 5861 5860 3112 5867 1668 1669 5866 1670 5864 1671 5863 1682 5865 1753 7221 2529 5640 2941 1214 2805 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1396 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 2860 2870 2880 2020 2150 7600 7610 2620 2010 2630 2640 2646 2650 2030 2290 2300 2310 2900 2910 2920 2930 2800 2450 21180 21190 21200 2810 2820 2510 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3610 3620 3630 3640 3650 3510 4900 12100 12110 3720 3730 3736 3740 3750 3900 3810 3820 4290 4250 4300 4310 4320 4330 4340 4400 4800 4810 4820 4700 4710 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4740 4750 4760 5810 5820 5050 5830 5060 5800 5080 5090 5190 5200 5310 54010 54020 54030 5316 5326 5560 5700 5710 5010 5020 5600 5610 5620 5630 6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910 6210 6220 6230 6250 6900 14000 14010 14020 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9090 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8520 8550 8560 8570 8600 8610 81300 81310 81320 81330 81340 81350 8100 8110 8120 8150 8160 8170 8200 8210 7550 }
  blueprints             = { 6240 6260 6270 7560 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 3
    freedom           = 4
    free_market       = 7
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 180 } # S.K.M. Wilhelm II
  headofgovernment       = { type = 9 id = 32 } # Konrad Adenauer
  foreignminister        = { type = 9 id = 52 } # Theodor Heuss
  armamentminister       = { type = 9 id = 82 } # Fritz Schäffer
  ministerofsecurity     = { type = 9 id = 108 } # Karl Arnold
  ministerofintelligence = { type = 9 id = 218 } # Hans Dohnanyi
  chiefofstaff           = { type = 9 id = 147 } # Hans Speidel
  chiefofarmy            = { type = 9 id = 161 } # Hans Speidel
  chiefofnavy            = { type = 9 id = 170 } # Erich Bey
  chiefofair             = { type = 9 id = 174 } # Karl Koller
  dormant_leaders        = { 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 }

  landunit = {
    id       = { type = 14500 id = 34 }
    name     = "I. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 35 }
      name           = "1. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 36 }
      name           = "11. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 37 }
      name           = "21. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1001 }
      name           = "61. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1002 }
      name           = "206. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1003 }
      name           = "217. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1004 }
      name           = "228. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 38 }
    name     = "II. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 39 }
      name           = "75. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 40 }
      name           = "207. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 41 }
      name           = "12. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1005 }
      name           = "258. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 42 }
    name     = "III. Armeekorps"
    location = 300
    leader   = 608
    division = {
      id             = { type = 14500 id = 1706 }
      name           = "Oberkommando des Heeres"
      type           = hq
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 14500 id = 43 }
      name           = "3. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 44 }
      name           = "23. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 3
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1006 }
      name           = "50. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1007 }
      name           = "68. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1008 }
      name           = "76. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1009 }
      name           = "208. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1010 }
      name           = "218. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1011 }
      name           = "257. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1012 }
      name           = "93. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 45 }
    name     = "VIII. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 46 }
      name           = "8. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 47 }
      name           = "62. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 48 }
      name           = "18. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 3
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1013 }
      name           = "213. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1014 }
      name           = "221. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1015 }
      name           = "252. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 49 }
    name     = "V. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 50 }
      name           = "78. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 51 }
      name           = "5. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 7
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 52 }
      name           = "260. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 53 }
    name     = "VI. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 54 }
      name           = "6. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 55 }
      name           = "16. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 5
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 56 }
      name           = "69. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1016 }
      name           = "86. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1017 }
      name           = "211. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1018 }
      name           = "227. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1019 }
      name           = "253. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1020 }
      name           = "254. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 57 }
    name     = "IX. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 58 }
      name           = "9. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 59 }
      name           = "15. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 2
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 60 }
      name           = "52. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1021 }
      name           = "214. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1022 }
      name           = "239. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1023 }
      name           = "251. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1024 }
      name           = "95. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 61 }
    name     = "XII. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 62 }
      name           = "79. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 63 }
      name           = "246. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 64 }
      name           = "262. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1025 }
      name           = "263. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 65 }
    name     = "IV. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 66 }
      name           = "4. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 67 }
      name           = "14. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 68 }
      name           = "24. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1026 }
      name           = "56. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1027 }
      name           = "87. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1028 }
      name           = "209. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1029 }
      name           = "223. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1030 }
      name           = "255. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1031 }
      name           = "256. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1032 }
      name           = "94. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 69 }
    name     = "VII. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 70 }
      name           = "57. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 71 }
      name           = "7. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 72 }
      name           = "212. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 73 }
      name           = "168. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 74 }
    name     = "X. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 75 }
      name           = "58. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 76 }
      name           = "22. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 77 }
      name           = "70. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1033 }
      name           = "215. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1034 }
      name           = "225. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1035 }
      name           = "269. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 78 }
    name     = "XI. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 79 }
      name           = "71. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 80 }
      name           = "19. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 2
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 81 }
      name           = "216. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1036 }
      name           = "267. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1037 }
      name           = "96. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 14500 id = 82 }
    name     = "XVI. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 83 }
      name           = "1. Panzer-Division"
      type           = light_armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 84 }
      name           = "2. Panzer-Division"
      type           = light_armor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 85 }
      name           = "3. Panzer-Division"
      type           = light_armor
      model          = 0
      strength       = 65
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 14500 id = 1038 }
    name     = "XIII. Armeekorps"
    location = 300
    division = {
      id             = { type = 14500 id = 1039 }
      name           = "17. Infanterie-Division"
      type           = infantry
      model          = 8
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1040 }
      name           = "10. Infanterie-Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 14500 id = 1041 }
      name           = "73. Infanterie-Division"
      type           = infantry
      model          = 7
      strength       = 10
    }
    division = {
      id             = { type = 14500 id = 1042 }
      name           = "231. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
    division = {
      id             = { type = 14500 id = 1043 }
      name           = "98. Infanterie-Division"
      type           = infantry
      model          = 6
      strength       = 5
    }
  }

  navalunit = {
    id       = { type = 14500 id = 1 }
    name     = "Kriegsmarine"
    location = 90
    base     = 90
    division = {
      id             = { type = 14500 id = 2 }
      name           = "Deutschland"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 3 }
      name           = "Admiral Scheer"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 4 }
      name           = "Nürnberg"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 5 }
      name           = "Leipzig"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 6 }
      name           = "Königsberg"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 7 }
      name           = "Karlsruhe"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 8 }
      name           = "Köln"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 9 }
      name           = "Emden"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 14500 id = 10 }
      name           = "3. Zerstörergeschwader"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 33 }
      name           = "4. Zerstörergeschwader"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 14500 id = 104 }
    name     = "I. Truppentransporter Flotte"
    location = 90
    base     = 90
    division = {
      id             = { type = 14500 id = 105 }
      name           = "1. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 106 }
      name           = "2. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 107 }
      name           = "3. Truppentransporterflottille"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14500 id = 20 }
    name     = "II. Unterseebootsflotte"
    location = 90
    base     = 90
    division = {
      id             = { type = 14500 id = 21 }
      name           = "2. Unterseebootsflottille"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 25 }
      name           = "3. Unterseebootsflottille"
      type           = submarine
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 14500 id = 26 }
    name     = "I. Unterseebootsflotte"
    location = 90
    base     = 90
    division = {
      id             = { type = 14500 id = 27 }
      name           = "1. Unterseebootsflottille"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 14500 id = 200 }
      name           = "4. Unterseebootsflottille"
      type           = submarine
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 14500 id = 28 }
    name     = "Baltische Flotte"
    location = 90
    base     = 90
    division = {
      id             = { type = 14500 id = 29 }
      name           = "Schleswig-Holstein"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 30 }
      name           = "Schlesien"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 157 }
      name           = "Hannover"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 31 }
      name           = "1. Zerstörergeschwader"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 32 }
      name           = "2. Zerstörergeschwader"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 155 }
      name           = "5. Zerstörergeschwader"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 156 }
      name           = "6. Zerstörergeschwader"
      type           = destroyer
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 14500 id = 86 }
    name     = "Luftflotte II"
    location = 300
    base     = 300
    division = {
      id             = { type = 14500 id = 87 }
      name           = "KG 2 'Holzhammer'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 88 }
      name           = "KG 3 'Blitz'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 89 }
      name           = "Sturzkampfgeschwader 51"
      type           = cas
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 90 }
      name           = "JG 2 'Richthofen'"
      type           = interceptor
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 91 }
      name           = "JG 26 'Schlageter'"
      type           = interceptor
      model          = 7
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 95 }
    name     = "Luftflotte III"
    location = 300
    base     = 300
    division = {
      id             = { type = 14500 id = 96 }
      name           = "KG 53 'Legion Condor'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 97 }
      name           = "Kampfgeschwader 25"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 98 }
      name           = "KG 30 'Adler'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 99 }
    name     = "Luftflotte IV"
    location = 300
    base     = 300
    division = {
      id             = { type = 14500 id = 100 }
      name           = "KG 1 'Hindenburg'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 14500 id = 101 }
      name           = "JG 3 'Udet'"
      type           = interceptor
      model          = 7
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 14500 id = 102 }
    name     = "Luftflotte V"
    location = 300
    base     = 300
    division = {
      id             = { type = 14500 id = 103 }
      name           = "KG 4 'General Wever'"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 14500 id = 500 }
    name           = "Admiral Graf Spee"
    type           = heavy_cruiser
    model          = 4
    cost           = 0.2
    new_model      = no
    date           = { year = 1936 month = january day = 6 }
  }
  division_development = {
    id             = { type = 14500 id = 501 }
    name           = "Admiral Hipper"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.2
    new_model      = no
    date           = { year = 1939 month = april day = 25 }
    size           = 2
  }
  division_development = {
    id             = { type = 14500 id = 502 }
    name           = "Blücher"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.2
    new_model      = no
    date           = { year = 1939 month = september day = 20 }
    size           = 2
  }
  division_development = {
    id             = { type = 14500 id = 503 }
    name           = "Gneisenau"
    type           = battlecruiser
    model          = 3
    cost           = 0.3
    new_model      = no
    date           = { year = 1938 month = may day = 21 }
  }
  division_development = {
    id             = { type = 14500 id = 504 }
    name           = "Scharnhorst"
    type           = battlecruiser
    model          = 3
    cost           = 0.3
    new_model      = no
    date           = { year = 1939 month = january day = 7 }
  }
  division_development = {
    id             = { type = 14500 id = 565 }
    name           = "7. Zerstörergeschwader"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = march day = 1 }
    size           = 6
  }
  division_development = {
    id             = { type = 14500 id = 566 }
    name           = "8. Zerstörergeschwader"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = april day = 1 }
    size           = 6
  }
  division_development = {
    id             = { type = 14500 id = 567 }
    name           = "9. Zerstörergeschwader"
    type           = destroyer
    model          = 5
    cost           = 0.1
    date           = { year = 1936 month = may day = 1 }
    size           = 6
  }
  division_development = {
    id             = { type = 14500 id = 603 }
    name           = "5. Unterseebootsflottille"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = march day = 29 }
  }
  division_development = {
    id             = { type = 14500 id = 604 }
    name           = "6. Unterseebootsflottille"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = april day = 29 }
  }
  division_development = {
    id             = { type = 14500 id = 605 }
    name           = "7. Unterseebootsflottille"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = may day = 29 }
  }
  division_development = {
    id             = { type = 14500 id = 507 }
    name           = "32. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 508 }
    name           = "26. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 509 }
    name           = "36. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 510 }
    name           = "25. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = april day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 511 }
    name           = "35. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 512 }
    name           = "27. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 513 }
    name           = "28. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 514 }
    name           = "30. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 515 }
    name           = "31. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 516 }
    name           = "33. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = april day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 517 }
    name           = "34. Infanterie-Division"
    type           = infantry
    model          = 8
    cost           = 0.1
    date           = { year = 1936 month = april day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 518 }
    name           = "2. Infanterie-Division (mot.)"
    type           = motorized
    model          = 0
    cost           = 0.1
    date           = { year = 1937 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 519 }
    name           = "13. Infanterie-Division (mot.)"
    type           = motorized
    model          = 0
    cost           = 0.1
    date           = { year = 1937 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 520 }
    name           = "20. Infanterie-Division (mot.)"
    type           = motorized
    model          = 0
    cost           = 4.5
    date           = { year = 1937 month = october day = 1 }
  }
  division_development = {
    id             = { type = 14500 id = 521 }
    name           = "29. Infanterie-Division (mot.)"
    type           = motorized
    model          = 0
    cost           = 0.1
    date           = { year = 1937 month = october day = 1 }
  }

  convoy_development = {
    id             = { type = 14500 id = 543 }
    cost           = 0.1000
    date           = { year = 1964 month = january day = 0 }
    size           = 20
    type           = escorts
  }
  convoy_development = {
    id             = { type = 14500 id = 544 }
    cost           = 0.1000
    date           = { year = 1964 month = january day = 0 }
    size           = 20
    type           = transports
  }
  convoy_development = {
    id             = { type = 14500 id = 545 }
    cost           = 0.1000
    date           = { year = 1964 month = january day = 0 }
    size           = 20
    type           = transports
  }

  landdivision = { dormant = yes id = { type = 14500 id = 2027 } name = "1. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2028 } name = "2. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2029 } name = "3. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2030 } name = "4. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2031 } name = "5. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2032 } name = "6. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2033 } name = "7. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2034 } name = "8. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2035 } name = "9. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2036 } name = "10. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2037 } name = "11. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2038 } name = "12. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2039 } name = "13. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2040 } name = "14. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2041 } name = "15. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2042 } name = "16. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2043 } name = "17. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2044 } name = "18. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
  landdivision = { dormant = yes id = { type = 14500 id = 2045 } name = "19. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 } 
}
