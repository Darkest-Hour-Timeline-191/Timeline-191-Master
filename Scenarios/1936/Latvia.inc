##############################
# Country definition for LAT #
##############################
province = {
  id = 197 # Riga
  anti_air = 1
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = LAT
  capital            = 197 # Riga
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = 65 }
    relation = {
      tag        = EST
      value      = 150
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = { tag = FIN value = 90 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation = {
      tag        = LIT
      value      = 120
      guaranteed = { year = 1934 month = september day = 12 }
    }
    relation = { tag = POL value = 75 }
    relation = { tag = SOV value = -30 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "EST" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }

  nationalprovinces      = { 205 204 203 197 202 198 3283 3284 3285 3289 }
  ownedprovinces         = { 205 204 203 197 202 198 3283 3284 3285 3289 }
  controlledprovinces    = { 205 204 203 197 202 198 3283 3284 3285 3289 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 2900 7600 7610 1010 1020 1030 1040 1050 1060 1070 1080 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5020 5800 5080 5810 5820 1830 1840 1850 3610 3620 8010 8040 5600 5610 3720 3730 3736 3740 3750 3900 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 27001 }
  headofgovernment       = { type = 9 id = 27002 }
  foreignminister        = { type = 9 id = 27003 }
  armamentminister       = { type = 9 id = 27004 }
  ministerofsecurity     = { type = 9 id = 27005 }
  ministerofintelligence = { type = 9 id = 27006 }
  chiefofstaff           = { type = 9 id = 27007 }
  chiefofarmy            = { type = 9 id = 27008 }
  chiefofnavy            = { type = 9 id = 27009 }
  chiefofair             = { type = 9 id = 27010 }

  landunit = {
    id       = { type = 24500 id = 1 }
    name     = "Latvijas Armija"
    location = 197
    division = {
      id             = { type = 24500 id = 2 }
      name           = "Kurzemes Divizija"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 2
      strength       = 40
    }
    division = {
      id             = { type = 24500 id = 3 }
      name           = "Vidzemes Divizija"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 1
      strength       = 40
    }
    division = {
      id             = { type = 24500 id = 4 }
      name           = "Zemgales Divizija"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 40
    }
    division = {
      id             = { type = 24500 id = 5 }
      name           = "Latgales Divizija"
      type           = infantry
      model          = 7
      strength       = 40
    }
  }

  airunit = { 
    id       = { type = 24500 id = 8 }
    name     = "Latvijas Gaisa speki"
    location = 197
    base     = 197
    division = {
      id             = { type = 24500 id = 9 }
      name           = "I Aviacijas pulka"
      type           = interceptor
      model          = 6
      strength       = 60
    }
  }
}
