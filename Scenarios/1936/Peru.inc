##############################
# Country definition for PRU #
##############################
province = {
  id = 830 # Lima
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 3 current_size = 3 }
}

#####################
# Country main data #
#####################

country = {
  tag                = PRU
  capital            = 830 # Lima
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
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -50 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }

  nationalprovinces      = { 831 829 830 821 816 818 908 1835 2497 2003 1988 2997 817 2928 2929 2930 2049 2738 3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 3785 3786 3787 3790 3789 3788 3886 839 7092 7421 7424 7425 7426 7427 7432 7433 7434 7094 7093 7435 7430 }
  ownedprovinces         = { 831 829 830 821 816 2497 2003 1988 2997 908 818 2928 2929 2930 2049 3820 3821 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 7092 7421 7424 7425 7426 7427 7432 7433 7434 }
  controlledprovinces    = { 831 829 830 821 816 2497 2003 1988 2997 908 818 2928 2929 2930 2049 3820 3821 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 7092 7421 7424 7425 7426 7427 7432 7433 7434 }

  techapps               = { 4500 4510 4520 4530 4540 4550 2860 2870 2880 2020 2290 2300 2310 7600 7610 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 13060 13070 13080 1310 1320 1330 1340 1910 1920 1930 1940 1950 1960 5700 5710 5010 5800 5080 3110 3120 3130 2800 2450 21180 21190 2810 2820 2510 3610 3620 3630 3010 3020 3030 3040 8010 8020 8040 8050 1830 1840 1850 3720 3730 3736 3740 3750 3900 3810 5600 5610 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 4
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 39001 }
  headofgovernment       = { type = 9 id = 39002 }
  foreignminister        = { type = 9 id = 39003 }
  armamentminister       = { type = 9 id = 39004 }
  ministerofsecurity     = { type = 9 id = 39005 }
  ministerofintelligence = { type = 9 id = 39006 }
  chiefofstaff           = { type = 9 id = 39007 }
  chiefofarmy            = { type = 9 id = 39008 }
  chiefofnavy            = { type = 9 id = 39009 }
  chiefofair             = { type = 9 id = 39010 }

  landunit = {
    id       = { type = 17600 id = 1 }
    name     = "Ejercito del Peru"
    location = 830
    division = {
      id             = { type = 17600 id = 2 }
      name           = "1a Div. de Inf. del Peru 'Bolognesi'"
      type           = infantry
      model          = 7
      extra          = engineer
      brigade_model  = 3
      strength       = 30
    }
    division = {
      id             = { type = 17600 id = 3 }
      name           = "2a Div. de Infantería del Peru"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 30
    }
    division = {
      id             = { type = 17600 id = 4 }
      name           = "3a Div. de Infantería del Peru"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 30
    }
  }

  navalunit = {
    id       = { type = 17600 id = 6 }
    name     = "Marina del Guerra del Peru"
    location = 830
    base     = 830
    division = {
      id             = { type = 17600 id = 8 }
      name           = "ARP Almirante Grau"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 17600 id = 9 }
      name           = "ARP Coronel Bolognesi"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 17600 id = 2433 }
      name           = "Flotilla Suliana"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 17600 id = 11 }
    name     = "I Flotilla de la Armada"
    location = 830
    base     = 830
    division = {
      id             = { type = 17600 id = 12 }
      name           = "Tacna é Flotilla"
      type           = submarine
      model          = 1
    }
  }
}
