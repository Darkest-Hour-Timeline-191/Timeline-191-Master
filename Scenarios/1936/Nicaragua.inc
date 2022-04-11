##############################
# Country definition for NIC #
##############################
province = {
  id = 539 # Managua
  naval_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = NIC
  capital            = 539 # Managua
  manpower           = 100
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }

  nationalprovinces      = { 539 2651 4291 4292 4293 4294 4295 6504 }
  ownedprovinces         = { 539 2651 4291 4292 4293 4294 4295 6504 }
  controlledprovinces    = { 539 2651 4291 4292 4293 4294 4295 6504 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 5600 5610 1830 1840 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 48001 }
  headofgovernment       = { type = 9 id = 48002 }
  foreignminister        = { type = 9 id = 48003 }
  armamentminister       = { type = 9 id = 48004 }
  ministerofsecurity     = { type = 9 id = 48005 }
  ministerofintelligence = { type = 9 id = 48006 }
  chiefofstaff           = { type = 9 id = 48007 }
  chiefofarmy            = { type = 9 id = 48008 }
  chiefofnavy            = { type = 9 id = 48009 }
  chiefofair             = { type = 9 id = 48010 }

  landunit = {
    id       = { type = 11600 id = 45 }
    name     = "Ejercito de Nicaragua"
    location = 539
    division = {
      id             = { type = 11600 id = 4500 }
      name           = "Guardia de Presidente"
      type           = infantry
      model          = 6
      strength       = 20
    }
  }
}
