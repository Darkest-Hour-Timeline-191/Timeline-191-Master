##############################
# Country definition for EST #
##############################
province = {
  id = 194 # Tallinn
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = EST
  capital            = 194 # Tallinn
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
    relation = { tag = FIN value = 120 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation = {
      tag        = LAT
      value      = 150
      guaranteed = { year = 1934 month = september day = 12 }
    }
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
  SpyInfo                = { country = "LAT" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }

  nationalprovinces      = { 194 193 195 196 199 1886 3286 3287 3288 3394 }
  ownedprovinces         = { 193 194 195 196 199 1886 3286 3287 3288 3394 }
  controlledprovinces    = { 193 194 195 196 199 1886 3286 3287 3288 3394 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 2900 1010 1020 1030 1040 1050 1060 1070 1080 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1830 1840 1850 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5020 5800 5080 5810 5820 3610 3620 3630 3720 3730 3736 3740 3750 3900 5600 5610 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 8010 8040 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 26001 }
  headofgovernment       = { type = 9 id = 26002 }
  foreignminister        = { type = 9 id = 26003 }
  armamentminister       = { type = 9 id = 26004 }
  ministerofsecurity     = { type = 9 id = 26005 }
  ministerofintelligence = { type = 9 id = 26006 }
  chiefofstaff           = { type = 9 id = 26007 }
  chiefofarmy            = { type = 9 id = 26008 }
  chiefofnavy            = { type = 9 id = 26009 }
  chiefofair             = { type = 9 id = 26010 }

  landunit = {
    id       = { type = 30000 id = 1 }
    name     = "Maavägi"
    location = 194
    division = {
      id             = { type = 30000 id = 2 }
      name           = "I Jalaväediviis"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 25
    }
    division = {
      id             = { type = 30000 id = 3 }
      name           = "II Jalaväediviis"
      type           = infantry
      model          = 7
      strength       = 25
    }
    division = {
      id             = { type = 30000 id = 4 }
      name           = "III Jalaväediviis"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 1
      strength       = 25
    }
  }

  airunit = { 
    id       = { type = 30000 id = 5 }
    name     = "Eesti Ohuvagi"
    location = 194
    base     = 194
    division = {
      id             = { type = 30000 id = 6 }
      name           = "I Lennusalk"
      type           = interceptor
      model          = 6
      strength       = 60
    }
  }
}
