##############################
# Country definition for SAL #
##############################
province = {
  id = 759 # San Salvador
  naval_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SAL
  capital            = 759 # San Salvador
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

  nationalprovinces      = { 759 4301 }
  ownedprovinces         = { 759 4301 }
  controlledprovinces    = { 759 4301 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 5600 1830 1840 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 77001 }
  headofgovernment       = { type = 9 id = 77002 }
  foreignminister        = { type = 9 id = 77003 }
  armamentminister       = { type = 9 id = 77004 }
  ministerofsecurity     = { type = 9 id = 77005 }
  ministerofintelligence = { type = 9 id = 77006 }
  chiefofstaff           = { type = 9 id = 77007 }
  chiefofarmy            = { type = 9 id = 77008 }
  chiefofnavy            = { type = 9 id = 77009 }
  chiefofair             = { type = 9 id = 77010 }

  landunit = {
    id       = { type = 21600 id = 70 }
    name     = "Ejercito del Salvador"
    location = 759
    division = {
      id             = { type = 21600 id = 7000 }
      name           = "I Brigada de Infantería"
      type           = infantry
      model          = 5
      extra          = anti_air
      brigade_model  = 0
      strength       = 40
    }
  }
}
