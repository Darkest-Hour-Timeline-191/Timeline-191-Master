##############################
# Country definition for POR #
##############################
province = { id = 335 anti_air = 1 } # Porto
province = {
  id = 336 # Lisboa
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}
province = {
  id = 983 # Bissau
  anti_air = 2
  naval_base = { size = 3 current_size = 3 }
  supplypool = 2
}
province = {
  id = 1090 # São Tomé
  anti_air = 2
  naval_base = { size = 1 current_size = 1 }
}
province = {
  id = 1094 # Cabinda
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 1 current_size = 1 }
}
province = {
  id = 1101 # Lobito
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1123 # Maxixe
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1146 # Praia
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1316 # Macao
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1658 # Dili
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 1867 # Ponta Delgada
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = POR
  capital            = 336 # Lisboa
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 15
  transports     = 50
  escorts        = 7

  diplomacy = {
    relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 25 }
    relation = { tag = ITA value = 65 }
    relation = { tag = SAF value = 125 access = yes }
    relation = { tag = SPR value = -50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 4 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }

  nationalprovinces      = { 335 336 337 344 345 1867 1563 1163 965 3206 3207 3208 3209 3210 3211 3212 1036 6492 7166 7167 7257 7258 7981 }
  ownedprovinces         = { 335 336 337 344 345 1867 1146 983 1090 1096 1097 1101 1100 1102 1103 1122 1123 1130 1131 1133 1138 1658 1316 1094 1563 1163 965 1036 1512 2636 2637 2789 2790 2791 2792 2793 2794 2795 2796 3206 3207 3208 3209 3210 3211 3212 4464 4914 4915 4916 4917 4918 4919 4920 4921 4922 4923 4924 4925 4926 4927 4928 4929 4930 4931 4932 4933 4934 4935 4936 4937 4938 4939 4940 4941 4942 4943 5072 5073 5074 5075 5076 5077 5078 5079 5080 5081 5082 5083 5084 5085 5086 5087 5088 5089 5090 5091 5851 5852 6492 7166 7167 7257 7258 7361 7362 7363 7440 7441 767 }
  controlledprovinces    = { 335 336 337 344 345 1867 1146 983 1090 1096 1097 1101 1100 1102 1103 1122 1123 1130 1131 1133 1138 1658 1316 1094 1563 1163 965 1036 1512 2636 2637 2789 2790 2791 2792 2793 2794 2795 2796 3206 3207 3208 3209 3210 3211 3212 4464 4914 4915 4916 4917 4918 4919 4920 4921 4922 4923 4924 4925 4926 4927 4928 4929 4930 4931 4932 4933 4934 4935 4936 4937 4938 4939 4940 4941 4942 4943 5072 5073 5074 5075 5076 5077 5078 5079 5080 5081 5082 5083 5084 5085 5086 5087 5088 5089 5090 5091 5851 5852 6492 7166 7167 7257 7258 7361 7362 7363 7440 7441 767 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 7600 7610 2620 2010 2630 2640 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1910 1920 1930 1940 1950 1960 1830 1840 1850 1860 3010 3020 3030 3040 3050 3060 3110 3120 3130 3610 3620 3630 3640 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 4700 4710 5700 5710 5010 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 3720 3730 3736 3740 3750 3900 3810 5600 5610 5620 14000 14010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6010 6020 8010 8040 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 9001 }
  headofgovernment       = { type = 9 id = 9002 }
  foreignminister        = { type = 9 id = 9003 }
  armamentminister       = { type = 9 id = 9004 }
  ministerofsecurity     = { type = 9 id = 9005 }
  ministerofintelligence = { type = 9 id = 9006 }
  chiefofstaff           = { type = 9 id = 9007 }
  chiefofarmy            = { type = 9 id = 9008 }
  chiefofnavy            = { type = 9 id = 9009 }
  chiefofair             = { type = 9 id = 9010 }

  landunit = {
    id       = { type = 14000 id = 1000 }
    name     = "Exército do Portugal"
    location = 336
    division = {
      id             = { type = 14000 id = 1001 }
      name           = "1o Batalhão de Infantaria"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 35
    }
    division = {
      id             = { type = 14000 id = 1002 }
      name           = "2o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
    }
    division = {
      id             = { type = 14000 id = 1003 }
      name           = "3o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
    }
    division = {
      id             = { type = 14000 id = 1004 }
      name           = "4o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 14000 id = 1005 }
      name           = "5o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 14000 id = 1006 }
      name           = "6o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 14000 id = 1007 }
      name           = "7o Batalhão de Infantaria"
      type           = infantry
      model          = 6
      strength       = 35
      organisation   = 30
      defaultorganisation = 0
    }
  }

  navalunit = {
    id       = { type = 19600 id = 1003 }
    name     = "Transporte de Navio do Portugal"
    location = 336
    base     = 336
    division = {
      id             = { type = 19600 id = 1004 }
      name           = "1o Flotilha de Navio de Transporte"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 19600 id = 9303 }
      name           = "Viana do Castello Flotilha"
      type           = destroyer
      model          = 4
      strength       = 100
    }
  }
  navalunit = {
    id       = { type = 19600 id = 1005 }
    name     = "Transporte de Navio de Colonias"
    location = 336
    base     = 336
    division = {
      id             = { type = 19600 id = 1006 }
      name           = "2o Flotilha de Navio de Transporte"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 19600 id = 1007 }
      name           = "Douro Flotilha"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 19600 id = 9302 }
    name     = "Marinha do Portugal"
    location = 336
    base     = 336
    division = {
      id             = { type = 19600 id = 9304 }
      name           = "1o Flotilha de Submarino"
      type           = submarine
      model          = 3
      strength       = 100
    }
  }

  airunit = { 
    id       = { type = 19600 id = 9300 }
    name     = "Aéreo do Portugal"
    location = 336
    base     = 336
    division = {
      id             = { type = 19600 id = 9301 }
      name           = "1o Avião de Bombardeiro Tático"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
}
