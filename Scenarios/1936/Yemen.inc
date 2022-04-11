##############################
# Country definition for YEM #
##############################

country = {
  tag                = YEM
  puppet             = ENG
  control            = ENG
  capital            = 1812 # Sana'a
  manpower           = 100
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 200
  oil            = 200
  supplies       = 200
  money          = 10

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 1812 1813 1814 2855 1815 2857 4185 4186 4235 4174 4187 4188 4189 6566 6567 6568 6569 6570 6571 6924 6925 6565 7450 7274 7275 }
  ownedprovinces         = { 1812 2855 4185 4186 4235 6924 6925 }
  controlledprovinces    = { 1812 2855 4185 4186 4235 6924 6925 }

  techapps               = { 4500 4510 4520 4530 2860 2290 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 7600 7610 5700 5600 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 93001 }
  headofgovernment       = { type = 9 id = 93002 }
  foreignminister        = { type = 9 id = 93003 }
  armamentminister       = { type = 9 id = 93004 }
  ministerofsecurity     = { type = 9 id = 93005 }
  ministerofintelligence = { type = 9 id = 93006 }
  chiefofstaff           = { type = 9 id = 93007 }
  chiefofarmy            = { type = 9 id = 93008 }
  chiefofnavy            = { type = 9 id = 93009 }
  chiefofair             = { type = 9 id = 93010 }

  landunit = {
    id       = { type = 16800 id = 1 }
    name     = "Royal Yemenite Army"
    location = 1812
    division = {
      id             = { type = 16800 id = 2 }
      name           = "Royal Division"
      type           = cavalry
      model          = 7
      strength       = 60
    }
  }
}
