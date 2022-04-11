##############################
# Country definition for BOL #
##############################
province = {
  id = 832 # La Paz
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}

#####################
# Country main data #
#####################

country = {
  tag                = BOL
  capital            = 832 # La Paz
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
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }

  nationalprovinces      = { 836 838 832 828 827 837 822 2374 2375 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3967 840 3885 3884 3812 3819 3818 3816 3815 3817 3814 5452 5453 5454 5455 5451 5449 5448 3983 5434 5433 7418 7419 7420 7422 3956 3961 3833 7427 2003 7421 7095 7096 7417 7428 7423 5447 }
  ownedprovinces         = { 836 838 832 828 827 2374 2375 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3812 3819 3818 3816 5452 5453 5454 5455 7418 7419 7420 }
  controlledprovinces    = { 836 838 832 828 827 2374 2375 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3812 3819 3818 3816 5452 5453 5454 5455 7418 7419 7420 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 5600 5610 5620 1830 1840 1850 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 43001 }
  headofgovernment       = { type = 9 id = 43002 }
  foreignminister        = { type = 9 id = 43003 }
  armamentminister       = { type = 9 id = 43004 }
  ministerofsecurity     = { type = 9 id = 43005 }
  ministerofintelligence = { type = 9 id = 43006 }
  chiefofstaff           = { type = 9 id = 43007 }
  chiefofarmy            = { type = 9 id = 43008 }
  chiefofnavy            = { type = 9 id = 43009 }
  chiefofair             = { type = 9 id = 43010 }

  landunit = {
    id       = { type = 17000 id = 40 }
    name     = "Ejercito de Bolivia"
    location = 832
    division = {
      id             = { type = 17000 id = 4000 }
      name           = "1. Brigada de Infantería 'Bolivar'"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 30
    }
    division = {
      id             = { type = 17000 id = 4001 }
      name           = "2. Brigada de Infantería"
      type           = infantry
      model          = 5
      strength       = 30
    }
    division = {
      id             = { type = 17000 id = 4002 }
      name           = "3. Brigada de Infantería"
      type           = infantry
      model          = 5
      strength       = 30
    }
    division = {
      id             = { type = 17000 id = 4003 }
      name           = "1. Brigada de Caballería 'Chaco'"
      type           = cavalry
      model          = 6
      strength       = 20
    }
    division = {
      id             = { type = 17000 id = 4004 }
      name           = "2. Brigada de Caballería"
      type           = cavalry
      model          = 6
      strength       = 20
    }
  }

  airunit = { 
    id       = { type = 12000 id = 4005 }
    name     = "Aviación del Ejército"
    location = 832
    base     = 832
    division = {
      id             = { type = 12000 id = 4006 }
      name           = "Grupo Aérea Nro. 1"
      type           = interceptor
      model          = 6
      strength       = 20
    }
  }
}
