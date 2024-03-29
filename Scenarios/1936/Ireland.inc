##############################
# Country definition for IRE #
##############################
province = {
  id = 28 # Belfast
  naval_base = { size = 5 current_size = 5 }
}
province = {
  id = 30 # Baile �tha Cliath
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country = {
  tag                = IRE
  capital            = 30 # Baile �tha Cliath
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 20 }
    relation = { tag = AST value = 75 }
    relation = { tag = AUS value = 10 }
    relation = { tag = BEL value = 75 }
    relation = { tag = BRA value = 20 }
    relation = { tag = CAN value = 75 }
    relation = { tag = ENG value = 25 }
    relation = { tag = ETH value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = GER value = 15 }
    relation = { tag = HOL value = 75 }
    relation = { tag = HUN value = 25 }
    relation = { tag = ITA value = 20 }
    relation = { tag = LUX value = 75 }
    relation = { tag = MEX value = 30 }
    relation = { tag = NZL value = 75 }
    relation = { tag = POR value = 25 }
    relation = { tag = SAF value = 80 }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = 50 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }

  nationalprovinces      = { 27 26 25 24 30 29 28 3048 3049 3050 3051 3052 3053 7128 7129 }
  ownedprovinces         = { 27 28 29 26 25 24 30 3048 3049 3050 3051 3052 3053 7128 7129 }
  controlledprovinces    = { 27 26 28 29 25 24 30 3048 3049 3050 3051 3052 3053 7128 7129 }

  techapps               = { 2860 2870 2880 2290 2300 2310 7600 7610 2620 2010 1010 1020 1030 1040 1050 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1160 1170 1180 1190 1200 1210 1220 1230 5600 5610 5620 3810 2800 2450 2810 2820 2510 5700 5710 5010 5310 54010 54020 54030 5316 5326 5810 5820 5050 5800 5080 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    freedom           = 8
    free_market       = 7
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 125001 } # Donal Buckley
  headofgovernment       = { type = 9 id = 125002 } # Eamon de Valera
  foreignminister        = { type = 9 id = 125003 } # Eamon de Valera
  armamentminister       = { type = 9 id = 125004 } # Se�n MacEntee
  ministerofsecurity     = { type = 9 id = 125005 } # Patrick J. Ruttledge
  ministerofintelligence = { type = 9 id = 125006 } # Gerald Boland
  chiefofstaff           = { type = 9 id = 125007 } # M.J. Costello
  chiefofarmy            = { type = 9 id = 125008 } # Donal Buckley
  chiefofnavy            = { type = 9 id = 125009 } # H.T. Green
  chiefofair             = { type = 9 id = 125010 } # P.A. Mulcahy

  landunit = {
    id       = { type = 21500 id = 1 }
    name     = "Regiment of Rifle"
    location = 30
    division = {
      id             = { type = 21500 id = 2 }
      name           = "1/2/3/4/5 Rifle Battalions"
      type           = infantry
      model          = 6
      strength       = 50
      max_strength   = 50
    }
  }

  navalunit = {
    id       = { type = 21500 id = 5 }
    name     = "Irish Republic Navy"
    location = 30
    base     = 30
    division = {
      id             = { type = 21500 id = 7 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 0
    }
  }
}
