##############################
# Country definition for U89 #
##############################
province = {
  id = 891 # Kingston
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}

country = {
  tag                = U89
  capital            = 891 # Kingston
  manpower           = 25
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 5

  diplomacy = {
    relation = { tag = DOM value = 50 }
    relation = { tag = ENG value = 30 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 }
  }

  nationalprovinces      = { 891 584 }
  ownedprovinces         = { 891 584 }
  controlledprovinces    = { 891 584 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1830 1840 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5810 5080 5600 5610 3810 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 3010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 6
    free_market       = 6
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 1260001 }
  headofgovernment       = { type = 9 id = 1260002 }
  foreignminister        = { type = 9 id = 1260003 }
  armamentminister       = { type = 9 id = 1260004 }
  ministerofsecurity     = { type = 9 id = 1260005 }
  ministerofintelligence = { type = 9 id = 1260006 }
  chiefofstaff           = { type = 9 id = 1260007 }
  chiefofarmy            = { type = 9 id = 1260008 }
  chiefofnavy            = { type = 9 id = 1260009 }
  chiefofair             = { type = 9 id = 1260010 }

	navalunit = {
		id       = { type = 13504 id = 1 }
		name     = "Jamaican Navy"
		location = 891
		base     = 891
	division = {
		id             = { type = 13504 id = 2 }
		name           = "Paul Bogley"
		type           = destroyer
		model          = 0
		strength       = 20
		max_strength   = 20
	
	}
  }
}
