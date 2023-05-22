##############################
# Country definition for COL #
##############################
province = { id = 812 anti_air = 2 } # Santa Fe de Bogotá
province = {
  id = 888 # Panamá
  anti_air = 2
  naval_base = { size = 3 current_size = 3 }
}
province = {
  id = 890 # Barranquilla
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}

## to prevent usage of the Panama Canal:
## level 10 coastal forts seen here
## impassable from other provinces
## 10 divisions of Partisans via event

province = {
  id = 889 # Balboa
  coastalfort = 10
}

#####################
# Country main data #
#####################

country = {
  tag                = COL
  capital            = 812 # Santa Fe de Bogotá
  manpower           = 200
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = 1 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = -20 }
    relation = { tag = PAN value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }

  nationalprovinces      = { 803 812 813 890 867 819 868 2660 2675 2738 2924 2925 2926 2927 2378 2930 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808 3875 3957 3964 3965 3954 3820 3822 3821 3787 5470 888 723 4286 4287 4288 4289
889
}
  ownedprovinces         = { 803 812 813 890 867 819 868 2660 2675 2738 2924 2925 2926 2927 2378 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808 5470 888 723 4286 4287 4288 4289
889 
}
  controlledprovinces    = { 803 812 813 890 867 819 868 2660 2675 2738 2924 2925 2926 2927 2378 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808 5470 888 723 4286 4287 4288 4289

}

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 2860 2870 2880 2020 2290 2300 2310 7600 7610 2620 2010 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2800 2450 21180 21190 2810 2820 2510 5700 5710 5010 5800 5080 1830 1840 1850 1860 3010 3020 3030 3040 3720 3730 3736 3740 3750 3900 3810 5600 5610 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 8010 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    freedom           = 7
    free_market       = 8
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 37001 }
  headofgovernment       = { type = 9 id = 37002 }
  foreignminister        = { type = 9 id = 37003 }
  armamentminister       = { type = 9 id = 37004 }
  ministerofsecurity     = { type = 9 id = 37005 }
  ministerofintelligence = { type = 9 id = 37006 }
  chiefofstaff           = { type = 9 id = 37007 }
  chiefofarmy            = { type = 9 id = 37008 }
  chiefofnavy            = { type = 9 id = 37009 }
  chiefofair             = { type = 9 id = 37010 }

  landunit = {
    id       = { type = 23000 id = 40 }
    name     = "Ejercito de Colombia"
    location = 812
    division = {
      id             = { type = 23000 id = 4000 }
      name           = "1a División de Infantería"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 1
      strength       = 40
    }
    division = {
      id             = { type = 23000 id = 4001 }
      name           = "2a División de Infantería"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 40
    }
    division = {
      id             = { type = 23000 id = 4002 }
      name           = "3a División de Infantería"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 23000 id = 4003 }
      name           = "1a Brigada de Caballería 'Montería'"
      type           = cavalry
      model          = 6
      strength       = 15
    }
  }

  navalunit = {
    id       = { type = 23000 id = 4004 }
    name     = "Armada de Colombia"
    location = 890
    base     = 890
    division = {
      id             = { type = 23000 id = 4005 }
      name           = "1a Flotilla de Torpedillos"
      type           = destroyer
      model          = 1
    }
  }
}
