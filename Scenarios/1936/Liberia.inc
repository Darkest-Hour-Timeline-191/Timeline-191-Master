##############################
# Country definition for LIB #
##############################
province = {
  id = 992 # Monrovia
  anti_air = 1
  naval_base = { size = 2 current_size = 2 }
}

#####################
# Country main data #
#####################

country = {
  tag                = LIB
  capital            = 992 # Monrovia
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = CSA value = -100 }
    relation = { tag = USA value = 100 }
    relation = { tag = U89 value = 25 }
  }

  nationalprovinces      = { 992 2762 4476 4477 4478 }
  ownedprovinces         = { 992 2762 4476 4477 4478 }
  controlledprovinces    = { 992 2762 4476 4477 4478 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5600 5610 3810 1830 1840 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 3
    defense_lobby     = 3
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 69001 }
  headofgovernment       = { type = 9 id = 69002 }
  foreignminister        = { type = 9 id = 69003 }
  armamentminister       = { type = 9 id = 69004 }
  ministerofsecurity     = { type = 9 id = 69005 }
  ministerofintelligence = { type = 9 id = 69006 }
  chiefofstaff           = { type = 9 id = 69007 }
  chiefofarmy            = { type = 9 id = 69008 }
  chiefofnavy            = { type = 9 id = 69009 }
  chiefofair             = { type = 9 id = 69010 }

  landunit = {
    id       = { type = 25500 id = 1 }
    name     = "Army of Liberia"
    location = 992
    division = {
      id             = { type = 25000 id = 2 }
      name           = "1st Republican Guards Div."
      type           = infantry
      model          = 5
      strength       = 50
    }
  }
}
