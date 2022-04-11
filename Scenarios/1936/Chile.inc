##############################
# Country definition for CHL #
##############################
province = {
  id = 856 # Valparaiso
  naval_base = { size = 8 current_size = 8 }
}
province = {
  id = 860 # Santiago de Chile
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CHL
  capital            = 860 # Santiago de Chile
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ARG value = -20 }
    relation = { tag = BOL value = -50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = COL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 30 }
    relation = { tag = JAP value = 20 }
    relation = { tag = PAR value = 35 }
    relation = { tag = PRU value = -25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 20 }
  }

  nationalprovinces      = { 864 861 860 856 840 839 842 865 2993 2994 2995 2054 1930 3876 3877 3878 3879 3880 3881 3882 3883 3884 3885 3886 4097 3839 5446 7093 7094 7095 7096 7097 7098 7099 7100 7101 7102 7103 7104 7417 7428 }
  ownedprovinces         = { 864 861 860 856 840 839 842 865 2993 2994 2995 2054 1930 3876 3877 3878 3879 3880 3881 3882 3883 3884 3885 3886 4097 5446 7093 7094 7095 7096 7097 7098 7099 7100 7101 7102 7103 7104 7417 7428 }
  controlledprovinces    = { 864 861 860 856 840 839 842 865 2993 2994 2995 2054 1930 3876 3877 3878 3879 3880 3881 3882 3883 3884 3885 3886 4097 5446 7093 7094 7095 7096 7097 7098 7099 7100 7101 7102 7103 7104 7417 7428 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 1850 1860 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5020 5310 54010 54020 5316 5326 5800 5080 3010 3020 3030 3040 3050 3060 3410 3420 3430 3440 3450 3456 3460 3470 3610 3620 3630 3640 3110 3120 3130 3210 3220 3230 3720 3730 3736 3740 3750 3900 3810 5600 5610 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 8010 8020 8040 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 44001 }
  headofgovernment       = { type = 9 id = 44002 }
  foreignminister        = { type = 9 id = 44003 }
  armamentminister       = { type = 9 id = 44004 }
  ministerofsecurity     = { type = 9 id = 44005 }
  ministerofintelligence = { type = 9 id = 44006 }
  chiefofstaff           = { type = 9 id = 44007 }
  chiefofarmy            = { type = 9 id = 44008 }
  chiefofnavy            = { type = 9 id = 44009 }
  chiefofair             = { type = 9 id = 44010 }

  landunit = {
    id       = { type = 12500 id = 1 }
    name     = "Ejercito de Chile"
    location = 860
    division = {
      id             = { type = 12500 id = 2 }
      name           = "1. División de Infantería"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 30
    }
    division = {
      id             = { type = 12500 id = 3 }
      name           = "2. División de Infantería"
      type           = infantry
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 12500 id = 4 }
      name           = "1. División de Montaña de Chile"
      type           = bergsjaeger
      model          = 6
      extra          = engineer
      brigade_model  = 2
      strength       = 30
    }
    division = {
      id             = { type = 12500 id = 5 }
      name           = "División Caballería nro. 1"
      type           = cavalry
      model          = 7
      strength       = 40
    }
  }

  navalunit = {
    id       = { type = 12500 id = 6 }
    name     = "Armada de Chile"
    location = 856
    base     = 856
    division = {
      id             = { type = 12500 id = 7 }
      name           = "Flotilla des Torpideros nro. 1"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 12500 id = 887 }
      name           = "Flotilla des Torpideros nro. 2"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 12500 id = 9 }
      name           = "BACH Almirante Latorre"
      type           = battleship
      model          = 4
    }
    division = {
      id             = { type = 12500 id = 14 }
      name           = "BACH Almirante O'Higgins"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 12500 id = 10 }
      name           = "BACH Blanco Encalada"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 12500 id = 11 }
      name           = "BACH Chacabuco"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 12500 id = 2438 }
    name     = "I Flotilla de la Armada"
    location = 856
    base     = 856
    division = {
      id             = { type = 12500 id = 13 }
      name           = "Flotilla des Submarinos nro. 2"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 12500 id = 12 }
      name           = "Flotilla des Submarinos nro. 1"
      type           = submarine
      model          = 1
    }
  }
}
