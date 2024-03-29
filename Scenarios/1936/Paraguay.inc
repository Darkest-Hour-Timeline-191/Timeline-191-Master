##############################
# Country definition for PAR #
##############################
province = {
  id = 846 # Asunci�n
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PAR
  capital            = 846 # Asunci�n
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }

  nationalprovinces      = { 837 846 2991 2554 2931 3809 3810 3811 3812 3813 3814 3815 3816 3817 3818 3819 3854 3855 3924 5451 5450 5444 3981 2282 3982 5452 5453 2375 }
  ownedprovinces         = { 837 846 2991 3809 3810 3811 3813 3814 3815 3817 5451 }
  controlledprovinces    = { 837 846 2991 3809 3810 3811 3813 3814 3815 3817 5451 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 5600 5610 1830 1840 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 42001 }
  headofgovernment       = { type = 9 id = 42002 }
  foreignminister        = { type = 9 id = 42003 }
  armamentminister       = { type = 9 id = 42004 }
  ministerofsecurity     = { type = 9 id = 42005 }
  ministerofintelligence = { type = 9 id = 42006 }
  chiefofstaff           = { type = 9 id = 42007 }
  chiefofarmy            = { type = 9 id = 42008 }
  chiefofnavy            = { type = 9 id = 42009 }
  chiefofair             = { type = 9 id = 42010 }

  landunit = {
    id       = { type = 15600 id = 60 }
    name     = "Ejercito de Paraguay"
    location = 846
    division = {
      id             = { type = 15600 id = 6000 }
      name           = "I Divisi�n de Infanter�a"
      type           = infantry
      model          = 6
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 15600 id = 6001 }
      name           = "CVI Brigada de Policia Nacional"
      type           = militia
      model          = 3
      strength       = 60
    }
  }
}
