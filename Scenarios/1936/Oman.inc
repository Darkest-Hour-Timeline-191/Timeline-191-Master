##############################
# Country definition for OMN #
##############################
province = {
  id = 1819 # Masqat
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = OMN
  puppet             = ENG
  control            = ENG
  capital            = 1819 # Masqat
  manpower           = 100
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
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
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }

  nationalprovinces      = { 1819 2460 2854 4190 4191 4192 4193 4194 4195 4196 6948 7005 7006 7007 7008 7009 7010 7011 }
  ownedprovinces         = { 1819 2460 2854 4190 4191 4192 4193 4194 4195 4196 2824 6948 7005 7006 7007 7008 7009 7010 7011 }
  controlledprovinces    = { 1819 2460 2854 4190 4191 4192 4193 4194 4195 4196 2824 6948 7005 7006 7007 7008 7009 7010 7011 }
  claimedprovinces       = { 2824 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 5700 1910 1920 1930 1940 1950 1960 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 92001 }
  headofgovernment       = { type = 9 id = 92002 }
  foreignminister        = { type = 9 id = 92003 }
  armamentminister       = { type = 9 id = 92004 }
  ministerofsecurity     = { type = 9 id = 92005 }
  ministerofintelligence = { type = 9 id = 92006 }
  chiefofstaff           = { type = 9 id = 92007 }
  chiefofarmy            = { type = 9 id = 92008 }
  chiefofnavy            = { type = 9 id = 92009 }
  chiefofair             = { type = 9 id = 92010 }

  landunit = {
    id       = { type = 11114 id = 1 }
    name     = "Royal Omani Army"
    location = 1819
    division = {
      id             = { type = 11114 id = 2 }
      name           = "Royal Omani Army"
      type           = cavalry
      model          = 7
      strength       = 15
    }
  }
}
