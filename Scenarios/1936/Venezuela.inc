##############################
# Country definition for VEN #
##############################
province = {
  id = 804 # Maracaibo
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 6 current_size = 6 }
}
province = { id = 870 anti_air = 2 } # Caracas

#####################
# Country main data #
#####################

country = {
  tag                = VEN
  capital            = 870 # Caracas
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -15 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = ECU value = 20 }
    relation = { tag = ENG value = -10 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 125 }
  }

  nationalprovinces      = { 804 802 810 811 869 870 871 2657 2658 3859 3860 3861 3862 3863 3864 3865 3866 3867 3868 3869 3870 3871 3872 3873 3874 3875 3887 3950 5423 5421 5422 5424 5425 2737 }
  ownedprovinces         = { 804 802 810 811 869 870 2657 2658 3859 3860 3861 3862 3863 3864 3865 3866 3867 3868 3869 3870 3871 3872 3873 3874 3875 5423 }
  controlledprovinces    = { 804 802 810 811 869 870 2657 2658 3859 3860 3861 3862 3863 3864 3865 3866 3867 3868 3869 3870 3871 3872 3873 3874 3875 5423 }

  techapps               = { 4500 4510 4520 4530 4540 4550 5600 5610 5620 2800 2450 21180 21190 2860 2870 2880 2020 2810 2820 2510 2290 2300 2310 7600 7610 1830 1840 1850 1860 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1160 1170 1180 1190 1200 1210 1220 1230 1240 3720 3730 3736 3740 3750 3900 3810 5810 5820 5050 5800 5080 5700 5710 5010 5020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 1
    freedom           = 5
    free_market       = 7
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 38001 }
  headofgovernment       = { type = 9 id = 38002 }
  foreignminister        = { type = 9 id = 38003 }
  armamentminister       = { type = 9 id = 38004 }
  ministerofsecurity     = { type = 9 id = 38005 }
  ministerofintelligence = { type = 9 id = 38006 }
  chiefofstaff           = { type = 9 id = 38007 }
  chiefofarmy            = { type = 9 id = 38008 }
  chiefofnavy            = { type = 9 id = 38009 }
  chiefofair             = { type = 9 id = 38010 }

  landunit = {
    id       = { type = 15800 id = 45 }
    name     = "Ejercito de Venezuela"
    location = 870
    division = {
      id             = { type = 15800 id = 4500 }
      name           = "1a Div. de Inf. 'Eduardo Blanco'"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 15800 id = 4501 }
      name           = "1a División de Guardia Naciónal"
      type           = militia
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 15800 id = 4502 }
      name           = "Los Caballos de Venezuela"
      type           = cavalry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 100
    }
  }
}
