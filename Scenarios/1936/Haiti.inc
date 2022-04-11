##############################
# Country definition for HAI #
##############################
province = {
  id = 892 # Port-au-Prince
  anti_air = 1
  naval_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = HAI
  capital            = 892 # Port-au-Prince
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = CUB value = 30 }
    relation = { tag = DOM value = -30 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 892 2673 4277 7172 }
  ownedprovinces         = { 892 2673 4277 7172 }
  controlledprovinces    = { 892 2673 4277 7172 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5700 5600 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 2
    free_market       = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 78001 }
  headofgovernment       = { type = 9 id = 78002 }
  foreignminister        = { type = 9 id = 78003 }
  armamentminister       = { type = 9 id = 78004 }
  ministerofsecurity     = { type = 9 id = 78005 }
  ministerofintelligence = { type = 9 id = 78006 }
  chiefofstaff           = { type = 9 id = 78007 }
  chiefofarmy            = { type = 9 id = 78008 }
  chiefofnavy            = { type = 9 id = 78009 }
  chiefofair             = { type = 9 id = 78010 }

  landunit = {
    id       = { type = 17500 id = 53 }
    name     = "La Grandé Armée du Haiti"
    location = 892
    division = {
      id             = { type = 17500 id = 5301 }
      name           = "1ère Brigade d'Infanterie Haitien"
      type           = infantry
      model          = 5
      strength       = 10
    }
  }
}
